
/* btGhostObject::addOverlappingObjectInternal(btBroadphaseProxy*, btBroadphaseProxy*) */

void btGhostObject::addOverlappingObjectInternal
               (btBroadphaseProxy *param_1,btBroadphaseProxy *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  iVar2 = *(int *)(param_1 + 300);
  lVar6 = *(long *)param_2;
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x138) + lVar3 * 8) == lVar6) {
        if (iVar2 != (int)lVar3) {
          return;
        }
        break;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  if (iVar2 == *(int *)(param_1 + 0x130)) {
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
        iVar2 = *(int *)(param_1 + 300);
      }
      if (0 < iVar2) {
        lVar4 = 0;
        do {
          lVar5 = lVar4 * 8;
          lVar4 = lVar4 + 1;
          *(undefined8 *)(lVar3 + lVar5) = *(undefined8 *)(*(long *)(param_1 + 0x138) + lVar5);
        } while (iVar2 != lVar4);
      }
      if (*(void **)(param_1 + 0x138) != (void *)0x0) {
        if (param_1[0x140] != (btBroadphaseProxy)0x0) {
          btAlignedFreeInternal(*(void **)(param_1 + 0x138));
          iVar2 = *(int *)(param_1 + 300);
        }
        *(undefined8 *)(param_1 + 0x138) = 0;
      }
      *(long *)(param_1 + 0x138) = lVar3;
      param_1[0x140] = (btBroadphaseProxy)0x1;
      *(uint *)(param_1 + 0x130) = uVar1;
    }
  }
  *(long *)(*(long *)(param_1 + 0x138) + (long)iVar2 * 8) = lVar6;
  *(int *)(param_1 + 300) = iVar2 + 1;
  return;
}

