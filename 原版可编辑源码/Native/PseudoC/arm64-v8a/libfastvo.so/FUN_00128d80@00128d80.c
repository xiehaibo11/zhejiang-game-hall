
ulong FUN_00128d80(long param_1,ulong param_2,long param_3,int *param_4,long param_5,int *param_6)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  short *psVar23;
  long lVar24;
  ulong uVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  uint uVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  uint uVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  short sVar62;
  short sVar64;
  short sVar65;
  undefined8 uVar63;
  short sVar66;
  short sVar67;
  short sVar69;
  short sVar70;
  undefined8 uVar68;
  short sVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  
  lVar4 = *(long *)(param_1 + 0x40);
  lVar5 = *(long *)(param_1 + 0x48);
  lVar18 = (param_2 & 0xffffffff) * 4;
  iVar6 = *param_4;
  iVar19 = *(int *)(lVar4 + lVar18);
  uVar20 = *(uint *)(lVar5 + lVar18);
  if (iVar19 < iVar6) {
    iVar2 = *(int *)(param_1 + 0x24);
    iVar3 = *(int *)(param_1 + 0x28);
    uVar7 = *(uint *)(param_1 + 0x18);
    uVar21 = (ulong)uVar7;
    uVar8 = *(uint *)(param_1 + 0xc);
    iVar10 = *(int *)(param_1 + 0x7c);
    iVar11 = *param_6;
    uVar17 = uVar21 & 0xfffffff8;
    uVar16 = 0;
    do {
      if ((long)iVar11 <= (long)uVar16) {
        uVar25 = uVar16 & 0xffffffff;
        break;
      }
      iVar9 = *(int *)(param_1 + 0x30);
      uVar14 = 0;
      if (uVar8 != 0) {
        uVar14 = (iVar9 * uVar20) / uVar8;
      }
      uVar13 = 0;
      if (uVar8 != 0) {
        uVar13 = (int)(((int)(uVar8 << 0x10) >> 0x11) + (iVar9 * uVar20 - uVar14 * uVar8) * 0x8000)
                 / (int)uVar8;
      }
      if ((int)uVar7 < 1) {
        uVar32 = 0;
        uVar42 = 0;
        uVar37 = 0;
        uVar27 = 0;
      }
      else {
        lVar22 = *(long *)(param_1 + 0x60);
        if (uVar7 < 8) {
          uVar27 = 0;
          uVar37 = 0;
          uVar42 = 0;
          uVar32 = 0;
          uVar25 = 0;
        }
        else {
          uVar42 = 0;
          if (uVar8 != 0) {
            uVar42 = uVar20 / uVar8;
          }
          uVar37 = (uint)(uVar21 - 1);
          uVar27 = 0;
          uVar25 = 0;
          if ((((iVar9 != 1) || (CARRY4(3 - uVar42,uVar37))) || (uVar21 - 1 >> 0x20 != 0)) ||
             (((CARRY4(4 - uVar42,uVar37) || (CARRY4(5 - uVar42,uVar37))) ||
              (CARRY4(6 - uVar42,uVar37))))) {
            uVar37 = 0;
            uVar42 = 0;
            uVar32 = 0;
          }
          else {
            uVar42 = 0;
            iVar26 = 0;
            iVar28 = 0;
            iVar29 = 0;
            iVar30 = 0;
            iVar31 = 0;
            iVar33 = 0;
            iVar34 = 0;
            iVar35 = 0;
            puVar15 = (undefined8 *)(param_3 + 8 + (long)iVar19 * 2);
            iVar36 = 0;
            iVar38 = 0;
            iVar39 = 0;
            iVar40 = 0;
            iVar41 = 0;
            iVar43 = 0;
            iVar44 = 0;
            iVar45 = 0;
            iVar46 = 0;
            iVar47 = 0;
            iVar48 = 0;
            iVar49 = 0;
            iVar50 = 0;
            iVar51 = 0;
            iVar52 = 0;
            iVar53 = 0;
            iVar54 = 0;
            iVar55 = 0;
            iVar56 = 0;
            iVar57 = 0;
            iVar58 = 0;
            iVar59 = 0;
            iVar60 = 0;
            iVar61 = 0;
            uVar25 = uVar17;
            do {
              uVar27 = (4 - uVar14) + (uVar42 | 1);
              puVar1 = (undefined8 *)(lVar22 + (ulong)uVar27 * 2);
              uVar63 = puVar15[-1];
              uVar68 = *puVar15;
              uVar72 = *puVar1;
              uVar73 = puVar1[1];
              puVar1 = (undefined8 *)(lVar22 + (ulong)(uVar27 - 2) * 2);
              uVar42 = uVar42 + 8;
              sVar62 = (short)uVar63;
              sVar64 = (short)((ulong)uVar63 >> 0x10);
              sVar65 = (short)((ulong)uVar63 >> 0x20);
              sVar66 = (short)((ulong)uVar63 >> 0x30);
              iVar46 = iVar46 + (int)(short)uVar72 * (int)sVar62;
              iVar47 = iVar47 + (int)(short)((ulong)uVar72 >> 0x10) * (int)sVar64;
              iVar48 = iVar48 + (int)(short)((ulong)uVar72 >> 0x20) * (int)sVar65;
              iVar49 = iVar49 + (int)(short)((ulong)uVar72 >> 0x30) * (int)sVar66;
              sVar67 = (short)uVar68;
              sVar69 = (short)((ulong)uVar68 >> 0x10);
              sVar70 = (short)((ulong)uVar68 >> 0x20);
              sVar71 = (short)((ulong)uVar68 >> 0x30);
              iVar50 = iVar50 + (int)(short)uVar73 * (int)sVar67;
              iVar51 = iVar51 + (int)(short)((ulong)uVar73 >> 0x10) * (int)sVar69;
              iVar52 = iVar52 + (int)(short)((ulong)uVar73 >> 0x20) * (int)sVar70;
              iVar53 = iVar53 + (int)(short)((ulong)uVar73 >> 0x30) * (int)sVar71;
              uVar63 = *puVar1;
              uVar68 = puVar1[1];
              puVar1 = (undefined8 *)(lVar22 + (ulong)(uVar27 - 1) * 2);
              iVar26 = iVar26 + (int)(short)uVar63 * (int)sVar62;
              iVar28 = iVar28 + (int)(short)((ulong)uVar63 >> 0x10) * (int)sVar64;
              iVar29 = iVar29 + (int)(short)((ulong)uVar63 >> 0x20) * (int)sVar65;
              iVar30 = iVar30 + (int)(short)((ulong)uVar63 >> 0x30) * (int)sVar66;
              iVar31 = iVar31 + (int)(short)uVar68 * (int)sVar67;
              iVar33 = iVar33 + (int)(short)((ulong)uVar68 >> 0x10) * (int)sVar69;
              iVar34 = iVar34 + (int)(short)((ulong)uVar68 >> 0x20) * (int)sVar70;
              iVar35 = iVar35 + (int)(short)((ulong)uVar68 >> 0x30) * (int)sVar71;
              uVar63 = *puVar1;
              uVar68 = puVar1[1];
              puVar1 = (undefined8 *)(lVar22 + (ulong)(uVar27 + 1) * 2);
              uVar25 = uVar25 - 8;
              puVar15 = puVar15 + 2;
              iVar36 = iVar36 + (int)(short)uVar63 * (int)sVar62;
              iVar38 = iVar38 + (int)(short)((ulong)uVar63 >> 0x10) * (int)sVar64;
              iVar39 = iVar39 + (int)(short)((ulong)uVar63 >> 0x20) * (int)sVar65;
              iVar40 = iVar40 + (int)(short)((ulong)uVar63 >> 0x30) * (int)sVar66;
              iVar41 = iVar41 + (int)(short)uVar68 * (int)sVar67;
              iVar43 = iVar43 + (int)(short)((ulong)uVar68 >> 0x10) * (int)sVar69;
              iVar44 = iVar44 + (int)(short)((ulong)uVar68 >> 0x20) * (int)sVar70;
              iVar45 = iVar45 + (int)(short)((ulong)uVar68 >> 0x30) * (int)sVar71;
              uVar63 = *puVar1;
              uVar68 = puVar1[1];
              iVar54 = iVar54 + (int)(short)uVar63 * (int)sVar62;
              iVar55 = iVar55 + (int)(short)((ulong)uVar63 >> 0x10) * (int)sVar64;
              iVar56 = iVar56 + (int)(short)((ulong)uVar63 >> 0x20) * (int)sVar65;
              iVar57 = iVar57 + (int)(short)((ulong)uVar63 >> 0x30) * (int)sVar66;
              iVar58 = iVar58 + (int)(short)uVar68 * (int)sVar67;
              iVar59 = iVar59 + (int)(short)((ulong)uVar68 >> 0x10) * (int)sVar69;
              iVar60 = iVar60 + (int)(short)((ulong)uVar68 >> 0x20) * (int)sVar70;
              iVar61 = iVar61 + (int)(short)((ulong)uVar68 >> 0x30) * (int)sVar71;
            } while (uVar25 != 0);
            uVar32 = iVar58 + iVar54 + iVar59 + iVar55 + iVar60 + iVar56 + iVar61 + iVar57;
            uVar42 = iVar50 + iVar46 + iVar51 + iVar47 + iVar52 + iVar48 + iVar53 + iVar49;
            uVar37 = iVar41 + iVar36 + iVar43 + iVar38 + iVar44 + iVar39 + iVar45 + iVar40;
            uVar27 = iVar31 + iVar26 + iVar33 + iVar28 + iVar34 + iVar29 + iVar35 + iVar30;
            uVar25 = uVar17;
            if (uVar17 == uVar21) goto LAB_00129018;
          }
        }
        lVar24 = uVar21 - uVar25;
        psVar23 = (short *)(param_3 + (uVar25 + (long)iVar19) * 2);
        do {
          uVar25 = uVar25 + 1;
          uVar12 = (4 - uVar14) + iVar9 * (int)uVar25;
          sVar62 = *psVar23;
          lVar24 = lVar24 + -1;
          uVar42 = uVar42 + (int)*(short *)(lVar22 + (ulong)uVar12 * 2) * (int)sVar62;
          uVar27 = uVar27 + (int)*(short *)(lVar22 + (ulong)(uVar12 - 2) * 2) * (int)sVar62;
          uVar37 = uVar37 + (int)*(short *)(lVar22 + (ulong)(uVar12 - 1) * 2) * (int)sVar62;
          uVar32 = uVar32 + (int)*(short *)(lVar22 + (ulong)(uVar12 + 1) * 2) * (int)sVar62;
          psVar23 = psVar23 + 1;
        } while (lVar24 != 0);
      }
LAB_00129018:
      iVar28 = (int)(short)uVar13;
      uVar14 = -(uVar13 >> 0xf & 1) & 0xfffe0000 | (uVar13 & 0xffff) << 1;
      iVar9 = (int)(uVar14 * iVar28 + 0x8000) >> 0x10;
      iVar26 = (int)(iVar9 * uVar14 + 0x8000) >> 0x10;
      uVar12 = iVar28 * -0x2aaa + iVar9 * 0x4000 + 0x4000 + iVar26 * -0x1555;
      uVar13 = uVar13 + ((uint)(iVar9 - iVar26) >> 1);
      iVar9 = (int)(uVar12 * 2) >> 0x10;
      uVar14 = iVar26 * 0x1555 + iVar28 * -0x1554 + 0x4000;
      uVar12 = ((0x7fff - (uVar12 >> 0xf)) - (uVar14 >> 0xf & 0xffff)) - (uVar13 & 0xffff);
      sVar62 = (short)uVar12;
      iVar19 = iVar19 + iVar2;
      iVar26 = (int)(short)uVar13;
      if ((uVar12 & 0xffff) != 0x7fff) {
        sVar62 = sVar62 + 1;
      }
      iVar28 = (int)(uVar14 * 2) >> 0x10;
      uVar20 = uVar20 + iVar3;
      uVar25 = uVar16 + 1;
      uVar14 = 0;
      if (uVar8 <= uVar20) {
        iVar19 = iVar19 + 1;
        uVar14 = uVar8;
      }
      *(short *)(param_5 + uVar16 * (long)iVar10 * 2) =
           (short)(((int)(uVar32 << 1) >> 0x10) * iVar9 + ((int)((uVar32 & 0x7fff) * iVar9) >> 0xf)
                   + ((int)((uVar42 & 0x7fff) * (int)sVar62) >> 0xf) +
                   ((int)(uVar42 << 1) >> 0x10) * (int)sVar62 +
                   ((int)((uVar37 & 0x7fff) * iVar26) >> 0xf) +
                   ((int)(uVar37 << 1) >> 0x10) * iVar26 +
                   ((int)((uVar27 & 0x7fff) * iVar28) >> 0xf) +
                   ((int)(uVar27 << 1) >> 0x10) * iVar28 + 0x4000U >> 0xf);
      uVar20 = uVar20 - uVar14;
      uVar16 = uVar25;
    } while (iVar19 < iVar6);
  }
  else {
    uVar25 = 0;
  }
  *(int *)(lVar4 + lVar18) = iVar19;
  *(uint *)(lVar5 + lVar18) = uVar20;
  return uVar25 & 0xffffffff;
}

