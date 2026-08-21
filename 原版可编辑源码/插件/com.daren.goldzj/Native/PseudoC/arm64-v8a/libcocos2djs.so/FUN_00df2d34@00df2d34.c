
void FUN_00df2d34(long param_1,int param_2,int param_3,byte *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  uVar4 = 8 >> (ulong)(uVar2 & 0x1f);
  if ((int)uVar4 < 8) {
    if ((param_2 < param_3) && (0 < iVar3)) {
      do {
        lVar7 = 0;
        uVar8 = 0;
        pbVar5 = param_4;
        do {
          param_4 = pbVar5;
          if (((uint)lVar7 & (1 << (ulong)(uVar2 & 0x1f)) - 1U) == 0) {
            param_4 = pbVar5 + 1;
            uVar8 = (uint)*pbVar5;
          }
          uVar1 = uVar8 & (1 << (ulong)(uVar4 & 0x1f)) - 1U;
          uVar8 = uVar8 >> (ulong)(uVar4 & 0x1f);
          *(char *)(param_5 + lVar7) = (char)((uint)*(undefined4 *)(lVar6 + (ulong)uVar1 * 4) >> 8);
          lVar7 = lVar7 + 1;
          pbVar5 = param_4;
        } while (iVar3 != (int)lVar7);
        param_2 = param_2 + 1;
        param_5 = param_5 + (ulong)(iVar3 - 1) + 1;
      } while (param_2 != param_3);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00df2de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_01d54648)(param_4,lVar6,param_5,param_2,param_3);
  return;
}

