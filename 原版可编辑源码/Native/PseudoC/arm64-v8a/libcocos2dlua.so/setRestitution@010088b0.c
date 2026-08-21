
/* cocos2d::PhysicsShape::setRestitution(float) */

void __thiscall cocos2d::PhysicsShape::setRestitution(PhysicsShape *this,float param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 in_register_00005004;
  
  puVar2 = *(undefined8 **)(this + 0x30);
  puVar1 = *(undefined8 **)(this + 0x38);
  *(float *)(this + 0x70) = param_1;
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    cpShapeSetElasticity(CONCAT44(in_register_00005004,param_1),*puVar2);
  }
                    /* catch() { ... } // from try @ 01008860 with catch @ 010088ec */
                    /* catch() { ... } // from try @ 0100887c with catch @ 010088f4 */
  return;
}

