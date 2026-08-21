
/* cocos2d::PUSphereCollider::PUSphereCollider() */

void __thiscall cocos2d::PUSphereCollider::PUSphereCollider(PUSphereCollider *this)

{
  PUBaseCollider::PUBaseCollider((PUBaseCollider *)this);
  *(undefined4 *)(this + 0xc0) = 0x42c80000;
  *(undefined ***)this = &PTR__PUSphereCollider_016eff90;
  PUSphere::PUSphere((PUSphere *)(this + 0xc4));
  Vec3::Vec3((Vec3 *)(this + 0xd4));
  this[0xe0] = (PUSphereCollider)0x0;
  return;
}

