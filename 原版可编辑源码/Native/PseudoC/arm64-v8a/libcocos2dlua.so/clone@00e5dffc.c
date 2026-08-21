
/* cocos2d::PUSlaveBehaviour::clone() */

PUBehaviour * __thiscall cocos2d::PUSlaveBehaviour::clone(PUSlaveBehaviour *this)

{
  PUBehaviour *this_00;
  
  this_00 = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this_00 != (PUBehaviour *)0x0) {
    PUBehaviour::PUBehaviour(this_00);
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined ***)this_00 = &PTR__PUSlaveBehaviour_016f2e38;
  }
  Ref::autorelease((Ref *)this_00);
  (**(code **)(*(long *)this + 0x48))(this,this_00);
  return this_00;
}

