#include "../hooks/PNLevelInfoLayer.hpp"

bool PNLevelInfoLayer::init(GJGameLevel* level, bool challenge) {
    if (!LevelInfoLayer::init(level, challenge)) return false;

    auto sprite = CCSprite::createWithSpriteFrameName("GJ_plainBtn_001.png");
    auto iconSprite = CCSprite::createWithSpriteFrameName("GJ_secretLock4_small_001.png");

    iconSprite->setPosition(sprite->getContentSize() / 2);
    sprite->addChild(iconSprite);

    m_fields->button = CCMenuItemSpriteExtra::create(sprite, this, nullptr);

    m_fields->button->setID("pn-button");
    m_fields->button->setZOrder(1);

    auto otherMenu = getChildByID("left-side-menu");

    otherMenu->addChild(m_fields->button);

    otherMenu->updateLayout();

    return true;
}
