
/* cocos2d::ActionEase::initWithAction(cocos2d::ActionInterval*) */

undefined8 __thiscall cocos2d::ActionEase::initWithAction(ActionEase *this,ActionInterval *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((param_1 == (ActionInterval *)0x0) ||
     (uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,*(float *)(param_1 + 0x4c)),
     (uVar1 & 1) == 0)) {
    uVar2 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 00eceaf4 with catch @ 00eceba4 */
    *(ActionInterval **)(this + 0x58) = param_1;
    Ref::retain((Ref *)param_1);
    uVar2 = 1;
  }
  return uVar2;
}

