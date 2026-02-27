#include <Geode/modify/PlayLayer.hpp>
#include "../managers/StatManager.hpp"

using namespace geode::prelude;

class $modify(PNPlayLayer, PlayLayer) {
    struct Fields {
        Run currentRun;
    };

    void resetLevel();
    void destroyPlayer(PlayerObject* player, GameObject* object);
    void levelComplete();
};