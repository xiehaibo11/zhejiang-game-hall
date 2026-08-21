
/* cocos2d::Physics3DCollider::create(cocos2d::Physics3DColliderDes*) */

Ref * cocos2d::Physics3DCollider::create(Physics3DColliderDes *param_1)

{
  Ref *this;
  
  this = operator_new(0xf0,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    this[0x21] = (Ref)0x1;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x2c) = 0;
    *(undefined8 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined4 *)(this + 0x70) = 0xffffffff;
    *(undefined8 *)(this + 0xa0) = 0;
    *(undefined8 *)(this + 0xd0) = 0;
    *(undefined8 *)(this + 0xe0) = 0;
    *(undefined8 *)(this + 0xe8) = 0;
    *(undefined ***)this = &PTR__Physics3DCollider_017267c0;
  }
  init((Physics3DCollider *)this,param_1);
  Ref::autorelease(this);
  return this;
}

