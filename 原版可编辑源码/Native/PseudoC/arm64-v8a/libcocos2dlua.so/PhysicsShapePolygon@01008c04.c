
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::PhysicsShapePolygon::PhysicsShapePolygon() */

void __thiscall cocos2d::PhysicsShapePolygon::PhysicsShapePolygon(PhysicsShapePolygon *this)

{
  undefined1 auVar1 [16];
  
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  auVar1 = NEON_fmov(0x3f800000,4);
  *(long *)(this + 100) = auVar1._8_8_;
  *(long *)(this + 0x5c) = auVar1._0_8_;
  auVar1 = _DAT_013cf9e0;
  this[0x58] = (PhysicsShapePolygon)0x0;
  *(undefined8 *)(this + 0x74) = 0;
  *(undefined8 *)(this + 0x6c) = 0;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01726018;
  *(long *)(this + 0x84) = auVar1._8_8_;
  *(long *)(this + 0x7c) = auVar1._0_8_;
  if (DAT_01792ca8 == 0) {
    DAT_01792ca8 = cpBodyNewStatic();
  }
  *(undefined ***)this = &PTR__PhysicsShapeEdgeSegment_01726108;
  return;
}

