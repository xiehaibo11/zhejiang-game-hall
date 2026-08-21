
undefined8 FUN_0119a6a0(uint param_1,uint param_2,uint param_3,long param_4,long param_5)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar35;
  uint uVar40;
  
  iVar6 = 0;
  if ((int)(param_1 + 1) < (int)param_3) {
    iVar6 = param_1 + 1;
  }
  uVar32 = param_1;
  if ((int)param_1 < 1) {
    uVar32 = param_3;
  }
  pbVar2 = (byte *)(param_4 + ((ulong)*(ushort *)(param_5 + (long)(int)param_1 * 2) & 0x7fff) * 4);
  pbVar3 = (byte *)(param_4 + ((ulong)*(ushort *)(param_5 + (long)iVar6 * 2) & 0x7fff) * 4);
  pbVar4 = (byte *)(param_4 +
                   ((ulong)*(ushort *)(param_5 + (long)(int)(uVar32 - 1) * 2) & 0x7fff) * 4);
  pbVar5 = (byte *)(param_4 + ((ulong)*(ushort *)(param_5 + (long)(int)param_2 * 2) & 0x7fff) * 4);
  bVar7 = *pbVar2;
  bVar8 = pbVar2[2];
  bVar9 = pbVar3[2];
  bVar10 = *pbVar4;
  bVar11 = pbVar4[2];
  bVar12 = *pbVar3;
  bVar13 = *pbVar5;
  iVar6 = (uint)bVar13 - (uint)bVar7;
  uVar34 = (uint)bVar8;
  uVar37 = (uint)bVar13;
  uVar35 = (uint)bVar8;
  uVar32 = (uint)bVar7;
  if ((int)(((uint)bVar8 - (uint)bVar11) * ((uint)bVar12 - (uint)bVar10)) <
      (int)(((uint)bVar9 - (uint)bVar11) * ((uint)bVar7 - (uint)bVar10))) {
    bVar14 = pbVar5[2];
    uVar38 = (uint)bVar14;
    if (((int)((bVar14 - uVar35) * (bVar12 - uVar32)) < (int)(iVar6 * (bVar9 - uVar35))) ||
       ((int)((uVar34 - bVar14) * (bVar10 - uVar37)) <
        (int)(((uint)bVar11 - (uint)bVar14) * (uVar32 - uVar37)))) {
LAB_0119a77c:
      if (0 < (int)param_3) {
        iVar22 = uVar38 - uVar34;
        uVar30 = 0;
        do {
          uVar1 = uVar30 + 1;
          uVar26 = (uint)uVar1;
          if ((long)(int)param_3 <= (long)uVar1) {
            uVar26 = 0;
          }
          if ((((uVar26 != param_2) && (param_2 != uVar30)) && (param_1 != uVar30)) &&
             (uVar26 != param_1)) {
            pbVar2 = (byte *)(param_4 + ((ulong)*(ushort *)(param_5 + uVar30 * 2) & 0x7fff) * 4);
            bVar9 = *pbVar2;
            uVar33 = (uint)bVar7;
            iVar24 = uVar33 - bVar9;
            if (((iVar24 != 0) || (uVar34 != pbVar2[2])) &&
               ((iVar25 = uVar37 - bVar9, iVar25 != 0 || (pbVar2[2] != uVar38)))) {
              pbVar3 = (byte *)(param_4 +
                               ((ulong)*(ushort *)(param_5 + (ulong)uVar26 * 2) & 0x7fff) * 4);
              bVar10 = *pbVar3;
              if (((uVar33 != bVar10) || (uVar34 != pbVar3[2])) &&
                 ((uVar26 = (uint)bVar13, uVar26 != bVar10 || (uVar38 != pbVar3[2])))) {
                bVar11 = pbVar2[2];
                uVar27 = (uint)bVar9;
                iVar15 = iVar22 * (uVar27 - uVar33);
                uVar36 = (uint)bVar8;
                iVar16 = (bVar11 - uVar36) * iVar6;
                uVar31 = (uint)bVar11;
                uVar29 = (uint)bVar10;
                uVar28 = (uint)bVar9;
                if (iVar16 == iVar15) {
                  if (uVar33 == uVar26) {
                    if ((uVar35 < uVar31 || uVar36 == uVar31) && (uVar31 <= uVar38)) {
                      return 0;
                    }
                    if ((uVar31 <= uVar36) && (uVar38 <= uVar31)) {
                      return 0;
                    }
                  }
                  else {
                    if ((uVar33 <= uVar27) && (uVar28 <= uVar26)) {
                      return 0;
                    }
                    if ((uVar28 <= uVar33) && (uVar26 <= uVar28)) {
                      return 0;
                    }
                  }
                }
                else {
                  iVar17 = iVar22 * (uVar29 - uVar33);
                  iVar18 = (pbVar3[2] - uVar36) * iVar6;
                  if (iVar18 != iVar17) {
                    iVar23 = pbVar3[2] - uVar31;
                    iVar19 = (uVar35 - bVar11) * (uVar29 - uVar27);
                    iVar20 = iVar23 * iVar24;
                    if (iVar19 != iVar20) {
                      iVar21 = (uVar38 - uVar31) * (uVar29 - uVar27);
                      iVar23 = iVar23 * iVar25;
                      if (((iVar21 != iVar23) && (iVar16 < iVar15 != iVar18 < iVar17)) &&
                         (iVar19 < iVar20 != iVar21 < iVar23)) {
                        return 0;
                      }
                    }
                  }
                }
                bVar9 = pbVar3[2];
                uVar27 = (uint)bVar13;
                uVar33 = (uint)bVar10;
                uVar39 = (uint)bVar9;
                uVar40 = (uint)bVar9;
                if ((bVar9 - uVar36) * iVar6 == iVar22 * (uVar29 - uVar32)) {
                  if (uVar32 == uVar26) {
                    if ((uVar36 < bVar9 || uVar36 == uVar40) &&
                       (uVar40 < uVar38 || uVar39 == uVar38)) {
                      return 0;
                    }
                    if ((uVar39 <= uVar36) && (uVar38 <= uVar39)) {
                      return 0;
                    }
                  }
                  else {
                    if ((uVar32 <= uVar29) && (uVar29 <= uVar27)) {
                      return 0;
                    }
                    if ((uVar26 <= uVar29) && (uVar33 <= uVar32)) {
                      return 0;
                    }
                  }
                }
                if ((uVar35 - uVar31) * (uVar33 - uVar28) == (uVar39 - uVar31) * iVar24) {
                  if (uVar28 == uVar29) {
                    if ((uVar31 <= uVar35) && (uVar35 <= uVar40)) {
                      return 0;
                    }
                    if ((uVar35 <= uVar31) && (uVar39 <= uVar34)) {
                      return 0;
                    }
                  }
                  else {
                    if ((uVar28 <= uVar32) && (uVar32 < uVar29 || uVar32 == uVar33)) {
                      return 0;
                    }
                    if ((uVar32 <= uVar28) && (uVar33 <= uVar32)) {
                      return 0;
                    }
                  }
                }
                if ((uVar38 - uVar31) * (uVar33 - uVar28) == (uVar39 - uVar31) * iVar25) {
                  if (uVar28 == uVar29) {
                    if ((uVar31 <= uVar38) && (uVar38 < uVar39 || uVar38 == uVar40)) {
                      return 0;
                    }
                    if ((uVar38 <= uVar31) && (uVar40 <= uVar38)) {
                      return 0;
                    }
                  }
                  else {
                    if ((uVar28 < uVar26 || uVar28 == uVar27) &&
                       (uVar27 < uVar29 || uVar27 == uVar33)) {
                      return 0;
                    }
                    if ((uVar27 <= uVar28) && (uVar33 <= uVar37)) {
                      return 0;
                    }
                  }
                }
              }
            }
          }
          uVar30 = uVar1;
        } while (param_3 != uVar1);
      }
      return 1;
    }
  }
  else {
    uVar38 = (uint)pbVar5[2];
    if (((int)(iVar6 * ((uint)bVar11 - (uint)bVar8)) < (int)((uVar38 - uVar35) * (bVar10 - uVar32)))
       && ((int)((bVar9 - uVar38) * (uVar32 - bVar13)) <
           (int)((uVar35 - pbVar5[2]) * (bVar12 - uVar37)))) goto LAB_0119a77c;
  }
  return 0;
}

