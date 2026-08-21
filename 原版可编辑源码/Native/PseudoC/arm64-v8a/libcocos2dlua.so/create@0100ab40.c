
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::PhysicsShapeEdgeBox::create(cocos2d::Size const&, cocos2d::PhysicsMaterial const&,
   float, cocos2d::Vec2 const&) */

Ref * cocos2d::PhysicsShapeEdgeBox::create
                (Size *param_1,PhysicsMaterial *param_2,float param_3,Vec2 *param_4)

{
  long lVar1;
  Ref *this;
  ulong uVar2;
  undefined1 auVar3 [16];
  
                    /* try { // try from 0100ab48 to 0110ab4f has its CatchHandler @ 0100ac08 */
  this = operator_new(0x90,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
                    /* try { // try from 0100ab8c to 0110abab has its CatchHandler @ 0100ac0c */
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
                    /* try { // try from 0100abc4 to 0110abe3 has its CatchHandler @ 0100ac08 */
    *(undefined8 *)(this + 0x74) = 0;
    *(undefined8 *)(this + 0x6c) = 0;
    *(long *)(this + 0x84) = auVar3._8_8_;
    *(long *)(this + 0x7c) = auVar3._0_8_;
    if (lVar1 == 0) {
      DAT_01792ca8 = cpBodyNewStatic();
    }
                    /* try { // try from 0100abe4 to 0110ac47 has its CatchHandler @ 0100a8dc */
    *(undefined ***)this = &PTR__PhysicsShapeEdgeBox_01726158;
    uVar2 = init((PhysicsShapeEdgeBox *)this,param_1,param_2,param_3,param_4);
    if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 0100aa54 with catch @ 0100ac20 */
      (**(code **)(*(long *)this + 8))(this);
                    /* catch() { ... } // from try @ 0100a9ec with catch @ 0100ac24 */
      this = (Ref *)0x0;
    }
    else {
                    /* catch() { ... } // from try @ 0100ab48 with catch @ 0100ac08
                       catch() { ... } // from try @ 0100abc4 with catch @ 0100ac08 */
                    /* catch() { ... } // from try @ 0100aae8 with catch @ 0100ac0c
                       catch() { ... } // from try @ 0100ab8c with catch @ 0100ac0c */
      Ref::autorelease(this);
    }
  }
                    /* catch() { ... } // from try @ 0100a934 with catch @ 0100ac28 */
                    /* catch() { ... } // from try @ 0100a968 with catch @ 0100ac2c */
  return this;
}

