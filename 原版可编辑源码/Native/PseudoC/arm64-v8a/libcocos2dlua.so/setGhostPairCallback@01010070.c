
/* cocos2d::Physics3DWorld::setGhostPairCallback() */

void __thiscall cocos2d::Physics3DWorld::setGhostPairCallback(Physics3DWorld *this)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if (this[0x5a] != (Physics3DWorld)0x0) {
    puVar1 = *(undefined8 **)(this + 0x30);
    if (*(undefined8 **)(this + 0x28) == puVar1) {
      bVar2 = false;
    }
    else {
      bVar2 = false;
      puVar7 = *(undefined8 **)(this + 0x28);
      do {
        iVar4 = (**(code **)(*(long *)*puVar7 + 0x10))();
        bVar3 = puVar1 + -1 != puVar7;
        bVar2 = (bool)(bVar2 | iVar4 == 2);
        puVar7 = puVar7 + 1;
      } while (iVar4 != 2 && bVar3);
    }
    plVar5 = (long *)(**(code **)(**(long **)(*(long *)(this + 0x60) + 0x60) + 0x48))();
    if (bVar2) {
      uVar6 = *(undefined8 *)(this + 0x88);
    }
    else {
      uVar6 = 0;
    }
    (**(code **)(*plVar5 + 0x78))(plVar5,uVar6);
                    /* try { // try from 01010108 to 0111014b has its CatchHandler @ 01010108
                       catch() { ... } // from try @ 01010108 with catch @ 01010108
                       catch() { ... } // from try @ 01010150 with catch @ 01010108 */
    this[0x5a] = (Physics3DWorld)0x0;
  }
  return;
}

