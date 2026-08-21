
/* cocos2d::Physics3DCollider::Physics3DCollider() */

void __thiscall cocos2d::Physics3DCollider::Physics3DCollider(Physics3DCollider *this)

{
  Ref::Ref((Ref *)this);
  this[0x21] = (Physics3DCollider)0x1;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
                    /* catch() { ... } // from try @ 01016870 with catch @ 010167f0 */
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x70) = 0xffffffff;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR__Physics3DCollider_017267c0;
  return;
}

