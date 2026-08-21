
/* fairygui::ActionMovieClip::startWithTarget(cocos2d::Node*) */

void __thiscall fairygui::ActionMovieClip::startWithTarget(ActionMovieClip *this,Node *param_1)

{
  cocos2d::Action::startWithTarget((Action *)this,param_1);
  drawFrame(this);
  return;
}

