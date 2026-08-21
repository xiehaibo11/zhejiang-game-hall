
/* cocos2d::ProgressTo::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::ProgressTo::startWithTarget(ProgressTo *this,Node *param_1)

{
  LoadingBar *this_00;
  undefined4 uVar1;
  
  ActionInterval::startWithTarget((ActionInterval *)this,param_1);
  if ((param_1 == (Node *)0x0) ||
     (this_00 = (LoadingBar *)
                __dynamic_cast(param_1,&Node::typeinfo,&cocos2d::ui::LoadingBar::typeinfo,0),
     this_00 == (LoadingBar *)0x0)) {
    *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x30c);
  }
  else {
    uVar1 = cocos2d::ui::LoadingBar::getPercent(this_00);
    *(undefined4 *)(this + 0x5c) = uVar1;
  }
                    /* try { // try from 00ee8210 to 00fe821f has its CatchHandler @ 00ee82a8 */
  return;
}

