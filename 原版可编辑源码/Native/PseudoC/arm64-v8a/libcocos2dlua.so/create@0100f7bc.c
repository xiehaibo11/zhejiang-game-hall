
/* cocos2d::Physics3DWorld::create(cocos2d::Physics3DWorldDes*) */

Ref * cocos2d::Physics3DWorld::create(Physics3DWorldDes *param_1)

{
  Ref *this;
  
  this = operator_new(0x98,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined4 *)(this + 0x57) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined ***)this = &PTR__Physics3DWorld_01726438;
    *(undefined8 *)(this + 0x90) = 0;
  }
  init((Physics3DWorld *)this,param_1);
  Ref::autorelease(this);
  return this;
}

