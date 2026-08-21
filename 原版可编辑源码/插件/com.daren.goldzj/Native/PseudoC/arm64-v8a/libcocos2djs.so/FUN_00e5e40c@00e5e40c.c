
uint FUN_00e5e40c(long *param_1,uint *param_2,char param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  uint uVar18;
  
  lVar15 = param_1[3];
  uVar6 = (ulong)*(byte *)(lVar15 + 7) & 0xfe | (ulong)*(byte *)(lVar15 + 6) << 8;
  if ((int)uVar6 == 0) {
    return 0;
  }
  uVar11 = *param_2;
  if (param_3 != '\0') {
    uVar11 = uVar11 + 1;
  }
  if (uVar11 >> 0x10 != 0) {
    return 0;
  }
  lVar14 = *param_1;
  uVar8 = (uint)(uVar6 >> 1);
  puVar16 = (undefined1 *)(lVar15 + 0xe);
  puVar17 = (undefined1 *)(lVar15 + uVar6 + 0x10);
  pbVar2 = (byte *)(*(long *)(lVar14 + 0x330) + *(long *)(lVar14 + 0x338));
  uVar13 = 0;
  while( true ) {
    uVar18 = (uint)CONCAT11(*puVar17,puVar17[1]);
    uVar12 = uVar11;
    if (uVar11 < uVar18) {
      uVar12 = uVar18;
    }
    if ((param_3 == '\0') && (uVar11 < uVar18)) break;
    uVar9 = (uint)CONCAT11(*puVar16,puVar16[1]);
    pbVar3 = puVar17 + uVar6;
    pbVar4 = pbVar3 + uVar6;
    if ((uVar9 == 0xffff) && ((uVar8 - 1 <= uVar13 && (uVar18 == 0xffff)))) {
      while (uVar11 = uVar12, uVar12 >> 0x10 == 0) {
        uVar18 = (int)(short)((ushort)*pbVar3 << 8) | (uint)pbVar3[1];
        uVar9 = (uint)CONCAT11(*pbVar4,pbVar4[1]);
        if (uVar9 == 0) {
LAB_00e5e594:
          uVar9 = uVar18 + uVar12;
          uVar10 = uVar9 & 0xffff;
          if (param_3 == '\0') goto joined_r0x00e5e768;
          if (*(uint *)(lVar14 + 0x20) <= uVar10) {
            if ((int)uVar9 < 0) {
              uVar10 = 0;
              uVar11 = -uVar18;
            }
            else {
              if ((0xffff < (int)uVar9) || ((int)uVar18 < 1)) break;
              uVar10 = 0;
              uVar11 = 0x10000 - uVar18;
            }
          }
        }
        else {
          if (pbVar2 < pbVar4 + (ulong)CONCAT11(*pbVar4,pbVar4[1]) + 2) {
            uVar18 = 1;
            uVar9 = 0;
          }
          if (uVar9 == 0) goto LAB_00e5e594;
          if ((uVar9 == 0xffff) ||
             ((pbVar5 = pbVar4 + ((uVar9 + uVar12 * 2) - 0x1fffe), param_3 != '\0' &&
              (pbVar2 < pbVar5)))) break;
          uVar10 = 0;
          if ((CONCAT11(*pbVar5,pbVar5[1]) != 0) &&
             (uVar10 = CONCAT11(*pbVar5,pbVar5[1]) + uVar18 & 0xffff,
             *(uint *)(lVar14 + 0x20) <= uVar10)) {
            uVar10 = 0;
          }
        }
        uVar12 = uVar11;
        if ((param_3 == '\0') || (uVar10 != 0)) goto joined_r0x00e5e768;
        if (0xfffe < uVar11) goto LAB_00e5e730;
        uVar12 = uVar11 + 1;
      }
    }
    else {
      while (uVar11 = uVar12, uVar12 <= uVar9) {
        uVar10 = (uint)CONCAT11(*pbVar4,pbVar4[1]);
        uVar7 = (int)(short)((ushort)*pbVar3 << 8) | (uint)pbVar3[1];
        if (uVar10 == 0) {
          uVar1 = uVar12 + uVar7;
          uVar10 = uVar1 & 0xffff;
          if (param_3 == '\0') goto joined_r0x00e5e768;
          if (*(uint *)(lVar14 + 0x20) <= uVar10) {
            if (((int)uVar1 < 0) && (-1 < (int)(uVar9 + uVar7))) {
              uVar10 = 0;
              uVar11 = -uVar7;
            }
            else {
              if ((0xffff < (int)uVar1) || ((int)(uVar9 + uVar7) < 0x10000)) break;
              uVar10 = 0;
              uVar11 = 0x10000 - uVar7;
            }
          }
        }
        else {
          if ((uVar10 == 0xffff) ||
             ((pbVar5 = pbVar4 + (uVar10 + (uVar12 - uVar18) * 2), param_3 != '\0' &&
              (pbVar2 < pbVar5)))) break;
          uVar10 = 0;
          if ((CONCAT11(*pbVar5,pbVar5[1]) != 0) &&
             (uVar10 = CONCAT11(*pbVar5,pbVar5[1]) + uVar7 & 0xffff,
             *(uint *)(lVar14 + 0x20) <= uVar10)) {
            uVar10 = 0;
          }
        }
        uVar12 = uVar11;
        if ((param_3 == '\0') || (uVar10 != 0)) goto joined_r0x00e5e768;
        if (0xfffe < uVar11) goto LAB_00e5e730;
        uVar12 = uVar11 + 1;
      }
    }
    uVar13 = uVar13 + 1;
    puVar16 = puVar16 + 2;
    puVar17 = puVar17 + 2;
    if (uVar8 <= uVar13) break;
  }
LAB_00e5e730:
  uVar10 = 0;
  uVar12 = uVar11;
joined_r0x00e5e768:
  if (param_3 != '\0') {
    *param_2 = uVar12;
  }
  return uVar10;
}

