
/* cocos2d::Scene::onProjectionChanged(cocos2d::EventCustom*) */

void cocos2d::Scene::onProjectionChanged(EventCustom *param_1)

{
  if (*(Camera **)(param_1 + 0x310) != (Camera *)0x0) {
    Camera::initDefault(*(Camera **)(param_1 + 0x310));
    return;
  }
  return;
}

