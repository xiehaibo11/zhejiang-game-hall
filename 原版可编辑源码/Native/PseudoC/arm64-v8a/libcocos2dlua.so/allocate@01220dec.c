
/* btUnionFind::allocate(int) */

void __thiscall btUnionFind::allocate(btUnionFind *this,int param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  iVar2 = *(int *)(this + 4);
  if (iVar2 < param_1) {
    lVar5 = (long)iVar2;
    if (*(int *)(this + 8) < param_1) {
      if (param_1 == 0) {
        lVar1 = 0;
      }
      else {
        lVar1 = btAlignedAllocInternal
                          (-(ulong)((uint)param_1 >> 0x1f) & 0xfffffff800000000 |
                           (ulong)(uint)param_1 << 3,0x10);
        iVar2 = *(int *)(this + 4);
      }
      if (0 < iVar2) {
        lVar3 = 0;
        do {
          lVar4 = lVar3 * 8;
          lVar3 = lVar3 + 1;
          *(undefined8 *)(lVar1 + lVar4) = *(undefined8 *)(*(long *)(this + 0x10) + lVar4);
        } while (iVar2 != lVar3);
      }
      if (*(void **)(this + 0x10) != (void *)0x0) {
        if (this[0x18] != (btUnionFind)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0x10));
        }
        *(undefined8 *)(this + 0x10) = 0;
      }
      *(long *)(this + 0x10) = lVar1;
      this[0x18] = (btUnionFind)0x1;
      *(int *)(this + 8) = param_1;
    }
    do {
      *(undefined8 *)(*(long *)(this + 0x10) + lVar5 * 8) = 0;
      lVar5 = lVar5 + 1;
    } while (param_1 != lVar5);
  }
  *(int *)(this + 4) = param_1;
  return;
}

