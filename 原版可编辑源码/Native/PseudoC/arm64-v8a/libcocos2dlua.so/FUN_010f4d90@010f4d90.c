
void FUN_010f4d90(long param_1,long *param_2,long param_3,uint param_4,int param_5)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  int iVar8;
  
  if (0 < param_5) {
    uVar4 = *(uint *)(param_1 + 0x5c);
    if (0 < (int)uVar4) {
      iVar3 = *(int *)(param_1 + 0x30);
      do {
        if (iVar3 != 0) {
          uVar5 = 0;
          do {
            lVar6 = *param_2;
            puVar7 = *(undefined1 **)(*(long *)(param_3 + uVar5 * 8) + (ulong)param_4 * 8);
            iVar8 = iVar3;
            do {
              puVar2 = (undefined1 *)(uVar5 + lVar6);
              iVar8 = iVar8 + -1;
              lVar6 = lVar6 + (int)uVar4;
              *puVar7 = *puVar2;
              puVar7 = puVar7 + 1;
            } while (iVar8 != 0);
            uVar5 = uVar5 + 1;
          } while (uVar5 != uVar4);
        }
        param_2 = param_2 + 1;
        param_4 = param_4 + 1;
        bVar1 = 1 < param_5;
        param_5 = param_5 + -1;
      } while (bVar1);
    }
  }
  return;
}

