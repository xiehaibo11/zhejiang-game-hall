
void FUN_010c0044(undefined8 param_1,ulong param_2,ulong param_3,long param_4,long param_5)

{
  undefined1 (*pauVar1) [16];
  ushort *puVar2;
  long lVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined8 uVar15;
  ushort *puVar16;
  ushort *puVar17;
  ushort *puVar18;
  ushort *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  ushort *puVar22;
  ushort *puVar23;
  ushort *puVar24;
  ushort *puVar25;
  ushort *puVar26;
  ushort *puVar27;
  ushort *puVar28;
  ushort *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  bool bVar32;
  undefined8 *puVar33;
  ulong extraout_x1;
  ulong extraout_x1_00;
  undefined8 *extraout_x8;
  undefined1 *puVar34;
  byte *pbVar35;
  undefined8 *puVar36;
  undefined8 *extraout_x8_00;
  ulong uVar37;
  ulong extraout_x9;
  ulong extraout_x9_00;
  uint *puVar38;
  ushort *puVar39;
  short *psVar40;
  double *pdVar41;
  byte *pbVar42;
  int *piVar43;
  float *pfVar44;
  undefined1 *puVar45;
  ushort uVar46;
  ulong uVar47;
  undefined1 uVar48;
  undefined1 (*pauVar49) [16];
  ulong uVar50;
  undefined8 *puVar51;
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  
  if ((*(uint *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xb)) + 0x1b) >> 2 & 1)
      != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!source.WasDetached()");
  }
  if ((*(uint *)((param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0xb)) + 0x1b) >> 2 & 1)
      == 0) {
    uVar5 = (uint)(*(byte *)((param_2 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(param_2 - 1)) >>
                  3);
    if (10 < uVar5 - 0x11) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar37 = param_5 - param_4;
    puVar36 = (undefined8 *)(*(long *)(param_3 + 0x27) + (ulong)*(uint *)(param_3 + 0x2f));
    switch(uVar5) {
    case 0x11:
      if (uVar37 != 0) {
        lVar3 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
        if ((uVar37 < 0x20) ||
           ((puVar36 < (undefined8 *)(lVar3 + param_5) &&
            ((undefined1 *)(lVar3 + param_4) < (undefined1 *)((long)puVar36 + uVar37))))) {
          uVar47 = 0;
        }
        else {
          uVar47 = uVar37 & 0xffffffffffffffe0;
          puVar33 = (undefined8 *)(param_4 + lVar3 + 0x10);
          puVar51 = puVar36 + 2;
          uVar50 = uVar47;
          do {
            puVar8 = puVar33 + -1;
            uVar15 = puVar33[-2];
            uVar30 = *puVar33;
            uVar31 = puVar33[1];
            puVar33 = puVar33 + 4;
            uVar50 = uVar50 - 0x20;
            puVar51[-1] = *puVar8;
            puVar51[-2] = uVar15;
            puVar51[1] = uVar31;
            *puVar51 = uVar30;
            puVar51 = puVar51 + 4;
          } while (uVar50 != 0);
          if (uVar37 == uVar47) {
            return;
          }
        }
        param_5 = (uVar47 + param_4) - param_5;
        puVar34 = (undefined1 *)((long)puVar36 + uVar47);
        puVar45 = (undefined1 *)(lVar3 + uVar47 + param_4);
        do {
          bVar32 = param_5 != -1;
          param_5 = param_5 + 1;
          *puVar34 = *puVar45;
          puVar34 = puVar34 + 1;
          puVar45 = puVar45 + 1;
        } while (bVar32);
      }
      break;
    case 0x12:
      if (uVar37 != 0) {
        lVar3 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
        if ((uVar37 < 0x10) ||
           ((puVar36 < (undefined8 *)(lVar3 + param_5) &&
            ((undefined1 (*) [16])(lVar3 + param_4) < (undefined1 (*) [16])((long)puVar36 + uVar37))
            ))) {
          uVar47 = 0;
        }
        else {
          uVar47 = uVar37 & 0xfffffffffffffff0;
          pauVar49 = (undefined1 (*) [16])(lVar3 + param_4);
          uVar50 = uVar47;
          puVar33 = puVar36;
          do {
            uVar50 = uVar50 - 0x10;
            auVar54 = NEON_smax(*pauVar49,ZEXT816(0),1);
            puVar33[1] = auVar54._8_8_;
            *puVar33 = auVar54._0_8_;
            pauVar49 = pauVar49 + 1;
            puVar33 = puVar33 + 2;
          } while (uVar50 != 0);
          if (uVar37 == uVar47) {
            return;
          }
        }
        param_5 = (uVar47 + param_4) - param_5;
        pbVar35 = (byte *)((long)puVar36 + uVar47);
        pbVar42 = (byte *)(lVar3 + uVar47 + param_4);
        do {
          bVar32 = param_5 != -1;
          param_5 = param_5 + 1;
          *pbVar35 = *pbVar42 & ((byte)((uint)(int)(char)*pbVar42 >> 7) ^ 0xff);
          pbVar35 = pbVar35 + 1;
          pbVar42 = pbVar42 + 1;
        } while (bVar32);
      }
      break;
    case 0x14:
      if (uVar37 != 0) {
        lVar3 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
        if ((uVar37 < 8) ||
           ((psVar40 = (short *)(lVar3 + param_4 * 2), puVar36 < (undefined8 *)(lVar3 + param_5 * 2)
            && (psVar40 < (short *)((long)puVar36 + uVar37))))) {
          uVar47 = 0;
        }
        else {
          uVar47 = uVar37 & 0xfffffffffffffff8;
          uVar50 = uVar47;
          puVar33 = puVar36;
          do {
            uVar50 = uVar50 - 8;
            auVar57._0_4_ = (int)*psVar40;
            auVar57._4_4_ = (int)psVar40[1];
            auVar57._8_4_ = (int)psVar40[2];
            auVar57._12_4_ = (int)psVar40[3];
            auVar60._0_4_ = (int)psVar40[4];
            auVar60._4_4_ = (int)psVar40[5];
            auVar60._8_4_ = (int)psVar40[6];
            auVar60._12_4_ = (int)psVar40[7];
            auVar62._8_8_ = 0xff000000ff;
            auVar62._0_8_ = 0xff000000ff;
            auVar54 = NEON_smin(auVar57,auVar62,4);
            auVar13._8_8_ = 0xff000000ff;
            auVar13._0_8_ = 0xff000000ff;
            auVar56 = NEON_smin(auVar60,auVar13,4);
            *puVar33 = CONCAT17(auVar56[0xc] & ~-(psVar40[7] < 0),
                                CONCAT16(auVar56[8] & ~-(psVar40[6] < 0),
                                         CONCAT15(auVar56[4] & ~-(psVar40[5] < 0),
                                                  CONCAT14(auVar56[0] & ~-(psVar40[4] < 0),
                                                           CONCAT13(auVar54[0xc] &
                                                                    ~-(psVar40[3] < 0),
                                                                    CONCAT12(auVar54[8] &
                                                                             ~-(psVar40[2] < 0),
                                                                             CONCAT11(auVar54[4] &
                                                                                      ~-(psVar40[1]
                                                                                        < 0),auVar54
                                                  [0] & ~-(*psVar40 < 0))))))));
            psVar40 = psVar40 + 8;
            puVar33 = puVar33 + 1;
          } while (uVar50 != 0);
          if (uVar37 == uVar47) {
            return;
          }
        }
        param_5 = (uVar47 + param_4) - param_5;
        puVar34 = (undefined1 *)((long)puVar36 + uVar47);
        psVar40 = (short *)(lVar3 + (uVar47 + param_4) * 2);
        do {
          sVar7 = *psVar40;
          sVar4 = sVar7;
          if (0xfe < sVar7) {
            sVar4 = -1;
          }
          uVar48 = 0;
          if (-1 < sVar7) {
            uVar48 = (char)sVar4;
          }
          bVar32 = param_5 != -1;
          param_5 = param_5 + 1;
          *puVar34 = uVar48;
          puVar34 = puVar34 + 1;
          psVar40 = psVar40 + 1;
        } while (bVar32);
      }
      break;
    case 0x15:
      if (uVar37 != 0) {
        lVar3 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
        if ((uVar37 < 8) ||
           ((puVar36 < (undefined8 *)(lVar3 + param_5 * 4) &&
            ((undefined1 *)(lVar3 + param_4 * 4) < (undefined1 *)((long)puVar36 + uVar37))))) {
          uVar47 = 0;
        }
        else {
          uVar47 = uVar37 & 0xfffffffffffffff8;
          puVar34 = (undefined1 *)((long)puVar36 + 4);
          pauVar49 = (undefined1 (*) [16])(lVar3 + param_4 * 4 + 0x10);
          uVar50 = uVar47;
          do {
            pauVar1 = pauVar49 + -1;
            auVar54 = *pauVar49;
            pauVar49 = pauVar49 + 2;
            uVar50 = uVar50 - 8;
            auVar56._8_8_ = 0xff000000ff;
            auVar56._0_8_ = 0xff000000ff;
            auVar56 = NEON_umin(*pauVar1,auVar56,4);
            auVar59._8_8_ = 0xff000000ff;
            auVar59._0_8_ = 0xff000000ff;
            auVar54 = NEON_umin(auVar54,auVar59,4);
            *(ulong *)(puVar34 + -4) =
                 CONCAT44(CONCAT13(auVar54[0xc],CONCAT12(auVar54[8],CONCAT11(auVar54[4],auVar54[0]))
                                  ),
                          CONCAT13(auVar56[0xc],CONCAT12(auVar56[8],CONCAT11(auVar56[4],auVar56[0]))
                                  ));
            puVar34 = puVar34 + 8;
          } while (uVar50 != 0);
          if (uVar37 == uVar47) {
            return;
          }
        }
        param_5 = (uVar47 + param_4) - param_5;
        puVar34 = (undefined1 *)((long)puVar36 + uVar47);
        puVar38 = (uint *)(lVar3 + (uVar47 + param_4) * 4);
        do {
          uVar5 = *puVar38;
          if (0xfe < uVar5) {
            uVar5 = 0xff;
          }
          bVar32 = param_5 != -1;
          param_5 = param_5 + 1;
          *puVar34 = (char)uVar5;
          puVar34 = puVar34 + 1;
          puVar38 = puVar38 + 1;
        } while (bVar32);
      }
      break;
    case 0x16:
      if (uVar37 != 0) {
        lVar3 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
        if ((uVar37 < 4) ||
           ((pauVar49 = (undefined1 (*) [16])(lVar3 + param_4 * 4),
            puVar36 < (undefined8 *)(lVar3 + param_5 * 4) &&
            (pauVar49 < (undefined1 (*) [16])((long)puVar36 + uVar37))))) {
          uVar47 = 0;
        }
        else {
          uVar47 = uVar37 & 0xfffffffffffffffc;
          uVar50 = uVar47;
          puVar33 = puVar36;
          do {
            uVar50 = uVar50 - 4;
            auVar54._8_8_ = 0xff000000ff;
            auVar54._0_8_ = 0xff000000ff;
            auVar54 = NEON_smin(*pauVar49,auVar54,4);
            auVar54 = NEON_smax(auVar54,ZEXT816(0),4);
            *(uint *)puVar33 =
                 CONCAT13(auVar54[0xc],CONCAT12(auVar54[8],CONCAT11(auVar54[4],auVar54[0])));
            puVar33 = (undefined8 *)((long)puVar33 + 4);
            pauVar49 = pauVar49 + 1;
          } while (uVar50 != 0);
          if (uVar37 == uVar47) {
            return;
          }
        }
        param_5 = (uVar47 + param_4) - param_5;
        pbVar35 = (byte *)((long)puVar36 + uVar47);
        piVar43 = (int *)(lVar3 + (uVar47 + param_4) * 4);
        do {
          iVar6 = *piVar43;
          if (0xfe < iVar6) {
            iVar6 = 0xff;
          }
          bVar32 = param_5 != -1;
          param_5 = param_5 + 1;
          *pbVar35 = (byte)iVar6 & ((byte)(iVar6 >> 0x1f) ^ 0xff);
          pbVar35 = pbVar35 + 1;
          piVar43 = piVar43 + 1;
        } while (bVar32);
      }
      break;
    case 0x17:
      if (uVar37 != 0) {
        pfVar44 = (float *)(*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) +
                           param_4 * 4);
        do {
          fVar52 = *pfVar44;
          if (fVar52 <= 0.0) {
            uVar48 = 0;
          }
          else if (fVar52 <= 255.0) {
            uVar48 = (undefined1)(long)(double)(long)fVar52;
          }
          else {
            uVar48 = 0xff;
          }
          *(undefined1 *)puVar36 = uVar48;
          uVar37 = uVar37 - 1;
          pfVar44 = pfVar44 + 1;
          puVar36 = (undefined8 *)((long)puVar36 + 1);
        } while (uVar37 != 0);
      }
      break;
    case 0x18:
      if (uVar37 != 0) {
        pdVar41 = (double *)
                  (*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + param_4 * 8);
        do {
          dVar14 = *pdVar41;
          if (dVar14 <= 0.0) {
            uVar48 = 0;
          }
          else if (dVar14 <= 255.0) {
            uVar48 = (undefined1)(long)(double)(long)dVar14;
          }
          else {
            uVar48 = 0xff;
          }
          *(undefined1 *)puVar36 = uVar48;
          uVar37 = uVar37 - 1;
          pdVar41 = pdVar41 + 1;
          puVar36 = (undefined8 *)((long)puVar36 + 1);
        } while (uVar37 != 0);
      }
      break;
    case 0x1a:
      if (uVar37 == 0) {
        return;
      }
      FUN_010c07f4();
      param_2 = extraout_x1;
      puVar36 = extraout_x8;
      uVar37 = extraout_x9;
    case 0x13:
      if (uVar37 != 0) {
        lVar3 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
        if ((uVar37 < 0x10) ||
           ((puVar36 < (undefined8 *)(lVar3 + param_5 * 2) &&
            ((undefined1 *)(lVar3 + param_4 * 2) < (undefined1 *)((long)puVar36 + uVar37))))) {
          uVar47 = 0;
        }
        else {
          uVar47 = uVar37 & 0xfffffffffffffff0;
          puVar33 = puVar36 + 1;
          puVar39 = (ushort *)(lVar3 + param_4 * 2 + 0x10);
          uVar50 = uVar47;
          do {
            puVar2 = puVar39 + -8;
            puVar16 = puVar39 + -7;
            puVar17 = puVar39 + -6;
            puVar18 = puVar39 + -5;
            puVar19 = puVar39 + -4;
            puVar20 = puVar39 + -3;
            puVar21 = puVar39 + -2;
            puVar22 = puVar39 + -1;
            uVar46 = *puVar39;
            puVar23 = puVar39 + 1;
            puVar24 = puVar39 + 2;
            puVar25 = puVar39 + 3;
            puVar26 = puVar39 + 4;
            puVar27 = puVar39 + 5;
            puVar28 = puVar39 + 6;
            puVar29 = puVar39 + 7;
            puVar39 = puVar39 + 0x10;
            uVar50 = uVar50 - 0x10;
            auVar58._2_2_ = 0;
            auVar58._0_2_ = *puVar2;
            auVar58._4_2_ = *puVar16;
            auVar58._6_2_ = 0;
            auVar58._8_2_ = *puVar17;
            auVar58._10_2_ = 0;
            auVar58._12_2_ = *puVar18;
            auVar58._14_2_ = 0;
            auVar61._2_2_ = 0;
            auVar61._0_2_ = uVar46;
            auVar61._4_2_ = *puVar23;
            auVar61._6_2_ = 0;
            auVar61._8_2_ = *puVar24;
            auVar61._10_2_ = 0;
            auVar61._12_2_ = *puVar25;
            auVar61._14_2_ = 0;
            auVar53._2_2_ = 0;
            auVar53._0_2_ = *puVar19;
            auVar53._4_2_ = *puVar20;
            auVar53._6_2_ = 0;
            auVar53._8_2_ = *puVar21;
            auVar53._10_2_ = 0;
            auVar53._12_2_ = *puVar22;
            auVar53._14_2_ = 0;
            auVar55._2_2_ = 0;
            auVar55._0_2_ = *puVar26;
            auVar55._4_2_ = *puVar27;
            auVar55._6_2_ = 0;
            auVar55._8_2_ = *puVar28;
            auVar55._10_2_ = 0;
            auVar55._12_2_ = *puVar29;
            auVar55._14_2_ = 0;
            auVar9._8_8_ = 0xff000000ff;
            auVar9._0_8_ = 0xff000000ff;
            auVar59 = NEON_umin(auVar58,auVar9,4);
            auVar10._8_8_ = 0xff000000ff;
            auVar10._0_8_ = 0xff000000ff;
            auVar62 = NEON_umin(auVar61,auVar10,4);
            auVar11._8_8_ = 0xff000000ff;
            auVar11._0_8_ = 0xff000000ff;
            auVar54 = NEON_umin(auVar53,auVar11,4);
            auVar12._8_8_ = 0xff000000ff;
            auVar12._0_8_ = 0xff000000ff;
            auVar56 = NEON_umin(auVar55,auVar12,4);
            puVar33[-1] = CONCAT17(auVar54[0xc],
                                   CONCAT16(auVar54[8],
                                            CONCAT15(auVar54[4],
                                                     CONCAT14(auVar54[0],
                                                              CONCAT13(auVar59[0xc],
                                                                       CONCAT12(auVar59[8],
                                                                                CONCAT11(auVar59[4],
                                                                                         auVar59[0])
                                                                               ))))));
            *puVar33 = CONCAT17(auVar56[0xc],
                                CONCAT16(auVar56[8],
                                         CONCAT15(auVar56[4],
                                                  CONCAT14(auVar56[0],
                                                           CONCAT13(auVar62[0xc],
                                                                    CONCAT12(auVar62[8],
                                                                             CONCAT11(auVar62[4],
                                                                                      auVar62[0]))))
                                                 )));
            puVar33 = puVar33 + 2;
          } while (uVar50 != 0);
          if (uVar37 == uVar47) {
            return;
          }
        }
        param_5 = (uVar47 + param_4) - param_5;
        puVar34 = (undefined1 *)((long)puVar36 + uVar47);
        puVar39 = (ushort *)(lVar3 + (uVar47 + param_4) * 2);
        do {
          uVar46 = *puVar39;
          if (0xfe < uVar46) {
            uVar46 = 0xff;
          }
          bVar32 = param_5 != -1;
          param_5 = param_5 + 1;
          *puVar34 = (char)uVar46;
          puVar34 = puVar34 + 1;
          puVar39 = puVar39 + 1;
        } while (bVar32);
      }
      break;
    case 0x1b:
      if (uVar37 == 0) {
        return;
      }
      FUN_010c0808();
      param_2 = extraout_x1_00;
      puVar36 = extraout_x8_00;
      uVar37 = extraout_x9_00;
    case 0x19:
      if (uVar37 != 0) {
        lVar3 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
        if ((uVar37 < 0x20) ||
           ((puVar36 < (undefined8 *)(lVar3 + param_5) &&
            ((undefined1 *)(lVar3 + param_4) < (undefined1 *)((long)puVar36 + uVar37))))) {
          uVar47 = 0;
        }
        else {
          uVar47 = uVar37 & 0xffffffffffffffe0;
          puVar33 = (undefined8 *)(param_4 + lVar3 + 0x10);
          puVar51 = puVar36 + 2;
          uVar50 = uVar47;
          do {
            puVar8 = puVar33 + -1;
            uVar15 = puVar33[-2];
            uVar30 = *puVar33;
            uVar31 = puVar33[1];
            puVar33 = puVar33 + 4;
            uVar50 = uVar50 - 0x20;
            puVar51[-1] = *puVar8;
            puVar51[-2] = uVar15;
            puVar51[1] = uVar31;
            *puVar51 = uVar30;
            puVar51 = puVar51 + 4;
          } while (uVar50 != 0);
          if (uVar37 == uVar47) {
            return;
          }
        }
        param_5 = (uVar47 + param_4) - param_5;
        puVar34 = (undefined1 *)((long)puVar36 + uVar47);
        puVar45 = (undefined1 *)(lVar3 + uVar47 + param_4);
        do {
          bVar32 = param_5 != -1;
          param_5 = param_5 + 1;
          *puVar34 = *puVar45;
          puVar34 = puVar34 + 1;
          puVar45 = puVar45 + 1;
        } while (bVar32);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!destination.WasDetached()");
}

