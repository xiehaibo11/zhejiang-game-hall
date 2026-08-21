
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::PhysicsShapeEdgeSegment::create(cocos2d::Vec2 const&, cocos2d::Vec2 const&,
   cocos2d::PhysicsMaterial const&, float) */

Ref * cocos2d::PhysicsShapeEdgeSegment::create
                (Vec2 *param_1,Vec2 *param_2,PhysicsMaterial *param_3,float param_4)

{
  long lVar1;
  Ref *this;
  ulong uVar2;
  undefined1 auVar3 [16];
  
                    /* catch() { ... } // from try @ 010099c0 with catch @ 01009974 */
  this = operator_new(0x90,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
                    /* try { // try from 010099b0 to 011099bf has its CatchHandler @ 01009a1c */
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    auVar3 = NEON_fmov(0x3f800000,4);
                    /* try { // try from 010099c0 to 01109a37 has its CatchHandler @ 01009974 */
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
    *(undefined ***)this = &PTR__PhysicsShapeEdgeSegment_01726248;
                    /* catch() { ... } // from try @ 010099b0 with catch @ 01009a1c */
    uVar2 = init((PhysicsShapeEdgeSegment *)this,param_1,param_2,param_3,param_4);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Ref *)0x0;
    }
    else {
      Ref::autorelease(this);
    }
  }
  return this;
}

