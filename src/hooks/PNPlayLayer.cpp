#include "../hooks/PNPlayLayer.hpp"

using namespace geode::prelude;

void PNPlayLayer::resetLevel() {
    PlayLayer::resetLevel();

    m_fields->currentRun.start = static_cast<int>(this->getCurrentPercent());
}

void PNPlayLayer::destroyPlayer(PlayerObject* player, GameObject* object) {
    PlayLayer::destroyPlayer(player, object);

    m_fields->currentRun.end = this->getCurrentPercent();
    StatManager::updateBestRun(m_fields->currentRun);
}

void PNPlayLayer::levelComplete() {
    PlayLayer::levelComplete();

    m_fields->currentRun.end = 100;
    StatManager::updateBestRun(m_fields->currentRun);
}