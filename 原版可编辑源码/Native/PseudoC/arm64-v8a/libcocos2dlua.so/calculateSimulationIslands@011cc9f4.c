
/* btDiscreteDynamicsWorld::calculateSimulationIslands() */

void __thiscall btDiscreteDynamicsWorld::calculateSimulationIslands(btDiscreteDynamicsWorld *this)

{
  CProfileManager *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  CProfileManager::Start_Profile("calculateSimulationIslands");
  (**(code **)(**(long **)(this + 0x118) + 0x10))
            (*(long **)(this + 0x118),this,*(undefined8 *)(this + 0x28));
  iVar1 = *(int *)(this + 0x1ac);
  if (0 < iVar1) {
    lVar4 = 0;
    do {
      lVar3 = *(long *)(*(long *)(this + 0x1b8) + lVar4 * 8);
      lVar2 = *(long *)(lVar3 + 0x308);
      if (((lVar2 != 0) &&
          (lVar3 = *(long *)(lVar3 + 0x310), lVar3 != 0 && (*(uint *)(lVar2 + 0xe0) & 3) == 0)) &&
         ((*(byte *)(lVar3 + 0xe0) & 3) == 0)) {
        btUnionFind::unite((btUnionFind *)(*(long *)(this + 0x118) + 8),*(int *)(lVar2 + 0xe4),
                           *(int *)(lVar3 + 0xe4));
        iVar1 = *(int *)(this + 0x1ac);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar1);
  }
  iVar1 = *(int *)(this + 0x124);
  if (0 < iVar1) {
    lVar4 = 0;
    do {
      lVar2 = *(long *)(*(long *)(this + 0x130) + lVar4 * 8);
      if (((*(char *)(lVar2 + 0x1c) != '\0') &&
          ((*(byte *)(*(long *)(lVar2 + 0x28) + 0xe0) & 3) == 0)) &&
         ((*(byte *)(*(long *)(lVar2 + 0x30) + 0xe0) & 3) == 0)) {
        btUnionFind::unite((btUnionFind *)(*(long *)(this + 0x118) + 8),
                           *(int *)(*(long *)(lVar2 + 0x28) + 0xe4),
                           *(int *)(*(long *)(lVar2 + 0x30) + 0xe4));
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar1);
  }
  this_00 = (CProfileManager *)
            (**(code **)(**(long **)(this + 0x118) + 0x18))(*(long **)(this + 0x118),this);
  CProfileManager::Stop_Profile(this_00);
  return;
}

