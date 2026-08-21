
/* cocos2d::PUPlaneCollider::PUPlaneCollider() */

void __thiscall cocos2d::PUPlaneCollider::PUPlaneCollider(PUPlaneCollider *this)

{
  undefined8 uVar1;
  
  PUBaseCollider::PUBaseCollider((PUBaseCollider *)this);
                    /* catch() { ... } // from try @ 00e2a9c8 with catch @ 00e2aac4 */
  *(undefined ***)this = &PTR__PUPlaneCollider_016efa90;
  uVar1 = DEFAULT_NORMAL;
  *(undefined4 *)(this + 200) = DAT_01788d94;
  *(undefined8 *)(this + 0xc0) = uVar1;
  Vec3::Vec3((Vec3 *)(this + 0xcc));
                    /* try { // try from 00e2aadc to 00f2ab0b has its CatchHandler @ 00e2aadc
                       catch() { ... } // from try @ 00e2aadc with catch @ 00e2aadc
                       catch() { ... } // from try @ 00e2ab10 with catch @ 00e2aadc */
  PUPlane::PUPlane((PUPlane *)(this + 0xd8));
  return;
}

