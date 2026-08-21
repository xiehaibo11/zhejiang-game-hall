
/* cocos2d::PUBehaviour::clone() */

Ref * __thiscall cocos2d::PUBehaviour::clone(PUBehaviour *this)

{
  Ref *this_00;
  
  this_00 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this_00 != (Ref *)0x0) {
    Ref::Ref(this_00);
    *(undefined8 *)(this_00 + 0x30) = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined ***)this_00 = &PTR__PUBehaviour_016f36f0;
    *(undefined4 *)(this_00 + 0x50) = 0x3f800000;
    *(undefined8 *)(this_00 + 0x48) = 0x3f8000003f800000;
  }
  Ref::autorelease(this_00);
  (**(code **)(*(long *)this + 0x48))(this,this_00);
  return this_00;
}

