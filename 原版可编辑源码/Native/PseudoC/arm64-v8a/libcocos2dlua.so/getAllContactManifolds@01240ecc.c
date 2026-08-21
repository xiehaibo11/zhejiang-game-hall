
/* btCompoundCompoundCollisionAlgorithm::getAllContactManifolds(btAlignedObjectArray<btPersistentManifold*>&)
    */

void __thiscall
btCompoundCompoundCollisionAlgorithm::getAllContactManifolds
          (btCompoundCompoundCollisionAlgorithm *this,btAlignedObjectArray *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(this + 0x10);
  iVar2 = *(int *)(lVar3 + 0xc);
  if (0 < iVar2) {
    lVar4 = 0;
    lVar5 = 8;
    do {
      plVar1 = *(long **)(*(long *)(lVar3 + 0x18) + lVar5);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
        iVar2 = *(int *)(lVar3 + 0xc);
      }
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar4 < iVar2);
  }
  return;
}

