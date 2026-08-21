
/* cocos2d::Physics3DWorld::removeAllPhysics3DConstraints() */

void __thiscall cocos2d::Physics3DWorld::removeAllPhysics3DConstraints(Physics3DWorld *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long *plVar5;
  Ref *this_00;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar2 = *(undefined8 **)(this + 0x30);
  for (puVar1 = *(undefined8 **)(this + 0x28); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    plVar5 = (long *)*puVar1;
                    /* try { // try from 0100f654 to 0110f65b has its CatchHandler @ 0100f724 */
    iVar4 = (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* try { // try from 0100f65c to 0110f737 has its CatchHandler @ 0100f520 */
    if (iVar4 == 1) {
      puVar7 = (undefined8 *)plVar5[0x11];
      puVar3 = (undefined8 *)plVar5[0x12];
      if (puVar7 != puVar3) {
        do {
          puVar6 = puVar7 + 1;
          this_00 = (Ref *)*puVar7;
          (**(code **)(**(long **)(this + 0x60) + 0x78))
                    (*(long **)(this + 0x60),*(undefined8 *)(this_00 + 0x28));
          Ref::release(this_00);
          puVar7 = puVar6;
        } while (puVar3 != puVar6);
        puVar7 = (undefined8 *)plVar5[0x11];
      }
      plVar5[0x12] = (long)puVar7;
    }
  }
  return;
}

