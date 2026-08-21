
/* cocos2d::ProgressFromTo::update(float) */

void __thiscall cocos2d::ProgressFromTo::update(ProgressFromTo *this,float param_1)

{
  LoadingBar *this_00;
  ProgressTimer *this_01;
  
  this_01 = *(ProgressTimer **)(this + 0x38);
  if ((this_01 != (ProgressTimer *)0x0) &&
     (this_00 = (LoadingBar *)
                __dynamic_cast(this_01,&Node::typeinfo,&cocos2d::ui::LoadingBar::typeinfo,0),
     this_00 != (LoadingBar *)0x0)) {
    cocos2d::ui::LoadingBar::setPercent
              (this_00,*(float *)(this + 0x5c) +
                       (*(float *)(this + 0x58) - *(float *)(this + 0x5c)) * param_1);
    return;
  }
  ProgressTimer::setPercentage
            (this_01,*(float *)(this + 0x5c) +
                     (*(float *)(this + 0x58) - *(float *)(this + 0x5c)) * param_1);
  return;
}

