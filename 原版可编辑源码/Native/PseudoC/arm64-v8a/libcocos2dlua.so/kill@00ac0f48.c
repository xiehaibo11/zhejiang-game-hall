
/* fairygui::GTween::kill(cocos2d::Ref*, bool) */

void fairygui::GTween::kill(Ref *param_1,bool param_2)

{
  TweenManager::killTweens(param_1,0,param_2);
  return;
}

