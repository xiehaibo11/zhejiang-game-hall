
/* cocos2d::PhysicsShape::setMaterial(cocos2d::PhysicsMaterial const&) */

void __thiscall cocos2d::PhysicsShape::setMaterial(PhysicsShape *this,PhysicsMaterial *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar2;
  
                    /* try { // try from 01008794 to 011087a3 has its CatchHandler @ 0100880c */
                    /* try { // try from 010087a4 to 0110882f has its CatchHandler @ 01008750 */
  setDensity(this,*(float *)param_1);
  puVar3 = *(undefined8 **)(this + 0x38);
  uVar4 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x70) = uVar4;
  puVar1 = *(undefined8 **)(this + 0x30);
  if (*(undefined8 **)(this + 0x30) == puVar3) {
                    /* catch() { ... } // from try @ 01008794 with catch @ 0100880c */
    *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 8);
  }
  else {
    do {
      puVar2 = puVar1 + 1;
      cpShapeSetElasticity(uVar4,*puVar1);
      puVar1 = puVar2;
    } while (puVar3 != puVar2);
    puVar3 = *(undefined8 **)(this + 0x30);
    puVar1 = *(undefined8 **)(this + 0x38);
    uVar4 = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(this + 0x74) = uVar4;
    for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
      cpShapeSetFriction(uVar4,*puVar3);
    }
  }
  return;
}

