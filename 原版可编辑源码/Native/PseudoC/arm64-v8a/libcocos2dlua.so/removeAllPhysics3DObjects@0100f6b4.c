
/* cocos2d::Physics3DWorld::removeAllPhysics3DObjects() */

void __thiscall cocos2d::Physics3DWorld::removeAllPhysics3DObjects(Physics3DWorld *this)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  Ref *this_00;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(this + 0x28);
  puVar1 = *(undefined8 **)(this + 0x30);
  if (puVar6 != puVar1) {
    do {
      this_00 = (Ref *)*puVar6;
      iVar2 = (**(code **)(*(long *)this_00 + 0x10))(this_00);
      if (iVar2 == 1) {
        plVar3 = *(long **)(this + 0x60);
        uVar4 = *(undefined8 *)(this_00 + 0x78);
        pcVar5 = *(code **)(*plVar3 + 0xb8);
LAB_0100f6e8:
        (*pcVar5)(plVar3,uVar4);
      }
      else {
                    /* catch() { ... } // from try @ 0100f654 with catch @ 0100f724 */
        iVar2 = (**(code **)(*(long *)this_00 + 0x10))(this_00);
        if (iVar2 == 2) {
          plVar3 = *(long **)(this + 0x60);
          uVar4 = *(undefined8 *)(this_00 + 0xe0);
          pcVar5 = *(code **)(*plVar3 + 0x50);
          goto LAB_0100f6e8;
        }
      }
      Ref::release(this_00);
      puVar6 = puVar6 + 1;
    } while (puVar1 != puVar6);
    puVar6 = *(undefined8 **)(this + 0x28);
  }
  *(undefined8 **)(this + 0x30) = puVar6;
  *(undefined2 *)(this + 0x59) = 0x101;
  return;
}

