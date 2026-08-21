
/* cocos2d::PhysicsShapeEdgeSegment::~PhysicsShapeEdgeSegment() */

void __thiscall
cocos2d::PhysicsShapeEdgeSegment::~PhysicsShapeEdgeSegment(PhysicsShapeEdgeSegment *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
                    /* catch() { ... } // from try @ 01008638 with catch @ 0100866c */
  *(undefined ***)this = &PTR___cxa_pure_virtual_01726018;
  puVar1 = *(undefined8 **)(this + 0x30);
  puVar2 = *(undefined8 **)(this + 0x38);
  if (puVar1 != puVar2) {
    do {
      cpShapeFree(*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar2 != puVar1);
    puVar1 = *(undefined8 **)(this + 0x30);
  }
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x38) = puVar1;
    operator_delete(puVar1);
  }
  Ref::~Ref((Ref *)this);
  return;
}

