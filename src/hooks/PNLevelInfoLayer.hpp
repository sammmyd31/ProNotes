#include <Geode/modify/LevelInfoLayer.hpp>

using namespace geode::prelude;

class $modify(PNLevelInfoLayer, LevelInfoLayer) {
    struct Fields {
        CCMenuItemSpriteExtra* button = nullptr;
    };

    bool init(GJGameLevel* level, bool challenge);
};
