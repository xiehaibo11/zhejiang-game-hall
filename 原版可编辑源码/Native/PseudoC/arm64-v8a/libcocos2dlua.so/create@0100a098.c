
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::PhysicsShapePolygon::create(cocos2d::Vec2 const*, int, cocos2d::PhysicsMaterial const&,
   cocos2d::Vec2 const&, float) */

Ref * cocos2d::PhysicsShapePolygon::create
                (Vec2 *param_1,int param_2,PhysicsMaterial *param_3,Vec2 *param_4,float param_5)

{
  long lVar1;
  Ref *this;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  this = operator_new(0x90,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
                    /* try { // try from 0100a0dc to 0110a0eb has its CatchHandler @ 0100a398 */
    Ref::Ref(this);
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    auVar3 = NEON_fmov(0x3f800000,4);
                    /* try { // try from 0100a100 to 0110a11f has its CatchHandler @ 0100a3fc */
    *(long *)(this + 100) = auVar3._8_8_;
    *(long *)(this + 0x5c) = auVar3._0_8_;
    auVar3 = _DAT_013cf9e0;
    *(undefined ***)this = &PTR___cxa_pure_virtual_01726018;
    lVar1 = DAT_01792ca8;
    this[0x58] = (Ref)0x0;
    *(undefined8 *)(this + 0x74) = 0;
                    /* try { // try from 0100a124 to 0110a12b has its CatchHandler @ 0100a344 */
    *(undefined8 *)(this + 0x6c) = 0;
    *(long *)(this + 0x84) = auVar3._8_8_;
    *(long *)(this + 0x7c) = auVar3._0_8_;
    if (lVar1 == 0) {
                    /* try { // try from 0100a130 to 0110a137 has its CatchHandler @ 0100a33c */
      DAT_01792ca8 = cpBodyNewStatic();
    }
                    /* try { // try from 0100a13c to 0110a14f has its CatchHandler @ 0100a3a8 */
    *(undefined ***)this = &PTR__PhysicsShapeEdgeSegment_01726108;
    uVar2 = init((PhysicsShapePolygon *)this,param_1,param_2,param_3,param_4,param_5);
    if ((uVar2 & 1) == 0) {
                    /* try { // try from 0100a178 to 0110a18f has its CatchHandler @ 0100a3b0 */
      (**(code **)(*(long *)this + 8))(this);
      this = (Ref *)0x0;
    }
    else {
      Ref::autorelease(this);
    }
  }
  return this;
}

