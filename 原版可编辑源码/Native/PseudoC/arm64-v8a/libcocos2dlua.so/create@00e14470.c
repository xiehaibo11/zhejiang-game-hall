
/* cocos2d::extension::Invocation::create(cocos2d::Ref*, void (cocos2d::Ref::*)(cocos2d::Ref*,
   cocos2d::extension::Control::EventType), cocos2d::extension::Control::EventType) */

Ref * __thiscall
cocos2d::extension::Invocation::create
          (Invocation *this,undefined8 param_1,undefined8 param_2,undefined4 param_4)

{
  Ref *this_00;
  
  this_00 = operator_new(0x48,(nothrow_t *)&std::nothrow);
  if (this_00 != (Ref *)0x0) {
                    /* try { // try from 00e144ac to 00f144af has its CatchHandler @ 00e14784 */
    Ref::Ref(this_00);
    *(undefined8 *)(this_00 + 0x30) = param_2;
    *(Invocation **)(this_00 + 0x38) = this;
    *(undefined8 *)(this_00 + 0x28) = param_1;
    *(undefined ***)this_00 = &PTR__Ref_016ecda8;
                    /* try { // try from 00e144d0 to 00f144df has its CatchHandler @ 00e14790 */
    *(undefined4 *)(this_00 + 0x40) = param_4;
    Ref::autorelease(this_00);
  }
  return this_00;
}

