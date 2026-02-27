#include "../hooks/PNLevelInfoLayer.hpp"
#include "../managers/StatManager.hpp"

bool PNLevelInfoLayer::init(GJGameLevel* level, bool challenge) {
    if (!LevelInfoLayer::init(level, challenge)) return false;

    auto sprite = CircleButtonSprite::createWithSpriteFrameName("GJ_secretLock4_small_001.png");

    m_fields->button = CCMenuItemSpriteExtra::create(
        sprite,
        this,
        menu_selector(PNLevelInfoLayer::onPNButton));

    m_fields->button->setID("pn-button");
    m_fields->button->setZOrder(1);

    auto otherMenu = getChildByID("left-side-menu");

    otherMenu->addChild(m_fields->button);

    otherMenu->updateLayout();

    return true;
}

void PNLevelInfoLayer::onPNButton(CCObject* sender) {
    FLAlertLayer::create("Best Run", StatManager::bestRunString(), "OK")->show();
}
