
/* cocos2d::PUDynamicAttributeRandom::clone() */

Ref * __thiscall cocos2d::PUDynamicAttributeRandom::clone(PUDynamicAttributeRandom *this)

{
  Ref *this_00;
  
  this_00 = operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (this_00 != (Ref *)0x0) {
    Ref::Ref(this_00);
    *(undefined4 *)(this_00 + 0x2c) = 0;
    *(undefined4 *)(this_00 + 0x30) = 0;
    *(undefined4 *)(this_00 + 0x24) = 1;
    *(undefined ***)this_00 = &PTR__PUDynamicAttributeOscillate_016f1c10;
  }
  (**(code **)(*(long *)this + 0x18))(this,this_00);
  return this_00;
}

