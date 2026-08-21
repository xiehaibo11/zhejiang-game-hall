
/* cocos2d::PUDynamicAttributeFixed::clone() */

Ref * __thiscall cocos2d::PUDynamicAttributeFixed::clone(PUDynamicAttributeFixed *this)

{
  Ref *this_00;
  
  this_00 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (this_00 != (Ref *)0x0) {
    Ref::Ref(this_00);
    *(undefined4 *)(this_00 + 0x2c) = 0;
    *(undefined4 *)(this_00 + 0x24) = 0;
    *(undefined ***)this_00 = &PTR__PUDynamicAttributeOscillate_016f1bd0;
  }
  (**(code **)(*(long *)this + 0x18))(this,this_00);
  return this_00;
}

