
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void qmf_synth(long param_1,long param_2,long param_3,long param_4,int param_5,int param_6,
              long param_7,long param_8)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  short sVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined2 *puVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  ulong uVar25;
  long lVar26;
  undefined2 *puVar27;
  undefined8 *puVar28;
  int iVar29;
  long lVar30;
  int iVar31;
  int iVar32;
  long lVar33;
  int iVar34;
  long lVar35;
  short *psVar36;
  undefined2 uVar37;
  undefined2 uVar38;
  undefined2 uVar39;
  undefined2 uVar40;
  undefined2 uVar41;
  undefined2 uVar42;
  undefined2 uVar43;
  undefined2 uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined8 local_a0;
  long local_98;
  long local_90 [2];
  short *local_80;
  long local_78;
  int local_70;
  int local_6c;
  long local_68;
  
  local_90[0] = tpidr_el0;
  uVar4 = param_6 >> 1;
  uVar5 = param_5 >> 1;
  local_68 = *(long *)(local_90[0] + 0x28);
  uVar20 = (ulong)(uVar4 + uVar5) * 2 + 0xf & 0x3fffffff0;
  lVar1 = -uVar20;
  lVar16 = lVar1 + -0xa0;
  lVar17 = lVar16 - uVar20;
  if (1 < param_5) {
    uVar22 = (ulong)(int)uVar5;
    uVar20 = uVar22;
    if ((long)uVar22 < 2) {
      uVar20 = 1;
    }
    if (uVar20 < 0x10) {
      uVar25 = 0;
      iVar24 = 0;
    }
    else {
      uVar23 = uVar22;
      if ((long)uVar22 < 2) {
        uVar23 = 1;
      }
      uVar25 = 0;
      iVar24 = 0;
      if (((int)(uVar5 + ~(uint)(uVar23 - 1)) < (int)uVar5) && (iVar24 = 0, uVar23 - 1 >> 0x20 == 0)
         ) {
        uVar25 = uVar20 & 0x7ffffffffffffff0;
        iVar24 = (int)uVar25;
        puVar28 = (undefined8 *)((long)local_90 + lVar1);
        iVar29 = uVar5 - 1;
        uVar23 = uVar25;
        do {
          lVar26 = param_1 + (long)iVar29 * 2;
          uVar23 = uVar23 - 0x10;
          iVar29 = iVar29 + -0x10;
          auVar45._10_2_ = 0x504;
          auVar45._0_10_ = _DAT_00134b10;
          auVar45._12_2_ = 0x302;
          auVar45._14_2_ = 0x100;
          auVar45 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(lVar26 + -0xe),auVar45);
          auVar47._10_2_ = 0x504;
          auVar47._0_10_ = _DAT_00134b10;
          auVar47._12_2_ = 0x302;
          auVar47._14_2_ = 0x100;
          auVar47 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(lVar26 + -0x1e),auVar47);
          puVar28[-1] = auVar45._8_8_;
          puVar28[-2] = auVar45._0_8_;
          puVar28[1] = auVar47._8_8_;
          *puVar28 = auVar47._0_8_;
          puVar28 = puVar28 + 4;
        } while (uVar23 != 0);
        if (uVar20 == uVar25) goto LAB_0010b614;
      }
    }
    iVar24 = (uVar5 - 1) - iVar24;
    do {
      lVar26 = (long)iVar24;
      iVar24 = iVar24 + -1;
      *(undefined2 *)((long)&local_a0 + uVar25 * 2 + lVar16 + 0xa0) =
           *(undefined2 *)(param_1 + lVar26 * 2);
      uVar25 = uVar25 + 1;
    } while ((long)uVar25 < (long)uVar22);
  }
