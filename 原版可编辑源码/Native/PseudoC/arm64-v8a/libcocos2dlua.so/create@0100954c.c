
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::PhysicsShapeCircle::create(float, cocos2d::PhysicsMaterial const&, cocos2d::Vec2 const&)
    */

Ref * cocos2d::PhysicsShapeCircle::create(float param_1,PhysicsMaterial *param_2,Vec2 *param_3)

{
  long lVar1;
  Ref *this;
  ulong uVar2;
  undefined1 auVar3 [16];
  
                    /* try { // try from 01009574 to 01109583 has its CatchHandler @ 01009628 */
  this = operator_new(0x90,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
                    /* try { // try from 01009584 to 01109643 has its CatchHandler @ 01009538 */
    Ref::Ref(this);
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    auVar3 = NEON_fmov(0x3f800000,4);
    *(long *)(this + 100) = auVar3._8_8_;
    *(long *)(this + 0x5c) = auVar3._0_8_;
    auVar3 = _DAT_013cf9e0;
    *(undefined ***)this = &PTR___cxa_pure_virtual_01726018;
    lVar1 = DAT_01792ca8;
    this[0x58] = (Ref)0x0;
    *(undefined8 *)(this + 0x74) = 0;
    *(undefined8 *)(this + 0x6c) = 0;
    *(long *)(this + 0x84) = auVar3._8_8_;
    *(long *)(this + 0x7c) = auVar3._0_8_;
    if (lVar1 == 0) {
      DAT_01792ca8 = cpBodyNewStatic();
    }
    *(undefined ***)this = &PTR__PhysicsShapeEdgeSegment_01726068;
    uVar2 = init((PhysicsShapeCircle *)this,param_1,param_2,param_3);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Ref *)0x0;
    }
    else {
      Ref::autorelease(this);
    }
  }
                    /* catch() { ... } // from try @ 01009574 with catch @ 01009628 */
  return this;
}

