
void FUN_0107e884(ulong param_1,ulong param_2,ulong param_3,long param_4)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  short sVar3;
  uint uVar4;
  short sVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined8 uVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  undefined1 (*pauVar26) [16];
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  int iVar33;
  int iVar34;
  long lVar35;
  long lVar36;
  uint *puVar37;
  ushort *puVar38;
  short *psVar39;
  byte *pbVar40;
  int *piVar41;
  undefined1 *puVar42;
  undefined8 *puVar43;
  undefined4 *puVar44;
  undefined1 (*pauVar45) [16];
  undefined1 uVar46;
  byte *pbVar47;
  undefined1 *puVar48;
  ulong uVar49;
  ushort uVar50;
  undefined1 (*__dest) [16];
  undefined1 (*__src) [16];
  ulong uVar51;
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
  ulong local_50;
  ulong local_48;
  
  local_50 = param_2;
  local_48 = param_1;
  if ((*(uint *)((param_1 & 0xffffffff00000000 | (ulong)*(uint *)(param_1 + 0xb)) + 0x1b) >> 2 & 1)
      != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!source.WasDetached()");
  }
  if ((*(uint *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xb)) + 0x1b) >> 2 & 1)
      != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!destination.WasDetached()");
  }
  iVar33 = v8::internal::JSTypedArray::type((JSTypedArray *)&local_48);
  iVar34 = v8::internal::JSTypedArray::type((JSTypedArray *)&local_50);
  lVar35 = v8::internal::JSTypedArray::element_size((JSTypedArray *)&local_48);
  lVar36 = v8::internal::JSTypedArray::element_size((JSTypedArray *)&local_50);
  __src = (undefined1 (*) [16])(*(long *)(local_48 + 0x27) + (ulong)*(uint *)(local_48 + 0x2f));
  uVar2 = *(long *)(local_50 + 0x27) + (ulong)*(uint *)(local_50 + 0x2f);
  if ((iVar33 == iVar34) || (lVar35 == lVar36 && (2 < iVar33 - 7U && 2 < iVar34 - 7U))) {
    lVar35 = v8::internal::JSTypedArray::element_size((JSTypedArray *)&local_48);
    memmove((void *)(uVar2 + lVar35 * param_4),__src,lVar35 * param_3);
    return;
  }
  uVar51 = *(ulong *)(local_48 + 0x17);
  __dest = (undefined1 (*) [16])0x0;
  if ((uVar2 < (long)*__src + uVar51) &&
     (__src < (undefined1 (*) [16])(uVar2 + *(long *)(local_50 + 0x17)))) {
    __dest = operator_new__(uVar51);
    memcpy(__dest,__src,uVar51);
    __src = __dest;
  }
  switch(*(byte *)((local_48 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(local_48 - 1)) >> 3) {
  case 0x11:
    if (param_3 != 0) {
      if ((param_3 < 0x20) ||
         ((uVar2 + param_4 < (long)*__src + param_3 &&
          (__src < (undefined1 (*) [16])(uVar2 + param_4 + param_3))))) {
        uVar51 = 0;
      }
      else {
        uVar51 = param_3 & 0xffffffffffffffe0;
        pauVar45 = __src + 1;
        puVar43 = (undefined8 *)(param_4 + uVar2 + 0x10);
        uVar49 = uVar51;
        do {
          pauVar1 = pauVar45 + -1;
          uVar12 = *(undefined8 *)pauVar45[-1];
          uVar18 = *(undefined8 *)*pauVar45;
          uVar19 = *(undefined8 *)(*pauVar45 + 8);
          pauVar45 = pauVar45 + 2;
          uVar49 = uVar49 - 0x20;
          puVar43[-1] = *(undefined8 *)(*pauVar1 + 8);
          puVar43[-2] = uVar12;
          puVar43[1] = uVar19;
          *puVar43 = uVar18;
          puVar43 = puVar43 + 4;
        } while (uVar49 != 0);
        if (uVar51 == param_3) break;
      }
      lVar35 = param_3 - uVar51;
      puVar42 = (undefined1 *)((long)*__src + uVar51);
      puVar48 = (undefined1 *)(uVar2 + uVar51 + param_4);
      do {
        lVar35 = lVar35 + -1;
        *puVar48 = *puVar42;
        puVar42 = puVar42 + 1;
        puVar48 = puVar48 + 1;
      } while (lVar35 != 0);
    }
    break;
  case 0x12:
    if (param_3 != 0) {
      if ((param_3 < 0x10) ||
         (((undefined8 *)(uVar2 + param_4) < (undefined8 *)((long)*__src + param_3) &&
          (__src < (undefined1 (*) [16])(uVar2 + param_4 + param_3))))) {
        uVar51 = 0;
      }
      else {
        uVar51 = param_3 & 0xfffffffffffffff0;
        puVar43 = (undefined8 *)(uVar2 + param_4);
        uVar49 = uVar51;
        pauVar45 = __src;
        do {
          uVar49 = uVar49 - 0x10;
          auVar54 = NEON_smax(*pauVar45,ZEXT816(0),1);
          puVar43[1] = auVar54._8_8_;
          *puVar43 = auVar54._0_8_;
          puVar43 = puVar43 + 2;
          pauVar45 = pauVar45 + 1;
        } while (uVar49 != 0);
        if (uVar51 == param_3) break;
      }
      lVar35 = param_3 - uVar51;
      pbVar40 = (byte *)((long)*__src + uVar51);
      pbVar47 = (byte *)(uVar2 + uVar51 + param_4);
      do {
        lVar35 = lVar35 + -1;
        *pbVar47 = *pbVar40 & ((byte)((uint)(int)(char)*pbVar40 >> 7) ^ 0xff);
        pbVar40 = pbVar40 + 1;
        pbVar47 = pbVar47 + 1;
      } while (lVar35 != 0);
    }
    break;
  case 0x13:
    goto switchD_0107e9c4_caseD_13;
  case 0x14:
    if (param_3 != 0) {
      if ((param_3 < 8) ||
         (((undefined8 *)(uVar2 + param_4) < (undefined8 *)((long)*__src + param_3 * 2) &&
          (__src < (undefined1 (*) [16])(uVar2 + param_4 + param_3))))) {
        uVar51 = 0;
      }
      else {
        uVar51 = param_3 & 0xfffffffffffffff8;
        puVar43 = (undefined8 *)(uVar2 + param_4);
        uVar49 = uVar51;
        pauVar45 = __src;
        do {
          sVar3 = *(short *)((long)*pauVar45 + 2);
          sVar5 = *(short *)((long)*pauVar45 + 4);
          sVar13 = *(short *)((long)*pauVar45 + 6);
          sVar14 = *(short *)((long)*pauVar45 + 8);
          sVar15 = *(short *)((long)*pauVar45 + 10);
          sVar16 = *(short *)((long)*pauVar45 + 0xc);
          sVar17 = *(short *)((long)*pauVar45 + 0xe);
          uVar49 = uVar49 - 8;
          auVar57._0_4_ = (int)*(short *)*pauVar45;
          auVar57._4_4_ = (int)sVar3;
          auVar57._8_4_ = (int)sVar5;
          auVar57._12_4_ = (int)sVar13;
          auVar60._0_4_ = (int)sVar14;
          auVar60._4_4_ = (int)sVar15;
          auVar60._8_4_ = (int)sVar16;
          auVar60._12_4_ = (int)sVar17;
          auVar62._8_8_ = 0xff000000ff;
          auVar62._0_8_ = 0xff000000ff;
          auVar54 = NEON_smin(auVar57,auVar62,4);
          auVar10._8_8_ = 0xff000000ff;
          auVar10._0_8_ = 0xff000000ff;
          auVar56 = NEON_smin(auVar60,auVar10,4);
          *puVar43 = CONCAT17(auVar56[0xc] & ~-(sVar17 < 0),
                              CONCAT16(auVar56[8] & ~-(sVar16 < 0),
                                       CONCAT15(auVar56[4] & ~-(sVar15 < 0),
                                                CONCAT14(auVar56[0] & ~-(sVar14 < 0),
                                                         CONCAT13(auVar54[0xc] & ~-(sVar13 < 0),
                                                                  CONCAT12(auVar54[8] &
                                                                           ~-(sVar5 < 0),
                                                                           CONCAT11(auVar54[4] &
                                                                                    ~-(sVar3 < 0),
                                                                                    auVar54[0] &
                                                                                    ~-(*(short *)*
                                                  pauVar45 < 0))))))));
          puVar43 = puVar43 + 1;
          pauVar45 = pauVar45 + 1;
        } while (uVar49 != 0);
        if (uVar51 == param_3) break;
      }
      lVar35 = param_3 - uVar51;
      psVar39 = (short *)((long)*__src + uVar51 * 2);
      puVar42 = (undefined1 *)(uVar2 + uVar51 + param_4);
      do {
        sVar5 = *psVar39;
        sVar3 = sVar5;
        if (0xfe < sVar5) {
          sVar3 = -1;
        }
        uVar46 = 0;
        if (-1 < sVar5) {
          uVar46 = (char)sVar3;
        }
        lVar35 = lVar35 + -1;
        *puVar42 = uVar46;
        psVar39 = psVar39 + 1;
        puVar42 = puVar42 + 1;
      } while (lVar35 != 0);
    }
    break;
  case 0x15:
    if (param_3 != 0) {
      if ((param_3 < 8) ||
         (((void *)(uVar2 + param_4) < (void *)((long)*__src + param_3 * 4) &&
          (__src < (undefined1 (*) [16])(uVar2 + param_4 + param_3))))) {
        uVar51 = 0;
      }
      else {
        uVar51 = param_3 & 0xfffffffffffffff8;
        pauVar45 = __src + 1;
        lVar35 = param_4 + uVar2 + 4;
        uVar49 = uVar51;
        do {
          pauVar1 = pauVar45 + -1;
          auVar54 = *pauVar45;
          pauVar45 = pauVar45 + 2;
          uVar49 = uVar49 - 8;
          auVar56._8_8_ = 0xff000000ff;
          auVar56._0_8_ = 0xff000000ff;
          auVar56 = NEON_umin(*pauVar1,auVar56,4);
          auVar59._8_8_ = 0xff000000ff;
          auVar59._0_8_ = 0xff000000ff;
          auVar54 = NEON_umin(auVar54,auVar59,4);
          *(ulong *)(lVar35 + -4) =
               CONCAT44(CONCAT13(auVar54[0xc],CONCAT12(auVar54[8],CONCAT11(auVar54[4],auVar54[0]))),
                        CONCAT13(auVar56[0xc],CONCAT12(auVar56[8],CONCAT11(auVar56[4],auVar56[0]))))
          ;
          lVar35 = lVar35 + 8;
        } while (uVar49 != 0);
        if (uVar51 == param_3) break;
      }
      lVar35 = param_3 - uVar51;
      puVar37 = (uint *)((long)*__src + uVar51 * 4);
      puVar42 = (undefined1 *)(uVar2 + uVar51 + param_4);
      do {
        uVar4 = *puVar37;
        if (0xfe < uVar4) {
          uVar4 = 0xff;
        }
        lVar35 = lVar35 + -1;
        *puVar42 = (char)uVar4;
        puVar37 = puVar37 + 1;
        puVar42 = puVar42 + 1;
      } while (lVar35 != 0);
    }
    break;
  case 0x16:
    if (param_3 != 0) {
      if ((param_3 < 4) ||
         ((puVar44 = (undefined4 *)(uVar2 + param_4),
          puVar44 < (undefined4 *)((long)*__src + param_3 * 4) &&
          (__src < (undefined1 (*) [16])(uVar2 + param_4 + param_3))))) {
        uVar51 = 0;
      }
      else {
        uVar51 = param_3 & 0xfffffffffffffffc;
        uVar49 = uVar51;
        pauVar45 = __src;
        do {
          uVar49 = uVar49 - 4;
          auVar54._8_8_ = 0xff000000ff;
          auVar54._0_8_ = 0xff000000ff;
          auVar54 = NEON_smin(*pauVar45,auVar54,4);
          auVar54 = NEON_smax(auVar54,ZEXT816(0),4);
          *puVar44 = CONCAT13(auVar54[0xc],CONCAT12(auVar54[8],CONCAT11(auVar54[4],auVar54[0])));
          puVar44 = puVar44 + 1;
          pauVar45 = pauVar45 + 1;
        } while (uVar49 != 0);
        if (uVar51 == param_3) break;
      }
      lVar35 = param_3 - uVar51;
      piVar41 = (int *)((long)*__src + uVar51 * 4);
      pbVar40 = (byte *)(uVar2 + uVar51 + param_4);
      do {
        iVar33 = *piVar41;
        if (0xfe < iVar33) {
          iVar33 = 0xff;
        }
        lVar35 = lVar35 + -1;
        *pbVar40 = (byte)iVar33 & ((byte)(iVar33 >> 0x1f) ^ 0xff);
        piVar41 = piVar41 + 1;
        pbVar40 = pbVar40 + 1;
      } while (lVar35 != 0);
    }
    break;
  case 0x17:
    if (param_3 != 0) {
      puVar42 = (undefined1 *)(uVar2 + param_4);
      do {
        fVar52 = *(float *)*__src;
        if (fVar52 <= 0.0) {
          uVar46 = 0;
        }
        else if (fVar52 <= 255.0) {
          uVar46 = (undefined1)(long)(double)(long)fVar52;
        }
        else {
          uVar46 = 0xff;
        }
        *puVar42 = uVar46;
        param_3 = param_3 - 1;
        __src = (undefined1 (*) [16])((long)*__src + 4);
        puVar42 = puVar42 + 1;
      } while (param_3 != 0);
    }
    break;
  case 0x18:
    if (param_3 != 0) {
      puVar42 = (undefined1 *)(uVar2 + param_4);
      do {
        dVar11 = *(double *)*__src;
        if (dVar11 <= 0.0) {
          uVar46 = 0;
        }
        else if (dVar11 <= 255.0) {
          uVar46 = (undefined1)(long)(double)(long)dVar11;
        }
        else {
          uVar46 = 0xff;
        }
        *puVar42 = uVar46;
        param_3 = param_3 - 1;
        __src = (undefined1 (*) [16])((long)*__src + 8);
        puVar42 = puVar42 + 1;
      } while (param_3 != 0);
    }
    break;
  case 0x19:
    goto switchD_0107e9c4_caseD_19;
  case 0x1a:
    if (param_3 == 0) break;
    FUN_010c07f4();
switchD_0107e9c4_caseD_13:
    if (param_3 != 0) {
      if ((param_3 < 0x10) ||
         (((void *)(uVar2 + param_4) < (void *)((long)*__src + param_3 * 2) &&
          (__src < (undefined1 (*) [16])(uVar2 + param_4 + param_3))))) {
        uVar51 = 0;
      }
      else {
        uVar51 = param_3 & 0xfffffffffffffff0;
        pauVar45 = __src + 1;
        puVar43 = (undefined8 *)(param_4 + uVar2 + 8);
        uVar49 = uVar51;
        do {
          pauVar1 = pauVar45 + -1;
          pauVar20 = pauVar45 + -1;
          pauVar21 = pauVar45 + -1;
          pauVar22 = pauVar45 + -1;
          pauVar23 = pauVar45 + -1;
          pauVar24 = pauVar45 + -1;
          pauVar25 = pauVar45 + -1;
          pauVar26 = pauVar45 + -1;
          puVar42 = *pauVar45;
          puVar48 = *pauVar45;
          puVar27 = *pauVar45;
          puVar28 = *pauVar45;
          puVar29 = *pauVar45;
          puVar30 = *pauVar45;
          puVar31 = *pauVar45;
          puVar32 = *pauVar45;
          pauVar45 = pauVar45 + 2;
          uVar49 = uVar49 - 0x10;
          auVar58._2_2_ = 0;
          auVar58._0_2_ = *(ushort *)*pauVar1;
          auVar58._4_2_ = *(undefined2 *)(*pauVar20 + 2);
          auVar58._6_2_ = 0;
          auVar58._8_2_ = *(undefined2 *)(*pauVar21 + 4);
          auVar58._10_2_ = 0;
          auVar58._12_2_ = *(undefined2 *)(*pauVar22 + 6);
          auVar58._14_2_ = 0;
          auVar61._2_2_ = 0;
          auVar61._0_2_ = *(ushort *)puVar42;
          auVar61._4_2_ = *(undefined2 *)(puVar48 + 2);
          auVar61._6_2_ = 0;
          auVar61._8_2_ = *(undefined2 *)(puVar27 + 4);
          auVar61._10_2_ = 0;
          auVar61._12_2_ = *(undefined2 *)(puVar28 + 6);
          auVar61._14_2_ = 0;
          auVar53._2_2_ = 0;
          auVar53._0_2_ = *(ushort *)(*pauVar23 + 8);
          auVar53._4_2_ = *(undefined2 *)(*pauVar24 + 10);
          auVar53._6_2_ = 0;
          auVar53._8_2_ = *(undefined2 *)(*pauVar25 + 0xc);
          auVar53._10_2_ = 0;
          auVar53._12_2_ = *(undefined2 *)(*pauVar26 + 0xe);
          auVar53._14_2_ = 0;
          auVar55._2_2_ = 0;
          auVar55._0_2_ = *(ushort *)(puVar29 + 8);
          auVar55._4_2_ = *(undefined2 *)(puVar30 + 10);
          auVar55._6_2_ = 0;
          auVar55._8_2_ = *(undefined2 *)(puVar31 + 0xc);
          auVar55._10_2_ = 0;
          auVar55._12_2_ = *(undefined2 *)(puVar32 + 0xe);
          auVar55._14_2_ = 0;
          auVar6._8_8_ = 0xff000000ff;
          auVar6._0_8_ = 0xff000000ff;
          auVar59 = NEON_umin(auVar58,auVar6,4);
          auVar7._8_8_ = 0xff000000ff;
          auVar7._0_8_ = 0xff000000ff;
          auVar62 = NEON_umin(auVar61,auVar7,4);
          auVar8._8_8_ = 0xff000000ff;
          auVar8._0_8_ = 0xff000000ff;
          auVar54 = NEON_umin(auVar53,auVar8,4);
          auVar9._8_8_ = 0xff000000ff;
          auVar9._0_8_ = 0xff000000ff;
          auVar56 = NEON_umin(auVar55,auVar9,4);
          puVar43[-1] = CONCAT17(auVar54[0xc],
                                 CONCAT16(auVar54[8],
                                          CONCAT15(auVar54[4],
                                                   CONCAT14(auVar54[0],
                                                            CONCAT13(auVar59[0xc],
                                                                     CONCAT12(auVar59[8],
                                                                              CONCAT11(auVar59[4],
                                                                                       auVar59[0])))
                                                           ))));
          *puVar43 = CONCAT17(auVar56[0xc],
                              CONCAT16(auVar56[8],
                                       CONCAT15(auVar56[4],
                                                CONCAT14(auVar56[0],
                                                         CONCAT13(auVar62[0xc],
                                                                  CONCAT12(auVar62[8],
                                                                           CONCAT11(auVar62[4],
                                                                                    auVar62[0]))))))
                             );
          puVar43 = puVar43 + 2;
        } while (uVar49 != 0);
        if (uVar51 == param_3) break;
      }
      lVar35 = param_3 - uVar51;
      puVar38 = (ushort *)((long)*__src + uVar51 * 2);
      puVar42 = (undefined1 *)(uVar2 + uVar51 + param_4);
      do {
        uVar50 = *puVar38;
        if (0xfe < uVar50) {
          uVar50 = 0xff;
        }
        lVar35 = lVar35 + -1;
        *puVar42 = (char)uVar50;
        puVar38 = puVar38 + 1;
        puVar42 = puVar42 + 1;
      } while (lVar35 != 0);
    }
    break;
  case 0x1b:
    if (param_3 == 0) break;
    FUN_010c0808();
switchD_0107e9c4_caseD_19:
    if (param_3 != 0) {
      if ((param_3 < 0x20) ||
         ((uVar2 + param_4 < (long)*__src + param_3 &&
          (__src < (undefined1 (*) [16])(uVar2 + param_4 + param_3))))) {
        uVar51 = 0;
      }
      else {
        uVar51 = param_3 & 0xffffffffffffffe0;
        pauVar45 = __src + 1;
        puVar43 = (undefined8 *)(param_4 + uVar2 + 0x10);
        uVar49 = uVar51;
        do {
          pauVar1 = pauVar45 + -1;
          uVar12 = *(undefined8 *)pauVar45[-1];
          uVar18 = *(undefined8 *)*pauVar45;
          uVar19 = *(undefined8 *)(*pauVar45 + 8);
          pauVar45 = pauVar45 + 2;
          uVar49 = uVar49 - 0x20;
          puVar43[-1] = *(undefined8 *)(*pauVar1 + 8);
          puVar43[-2] = uVar12;
          puVar43[1] = uVar19;
          *puVar43 = uVar18;
          puVar43 = puVar43 + 4;
        } while (uVar49 != 0);
        if (uVar51 == param_3) break;
      }
      lVar35 = param_3 - uVar51;
      puVar42 = (undefined1 *)((long)*__src + uVar51);
      puVar48 = (undefined1 *)(uVar2 + uVar51 + param_4);
      do {
        lVar35 = lVar35 + -1;
        *puVar48 = *puVar42;
        puVar42 = puVar42 + 1;
        puVar48 = puVar48 + 1;
      } while (lVar35 != 0);
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  if (__dest != (undefined1 (*) [16])0x0) {
    operator_delete__(__dest);
  }
  return;
}

