
int FUN_0114333c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 < 1) {
    iVar6 = 0;
  }
  else {
    iVar11 = 0;
    iVar9 = 0;
    iVar6 = 0;
    puVar1 = param_2 + 0x13;
    do {
      iVar3 = FUN_011402a4(param_2 + 6,iVar2 - iVar11,
                           *(long *)(param_1 + 0x18) + (long)(*(int *)(param_1 + 0x30) * iVar11));
      iVar8 = (iVar2 + 1 >> 1) - iVar9;
      iVar4 = FUN_01140284(puVar1,iVar8);
      if (iVar4 != 0) {
        iVar4 = FUN_011402a4(puVar1,iVar8,
                             *(long *)(param_1 + 0x20) +
                             (long)*(int *)(param_1 + 0x34) * (long)iVar9);
        FUN_011402a4(param_2 + 0x20,iVar8,
                     *(long *)(param_1 + 0x28) + (long)*(int *)(param_1 + 0x34) * (long)iVar9);
        iVar9 = iVar4 + iVar9;
      }
      iVar11 = iVar3 + iVar11;
      iVar8 = 0;
      if (*(int *)(param_2 + 0xe) < *(int *)(param_2 + 0xd)) {
        puVar10 = (uint *)*param_2;
        pcVar5 = *(code **)(&DAT_01796260 + (ulong)*puVar10 * 8);
        lVar7 = *(long *)(puVar10 + 4) +
                (long)(int)puVar10[6] * ((long)*(int *)(param_2 + 4) + (long)iVar6);
        do {
          if (((0 < *(int *)(param_2 + 9)) || (*(int *)(param_2 + 0x1a) <= *(int *)(param_2 + 0x1b))
              ) || (0 < *(int *)(param_2 + 0x16))) break;
          FUN_01150bfc(param_2 + 6);
          FUN_01150bfc(puVar1);
          FUN_01150bfc(param_2 + 0x20);
          (*pcVar5)(param_2[0xf],param_2[0x1c],param_2[0x29],lVar7,
                    *(undefined4 *)((long)param_2 + 100));
          iVar8 = iVar8 + 1;
          lVar7 = lVar7 + (int)puVar10[6];
        } while (*(int *)(param_2 + 0xe) < *(int *)(param_2 + 0xd));
      }
      iVar6 = iVar8 + iVar6;
    } while (iVar11 < iVar2);
  }
  return iVar6;
}

