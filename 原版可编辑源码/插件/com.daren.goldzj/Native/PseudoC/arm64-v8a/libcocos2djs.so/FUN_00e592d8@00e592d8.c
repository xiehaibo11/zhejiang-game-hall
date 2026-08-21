
int FUN_00e592d8(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 *puVar15;
  ulong uVar16;
  
  iVar5 = 0;
  if ((9 < *(long *)(param_1 + 0x550)) && (iVar11 = *(int *)(param_1 + 0x558), iVar11 != 0)) {
    lVar14 = *(long *)(param_1 + 0x548);
    uVar1 = lVar14 + *(long *)(param_1 + 0x550);
    puVar15 = (undefined1 *)(lVar14 + 10);
    iVar5 = 0;
    uVar12 = 1;
    uVar13 = param_3 & 0xffffffff | (param_2 & 0xffffffff) << 0x10;
    uVar6 = lVar14 + 4;
    do {
      uVar16 = uVar6 + CONCAT11(*(undefined1 *)(uVar6 + 2),*(undefined1 *)(uVar6 + 3));
      uVar2 = uVar1;
      if (uVar16 <= uVar1) {
        uVar2 = uVar16;
      }
      if ((*(uint *)(param_1 + 0x55c) & uVar12) != 0) {
        uVar16 = (ulong)CONCAT11(*puVar15,*(undefined1 *)(uVar6 + 7));
        lVar14 = uVar2 - (uVar6 + 0xe);
        if (lVar14 < (long)(uVar16 * 6)) {
          auVar4 = SEXT816(lVar14) * SEXT816(0x2aaaaaaaaaaaaaab);
          uVar16 = (ulong)(uint)(auVar4._8_4_ - (auVar4._12_4_ >> 0x1f));
        }
        if (*(char *)(uVar6 + 4) == '\0') {
          if ((*(uint *)(param_1 + 0x560) & uVar12) == 0) {
            if ((int)uVar16 != 0) {
              pbVar7 = (byte *)(uVar6 + 0x13);
              do {
                if (((ulong)pbVar7[-5] << 0x18 | (ulong)pbVar7[-4] << 0x10 | (ulong)pbVar7[-3] << 8
                    | (ulong)pbVar7[-2]) == uVar13) {
                  pbVar9 = pbVar7 + -1;
                  goto LAB_00e59458;
                }
                uVar8 = (int)uVar16 - 1;
                uVar16 = (ulong)uVar8;
                pbVar7 = pbVar7 + 6;
              } while (uVar8 != 0);
            }
          }
          else if ((int)uVar16 != 0) {
            uVar8 = 0;
LAB_00e593bc:
            uVar3 = (uint)uVar16 + uVar8 >> 1;
            pbVar9 = (byte *)(uVar6 + 0x12 + (ulong)(uVar3 * 6));
            uVar10 = (ulong)pbVar9[-4] << 0x18 | (ulong)pbVar9[-3] << 0x10 | (ulong)pbVar9[-2] << 8
                     | (ulong)pbVar9[-1];
            if (uVar10 != uVar13) goto code_r0x00e593f8;
            pbVar7 = pbVar9 + 1;
LAB_00e59458:
            if ((*(byte *)(uVar6 + 5) & 8) != 0) {
              iVar5 = 0;
            }
            iVar5 = iVar5 + ((int)(short)((ushort)*pbVar9 << 8) | (uint)*pbVar7);
          }
        }
      }
joined_r0x00e59480:
      if (uVar1 < uVar2 + 6) {
        return iVar5;
      }
      puVar15 = (undefined1 *)(uVar2 + 6);
      iVar11 = iVar11 + -1;
      uVar12 = uVar12 << 1;
      uVar6 = uVar2;
    } while (iVar11 != 0);
  }
  return iVar5;
code_r0x00e593f8:
  if (uVar10 < uVar13) {
    uVar8 = uVar3 + 1;
    uVar3 = (uint)uVar16;
  }
  uVar16 = (ulong)uVar3;
  if (uVar3 <= uVar8) goto joined_r0x00e59480;
  goto LAB_00e593bc;
}

