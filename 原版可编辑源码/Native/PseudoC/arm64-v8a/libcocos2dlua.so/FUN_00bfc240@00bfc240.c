
int FUN_00bfc240(long param_1,long *param_2,ulong *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == (ulong *)0x0) {
    uVar3 = *(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc;
    if ((uVar3 == 0) || (uVar2 = *(ulong *)(uVar3 + 0xa8), uVar2 == *(ulong *)(uVar3 + 0xb0))) {
      return -1;
    }
  }
  else {
    uVar2 = *param_3;
    if ((uVar2 & 3) != 0) {
      if ((uVar2 & 7) != 2) {
        uVar3 = *(ulong *)(param_1 + 0x50);
        puVar4 = (ulong *)(*(long *)(param_1 + 0x20) + -8);
        do {
          uVar3 = uVar3 & 0xfffffffffffffffc;
          if (uVar3 == 0) {
            return -1;
          }
          iVar1 = *(int *)(uVar3 + 200);
          while ((-1 < iVar1 || ((ulong *)(*(long *)(param_1 + 0x38) + (long)-iVar1) <= puVar4))) {
            if (puVar4 < param_3) {
              uVar2 = *(ulong *)(uVar3 + 0xa8);
              goto LAB_00bfc2a4;
            }
            uVar2 = *puVar4;
            if ((uVar2 & 3) == 0) {
              puVar4 = puVar4 + -((ulong)*(byte *)(uVar2 - 3) + 2);
            }
            else {
              if (((uVar2 & 3) == 1) || (((uVar2 & 7) == 2 && (puVar4[-3] == 1)))) {
                uVar3 = *(ulong *)(uVar3 + 0xa0) & 0xfffffffffffffffc;
              }
              puVar4 = (ulong *)((long)puVar4 - (uVar2 & 0xfffffffffffffff8));
              if (uVar3 == 0) {
                return -1;
              }
              iVar1 = *(int *)(uVar3 + 200);
            }
          }
          uVar3 = *(ulong *)(uVar3 + 0xa0);
        } while( true );
      }
      iVar1 = (int)((long)(param_3[-2] - *param_2) >> 2);
      goto LAB_00bfc2b4;
    }
  }
LAB_00bfc2a4:
  iVar1 = (int)((long)(uVar2 - *param_2) >> 2);
LAB_00bfc2b4:
  return iVar1 + -1;
}