LAB_0010b614:
  if (1 < param_6) {
    uVar22 = (ulong)(int)uVar4;
    uVar20 = uVar22;
    if ((long)uVar22 < 2) {
      uVar20 = 1;
    }
    if (uVar20 < 0x11) {
      lVar26 = 0;
    }
    else {
      uVar23 = 0x10;
      if ((uVar20 & 0xf) != 0) {
        uVar23 = uVar20 & 0xf;
      }
      lVar26 = uVar20 - uVar23;
      puVar21 = (undefined2 *)(param_7 + 0x22);
      puVar28 = (undefined8 *)((long)local_90 + (long)(int)uVar5 * 2 + lVar16 + 0xa0);
      lVar19 = lVar26;
      do {
        uVar37 = *puVar21;
        uVar38 = puVar21[2];
        uVar39 = puVar21[4];
        uVar40 = puVar21[6];
        uVar41 = puVar21[8];
        uVar42 = puVar21[10];
        uVar43 = puVar21[0xc];
        uVar44 = puVar21[0xe];
        auVar46._0_8_ =
             CONCAT26(puVar21[-10],CONCAT24(puVar21[-0xc],CONCAT22(puVar21[-0xe],puVar21[-0x10])));
        auVar46._8_2_ = puVar21[-8];
        auVar46._10_2_ = puVar21[-6];
        auVar46._12_2_ = puVar21[-4];
        auVar46._14_2_ = puVar21[-2];
        puVar21 = puVar21 + 0x20;
        lVar19 = lVar19 + -0x10;
        puVar28[-1] = auVar46._8_8_;
        puVar28[-2] = auVar46._0_8_;
        puVar28[1] = CONCAT26(uVar44,CONCAT24(uVar43,CONCAT22(uVar42,uVar41)));
        *puVar28 = CONCAT26(uVar40,CONCAT24(uVar39,CONCAT22(uVar38,uVar37)));
        puVar28 = puVar28 + 4;
      } while (lVar19 != 0);
    }
    puVar21 = (undefined2 *)(param_7 + lVar26 * 4 + 2);
    do {
      *(undefined2 *)((long)&local_a0 + lVar26 * 2 + (long)(int)uVar5 * 2 + lVar16 + 0xa0) =
           *puVar21;
      lVar26 = lVar26 + 1;
      puVar21 = puVar21 + 2;
    } while (lVar26 < (long)uVar22);
  }
  if (1 < param_5) {
    uVar22 = (ulong)(int)uVar5;
    uVar20 = uVar22;
    if ((long)uVar22 < 2) {
      uVar20 = 1;
    }
    if (uVar20 < 0x10) {
      uVar25 = 0;
      iVar24 = 0;
    }
    else {
      uVar23 = uVar22;
      if ((long)uVar22 < 2) {
        uVar23 = 1;
      }
      uVar25 = 0;
      iVar24 = 0;
      if (((int)(uVar5 + ~(uint)(uVar23 - 1)) < (int)uVar5) && (iVar24 = 0, uVar23 - 1 >> 0x20 == 0)
         ) {
        uVar25 = uVar20 & 0x7ffffffffffffff0;
        iVar24 = (int)uVar25;
        puVar28 = (undefined8 *)((long)local_90 + lVar17 + 0xa0);
        iVar29 = uVar5 - 1;
        uVar23 = uVar25;
        do {
          lVar26 = param_2 + (long)iVar29 * 2;
          uVar23 = uVar23 - 0x10;
          iVar29 = iVar29 + -0x10;
          auVar13._10_2_ = 0x504;
          auVar13._0_10_ = _DAT_00134b10;
          auVar13._12_2_ = 0x302;
          auVar13._14_2_ = 0x100;
          auVar45 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(lVar26 + -0xe),auVar13);
          auVar14._10_2_ = 0x504;
          auVar14._0_10_ = _DAT_00134b10;
          auVar14._12_2_ = 0x302;
          auVar14._14_2_ = 0x100;
          auVar47 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(lVar26 + -0x1e),auVar14);
          puVar28[-1] = auVar45._8_8_;
          puVar28[-2] = auVar45._0_8_;
          puVar28[1] = auVar47._8_8_;
          *puVar28 = auVar47._0_8_;
          puVar28 = puVar28 + 4;
        } while (uVar23 != 0);
        if (uVar20 == uVar25) goto LAB_0010b760;
      }
    }
    iVar24 = (uVar5 - 1) - iVar24;
    do {
      lVar26 = (long)iVar24;
      iVar24 = iVar24 + -1;
      *(undefined2 *)((long)&local_a0 + uVar25 * 2 + lVar17 + 0xa0) =
           *(undefined2 *)(param_2 + lVar26 * 2);
      uVar25 = uVar25 + 1;
    } while ((long)uVar25 < (long)uVar22);
  }
