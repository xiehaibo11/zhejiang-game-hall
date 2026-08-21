
void FUN_012365dc(long param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if ((param_4 == 0) || (*(long *)(param_2 + 0x30) == 0)) {
    iVar3 = *(int *)(param_3 + 4);
    if (iVar3 == *(int *)(param_3 + 8)) {
      uVar1 = iVar3 << 1;
      if (iVar3 == 0) {
        uVar1 = 1;
      }
      if (iVar3 < (int)uVar1) {
        if (uVar1 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = btAlignedAllocInternal
                            (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10);
          iVar3 = *(int *)(param_3 + 4);
        }
        if (0 < iVar3) {
          lVar4 = 0;
          do {
            lVar5 = lVar4 * 8;
            lVar4 = lVar4 + 1;
            *(undefined8 *)(lVar2 + lVar5) = *(undefined8 *)(*(long *)(param_3 + 0x10) + lVar5);
          } while (iVar3 != lVar4);
        }
        if (*(void **)(param_3 + 0x10) != (void *)0x0) {
          if (*(char *)(param_3 + 0x18) != '\0') {
            btAlignedFreeInternal(*(void **)(param_3 + 0x10));
            iVar3 = *(int *)(param_3 + 4);
          }
          *(undefined8 *)(param_3 + 0x10) = 0;
        }
        *(long *)(param_3 + 0x10) = lVar2;
        *(undefined1 *)(param_3 + 0x18) = 1;
        *(uint *)(param_3 + 8) = uVar1;
      }
    }
    *(long *)(*(long *)(param_3 + 0x10) + (long)iVar3 * 8) = param_2;
    *(int *)(param_3 + 4) = iVar3 + 1;
  }
  else {
    FUN_012365dc(param_1,*(undefined8 *)(param_2 + 0x28),param_3,param_4 + -1);
    FUN_012365dc(param_1,*(undefined8 *)(param_2 + 0x30),param_3,param_4 + -1);
    btAlignedFreeInternal(*(void **)(param_1 + 8));
    *(long *)(param_1 + 8) = param_2;
  }
  return;
}

