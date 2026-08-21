
void FUN_00da0d38(long param_1,long param_2,uint param_3,long *param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  int iVar7;
  
  if (0 < param_5) {
    uVar3 = *(uint *)(param_1 + 0x38);
    if (0 < (int)uVar3) {
      iVar2 = *(int *)(param_1 + 0x88);
      do {
        if (iVar2 != 0) {
          uVar4 = 0;
          do {
            lVar6 = *param_4;
            puVar5 = *(undefined1 **)(*(long *)(param_2 + uVar4 * 8) + (ulong)param_3 * 8);
            iVar7 = iVar2;
            do {
              iVar7 = iVar7 + -1;
              *(undefined1 *)(uVar4 + lVar6) = *puVar5;
              lVar6 = lVar6 + (int)uVar3;
              puVar5 = puVar5 + 1;
            } while (iVar7 != 0);
            uVar4 = uVar4 + 1;
          } while (uVar4 != uVar3);
        }
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        bVar1 = 1 < param_5;
        param_5 = param_5 + -1;
      } while (bVar1);
    }
  }
  return;
}

