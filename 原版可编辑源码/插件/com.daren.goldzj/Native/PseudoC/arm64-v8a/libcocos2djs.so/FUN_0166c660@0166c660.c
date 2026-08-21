
void FUN_0166c660(ulong param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  FUN_0166c760(param_1,param_2[1],*param_3);
  lVar1 = *param_2;
  iVar4 = *(int *)(lVar1 + 0xc);
  lVar3 = *(long *)(param_2[1] + 0x10);
  if (iVar4 == 1) {
    *(long *)(lVar1 + 0x10) = lVar3;
  }
  else {
    uVar2 = *(uint *)(param_2[1] + 0xc);
    if (uVar2 == 1) {
      **(long **)(lVar1 + 0x10) = lVar3;
      if (1 < *(int *)(lVar1 + 0xc)) {
        lVar3 = 1;
        do {
          *(undefined8 *)(*(long *)(lVar1 + 0x10) + lVar3 * 8) = 0;
          lVar3 = lVar3 + 1;
        } while (lVar3 < *(int *)(lVar1 + 0xc));
      }
    }
    else {
      if (0 < (int)uVar2) {
        lVar5 = 0;
        do {
          *(undefined8 *)(*(long *)(lVar1 + 0x10) + lVar5) = *(undefined8 *)(lVar3 + lVar5);
          lVar5 = lVar5 + 8;
        } while ((ulong)uVar2 * 8 - lVar5 != 0);
        iVar4 = *(int *)(lVar1 + 0xc);
      }
      if ((int)uVar2 < iVar4) {
        lVar3 = (long)(int)uVar2;
        do {
          *(undefined8 *)(*(long *)(lVar1 + 0x10) + lVar3 * 8) = 0;
          lVar3 = lVar3 + 1;
        } while (lVar3 < *(int *)(lVar1 + 0xc));
      }
    }
  }
  FUN_0166cbec(param_1 & 0xffffffff,*param_2,param_4);
  *param_3 = *param_2;
  return;
}

