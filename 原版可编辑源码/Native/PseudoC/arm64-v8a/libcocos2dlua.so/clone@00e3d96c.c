
/* cocos2d::PUDynamicAttributeCurved::clone() */

Ref * __thiscall cocos2d::PUDynamicAttributeCurved::clone(PUDynamicAttributeCurved *this)

{
  Ref *this_00;
  
  this_00 = operator_new(200,(nothrow_t *)&std::nothrow);
  if (this_00 != (Ref *)0x0) {
    Ref::Ref(this_00);
    *(undefined4 *)(this_00 + 0x2c) = 0;
    *(undefined ***)this_00 = &PTR__PUDynamicAttributeCurved_016f1c48;
    PUSimpleSpline::PUSimpleSpline((PUSimpleSpline *)(this_00 + 0x30));
    *(undefined4 *)(this_00 + 0xa8) = 0;
    *(undefined8 *)(this_00 + 0xb8) = 0;
    *(undefined8 *)(this_00 + 0xc0) = 0;
    *(undefined8 *)(this_00 + 0xb0) = 0;
    *(undefined4 *)(this_00 + 0x24) = 2;
  }
  (**(code **)(*(long *)this + 0x18))(this,this_00);
  return this_00;
}

