
void FUN_00e6b878(undefined8 *param_1,int param_2,int param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long local_168;
  long local_160 [32];
  
  if (0 < param_3) {
    lVar10 = 0;
    do {
      iVar5 = param_3;
      if (0xf < param_3) {
        iVar5 = 0x10;
      }
      lVar11 = (long)(iVar5 << 1);
      lVar6 = 0;
      do {
        lVar10 = *(long *)(param_4 + lVar6 * 8) + lVar10;
        lVar4 = FT_RoundFix(lVar10);
        lVar1 = lVar6 + 1;
        local_160[lVar6 + -1] = lVar4 >> 0x10;
        lVar6 = lVar1;
      } while (lVar1 < lVar11);
      lVar6 = lVar11;
      if (lVar11 < 3) {
        lVar6 = 2;
      }
      uVar2 = (lVar6 - 1U >> 1) + 1;
      if (uVar2 < 2) {
        lVar6 = 0;
LAB_00e6b970:
        do {
          lVar1 = lVar6 + 2;
          local_160[lVar6] = local_160[lVar6] - local_160[lVar6 + -1];
          lVar6 = lVar1;
        } while (lVar1 < lVar11);
      }
      else {
        uVar7 = uVar2 & 0xfffffffffffffffe;
        lVar6 = uVar7 << 1;
        uVar8 = uVar7;
        plVar9 = local_160 + 2;
        do {
          uVar8 = uVar8 - 2;
          plVar9[-2] = plVar9[-2] - plVar9[-3];
          *plVar9 = *plVar9 - plVar9[-1];
          plVar9 = plVar9 + 4;
        } while (uVar8 != 0);
        if (uVar2 != uVar7) goto LAB_00e6b970;
      }
      if (*(int *)(param_1 + 1) == 0) {
        plVar9 = &local_168;
        iVar12 = iVar5;
        do {
          iVar3 = FUN_00e6b624(param_1 + (ulong)(param_2 != 0) * 6 + 3,(int)*plVar9,(int)plVar9[1],
                               *param_1,0);
          if (iVar3 != 0) {
            *(int *)(param_1 + 1) = iVar3;
            break;
          }
          iVar12 = iVar12 + -1;
          plVar9 = plVar9 + 2;
        } while (0 < iVar12);
      }
      param_3 = param_3 - iVar5;
    } while (0 < param_3);
  }
  return;
}

