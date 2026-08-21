
/* cocos2d::Physics3DRigidBody::create(cocos2d::Physics3DRigidBodyDes*) */

Ref * cocos2d::Physics3DRigidBody::create(Physics3DRigidBodyDes *param_1)

{
  Ref *this;
  ulong uVar1;
  
                    /* try { // try from 010159d8 to 01115a37 has its CatchHandler @ 010159d8
                       catch() { ... } // from try @ 010159d8 with catch @ 010159d8
                       catch() { ... } // from try @ 01015a44 with catch @ 010159d8 */
  this = operator_new(0xa0,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    this[0x21] = (Ref)0x1;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x2c) = 0;
    *(undefined8 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined4 *)(this + 0x70) = 0xffffffff;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined ***)this = &PTR__Physics3DRigidBody_01726790;
    *(undefined8 *)(this + 0x98) = 0;
  }
                    /* try { // try from 01015a38 to 01115a43 has its CatchHandler @ 01015a80 */
  uVar1 = init((Physics3DRigidBodyDes *)this);
  if ((uVar1 & 1) == 0) {
    if (this != (Ref *)0x0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Ref *)0x0;
    }
  }
  else {
                    /* try { // try from 01015a44 to 01115a93 has its CatchHandler @ 010159d8 */
    Ref::autorelease(this);
  }
  return this;
}

