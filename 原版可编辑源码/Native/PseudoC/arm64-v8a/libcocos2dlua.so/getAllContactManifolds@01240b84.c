
/* btCompoundCollisionAlgorithm::getAllContactManifolds(btAlignedObjectArray<btPersistentManifold*>&)
    */

void __thiscall
btCompoundCollisionAlgorithm::getAllContactManifolds
          (btCompoundCollisionAlgorithm *this,btAlignedObjectArray *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = *(int *)(this + 0x14);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(this + 0x20) + lVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
        iVar2 = *(int *)(this + 0x14);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}

