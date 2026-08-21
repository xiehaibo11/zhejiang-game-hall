
/* cocos2d::EaseRateAction::initWithAction(cocos2d::ActionInterval*, float) */

undefined8 __thiscall
cocos2d::EaseRateAction::initWithAction(EaseRateAction *this,ActionInterval *param_1,float param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00ecee60 to 00fcee77 has its CatchHandler @ 00ecec00 */
                    /* try { // try from 00ecee78 to 00fcee7f has its CatchHandler @ 00ecee80 */
  if ((param_1 == (ActionInterval *)0x0) ||
     (uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,*(float *)(param_1 + 0x4c)),
     (uVar1 & 1) == 0)) {
    uVar2 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 00ecee78 with catch @ 00ecee80
                       try { // try from 00ecee80 to 00fceed3 has its CatchHandler @ 00ecec00 */
                    /* catch() { ... } // from try @ 00ecee4c with catch @ 00ecee84 */
    *(ActionInterval **)(this + 0x58) = param_1;
                    /* catch() { ... } // from try @ 00eced7c with catch @ 00ecee88 */
    Ref::retain((Ref *)param_1);
    uVar2 = 1;
    *(float *)(this + 0x60) = param_2;
  }
  return uVar2;
}

