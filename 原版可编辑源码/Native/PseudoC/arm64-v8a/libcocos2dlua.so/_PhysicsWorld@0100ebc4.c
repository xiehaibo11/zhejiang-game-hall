
/* cocos2d::PhysicsWorld::~PhysicsWorld() */

void __thiscall cocos2d::PhysicsWorld::~PhysicsWorld(PhysicsWorld *this)

{
  long lVar1;
  PhysicsWorld *pPVar2;
  void *pvVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  PhysicsWorld *pPVar7;
  undefined8 *puVar8;
  
  *(undefined ***)this = &PTR_addJoint_01726358;
  removeAllJoints(this,true);
  (**(code **)(*(long *)this + 0x28))(this);
  if (*(long *)(this + 0x28) != 0) {
    cpHastySpaceFree();
  }
  if (*(Ref **)(this + 0x78) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x78));
    *(undefined8 *)(this + 0x78) = 0;
  }
  pPVar2 = *(PhysicsWorld **)(this + 0x140);
  if (this + 0x120 == pPVar2) {
    pcVar4 = *(code **)(*(long *)pPVar2 + 0x20);
LAB_0100ec44:
    (*pcVar4)();
  }
  else if (pPVar2 != (PhysicsWorld *)0x0) {
    pcVar4 = *(code **)(*(long *)pPVar2 + 0x28);
    goto LAB_0100ec44;
  }
  pPVar2 = *(PhysicsWorld **)(this + 0x110);
  if (this + 0xf0 == pPVar2) {
    pcVar4 = *(code **)(*(long *)pPVar2 + 0x20);
  }
  else {
    if (pPVar2 == (PhysicsWorld *)0x0) goto LAB_0100ec74;
    pcVar4 = *(code **)(*(long *)pPVar2 + 0x28);
  }
  (*pcVar4)();
LAB_0100ec74:
  pvVar3 = *(void **)(this + 0xd8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0xe0) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0xc0);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 200) = pvVar3;
    operator_delete(pvVar3);
  }
  puVar6 = *(undefined8 **)(this + 0xa8);
  puVar8 = *(undefined8 **)(this + 0xb0);
  if (puVar6 != puVar8) {
    do {
      Ref::release((Ref *)*puVar6);
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar6 = *(undefined8 **)(this + 0xa8);
  }
  *(undefined8 **)(this + 0xb0) = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0xb0) = puVar6;
    operator_delete(puVar6);
  }
  puVar6 = *(undefined8 **)(this + 0x90);
  puVar8 = *(undefined8 **)(this + 0x98);
  if (puVar6 != puVar8) {
    do {
      Ref::release((Ref *)*puVar6);
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar6 = *(undefined8 **)(this + 0x90);
  }
  *(undefined8 **)(this + 0x98) = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x98) = puVar6;
    operator_delete(puVar6);
  }
  if (*(long *)(this + 0x60) != 0) {
    lVar1 = *(long *)(this + 0x50);
    pPVar2 = *(PhysicsWorld **)(this + 0x58);
    lVar5 = *(long *)pPVar2;
    *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar5;
    *(undefined8 *)(this + 0x60) = 0;
    while (pPVar2 != this + 0x50) {
      pPVar7 = *(PhysicsWorld **)(pPVar2 + 8);
      operator_delete(pPVar2);
      pPVar2 = pPVar7;
    }
  }
  puVar6 = *(undefined8 **)(this + 0x38);
  puVar8 = *(undefined8 **)(this + 0x40);
  if (puVar6 != puVar8) {
    do {
      Ref::release((Ref *)*puVar6);
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar6 = *(undefined8 **)(this + 0x38);
  }
  *(undefined8 **)(this + 0x40) = puVar6;
  if (puVar6 == (undefined8 *)0x0) {
                    /* try { // try from 0100edac to 0110ee0b has its CatchHandler @ 0100edac
                       catch() { ... } // from try @ 0100edac with catch @ 0100edac
                       catch() { ... } // from try @ 0100ee14 with catch @ 0100edac */
    return;
  }
  *(undefined8 **)(this + 0x40) = puVar6;
  operator_delete(puVar6);
  return;
}

