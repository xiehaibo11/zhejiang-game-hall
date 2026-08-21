
/* WARNING: Removing unreachable block (ram,0x0101006c) */
/* cocos2d::Physics3DWorld::stepSimulate(float) */

void __thiscall cocos2d::Physics3DWorld::stepSimulate(Physics3DWorld *this,float param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 in_register_00005004;
  
  lVar5 = *(long *)(this + 0x60);
  if (lVar5 == 0) {
    return;
  }
  if (this[0x5a] != (Physics3DWorld)0x0) {
    puVar6 = *(undefined8 **)(this + 0x30);
    if (*(undefined8 **)(this + 0x28) == puVar6) {
      bVar1 = false;
    }
    else {
      bVar1 = false;
      puVar7 = *(undefined8 **)(this + 0x28);
      do {
        iVar2 = (**(code **)(*(long *)*puVar7 + 0x10))();
        bVar1 = (bool)(bVar1 | iVar2 == 2);
        if (puVar6 + -1 == puVar7) break;
        puVar7 = puVar7 + 1;
      } while (iVar2 != 2);
      lVar5 = *(long *)(this + 0x60);
    }
    plVar3 = (long *)(**(code **)(**(long **)(lVar5 + 0x60) + 0x48))();
    if (bVar1) {
      uVar4 = *(undefined8 *)(this + 0x88);
    }
    else {
      uVar4 = 0;
    }
    (**(code **)(*plVar3 + 0x78))(plVar3,uVar4);
    this[0x5a] = (Physics3DWorld)0x0;
  }
  puVar7 = *(undefined8 **)(this + 0x48);
  for (puVar6 = *(undefined8 **)(this + 0x40); puVar6 != puVar7; puVar6 = puVar6 + 1) {
    Physics3DComponent::preSimulate((Physics3DComponent *)*puVar6);
  }
  (**(code **)(**(long **)(this + 0x60) + 0x68))
            (CONCAT44(in_register_00005004,param_1),0x3c888889,*(long **)(this + 0x60),3);
  puVar7 = *(undefined8 **)(this + 0x48);
  for (puVar6 = *(undefined8 **)(this + 0x40); puVar6 != puVar7; puVar6 = puVar6 + 1) {
    Physics3DComponent::postSimulate((Physics3DComponent *)*puVar6);
  }
  if (this[0x59] == (Physics3DWorld)0x0) {
    if (this[0x58] == (Physics3DWorld)0x0) {
      return;
    }
  }
  else {
    this[0x58] = (Physics3DWorld)0x0;
    plVar3 = *(long **)(this + 0x28);
    do {
      if (plVar3 == *(long **)(this + 0x30)) {
        this[0x59] = (Physics3DWorld)0x0;
        return;
      }
      lVar5 = *plVar3;
      plVar3 = plVar3 + 1;
    } while (*(long *)(lVar5 + 0x60) == 0);
    this[0x58] = (Physics3DWorld)0x1;
    this[0x59] = (Physics3DWorld)0x0;
  }
  collisionChecking();
  return;
}

