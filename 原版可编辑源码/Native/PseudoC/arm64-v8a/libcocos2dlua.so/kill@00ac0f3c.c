
/* fairygui::GTween::kill(cocos2d::Ref*) */

void fairygui::GTween::kill(Ref *param_1)

{
  TweenManager::killTweens(param_1,0,0);
  return;
}

