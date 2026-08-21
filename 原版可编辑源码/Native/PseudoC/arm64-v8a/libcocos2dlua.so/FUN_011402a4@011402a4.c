
int FUN_011402a4(long param_1,int param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < param_2) {
    do {
      if ((*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) && (*(int *)(param_1 + 0x18) < 1)) {
        return iVar6;
      }
      if (*(int *)(param_1 + 4) != 0) {
        uVar1 = *(undefined8 *)(param_1 + 0x58);
        *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 *)(param_1 + 0x60) = uVar1;
      }
      FUN_01150bdc(param_1,param_3);
      if ((*(int *)(param_1 + 4) == 0) && (0 < *(int *)(param_1 + 0x34) * *(int *)(param_1 + 8))) {
        lVar2 = *(long *)(param_1 + 0x58);
        lVar3 = *(long *)(param_1 + 0x60);
        lVar4 = 0;
        do {
          lVar5 = lVar4 * 4;
          lVar4 = lVar4 + 1;
          *(int *)(lVar2 + lVar5) = *(int *)(lVar2 + lVar5) + *(int *)(lVar3 + lVar5);
        } while (lVar4 < (long)*(int *)(param_1 + 0x34) * (long)*(int *)(param_1 + 8));
      }
      iVar6 = iVar6 + 1;
      param_3 = param_3 + param_4;
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x20);
    } while (iVar6 < param_2);
  }
  return iVar6;
}

