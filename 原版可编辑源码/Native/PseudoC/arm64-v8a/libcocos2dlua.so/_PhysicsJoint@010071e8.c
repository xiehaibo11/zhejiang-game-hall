
/* cocos2d::PhysicsJoint::~PhysicsJoint() */

void __thiscall cocos2d::PhysicsJoint::~PhysicsJoint(PhysicsJoint *this)

{
  long *plVar1;
  void *pvVar2;
  code *pcVar3;
  PhysicsJoint *pPVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  
                    /* catch() { ... } // from try @ 0100719c with catch @ 01007208 */
                    /* catch() { ... } // from try @ 010071b8 with catch @ 01007210 */
  *(undefined ***)this = &PTR___cxa_pure_virtual_017250a0;
  if (this[0x59] != (PhysicsJoint)0x1) {
    this[0x59] = (PhysicsJoint)0x1;
  }
  pPVar4 = this + 8;
  puVar5 = *(undefined8 **)pPVar4;
  puVar7 = *(undefined8 **)(this + 0x10);
  if (puVar5 != puVar7) {
    do {
      cpConstraintFree(*puVar5);
      puVar5 = puVar5 + 1;
                    /* catch() { ... } // from try @ 010072b4 with catch @ 01007240 */
    } while (puVar7 != puVar5);
    puVar5 = *(undefined8 **)pPVar4;
  }
  *(undefined8 **)(this + 0x10) = puVar5;
  if (*(void **)(this + 0x50) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x50));
  }
  plVar6 = *(long **)(this + 0x20);
  if (plVar6 != (long *)0x0) {
    plVar8 = *(long **)(this + 0x28);
    plVar1 = plVar6;
    if (plVar8 != plVar6) {
      do {
        plVar1 = (long *)plVar8[-2];
        plVar8 = plVar8 + -6;
        if (plVar8 == plVar1) {
          pcVar3 = *(code **)(*plVar1 + 0x20);
LAB_01007280:
          (*pcVar3)();
        }
        else if (plVar1 != (long *)0x0) {
                    /* try { // try from 010072a4 to 011072b3 has its CatchHandler @ 01007308 */
          pcVar3 = *(code **)(*plVar1 + 0x28);
          goto LAB_01007280;
        }
                    /* try { // try from 01007288 to 0110728f has its CatchHandler @ 01007300 */
      } while (plVar6 != plVar8);
      plVar1 = *(long **)(this + 0x20);
    }
    *(long **)(this + 0x28) = plVar6;
                    /* try { // try from 010072b4 to 0110732b has its CatchHandler @ 01007240 */
    operator_delete(plVar1);
  }
  pvVar2 = *(void **)pPVar4;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  *(void **)(this + 0x10) = pvVar2;
  operator_delete(pvVar2);
  return;
}

