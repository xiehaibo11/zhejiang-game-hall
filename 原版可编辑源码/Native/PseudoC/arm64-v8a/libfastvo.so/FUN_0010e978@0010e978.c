
void FUN_0010e978(undefined4 *param_1,long param_2,undefined8 param_3,uint *param_4,int *param_5,
                 uint param_6,uint param_7)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  long lVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short *psVar19;
  short *psVar20;
  ulong uVar21;
  short sVar22;
  short *psVar23;
  short *psVar24;
  short *psVar25;
  short *psVar26;
  undefined4 *puVar27;
  uint uVar28;
  short *psVar29;
  undefined4 *puVar30;
  short *psVar31;
  short *psVar32;
  long lVar33;
  long lVar34;
  short *psVar35;
  ulong uVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  ulong uVar41;
  int iVar42;
  short sVar43;
  short *psVar44;
  int iVar45;
  short *psVar46;
  short *psVar47;
  ulong uVar48;
  int iVar49;
  ulong uVar50;
  short *psVar51;
  uint uVar52;
  short *psVar53;
  int iVar54;
  ulong local_170;
  undefined4 *local_160;
  undefined4 *local_158;
  undefined4 *local_150;
  undefined4 *local_148;
  undefined4 *local_120;
  short *local_f8;
  short *local_f0;
  undefined4 *local_d0;
  long local_c8;
  int local_b8 [18];
  long local_70;
  
  lVar15 = tpidr_el0;
  local_70 = *(long *)(lVar15 + 0x28);
  uVar50 = (ulong)param_7;
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar36 = (ulong)uVar3;
  if (uVar3 != 1) {
    FUN_0010e978(param_1,(int)uVar2 * param_2,param_3,param_4 + 2,param_5,uVar2 * param_6);
  }
  lVar34 = (long)(int)uVar3;
  switch(uVar2) {
  case 2:
    if (param_5[1] == 0) {
      if (0 < (int)param_6) {
        uVar21 = 0;
        psVar29 = (short *)((long)param_1 + 2);
        do {
          psVar26 = (short *)((long)param_5 + 0x10a);
          psVar19 = psVar29;
          uVar48 = uVar36;
          if (0 < (int)uVar3) {
            do {
              psVar23 = psVar19 + lVar34 * 2;
              sVar43 = *psVar26;
              sVar22 = psVar26[-1];
              sVar5 = psVar23[-1];
              iVar37 = (int)sVar22 * (int)sVar5 - (int)sVar43 * (int)*psVar23 >> 1;
              psVar23[-1] = (short)((uint)((psVar19[-1] * 0x4000 + 0x4000) - iVar37) >> 0xf);
              iVar38 = (int)*psVar23 * (int)sVar22 + (int)sVar43 * (int)sVar5 >> 1;
              *psVar23 = (short)((uint)((0x4000 - iVar38) + *psVar19 * 0x4000) >> 0xf);
              uVar2 = (int)uVar48 - 1;
              psVar19[-1] = (short)(iVar37 + psVar19[-1] * 0x4000 + 0x4000U >> 0xf);
              *psVar19 = (short)(iVar38 + *psVar19 * 0x4000 + 0x4000U >> 0xf);
              psVar26 = psVar26 + param_2 * 2;
              psVar19 = psVar19 + 2;
              uVar48 = (ulong)uVar2;
            } while (uVar2 != 0);
          }
          uVar21 = uVar21 + 1;
          psVar29 = (short *)((long)psVar29 +
                             (-(ulong)(param_7 >> 0x1f) & 0xfffffffc00000000 | uVar50 << 2));
        } while (uVar21 != param_6);
      }
    }
    else if (0 < (int)param_6) {
      uVar21 = 0;
      psVar29 = (short *)((long)param_1 + 2);
      do {
        uVar48 = uVar36;
        psVar26 = psVar29;
        psVar19 = (short *)((long)param_5 + 0x10a);
        if (0 < (int)uVar3) {
          do {
            psVar23 = psVar26 + lVar34 * 2;
            sVar43 = *psVar19;
            sVar22 = psVar19[-1];
            sVar5 = psVar23[-1];
            sVar6 = (short)((uint)(((int)sVar22 * (int)sVar5 - (int)sVar43 * (int)*psVar23) * 2 +
                                  0x8000) >> 0x10);
            psVar23[-1] = psVar26[-1] - sVar6;
            sVar43 = (short)((uint)(((int)*psVar23 * (int)sVar22 + (int)sVar43 * (int)sVar5) * 2 +
                                   0x8000) >> 0x10);
            *psVar23 = *psVar26 - sVar43;
            uVar2 = (int)uVar48 - 1;
            psVar26[-1] = psVar26[-1] + sVar6;
            *psVar26 = *psVar26 + sVar43;
            uVar48 = (ulong)uVar2;
            psVar26 = psVar26 + 2;
            psVar19 = psVar19 + param_2 * 2;
          } while (uVar2 != 0);
        }
        uVar21 = uVar21 + 1;
        psVar29 = (short *)((long)psVar29 +
                           (-(ulong)(param_7 >> 0x1f) & 0xfffffffc00000000 | uVar50 << 2));
      } while (uVar21 != param_6);
    }
    break;
  case 3:
    if (0 < (int)param_6) {
      uVar36 = 0;
      do {
        iVar37 = param_5[1];
        iVar38 = *(short *)((long)param_5 + lVar34 * param_2 * 4 + 0x10a) * 2;
        psVar29 = (short *)(param_1 + uVar36 * (long)(int)param_7);
        lVar33 = -lVar34;
        psVar19 = (short *)((long)param_5 + 0x10a);
        psVar26 = (short *)((long)param_5 + 0x10a);
        do {
          if (iVar37 == 0) {
            psVar44 = psVar29 + lVar34 * 2;
            *psVar29 = (short)(*psVar29 * 0x2aaa + 0x4000U >> 0xf);
            psVar29[1] = (short)(psVar29[1] * 0x2aaa + 0x4000U >> 0xf);
            psVar24 = psVar44 + 1;
            *psVar44 = (short)(*psVar44 * 0x2aaa + 0x4000U >> 0xf);
            *psVar24 = (short)(*psVar24 * 0x2aaa + 0x4000U >> 0xf);
            psVar25 = psVar29 + lVar34 * 4;
            psVar23 = psVar25 + 1;
            sVar43 = (short)(*psVar25 * 0x2aaa + 0x4000U >> 0xf);
            *psVar25 = sVar43;
            sVar22 = (short)(*psVar23 * 0x2aaa + 0x4000U >> 0xf);
            *psVar23 = sVar22;
          }
          else {
            sVar43 = psVar29[lVar34 * 4];
            sVar22 = (psVar29 + lVar34 * 4)[1];
            psVar25 = psVar29 + lVar34 * 4;
            psVar44 = psVar29 + lVar34 * 2;
            psVar23 = psVar25 + 1;
            psVar24 = psVar44 + 1;
          }
          sVar12 = psVar19[-1];
          sVar5 = *psVar24;
          sVar6 = *psVar19;
          sVar10 = *psVar44;
          sVar13 = psVar26[-1];
          sVar11 = *psVar26;
          iVar39 = ((int)sVar12 * (int)sVar10 - (int)sVar6 * (int)sVar5) * 2 + 0x8000;
          iVar40 = ((int)sVar13 * (int)sVar43 - (int)sVar11 * (int)sVar22) * 2 + 0x8000;
          iVar49 = (iVar40 >> 0x10) + (iVar39 >> 0x10);
          *psVar44 = *psVar29 - (short)(iVar49 * 0x10000 >> 0x11);
          iVar42 = ((int)sVar5 * (int)sVar12 + (int)sVar6 * (int)sVar10) * 2 + 0x8000;
          iVar45 = ((int)sVar13 * (int)sVar22 + (int)sVar11 * (int)sVar43) * 2 + 0x8000;
          iVar54 = (iVar45 >> 0x10) + (iVar42 >> 0x10);
          *psVar24 = psVar29[1] - (short)(iVar54 * 0x10000 >> 0x11);
          *psVar29 = *psVar29 + (short)iVar49;
          psVar29[1] = psVar29[1] + (short)iVar54;
          sVar43 = (short)((uint)((short)((short)((uint)iVar42 >> 0x10) -
                                         (short)((uint)iVar45 >> 0x10)) * iVar38 + 0x8000) >> 0x10);
          *psVar25 = *psVar44 + sVar43;
          sVar22 = (short)((uint)((short)((short)((uint)iVar39 >> 0x10) -
                                         (short)((uint)iVar40 >> 0x10)) * iVar38 + 0x8000) >> 0x10);
          *psVar23 = *psVar24 - sVar22;
          psVar26 = psVar26 + param_2 * 4;
          lVar33 = lVar33 + 1;
          psVar29 = psVar29 + 2;
          *psVar44 = *psVar44 - sVar43;
          psVar19 = psVar19 + param_2 * 2;
          *psVar24 = *psVar24 + sVar22;
        } while (lVar33 != 0);
        uVar36 = uVar36 + 1;
      } while (uVar36 != param_6);
    }
    break;
  case 4:
    if (param_5[1] == 0) {
      if (0 < (int)param_6) {
        uVar21 = 0;
        psVar29 = (short *)((long)param_5 + 0x10a);
        psVar26 = (short *)((long)param_1 + 2);
        do {
          psVar19 = psVar29;
          uVar48 = uVar36;
          psVar23 = psVar29;
          psVar24 = psVar26;
          psVar25 = psVar29;
          if (0 < (int)uVar3) {
            do {
              psVar44 = psVar24 + lVar34 * 2;
              sVar12 = psVar19[-1];
              sVar13 = psVar44[-1];
              sVar43 = *psVar19;
              sVar22 = *psVar44;
              psVar20 = psVar24 + lVar34 * 4;
              sVar14 = psVar23[-1];
              sVar7 = psVar20[-1];
              sVar5 = *psVar23;
              sVar6 = *psVar20;
              psVar35 = psVar24 + (long)(int)(uVar3 * 3) * 2;
              sVar8 = psVar25[-1];
              sVar9 = psVar35[-1];
              sVar10 = *psVar25;
              sVar11 = *psVar35;
              sVar17 = (short)((int)psVar24[-1] + 2U >> 2);
              sVar16 = (short)(((int)sVar14 * (int)sVar7 + 0x10000) - (int)sVar5 * (int)sVar6 >>
                              0x11);
              psVar24[-1] = sVar17 + sVar16;
              sVar18 = (short)(*psVar24 + 2 >> 2);
              sVar5 = (short)((int)sVar5 * (int)sVar7 + (int)sVar6 * (int)sVar14 + 0x10000 >> 0x11);
              *psVar24 = sVar18 + sVar5;
              sVar7 = (short)(((int)sVar8 * (int)sVar9 + 0x10000) - (int)sVar10 * (int)sVar11 >>
                             0x11);
              sVar14 = (short)(((int)sVar12 * (int)sVar13 + 0x10000) - (int)sVar43 * (int)sVar22 >>
                              0x11);
              sVar6 = sVar7 + sVar14;
              psVar20[-1] = (short)((int)psVar20[-1] + 2U >> 2);
              *psVar20 = (short)((int)*psVar20 + 2U >> 2);
              sVar14 = sVar14 - sVar7;
              sVar10 = (short)((int)sVar10 * (int)sVar9 + (int)sVar11 * (int)sVar8 + 0x10000 >> 0x11
                              );
              sVar22 = (short)((int)sVar43 * (int)sVar13 + (int)sVar22 * (int)sVar12 + 0x10000 >>
                              0x11);
              sVar43 = sVar10 + sVar22;
              psVar20[-1] = psVar24[-1] - sVar6;
              sVar18 = sVar18 - sVar5;
              sVar17 = sVar17 - sVar16;
              sVar22 = sVar22 - sVar10;
              *psVar20 = *psVar24 - sVar43;
              uVar2 = (int)uVar48 - 1;
              psVar24[-1] = psVar24[-1] + sVar6;
              *psVar24 = *psVar24 + sVar43;
              psVar44[-1] = sVar17 + sVar22;
              *psVar44 = sVar18 - sVar14;
              psVar35[-1] = sVar17 - sVar22;
              *psVar35 = sVar18 + sVar14;
              psVar19 = psVar19 + param_2 * 2;
              uVar48 = (ulong)uVar2;
              psVar23 = psVar23 + param_2 * 4;
              psVar24 = psVar24 + 2;
              psVar25 = psVar25 + param_2 * 6;
            } while (uVar2 != 0);
          }
          uVar21 = uVar21 + 1;
          psVar26 = (short *)((long)psVar26 +
                             (-(ulong)(param_7 >> 0x1f) & 0xfffffffc00000000 | uVar50 << 2));
        } while (uVar21 != param_6);
      }
    }
    else if (0 < (int)param_6) {
      uVar21 = 0;
      psVar29 = (short *)((long)param_5 + 0x10a);
      psVar26 = (short *)((long)param_1 + 2);
      do {
        psVar19 = psVar29;
        uVar48 = uVar36;
        psVar23 = psVar29;
        psVar24 = psVar26;
        psVar25 = psVar29;
        if (0 < (int)uVar3) {
          do {
            psVar44 = psVar24 + lVar34 * 2;
            psVar20 = psVar24 + lVar34 * 4;
            psVar35 = psVar24 + (long)(int)(uVar3 * 3) * 2;
            sVar43 = (short)((uint)(((int)*psVar20 * (int)psVar23[-1] +
                                    (int)*psVar23 * (int)psVar20[-1]) * 2 + 0x8000) >> 0x10);
            sVar12 = *psVar24 - sVar43;
            sVar43 = *psVar24 + sVar43;
            sVar22 = (short)((uint)(((int)*psVar35 * (int)psVar25[-1] +
                                    (int)*psVar25 * (int)psVar35[-1]) * 2 + 0x8000) >> 0x10);
            sVar11 = (short)((uint)(((int)*psVar44 * (int)psVar19[-1] +
                                    (int)*psVar19 * (int)psVar44[-1]) * 2 + 0x8000) >> 0x10);
            sVar5 = sVar22 + sVar11;
            sVar11 = sVar11 - sVar22;
            sVar22 = (short)((uint)(((int)psVar23[-1] * (int)psVar20[-1] -
                                    (int)*psVar23 * (int)*psVar20) * 2 + 0x8000) >> 0x10);
            sVar10 = psVar24[-1] - sVar22;
            sVar22 = psVar24[-1] + sVar22;
            sVar14 = (short)((uint)(((int)psVar25[-1] * (int)psVar35[-1] -
                                    (int)*psVar25 * (int)*psVar35) * 2 + 0x8000) >> 0x10);
            sVar13 = (short)((uint)(((int)psVar19[-1] * (int)psVar44[-1] -
                                    (int)*psVar19 * (int)*psVar44) * 2 + 0x8000) >> 0x10);
            sVar6 = sVar14 + sVar13;
            *psVar24 = sVar43;
            psVar24[-1] = sVar22;
            *psVar20 = sVar43 - sVar5;
            psVar20[-1] = sVar22 - sVar6;
            sVar13 = sVar13 - sVar14;
            uVar2 = (int)uVar48 - 1;
            psVar24[-1] = psVar24[-1] + sVar6;
            *psVar24 = *psVar24 + sVar5;
            psVar44[-1] = sVar10 - sVar11;
            *psVar44 = sVar12 + sVar13;
            psVar35[-1] = sVar10 + sVar11;
            *psVar35 = sVar12 - sVar13;
            psVar19 = psVar19 + param_2 * 2;
            uVar48 = (ulong)uVar2;
            psVar23 = psVar23 + param_2 * 4;
            psVar24 = psVar24 + 2;
            psVar25 = psVar25 + param_2 * 6;
          } while (uVar2 != 0);
        }
        uVar21 = uVar21 + 1;
        psVar26 = (short *)((long)psVar26 +
                           (-(ulong)(param_7 >> 0x1f) & 0xfffffffc00000000 | uVar50 << 2));
      } while (uVar21 != param_6);
    }
    break;
  case 5:
    if (0 < (int)param_6) {
      local_120 = param_1 + lVar34 * 4;
      uVar50 = -(ulong)(param_7 >> 0x1f) & 0xfffffffc00000000 | uVar50 << 2;
      local_148 = param_1 + lVar34;
      local_150 = param_1 + lVar34 * 2;
      local_158 = param_1 + (int)(uVar3 * 3);
      local_170 = 0;
      local_160 = param_1;
      do {
        if (0 < (int)uVar3) {
          uVar48 = 0;
          uVar21 = 0;
          iVar37 = (int)*(short *)((long)(param_5 + lVar34 * param_2 * 2 + 0x42) + 2);
          iVar38 = (int)(short)param_5[lVar34 * param_2 * 2 + 0x42];
          iVar39 = (int)*(short *)((long)(param_5 + lVar34 * param_2 + 0x42) + 2);
          iVar40 = (int)(short)param_5[lVar34 * param_2 + 0x42];
          psVar29 = (short *)(param_1 + local_170 * (long)(int)param_7);
          psVar26 = psVar29 + lVar34 * 2;
          psVar24 = psVar29 + lVar34 * 8;
          psVar23 = psVar29 + (long)(int)(uVar3 * 3) * 2;
          psVar19 = psVar29 + lVar34 * 4;
          psVar25 = (short *)((long)param_5 + 0x10a);
          uVar41 = uVar36;
          psVar44 = (short *)((long)param_5 + 0x10a);
          do {
            if (param_5[1] == 0) {
              psVar53 = (short *)((long)local_160 + uVar21);
              psVar47 = (short *)((long)local_148 + uVar21);
              psVar20 = psVar53 + 1;
              *psVar53 = (short)(*psVar53 * 0x1999 + 0x4000U >> 0xf);
              psVar46 = (short *)((long)local_150 + uVar21);
              *psVar20 = (short)(*psVar20 * 0x1999 + 0x4000U >> 0xf);
              psVar31 = (short *)((long)local_158 + uVar21);
              psVar35 = psVar47 + 1;
              *psVar47 = (short)(*psVar47 * 0x1999 + 0x4000U >> 0xf);
              *psVar35 = (short)(*psVar35 * 0x1999 + 0x4000U >> 0xf);
              local_f8 = (short *)((long)local_120 + uVar21);
              psVar32 = psVar46 + 1;
              *psVar46 = (short)(*psVar46 * 0x1999 + 0x4000U >> 0xf);
              *psVar32 = (short)(*psVar32 * 0x1999 + 0x4000U >> 0xf);
              psVar51 = psVar31 + 1;
              *psVar31 = (short)(*psVar31 * 0x1999 + 0x4000U >> 0xf);
              *psVar51 = (short)(*psVar51 * 0x1999 + 0x4000U >> 0xf);
              local_f0 = local_f8 + 1;
              sVar43 = (short)(*local_f8 * 0x1999 + 0x4000U >> 0xf);
              *local_f8 = sVar43;
              sVar22 = (short)(*local_f0 * 0x1999 + 0x4000U >> 0xf);
              *local_f0 = sVar22;
            }
            else {
              local_f0 = psVar24 + 1;
              psVar20 = psVar29 + 1;
              sVar43 = *(short *)((long)local_120 + uVar21);
              sVar22 = ((short *)((long)local_120 + uVar21))[1];
              psVar35 = psVar26 + 1;
              psVar32 = psVar19 + 1;
              psVar51 = psVar23 + 1;
              psVar31 = psVar23;
              psVar46 = psVar19;
              psVar47 = psVar26;
              psVar53 = psVar29;
              local_f8 = psVar24;
            }
            iVar54 = (int)*(short *)((long)(param_5 + (uVar48 & 0xffffffff) * param_2 + 0x42) + 2);
            iVar42 = (int)(short)param_5[(uVar48 & 0xffffffff) * param_2 + 0x42];
            iVar45 = (int)*(short *)((long)(param_5 + (uVar21 & 0xfffffffc) * param_2 + 0x42) + 2);
            iVar49 = (int)(short)param_5[(uVar21 & 0xfffffffc) * param_2 + 0x42];
            sVar5 = *psVar53;
            sVar6 = *psVar20;
            sVar12 = (short)((uint)((iVar49 * sVar22 + iVar45 * sVar43) * 2 + 0x8000) >> 0x10);
            sVar13 = (short)((uint)(((int)*psVar35 * (int)psVar25[-1] +
                                    (int)*psVar25 * (int)*psVar47) * 2 + 0x8000) >> 0x10);
            sVar10 = sVar12 + sVar13;
            sVar17 = (short)((uint)((*psVar51 * iVar42 + iVar54 * *psVar31) * 2 + 0x8000) >> 0x10);
            sVar16 = (short)((uint)(((int)*psVar32 * (int)psVar44[-1] +
                                    (int)*psVar44 * (int)*psVar46) * 2 + 0x8000) >> 0x10);
            sVar11 = sVar17 + sVar16;
            sVar14 = (short)((uint)((iVar49 * sVar43 - iVar45 * sVar22) * 2 + 0x8000) >> 0x10);
            sVar7 = (short)((uint)(((int)psVar25[-1] * (int)*psVar47 - (int)*psVar25 * (int)*psVar35
                                   ) * 2 + 0x8000) >> 0x10);
            sVar43 = sVar14 + sVar7;
            sVar8 = (short)((uint)((iVar42 * *psVar31 - iVar54 * *psVar51) * 2 + 0x8000) >> 0x10);
            sVar9 = (short)((uint)(((int)psVar44[-1] * (int)*psVar46 - (int)*psVar44 * (int)*psVar32
                                   ) * 2 + 0x8000) >> 0x10);
            sVar22 = sVar8 + sVar9;
            *psVar53 = sVar5 + sVar43 + sVar22;
            *psVar20 = sVar6 + sVar10 + sVar11;
            iVar42 = (int)(short)(sVar13 - sVar12);
            iVar45 = (int)(short)(sVar16 - sVar17);
            sVar12 = (short)(iVar42 * iVar39 + 0x4000U >> 0xf) +
                     (short)(iVar45 * iVar37 + 0x4000U >> 0xf);
            sVar13 = sVar5 + (short)(sVar22 * iVar38 + 0x4000U >> 0xf) +
                     (short)(sVar43 * iVar40 + 0x4000U >> 0xf);
            *psVar47 = sVar13 - sVar12;
            iVar49 = (int)(short)(sVar7 - sVar14);
            iVar54 = (int)(short)(sVar9 - sVar8);
            sVar14 = sVar6 + (short)(sVar11 * iVar38 + 0x4000U >> 0xf) +
                     (short)(sVar10 * iVar40 + 0x4000U >> 0xf);
            sVar7 = (short)(((iVar49 * iVar39 + 0x4000U >> 0xf) + (iVar54 * iVar37 + 0x4000U >> 0xf)
                            ) * -0x10000 >> 0x10);
            *psVar35 = sVar14 - sVar7;
            *local_f8 = sVar13 + sVar12;
            sVar12 = (short)(iVar45 * iVar39 + 0x4000U >> 0xf) -
                     (short)(iVar42 * iVar37 + 0x4000U >> 0xf);
            *local_f0 = sVar14 + sVar7;
            sVar43 = sVar5 + (short)(sVar22 * iVar40 + 0x4000U >> 0xf) +
                     (short)(sVar43 * iVar38 + 0x4000U >> 0xf);
            *psVar46 = sVar43 + sVar12;
            sVar22 = sVar6 + (short)(sVar11 * iVar40 + 0x4000U >> 0xf) +
                     (short)(sVar10 * iVar38 + 0x4000U >> 0xf);
            sVar5 = (short)(iVar49 * iVar37 + 0x4000U >> 0xf) -
                    (short)(iVar54 * iVar39 + 0x4000U >> 0xf);
            *psVar32 = sVar22 + sVar5;
            *psVar31 = sVar43 - sVar12;
            *psVar51 = sVar22 - sVar5;
            psVar25 = psVar25 + param_2 * 2;
            psVar29 = psVar29 + 2;
            psVar26 = psVar26 + 2;
            psVar19 = psVar19 + 2;
            psVar23 = psVar23 + 2;
            psVar24 = psVar24 + 2;
            uVar21 = uVar21 + 4;
            uVar41 = uVar41 - 1;
            uVar48 = uVar48 + 3;
            psVar44 = psVar44 + param_2 * 4;
          } while (uVar41 != 0);
        }
        local_120 = (undefined4 *)((long)local_120 + uVar50);
        local_170 = local_170 + 1;
        local_160 = (undefined4 *)((long)local_160 + uVar50);
        local_148 = (undefined4 *)((long)local_148 + uVar50);
        local_158 = (undefined4 *)((long)local_158 + uVar50);
        local_150 = (undefined4 *)((long)local_150 + uVar50);
      } while (local_170 != param_6);
    }
    break;
  default:
    if (0 < (int)param_6) {
      local_c8 = 0;
      local_d0 = param_1;
      do {
        if (0x11 < (int)uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_0010e87c("KissFFT: max radix supported is 17",0x126);
        }
        if (0 < (int)uVar3) {
          iVar37 = *param_5;
          uVar21 = 0;
          puVar27 = local_d0;
          do {
            if (0 < (int)uVar2) {
              iVar38 = param_5[1];
              puVar30 = puVar27;
              uVar48 = (ulong)uVar2;
              psVar29 = (short *)((ulong)local_b8 | 2);
              do {
                uVar4 = *puVar30;
                *(undefined4 *)(psVar29 + -1) = uVar4;
                if (iVar38 == 0) {
                  iVar39 = 0;
                  if (uVar2 != 0) {
                    iVar39 = 0x7fff / (int)uVar2;
                  }
                  psVar29[-1] = (short)(iVar39 * (short)uVar4 + 0x4000U >> 0xf);
                  *psVar29 = (short)(iVar39 * *psVar29 + 0x4000U >> 0xf);
                }
                psVar29 = psVar29 + 2;
                uVar48 = uVar48 - 1;
                puVar30 = puVar30 + lVar34;
              } while (uVar48 != 0);
              uVar28 = 0;
              uVar48 = uVar21;
              do {
                piVar1 = param_1 + local_c8 * (int)param_7 + uVar48;
                *piVar1 = local_b8[0];
                if (1 < (int)uVar2) {
                  uVar52 = (uint)*(ushort *)((long)piVar1 + 2);
                  iVar38 = 0;
                  psVar29 = (short *)((ulong)local_b8 | 6);
                  lVar33 = (ulong)uVar2 - 1;
                  iVar39 = local_b8[0];
                  do {
                    iVar38 = iVar38 + (int)uVar48 * (int)param_2;
                    iVar40 = 0;
                    if (iVar37 <= iVar38) {
                      iVar40 = iVar37;
                    }
                    iVar38 = iVar38 - iVar40;
                    lVar33 = lVar33 + -1;
                    iVar40 = (int)*(short *)((long)param_5 + (long)iVar38 * 4 + 0x10a);
                    iVar39 = iVar39 + ((uint)(((int)(short)param_5[(long)iVar38 + 0x42] *
                                               (int)psVar29[-1] + 0x4000) - iVar40 * *psVar29) >>
                                      0xf);
                    uVar52 = uVar52 + (iVar40 * psVar29[-1] +
                                       (int)*psVar29 * (int)(short)param_5[(long)iVar38 + 0x42] +
                                       0x4000U >> 0xf);
                    psVar29 = psVar29 + 2;
                    *(short *)piVar1 = (short)iVar39;
                    *(ushort *)((long)piVar1 + 2) = (ushort)uVar52;
                  } while (lVar33 != 0);
                }
                uVar28 = uVar28 + 1;
                uVar48 = uVar48 + lVar34;
              } while (uVar28 != uVar2);
            }
            uVar21 = uVar21 + 1;
            puVar27 = puVar27 + 1;
          } while (uVar21 != uVar36);
        }
        local_c8 = local_c8 + 1;
        local_d0 = (undefined4 *)
                   ((long)local_d0 + (-(ulong)(param_7 >> 0x1f) & 0xfffffffc00000000 | uVar50 << 2))
        ;
      } while (local_c8 < (int)param_6);
    }
  }
  if (*(long *)(lVar15 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