LAB_0010b760:
  if (1 < param_6) {
    uVar22 = (ulong)(int)uVar4;
    uVar20 = uVar22;
    if ((long)uVar22 < 2) {
      uVar20 = 1;
    }
    if (uVar20 < 0x11) {
      lVar26 = 0;
    }
    else {
      uVar23 = 0x10;
      if ((uVar20 & 0xf) != 0) {
        uVar23 = uVar20 & 0xf;
      }
      lVar26 = uVar20 - uVar23;
      puVar21 = (undefined2 *)(param_8 + 0x22);
      puVar28 = (undefined8 *)((long)local_90 + (long)(int)uVar5 * 2 + lVar17 + 0xa0);
      lVar19 = lVar26;
      do {
        uVar37 = *puVar21;
        uVar38 = puVar21[2];
        uVar39 = puVar21[4];
        uVar40 = puVar21[6];
        uVar41 = puVar21[8];
        uVar42 = puVar21[10];
        uVar43 = puVar21[0xc];
        uVar44 = puVar21[0xe];
        auVar48._0_8_ =
             CONCAT26(puVar21[-10],CONCAT24(puVar21[-0xc],CONCAT22(puVar21[-0xe],puVar21[-0x10])));
        auVar48._8_2_ = puVar21[-8];
        auVar48._10_2_ = puVar21[-6];
        auVar48._12_2_ = puVar21[-4];
        auVar48._14_2_ = puVar21[-2];
        puVar21 = puVar21 + 0x20;
        lVar19 = lVar19 + -0x10;
        puVar28[-1] = auVar48._8_8_;
        puVar28[-2] = auVar48._0_8_;
        puVar28[1] = CONCAT26(uVar44,CONCAT24(uVar43,CONCAT22(uVar42,uVar41)));
        *puVar28 = CONCAT26(uVar40,CONCAT24(uVar39,CONCAT22(uVar38,uVar37)));
        puVar28 = puVar28 + 4;
      } while (lVar19 != 0);
    }
    puVar21 = (undefined2 *)(param_8 + lVar26 * 4 + 2);
    do {
      *(undefined2 *)((long)&local_a0 + lVar26 * 2 + (long)(int)uVar5 * 2 + lVar17 + 0xa0) =
           *puVar21;
      lVar26 = lVar26 + 1;
      puVar21 = puVar21 + 2;
    } while (lVar26 < (long)uVar22);
  }
  local_a0 = param_7;
  local_98 = param_8;
  local_90[1] = (ulong)uVar4;
  if (1 < param_5) {
    local_70 = uVar5 - 2;
    local_6c = param_6;
    local_78 = (long)(int)uVar5;
    uVar20 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1;
    lVar26 = 0;
    iVar24 = 0;
    uVar37 = 0x7fff;
    lVar18 = local_78 + -1;
    lVar19 = (long)&local_a0 + uVar20 + lVar17 + 0xa0;
    lVar30 = (long)&local_a0 + uVar20 + lVar16 + 0xa0;
    local_80 = (short *)(param_3 + 4);
    do {
      if (param_6 < 2) {
        iVar31 = 0;
        iVar29 = 0;
        iVar32 = 0;
        uVar38 = 0;
      }
      else {
        lVar33 = 0;
        iVar34 = 0;
        lVar35 = (long)(int)((uVar5 - 2) + iVar24) * 2;
        sVar6 = *(short *)((long)&local_a0 + lVar35 + lVar17 + 0xa0);
        iVar32 = 0;
        iVar29 = 0;
        iVar31 = 0;
        psVar36 = (short *)(param_3 + 4);
        sVar15 = *(short *)((long)&local_a0 + lVar35 + lVar16 + 0xa0);
        do {
          uVar2 = (int)lVar18 + (int)lVar33;
          sVar8 = psVar36[-2];
          uVar20 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
          sVar9 = *(short *)((long)&local_a0 + uVar20 + lVar16 + 0xa0);
          iVar12 = (int)sVar6;
          sVar7 = *psVar36;
          sVar10 = *(short *)((long)&local_a0 + uVar20 + lVar17 + 0xa0);
          sVar11 = *(short *)(lVar30 + lVar33 * 2);
          sVar6 = *(short *)(lVar19 + lVar33 * 2);
          iVar3 = (int)sVar10 + (int)sVar9;
          lVar33 = lVar33 + 2;
          iVar29 = iVar29 + (iVar12 + sVar15) * (int)psVar36[-1] + iVar3 * psVar36[1];
          iVar32 = iVar32 + iVar3 * psVar36[-1] + ((int)sVar6 + (int)sVar11) * (int)psVar36[1];
          iVar31 = iVar31 + (int)sVar8 * (int)sVar15 + -sVar8 * iVar12 + (int)sVar7 * (int)sVar9 +
                   (int)-sVar7 * (int)sVar10;
          iVar34 = iVar34 + (int)sVar9 * (int)sVar8 + (int)sVar10 * (int)-sVar8 +
                   (int)sVar11 * (int)sVar7 + (int)sVar6 * (int)-sVar7;
          psVar36 = psVar36 + 4;
          sVar15 = sVar11;
        } while (lVar33 < (int)uVar4);
        if (iVar34 < -0x3fffc000) {
          uVar38 = 0x8001;
        }
        else {
          uVar38 = 0x7fff;
          if (iVar34 < 0x3fffc000) {
            uVar38 = (short)(iVar34 + 0x4000U >> 0xf);
          }
        }
      }
      uVar39 = 0x8001;
      if (-0x3fffc001 < iVar32) {
        uVar39 = (short)(iVar32 + 0x4000U >> 0xf);
      }
      uVar20 = lVar26 * 4;
      uVar40 = uVar37;
      if (iVar32 < 0x3fffc000) {
        uVar40 = uVar39;
      }
      *(undefined2 *)(param_4 + uVar20) = uVar38;
      *(undefined2 *)(param_4 + (lVar26 << 2 | 2U)) = uVar40;
      uVar38 = 0x8001;
      if (-0x3fffc001 < iVar31) {
        uVar38 = (short)(iVar31 + 0x4000U >> 0xf);
      }
      uVar39 = uVar37;
      if (iVar31 < 0x3fffc000) {
        uVar39 = uVar38;
      }
      lVar26 = lVar26 + 2;
      *(undefined2 *)(param_4 + (uVar20 | 4)) = uVar39;
      uVar38 = 0x8001;
      if (-0x3fffc001 < iVar29) {
        uVar38 = (short)(iVar29 + 0x4000U >> 0xf);
      }
      iVar24 = iVar24 + -2;
      lVar18 = lVar18 + -2;
      lVar19 = lVar19 + -4;
      uVar39 = uVar37;
      if (iVar29 < 0x3fffc000) {
        uVar39 = uVar38;
      }
      lVar30 = lVar30 + -4;
      *(undefined2 *)(param_4 + (uVar20 | 6)) = uVar39;
    } while (lVar26 < local_78);
  }
  if (param_6 < 2) goto LAB_0010bb6c;
  uVar22 = (ulong)(int)uVar4;
  uVar20 = uVar22;
  if ((long)uVar22 < 2) {
    uVar20 = 1;
  }
  if (uVar20 < 2) {
    uVar23 = 0;
LAB_0010bae0:
    puVar21 = (undefined2 *)(param_7 + uVar23 * 4 + 2);
    do {
      lVar1 = uVar23 * 2;
      uVar23 = uVar23 + 1;
      *puVar21 = *(undefined2 *)((long)&local_a0 + lVar1 + lVar16 + 0xa0);
      puVar21 = puVar21 + 2;
    } while ((long)uVar23 < (long)uVar22);
  }
  else {
    uVar23 = uVar20 & 0x7ffffffffffffffe;
    puVar21 = (undefined2 *)((long)&local_a0 + lVar1 + 2);
    puVar27 = (undefined2 *)(param_7 + 6);
    uVar25 = uVar23;
    do {
      uVar37 = *puVar21;
      uVar25 = uVar25 - 2;
      puVar27[-2] = puVar21[-1];
      *puVar27 = uVar37;
      puVar21 = puVar21 + 2;
      puVar27 = puVar27 + 4;
    } while (uVar25 != 0);
    if (uVar20 != uVar23) goto LAB_0010bae0;
  }
  if (1 < param_6) {
    if ((long)uVar22 < 2) {
      uVar22 = 1;
    }
    if (uVar22 < 2) {
      uVar20 = 0;
    }
    else {
      uVar20 = uVar22 & 0x7ffffffffffffffe;
      puVar21 = (undefined2 *)((long)&local_a0 + lVar17 + 0xa2);
      puVar27 = (undefined2 *)(param_8 + 6);
      uVar23 = uVar20;
      do {
        uVar37 = *puVar21;
        uVar23 = uVar23 - 2;
        puVar27[-2] = puVar21[-1];
        *puVar27 = uVar37;
        puVar21 = puVar21 + 2;
        puVar27 = puVar27 + 4;
      } while (uVar23 != 0);
      if (uVar22 == uVar20) goto LAB_0010bb6c;
    }
    puVar21 = (undefined2 *)(param_8 + uVar20 * 4 + 2);
    do {
      lVar1 = uVar20 * 2;
      uVar20 = uVar20 + 1;
      *puVar21 = *(undefined2 *)((long)&local_a0 + lVar1 + lVar17 + 0xa0);
      puVar21 = puVar21 + 2;
    } while ((long)uVar20 < (long)(int)uVar4);
  }
LAB_0010bb6c:
  if (*(long *)(local_90[0] + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

