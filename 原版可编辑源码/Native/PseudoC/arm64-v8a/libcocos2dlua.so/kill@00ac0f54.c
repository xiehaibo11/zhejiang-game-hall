
/* fairygui::GTween::kill(cocos2d::Ref*, fairygui::TweenPropType, bool) */

void fairygui::GTween::kill(undefined8 param_1,undefined8 param_2,uint param_3)

{
  TweenManager::killTweens(param_1,param_2,param_3 & 1);
  return;
}

