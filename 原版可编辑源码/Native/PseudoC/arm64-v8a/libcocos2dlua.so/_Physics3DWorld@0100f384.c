
/* cocos2d::Physics3DWorld::~Physics3DWorld() */

void __thiscall cocos2d::Physics3DWorld::~Physics3DWorld(Physics3DWorld *this)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 *puVar5;
  Ref *pRVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar5 = *(undefined8 **)(this + 0x28);
  puVar7 = *(undefined8 **)(this + 0x30);
  *(undefined ***)this = &PTR__Physics3DWorld_01726438;
  if (puVar5 != puVar7) {
    do {
      plVar4 = (long *)*puVar5;
      iVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
      if (iVar2 == 1) {
        puVar8 = (undefined8 *)plVar4[0x11];
        puVar1 = (undefined8 *)plVar4[0x12];
        if (puVar8 != puVar1) {
          do {
            pRVar6 = (Ref *)*puVar8;
            (**(code **)(**(long **)(this + 0x60) + 0x78))
                      (*(long **)(this + 0x60),*(undefined8 *)(pRVar6 + 0x28));
            Ref::release(pRVar6);
            puVar8 = puVar8 + 1;
          } while (puVar1 != puVar8);
          puVar8 = (undefined8 *)plVar4[0x11];
        }
        plVar4[0x12] = (long)puVar8;
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar7);
    puVar5 = *(undefined8 **)(this + 0x28);
    puVar7 = *(undefined8 **)(this + 0x30);
    if (puVar5 != puVar7) {
      do {
        pRVar6 = (Ref *)*puVar5;
        iVar2 = (**(code **)(*(long *)pRVar6 + 0x10))(pRVar6);
        if (iVar2 == 1) {
          (**(code **)(**(long **)(this + 0x60) + 0xb8))
                    (*(long **)(this + 0x60),*(undefined8 *)(pRVar6 + 0x78));
        }
        else {
          iVar2 = (**(code **)(*(long *)pRVar6 + 0x10))(pRVar6);
                    /* catch() { ... } // from try @ 0100f4d0 with catch @ 0100f488 */
          if (iVar2 == 2) {
            (**(code **)(**(long **)(this + 0x60) + 0x50))
                      (*(long **)(this + 0x60),*(undefined8 *)(pRVar6 + 0xe0));
          }
        }
        Ref::release(pRVar6);
        puVar5 = puVar5 + 1;
                    /* try { // try from 0100f4b4 to 0110f4b7 has its CatchHandler @ 0100f4e8 */
      } while (puVar7 != puVar5);
      puVar5 = *(undefined8 **)(this + 0x28);
    }
  }
                    /* try { // try from 0100f4c4 to 0110f4cf has its CatchHandler @ 0100f4ec */
  *(undefined8 **)(this + 0x30) = puVar5;
  *(undefined2 *)(this + 0x59) = 0x101;
  if (*(long **)(this + 0x68) != (long *)0x0) {
                    /* try { // try from 0100f4d0 to 0110f51f has its CatchHandler @ 0100f488 */
    (**(code **)(**(long **)(this + 0x68) + 8))();
  }
  *(undefined8 *)(this + 0x68) = 0;
  if (*(long **)(this + 0x70) != (long *)0x0) {
                    /* catch() { ... } // from try @ 0100f4b4 with catch @ 0100f4e8 */
                    /* catch() { ... } // from try @ 0100f4c4 with catch @ 0100f4ec */
    (**(code **)(**(long **)(this + 0x70) + 8))();
  }
  *(undefined8 *)(this + 0x70) = 0;
  if (*(long **)(this + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x78) + 8))();
  }
  *(undefined8 *)(this + 0x78) = 0;
  if (*(long **)(this + 0x88) != (long *)0x0) {
                    /* try { // try from 0100f520 to 0110f653 has its CatchHandler @ 0100f520
                       catch() { ... } // from try @ 0100f520 with catch @ 0100f520
                       catch() { ... } // from try @ 0100f65c with catch @ 0100f520 */
    (**(code **)(**(long **)(this + 0x88) + 8))();
  }
  *(undefined8 *)(this + 0x88) = 0;
  if (*(long **)(this + 0x80) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x80) + 8))();
  }
  *(undefined8 *)(this + 0x80) = 0;
  if (*(long **)(this + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x60) + 8))();
  }
  *(undefined8 *)(this + 0x60) = 0;
  if (*(long **)(this + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x90) + 8))();
  }
  puVar5 = *(undefined8 **)(this + 0x40);
  puVar7 = *(undefined8 **)(this + 0x48);
  *(undefined8 *)(this + 0x90) = 0;
  if (puVar5 != puVar7) {
    do {
      Physics3DComponent::setPhysics3DObject((Physics3DComponent *)*puVar5,(Physics3DObject *)0x0);
      puVar5 = puVar5 + 1;
    } while (puVar7 != puVar5);
    puVar5 = *(undefined8 **)(this + 0x40);
  }
  *(undefined8 **)(this + 0x48) = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x48) = puVar5;
    operator_delete(puVar5);
  }
  pvVar3 = *(void **)(this + 0x28);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar3;
    operator_delete(pvVar3);
  }
  Ref::~Ref((Ref *)this);
  return;
}

