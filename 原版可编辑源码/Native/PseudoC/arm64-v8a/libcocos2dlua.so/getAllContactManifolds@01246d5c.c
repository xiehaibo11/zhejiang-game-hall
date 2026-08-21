
/* btConvexPlaneCollisionAlgorithm::getAllContactManifolds(btAlignedObjectArray<btPersistentManifold*>&)
    */

void __thiscall
btConvexPlaneCollisionAlgorithm::getAllContactManifolds
          (btConvexPlaneCollisionAlgorithm *this,btAlignedObjectArray *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(this + 0x18);
  if ((lVar3 != 0) && (this[0x10] != (btConvexPlaneCollisionAlgorithm)0x0)) {
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 == *(int *)(param_1 + 8)) {
      uVar1 = iVar2 << 1;
      if (iVar2 == 0) {
        uVar1 = 1;
      }
      if (iVar2 < (int)uVar1) {
        if (uVar1 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = btAlignedAllocInternal
                            (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10);
          iVar2 = *(int *)(param_1 + 4);
        }
        if (0 < iVar2) {
          lVar4 = 0;
          do {
            lVar5 = lVar4 * 8;
            lVar4 = lVar4 + 1;
            *(undefined8 *)(lVar3 + lVar5) = *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar5);
          } while (iVar2 != lVar4);
        }
        if (*(void **)(param_1 + 0x10) != (void *)0x0) {
          if (param_1[0x18] != (btAlignedObjectArray)0x0) {
            btAlignedFreeInternal(*(void **)(param_1 + 0x10));
            iVar2 = *(int *)(param_1 + 4);
          }
          *(undefined8 *)(param_1 + 0x10) = 0;
        }
        *(long *)(param_1 + 0x10) = lVar3;
        param_1[0x18] = (btAlignedObjectArray)0x1;
        *(uint *)(param_1 + 8) = uVar1;
        lVar3 = *(long *)(this + 0x18);
      }
    }
    *(long *)(*(long *)(param_1 + 0x10) + (long)iVar2 * 8) = lVar3;
    *(int *)(param_1 + 4) = iVar2 + 1;
  }
  return;
}

