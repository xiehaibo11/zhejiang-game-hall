
/* cocos2d::PUPlaneCollider::create() */

PUBaseCollider * cocos2d::PUPlaneCollider::create(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  PUBaseCollider *this;
  
  this = operator_new(0xe8,(nothrow_t *)&std::nothrow);
  if (this != (PUBaseCollider *)0x0) {
    PUBaseCollider::PUBaseCollider(this);
    uVar2 = DAT_01788d94;
    uVar1 = DEFAULT_NORMAL;
    *(undefined ***)this = &PTR__PUPlaneCollider_016efa90;
    *(undefined4 *)(this + 200) = uVar2;
    *(undefined8 *)(this + 0xc0) = uVar1;
    Vec3::Vec3((Vec3 *)(this + 0xcc));
    PUPlane::PUPlane((PUPlane *)(this + 0xd8));
  }
  Ref::autorelease((Ref *)this);
  return this;
}

