
/* cocos2d::extension::Invocation::Invocation(cocos2d::Ref*, void (cocos2d::Ref::*)(cocos2d::Ref*,
   cocos2d::extension::Control::EventType), cocos2d::extension::Control::EventType) */

void __thiscall
cocos2d::extension::Invocation::Invocation
          (Invocation *this,undefined8 param_1,undefined8 param_2,undefined8 param_4,
          undefined4 param_5)

{
                    /* try { // try from 00e1451c to 00f14527 has its CatchHandler @ 00e14764 */
  Ref::Ref((Ref *)this);
                    /* try { // try from 00e14538 to 00f14543 has its CatchHandler @ 00e14754 */
  *(undefined8 *)(this + 0x30) = param_4;
  *(undefined8 *)(this + 0x38) = param_1;
  *(undefined8 *)(this + 0x28) = param_2;
  *(undefined4 *)(this + 0x40) = param_5;
  *(undefined ***)this = &PTR__Ref_016ecda8;
  return;
}

