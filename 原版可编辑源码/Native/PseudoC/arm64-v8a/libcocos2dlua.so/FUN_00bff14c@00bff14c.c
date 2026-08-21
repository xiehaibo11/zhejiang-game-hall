
uint FUN_00bff14c(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  
  pcVar8 = (char *)*param_1;
  pcVar12 = (char *)param_1[1];
  param_1[2] = (long)pcVar8;
  if (pcVar8 < pcVar12) {
    iVar7 = (int)pcVar8;
    pcVar5 = pcVar8;
    if (*pcVar8 == '%') {
      bVar2 = pcVar8[1];
      if (bVar2 != 0x25) {
LAB_00bff1f0:
        uVar6 = (uint)bVar2;
        pbVar9 = (byte *)(pcVar8 + 1);
        if (uVar6 - 0x20 < 0x11) {
          uVar10 = 0;
          uVar11 = uVar6;
          do {
            uVar6 = uVar11;
            if (uVar6 == 0x2d) {
              uVar10 = uVar10 | 0x100;
            }
            else if (uVar6 == 0x2b) {
              uVar10 = uVar10 | 0x200;
            }
            else if (uVar6 == 0x30) {
              uVar10 = uVar10 | 0x400;
            }
            else if (uVar6 == 0x20) {
              uVar10 = uVar10 | 0x800;
            }
            else {
              if (uVar6 != 0x23) break;
              uVar10 = uVar10 | 0x1000;
            }
            pbVar9 = pbVar9 + 1;
            uVar6 = (uint)*pbVar9;
            uVar11 = (uint)*pbVar9;
          } while (uVar6 - 0x20 < 0x11);
        }
        else {
          uVar10 = 0;
        }
        uVar6 = uVar6 - 0x30;
        if (uVar6 < 10) {
          bVar2 = pbVar9[1];
          if (bVar2 - 0x30 < 10) {
            uVar11 = (uint)pbVar9[2];
            pbVar9 = pbVar9 + 2;
            uVar10 = uVar10 | ((uint)bVar2 + uVar6 * 10 + -0x30) * 0x10000;
          }
          else {
            pbVar9 = pbVar9 + 1;
            uVar11 = (uint)bVar2;
            uVar10 = uVar10 | uVar6 * 0x10000;
          }
        }
        else {
          uVar11 = (uint)*pbVar9;
        }
        if (uVar11 == 0x2e) {
          pbVar1 = pbVar9 + 1;
          uVar11 = (uint)*pbVar1;
          uVar6 = uVar11 - 0x30;
          if (uVar6 < 10) {
            bVar2 = pbVar9[2];
            if (bVar2 - 0x30 < 10) {
              uVar11 = (uint)pbVar9[3];
              pbVar9 = pbVar9 + 3;
              uVar10 = uVar10 | ((bVar2 - 0x2f) + uVar6 * 10) * 0x1000000;
            }
            else {
              uVar11 = (uint)bVar2;
              pbVar9 = pbVar9 + 2;
              uVar10 = uVar10 | (*pbVar1 - 0x2f) * 0x1000000;
            }
          }
          else {
            pbVar9 = pbVar9 + 1;
            uVar10 = uVar10 | 0x1000000;
          }
        }
        uVar6 = uVar11 - 0x41;
        if ((uVar6 < 0x38) && (bVar2 = (&DAT_01410020)[uVar6], bVar2 != 0)) {
          uVar11 = 0;
          if ((uVar6 & 0x20) == 0) {
            uVar11 = 0x2000;
          }
          *param_1 = (long)(pbVar9 + 1);
          return bVar2 | uVar10 | uVar11;
        }
        *param_1 = (long)pcVar12;
        if (0x1f < uVar11) {
          pbVar9 = pbVar9 + 1;
        }
        *(int *)(param_1 + 3) = (int)pbVar9 - (int)pcVar8;
        return 1;
      }
    }
    else {
      do {
        pcVar4 = pcVar5;
        pcVar5 = pcVar4 + 1;
        if (pcVar5 == pcVar12) {
          iVar7 = (int)pcVar12 - iVar7;
          pcVar8 = pcVar12;
          goto LAB_00bff190;
        }
      } while (*pcVar5 != '%');
      bVar2 = pcVar4[2];
      if (bVar2 != 0x25) {
        bVar3 = pcVar8 == pcVar5;
        pcVar8 = pcVar5;
        if (bVar3) goto LAB_00bff1f0;
        iVar7 = (int)pcVar5 - iVar7;
        goto LAB_00bff190;
      }
    }
    iVar7 = ((int)pcVar5 + 1) - iVar7;
    *param_1 = (long)(pcVar5 + 2);
  }
  else {
    iVar7 = 0;
LAB_00bff190:
    *param_1 = (long)pcVar8;
  }
  *(int *)(param_1 + 3) = iVar7;
  uVar6 = 0;
  if (iVar7 != 0) {
    uVar6 = 2;
  }
  return uVar6;
}

