
/* cocos2d::PUDynamicAttributeOscillate::clone() */

Ref * __thiscall cocos2d::PUDynamicAttributeOscillate::clone(PUDynamicAttributeOscillate *this)

{
  Ref *this_00;
  
  this_00 = operator_new(0x40,(nothrow_t *)&std::nothrow);
  if (this_00 != (Ref *)0x0) {
    Ref::Ref(this_00);
    *(undefined4 *)(this_00 + 0x2c) = 0;
    *(undefined ***)this_00 = &PTR__PUDynamicAttributeOscillate_016f1c88;
    *(undefined8 *)(this_00 + 0x38) = 0x3f80000000000000;
    *(undefined8 *)(this_00 + 0x30) = 0x3f800000;
    *(undefined4 *)(this_00 + 0x24) = 3;
  }
  (**(code **)(*(long *)this + 0x18))(this,this_00);
  return this_00;
}

