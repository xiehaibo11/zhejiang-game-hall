
ulong FUN_00c0996c(long *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  ushort *puVar3;
  ulong *puVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  short sVar9;
  char cVar10;
  uint5 uVar11;
  undefined4 *puVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  void *pvVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  undefined4 *puVar19;
  long lVar20;
  undefined1 *__dest;
  long lVar21;
  ulong uVar22;
  long lVar23;
  void *__src;
  int *piVar24;
  long lVar25;
  undefined8 *puVar26;
  ulong *puVar27;
  ulong uVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  int iVar32;
  undefined8 *puVar33;
  long lVar34;
  long *plVar35;
  long lVar36;
  long *plVar37;
  ushort *puVar38;
  long lVar39;
  long lVar40;
  ulong uVar41;
  ulong uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  int local_c0;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined4 local_a0;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  ulong local_58;
  undefined8 local_50;
  
  plVar37 = (long *)*param_1;
  lVar40 = param_1[1];
  uVar15 = *(uint *)(plVar37 + 5);
  param_2 = param_2 - *(int *)((long)plVar37 + 0x44);
  if (*(uint *)((long)plVar37 + 0x2c) < uVar15) {
    switch(*(undefined1 *)(plVar37[9] + (ulong)(uVar15 - 1) * 8)) {
    case 0x43:
    case 0x44:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
switchD_00c0a218_caseD_43:
      *(byte *)(plVar37[3] + 0xd) = *(byte *)(plVar37[3] + 0xd) | 0x10;
      FUN_00c096b4(plVar37);
      if (((*(byte *)(plVar37 + 0xb) >> 6 & 1) != 0) && (1 < uVar15)) {
        lVar25 = plVar37[9];
        lVar34 = 8;
        iVar32 = 0x7ffe;
        do {
          switch(*(uint *)(lVar25 + lVar34) & 0xff) {
          case 0x32:
            goto switchD_00c09a50_caseD_32;
          case 0x43:
          case 0x44:
          case 0x49:
          case 0x4a:
          case 0x4b:
          case 0x4c:
            uVar14 = FUN_00c07f70(plVar37);
            lVar25 = plVar37[9];
            *(undefined4 *)(lVar25 + (ulong)uVar14 * 8 + 4) = *(undefined4 *)(lVar25 + lVar34 + 4);
            if (0xffff < uVar14 + iVar32) {
                    /* WARNING: Subroutine does not return */
              FUN_00c07bc4(plVar37[1],0x9f2);
            }
            *(uint *)(lVar25 + lVar34) = (uVar14 + iVar32) * 0x10000 | 0x32;
          }
          iVar32 = iVar32 + -1;
          lVar34 = lVar34 + 8;
        } while (iVar32 != 0x7fff - uVar15);
      }
switchD_00c09a50_caseD_32:
      uVar14 = *(uint *)(plVar37 + 5);
      uVar15 = 0;
      lVar20 = (ulong)*(uint *)((long)plVar37 + 0x3c) * 8;
      uVar28 = ((ulong)uVar14 + 0x1a + (ulong)*(uint *)(plVar37 + 8) * 2) * 4 + 7 &
               0xfffffffffffffff8;
      lVar25 = ((ulong)(*(byte *)((long)plVar37 + 0x5b) + 1) & 0x1fe) * 2;
      lVar34 = uVar28 + lVar20;
      if ((0xff < param_2) && (uVar15 = 2, param_2 < 0x10000)) {
        uVar15 = 1;
      }
      __dest = (undefined1 *)param_1[10];
      param_1[8] = (long)__dest;
      lVar2 = (ulong)(uVar14 - 1 << (ulong)uVar15) + lVar34 + lVar25;
      lVar36 = param_1[0x12];
      if (*(byte *)((long)plVar37 + 0x5b) == 0) {
        local_58 = 0;
      }
      else {
        puVar38 = (ushort *)((long)plVar37 + 0x1ec);
        puVar3 = (ushort *)
                 ((long)plVar37 + ((ulong)(*(byte *)((long)plVar37 + 0x5b) - 1) + 0xf7) * 2);
        do {
          while( true ) {
            lVar39 = *(long *)(lVar36 + (ulong)*puVar38 * 0x18);
            uVar15 = *(int *)(lVar39 + 0x10) + 1;
            uVar41 = (ulong)uVar15;
            if (uVar15 <= (uint)((int)param_1[9] - (int)__dest)) break;
            puVar38 = puVar38 + 1;
            pvVar16 = (void *)FUN_00c1a4a8(param_1 + 8,uVar41);
            pvVar16 = memcpy(pvVar16,(void *)(lVar39 + 0x18),uVar41);
            __dest = (undefined1 *)((long)pvVar16 + uVar41);
            param_1[8] = (long)__dest;
            if (puVar38 == puVar3) goto LAB_00c09bbc;
          }
          puVar38 = puVar38 + 1;
          pvVar16 = memcpy(__dest,(void *)(lVar39 + 0x18),uVar41);
          __dest = (undefined1 *)((long)pvVar16 + uVar41);
          param_1[8] = (long)__dest;
        } while (puVar38 != puVar3);
LAB_00c09bbc:
        local_58 = (ulong)(uint)((int)__dest - (int)param_1[10]);
      }
      plVar35 = param_1 + 8;
      puVar4 = (ulong *)(lVar36 + (ulong)*(uint *)((long)param_1 + 0x9c) * 0x18);
      puVar27 = (ulong *)(lVar36 + (ulong)*(uint *)((long)plVar37 + 0x54) * 0x18);
      if (puVar27 < puVar4) {
        iVar32 = 0;
        do {
          if ((*(byte *)((long)puVar27 + 0x11) & 6) == 0) {
            uVar41 = *puVar27;
            if (uVar41 < 7) {
              if ((uint)((int)param_1[9] - (int)__dest) < 0xb) {
                __dest = (undefined1 *)FUN_00c1a4a8(plVar35,0xb);
              }
              puVar17 = __dest + 1;
              *__dest = (char)uVar41;
            }
            else {
              uVar42 = (ulong)(*(int *)(uVar41 + 0x10) + 1);
              if ((uint)((int)param_1[9] - (int)__dest) < *(int *)(uVar41 + 0x10) + 0xbU) {
                __dest = (undefined1 *)FUN_00c1a4a8(plVar35);
              }
              pvVar16 = memcpy(__dest,(void *)(uVar41 + 0x18),uVar42);
              puVar17 = (undefined1 *)((long)pvVar16 + uVar42);
            }
            iVar49 = (int)puVar27[1];
            uVar18 = thunk_FUN_00bff61c(puVar17,iVar49 - iVar32);
            __dest = (undefined1 *)thunk_FUN_00bff61c(uVar18,*(int *)((long)puVar27 + 0xc) - iVar49)
            ;
            param_1[8] = (long)__dest;
            iVar32 = iVar49;
          }
          puVar27 = puVar27 + 3;
        } while (puVar27 < puVar4);
      }
      if ((int)__dest == (int)param_1[9]) {
        __dest = (undefined1 *)FUN_00c1a4a8(plVar35,1);
      }
      *__dest = 0;
      param_1[8] = (long)(__dest + 1);
      uVar41 = (ulong)(uint)((int)(__dest + 1) - (int)param_1[10]) + lVar2;
      uVar42 = FUN_00c1a314(lVar40,uVar41 & 0xffffffff);
      *(undefined1 *)(uVar42 + 9) = 7;
      *(int *)(uVar42 + 0x38) = (int)uVar41;
      *(undefined2 *)(uVar42 + 0x3e) = 0;
      *(byte *)(uVar42 + 0x3d) = *(byte *)(plVar37 + 0xb) & 0x9f;
      *(undefined1 *)(uVar42 + 10) = *(undefined1 *)((long)plVar37 + 0x59);
      *(undefined1 *)(uVar42 + 0xb) = *(undefined1 *)((long)plVar37 + 0x5a);
      lVar36 = plVar37[8];
      *(long *)(uVar42 + 0x40) = param_1[0xf];
      *(undefined4 *)(uVar42 + uVar28 + (ulong)((int)lVar36 + 1) * -8) = 0;
      lVar36 = plVar37[9];
      uVar14 = *(uint *)(plVar37 + 5);
      *(uint *)(uVar42 + 0xc) = uVar14;
      uVar15 = 0x5c;
      if ((*(byte *)(plVar37 + 0xb) & 2) == 0) {
        uVar15 = 0x59;
      }
      *(uint *)(uVar42 + 0x68) = uVar15 | (uint)*(byte *)((long)plVar37 + 0x5a) << 8;
      if (1 < uVar14) {
        uVar15 = uVar14 - 1;
        puVar26 = (undefined8 *)(uVar42 + 0x6c);
        puVar19 = (undefined4 *)(lVar36 + 8);
        if ((puVar26 < (undefined8 *)(lVar36 + ((ulong)uVar15 + 1) * 8) &&
             puVar19 < (undefined4 *)(uVar42 + ((ulong)uVar15 + 0x1b) * 4)) || (uVar15 < 5)) {
          do {
            puVar12 = puVar19 + 2;
            *(undefined4 *)puVar26 = *puVar19;
            puVar19 = puVar12;
            puVar26 = (undefined8 *)((long)puVar26 + 4);
          } while (puVar12 != (undefined4 *)(lVar36 + ((ulong)(uVar14 - 2) + 2) * 8));
        }
        else {
          uVar29 = 0;
          uVar1 = (uVar14 - 6 >> 2) + 1;
          uVar30 = uVar1 * 4;
          do {
            uVar43 = *puVar19;
            uVar44 = puVar19[2];
            puVar12 = puVar19 + 4;
            uVar45 = puVar19[6];
            puVar19 = puVar19 + 8;
            uVar29 = uVar29 + 1;
            local_50 = CONCAT17((char)((uint)uVar44 >> 0x18),
                                CONCAT16((char)((uint)uVar44 >> 0x10),
                                         CONCAT15((char)((uint)uVar44 >> 8),
                                                  CONCAT14((char)uVar44,uVar43))));
            puVar26[1] = CONCAT17((char)((uint)uVar45 >> 0x18),
                                  CONCAT16((char)((uint)uVar45 >> 0x10),
                                           CONCAT15((char)((uint)uVar45 >> 8),
                                                    CONCAT14((char)uVar45,*puVar12))));
            *puVar26 = local_50;
            puVar26 = puVar26 + 2;
          } while (uVar29 < uVar1);
          if (uVar15 != uVar30) {
            uVar15 = uVar30 + 2;
            *(undefined4 *)(uVar42 + (ulong)(uVar30 + 1) * 4 + 0x68) =
                 *(undefined4 *)(lVar36 + (ulong)(uVar30 + 1) * 8);
            if (uVar15 < uVar14) {
              uVar1 = uVar30 + 3;
              *(undefined4 *)(uVar42 + (ulong)uVar15 * 4 + 0x68) =
                   *(undefined4 *)(lVar36 + (ulong)uVar15 * 8);
              if (uVar1 < uVar14) {
                uVar15 = uVar30 + 4;
                *(undefined4 *)(uVar42 + (ulong)uVar1 * 4 + 0x68) =
                     *(undefined4 *)(lVar36 + (ulong)uVar1 * 8);
                if (uVar15 < uVar14) {
                  uVar1 = uVar30 + 5;
                  *(undefined4 *)(uVar42 + (ulong)uVar15 * 4 + 0x68) =
                       *(undefined4 *)(lVar36 + (ulong)uVar15 * 8);
                  if (uVar1 < uVar14) {
                    uVar15 = uVar30 + 6;
                    *(undefined4 *)(uVar42 + (ulong)uVar1 * 4 + 0x68) =
                         *(undefined4 *)(lVar36 + (ulong)uVar1 * 8);
                    if (uVar15 < uVar14) {
                      uVar30 = uVar30 + 7;
                      *(undefined4 *)(uVar42 + (ulong)uVar15 * 4 + 0x68) =
                           *(undefined4 *)(lVar36 + (ulong)uVar15 * 8);
                      if (uVar30 < uVar14) {
                        *(undefined4 *)(uVar42 + (ulong)uVar30 * 4 + 0x68) =
                             *(undefined4 *)(lVar36 + (ulong)uVar30 * 8);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar15 = *(uint *)((long)plVar37 + 0x3c);
      lVar36 = uVar42 + uVar28;
      if ((0x10000 < uVar15) || (uVar14 = *(uint *)(plVar37 + 8), 0x10000 < uVar14)) {
                    /* WARNING: Subroutine does not return */
        FUN_007b6014(plVar37[1],*(undefined4 *)((long)plVar37 + 0x44),0x10000,"constants");
      }
      lVar31 = *plVar37;
      uVar41 = 0;
      *(long *)(uVar42 + 0x20) = lVar36;
      *(uint *)(uVar42 + 0x34) = uVar15;
      uVar15 = *(uint *)(lVar31 + 0x30);
      *(uint *)(uVar42 + 0x30) = uVar14;
      lVar39 = *(long *)(lVar31 + 0x10);
      if (uVar15 != 0) {
        do {
          if (*(int *)(lVar39 + uVar41 * 8 + 4) == 0) {
            lVar21 = (ulong)*(uint *)(lVar39 + uVar41 * 8) * 8;
            *(int *)(lVar36 + lVar21) = (int)uVar41;
            *(undefined4 *)(lVar36 + lVar21 + 4) = 0xfff90000;
            uVar15 = *(uint *)(lVar31 + 0x30);
          }
          uVar14 = (int)uVar41 + 1;
          uVar41 = (ulong)uVar14;
        } while (uVar14 < uVar15);
      }
      lVar39 = *(long *)(lVar31 + 0x28);
      uVar15 = 0;
      uVar14 = *(uint *)(lVar31 + 0x34);
      do {
        while( true ) {
          lVar31 = lVar39 + (ulong)uVar15 * 0x18;
          if (*(int *)(lVar31 + 4) == 0) break;
LAB_00c09f4c:
          uVar15 = uVar15 + 1;
          if (uVar14 < uVar15) goto LAB_00c0a028;
        }
        uVar22 = *(ulong *)(lVar31 + 8);
        uVar41 = (ulong)*(uint *)(lVar39 + (ulong)uVar15 * 0x18);
        if (0xfffffff1 < (uint)((long)uVar22 >> 0x2f)) {
          uVar22 = uVar22 & 0x7fffffffffff;
          *(ulong *)(lVar36 + ~uVar41 * 8) = uVar22;
          if (((*(byte *)(uVar22 + 8) & 3) != 0) && ((*(byte *)(uVar42 + 8) >> 2 & 1) != 0)) {
            FUN_00c1a1ac(*(undefined8 *)(plVar37[2] + 0x10),uVar42,uVar22);
          }
          if ((int)((long)*(undefined8 *)(lVar31 + 8) >> 0x2f) == -8) {
            bVar6 = *(byte *)(uVar22 + 0x3c);
            lVar31 = *(long *)(uVar22 + 0x28);
            lVar21 = *(long *)(plVar37[1] + 0x90);
            if (bVar6 != 0) {
              lVar23 = 0;
              do {
                uVar8 = *(ushort *)(lVar31 + lVar23 * 2);
                if (uVar8 < 0xffc4) {
                  lVar5 = lVar21 + (ulong)uVar8 * 0x18;
                  bVar7 = *(byte *)(lVar5 + 0x10);
                  if ((*(byte *)(lVar5 + 0x11) & 1) == 0) {
                    *(ushort *)(lVar31 + lVar23 * 2) = bVar7 | 0xc000;
                  }
                  else {
                    *(ushort *)(lVar31 + lVar23 * 2) = bVar7 | 0x8000;
                  }
                }
                else {
                  *(ushort *)(lVar31 + lVar23 * 2) = uVar8 + 0x3c;
                }
                lVar23 = lVar23 + 1;
              } while ((uint)lVar23 <= (uint)bVar6 && (uint)bVar6 != (uint)lVar23);
            }
          }
          goto LAB_00c09f4c;
        }
        iVar32 = (int)*(double *)(lVar31 + 8);
        if (*(double *)(lVar31 + 8) == (double)iVar32) {
          *(int *)(lVar36 + uVar41 * 8) = iVar32;
          *(undefined4 *)(lVar36 + uVar41 * 8 + 4) = 0xfff90000;
          goto LAB_00c09f4c;
        }
        uVar15 = uVar15 + 1;
        *(ulong *)(lVar36 + uVar41 * 8) = uVar22;
      } while (uVar15 <= uVar14);
LAB_00c0a028:
      *(void **)(uVar42 + 0x28) = (void *)(uVar42 + lVar34);
      *(undefined1 *)(uVar42 + 0x3c) = *(undefined1 *)((long)plVar37 + 0x5b);
      memcpy((void *)(uVar42 + lVar34),(void *)((long)plVar37 + 0x264),
             (ulong)*(byte *)((long)plVar37 + 0x5b) << 1);
      iVar32 = *(int *)((long)plVar37 + 0x44);
      iVar49 = (int)plVar37[5];
      puVar26 = (undefined8 *)(uVar42 + lVar34 + lVar25);
      lVar39 = plVar37[9];
      *(int *)(uVar42 + 0x48) = iVar32;
      uVar15 = iVar49 - 1;
      uVar41 = (ulong)uVar15;
      *(int *)(uVar42 + 0x4c) = param_2;
      lVar36 = lVar39 + 8;
      *(undefined8 **)(uVar42 + 0x50) = puVar26;
      if (param_2 < 0x100) {
        lVar20 = uVar41 * 8 + 0xc;
        if (iVar49 == 1) {
          lVar20 = 0x14;
        }
        puVar19 = (undefined4 *)(lVar39 + 0xc);
        if (iVar49 == 1) {
          uVar41 = 1;
        }
        cVar10 = (char)iVar32;
        if ((puVar26 < (undefined8 *)(lVar39 + lVar20) &&
             puVar19 < (undefined4 *)(uVar42 + lVar34 + lVar25 + uVar41)) || (uVar15 < 0x10)) {
          lVar34 = 0;
          do {
            *(char *)((long)puVar26 + lVar34) = (char)*puVar19 - cVar10;
            lVar34 = lVar34 + 1;
            puVar19 = puVar19 + 2;
          } while ((uint)lVar34 < uVar15);
        }
        else {
          uVar14 = uVar15;
          if (iVar49 == 1) {
            uVar14 = 1;
          }
          uVar1 = (uVar14 - 0x11 >> 4) + 1;
          uVar29 = uVar1 * 0x10;
          if (uVar15 == 0x10) {
            uVar29 = 0;
          }
          else {
            uVar30 = 0;
            puVar33 = puVar26;
            do {
              uVar43 = *puVar19;
              uVar45 = puVar19[2];
              uVar30 = uVar30 + 1;
              uVar11 = CONCAT14((char)puVar19[6],puVar19[4]) & 0xff000000ff;
              uVar44 = puVar19[8];
              uVar52 = puVar19[10];
              uVar53 = puVar19[0xc];
              uVar54 = puVar19[0xe];
              puVar33[1] = CONCAT17((char)puVar19[0x1e] - cVar10,
                                    CONCAT16((char)puVar19[0x1c] - cVar10,
                                             CONCAT15((char)puVar19[0x1a] - cVar10,
                                                      CONCAT14((char)puVar19[0x18] - cVar10,
                                                               CONCAT13((char)puVar19[0x16] - cVar10
                                                                        ,CONCAT12((char)puVar19[0x14
                                                  ] - cVar10,
                                                  CONCAT11((char)puVar19[0x12] - cVar10,
                                                           (char)puVar19[0x10] - cVar10)))))));
              *puVar33 = CONCAT17((char)uVar54 - cVar10,
                                  CONCAT16((char)uVar53 - cVar10,
                                           CONCAT15((char)uVar52 - cVar10,
                                                    CONCAT14((char)uVar44 - cVar10,
                                                             CONCAT13((char)(uVar11 >> 0x20) -
                                                                      cVar10,CONCAT12((char)uVar11 -
                                                                                      cVar10,
                                                  CONCAT11((char)uVar45 - cVar10,
                                                           (char)uVar43 - cVar10)))))));
              puVar19 = puVar19 + 0x20;
              puVar33 = puVar33 + 2;
            } while (uVar30 < uVar1);
            if (uVar29 == uVar14) goto LAB_00c0a190;
          }
          do {
            uVar28 = (ulong)uVar29;
            uVar29 = uVar29 + 1;
            *(char *)((long)puVar26 + uVar28) =
                 (char)*(undefined4 *)(lVar36 + uVar28 * 8 + 4) - cVar10;
          } while (uVar29 < uVar15);
        }
      }
      else if (param_2 < 0x10000) {
        uVar14 = uVar15;
        if (iVar49 == 1) {
          uVar14 = 1;
        }
        uVar1 = (uVar14 - 9 >> 3) + 1;
        uVar29 = uVar1 * 8;
        sVar9 = (short)iVar32;
        if (uVar15 < 9) {
          uVar29 = 0;
        }
        else {
          uVar30 = 0;
          puVar19 = (undefined4 *)(lVar39 + 0xc);
          puVar33 = (undefined8 *)(uVar42 + lVar20 + lVar25 + uVar28);
          do {
            uVar30 = uVar30 + 1;
            uVar43 = *puVar19;
            _local_a0 = CONCAT15((char)((uint)puVar19[2] >> 8),CONCAT14((char)puVar19[2],uVar43));
            _local_c0 = CONCAT14((char)puVar19[10],puVar19[8]);
            _local_c0 = CONCAT15((char)((uint)puVar19[10] >> 8),_local_c0);
            sVar46 = (short)((uint6)_local_a0 >> 0x20) - sVar9;
            sVar47 = (short)puVar19[4] - sVar9;
            sVar48 = (short)(CONCAT15((char)((uint)puVar19[6] >> 8),
                                      CONCAT14((char)puVar19[6],puVar19[4])) >> 0x20) - sVar9;
            puVar33[1] = CONCAT26((short)(CONCAT15((char)((uint)puVar19[0xe] >> 8),
                                                   CONCAT14((char)puVar19[0xe],puVar19[0xc])) >>
                                         0x20) - sVar9,
                                  CONCAT24((short)puVar19[0xc] - sVar9,
                                           CONCAT22((short)((uint6)_local_c0 >> 0x20) - sVar9,
                                                    (short)puVar19[8] - sVar9)));
            *puVar33 = CONCAT17((char)((ushort)sVar48 >> 8),
                                CONCAT16((char)sVar48,
                                         CONCAT15((char)((ushort)sVar47 >> 8),
                                                  CONCAT14((char)sVar47,
                                                           CONCAT13((char)((ushort)sVar46 >> 8),
                                                                    CONCAT12((char)sVar46,
                                                                             (short)uVar43 - sVar9))
                                                          ))));
            puVar19 = puVar19 + 0x10;
            puVar33 = puVar33 + 2;
          } while (uVar30 < uVar1);
          if (uVar29 == uVar14) goto LAB_00c0a190;
        }
        uVar14 = uVar29 + 1;
        *(short *)((long)puVar26 + (ulong)uVar29 * 2) =
             (short)*(undefined4 *)(lVar36 + (ulong)uVar29 * 8 + 4) - sVar9;
        if (uVar14 < uVar15) {
          uVar1 = uVar29 + 2;
          *(short *)((long)puVar26 + (ulong)uVar14 * 2) =
               (short)*(undefined4 *)(lVar36 + (ulong)uVar14 * 8 + 4) - sVar9;
          if (uVar1 < uVar15) {
            uVar14 = uVar29 + 3;
            *(short *)((long)puVar26 + (ulong)uVar1 * 2) =
                 (short)*(undefined4 *)(lVar36 + (ulong)uVar1 * 8 + 4) - sVar9;
            if (uVar14 < uVar15) {
              uVar1 = uVar29 + 4;
              *(short *)((long)puVar26 + (ulong)uVar14 * 2) =
                   (short)*(undefined4 *)(lVar36 + (ulong)uVar14 * 8 + 4) - sVar9;
              if (uVar1 < uVar15) {
                uVar14 = uVar29 + 5;
                *(short *)((long)puVar26 + (ulong)uVar1 * 2) =
                     (short)*(undefined4 *)(lVar36 + (ulong)uVar1 * 8 + 4) - sVar9;
                if (uVar14 < uVar15) {
                  uVar1 = uVar29 + 6;
                  *(short *)((long)puVar26 + (ulong)uVar14 * 2) =
                       (short)*(undefined4 *)(lVar36 + (ulong)uVar14 * 8 + 4) - sVar9;
                  if (uVar1 < uVar15) {
                    uVar14 = uVar29 + 7;
                    *(short *)((long)puVar26 + (ulong)uVar1 * 2) =
                         (short)*(undefined4 *)(lVar36 + (ulong)uVar1 * 8 + 4) - sVar9;
                    if (uVar14 < uVar15) {
                      uVar1 = uVar29 + 8;
                      *(short *)((long)puVar26 + (ulong)uVar14 * 2) =
                           (short)*(undefined4 *)(lVar36 + (ulong)uVar14 * 8 + 4) - sVar9;
                      if (uVar1 < uVar15) {
                        uVar14 = uVar29 + 9;
                        *(short *)((long)puVar26 + (ulong)uVar1 * 2) =
                             (short)*(undefined4 *)(lVar36 + (ulong)uVar1 * 8 + 4) - sVar9;
                        if (uVar14 < uVar15) {
                          uVar1 = uVar29 + 10;
                          *(short *)((long)puVar26 + (ulong)uVar14 * 2) =
                               (short)*(undefined4 *)(lVar36 + (ulong)uVar14 * 8 + 4) - sVar9;
                          if (uVar1 < uVar15) {
                            uVar14 = uVar29 + 0xb;
                            *(short *)((long)puVar26 + (ulong)uVar1 * 2) =
                                 (short)*(undefined4 *)(lVar36 + (ulong)uVar1 * 8 + 4) - sVar9;
                            if (uVar14 < uVar15) {
                              uVar1 = uVar29 + 0xc;
                              *(short *)((long)puVar26 + (ulong)uVar14 * 2) =
                                   (short)*(undefined4 *)(lVar36 + (ulong)uVar14 * 8 + 4) - sVar9;
                              if (uVar1 < uVar15) {
                                uVar14 = uVar29 + 0xd;
                                *(short *)((long)puVar26 + (ulong)uVar1 * 2) =
                                     (short)*(undefined4 *)(lVar36 + (ulong)uVar1 * 8 + 4) - sVar9;
                                if (uVar14 < uVar15) {
                                  uVar29 = uVar29 + 0xe;
                                  *(short *)((long)puVar26 + (ulong)uVar14 * 2) =
                                       (short)*(undefined4 *)(lVar36 + (ulong)uVar14 * 8 + 4) -
                                       sVar9;
                                  if (uVar29 < uVar15) {
                                    *(short *)((long)puVar26 + (ulong)uVar29 * 2) =
                                         (short)*(undefined4 *)(lVar36 + (ulong)uVar29 * 8 + 4) -
                                         sVar9;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        lVar20 = uVar41 * 8 + 0xc;
        if (iVar49 == 1) {
          lVar20 = 0x14;
        }
        lVar31 = uVar41 << 2;
        piVar24 = (int *)(lVar39 + 0xc);
        if (iVar49 == 1) {
          lVar31 = 4;
        }
        if ((puVar26 < (undefined8 *)(lVar39 + lVar20) &&
             piVar24 < (int *)(uVar42 + lVar34 + lVar25 + lVar31)) || (uVar15 < 5)) {
          lVar34 = 0;
          do {
            *(int *)((long)puVar26 + lVar34 * 4) = *piVar24 - iVar32;
            lVar34 = lVar34 + 1;
            piVar24 = piVar24 + 2;
          } while ((uint)lVar34 < uVar15);
        }
        else {
          uVar14 = uVar15;
          if (iVar49 == 1) {
            uVar14 = 1;
          }
          uVar29 = 0;
          uVar1 = (uVar14 - 5 >> 2) + 1;
          uVar30 = uVar1 * 4;
          puVar33 = puVar26;
          do {
            iVar49 = *piVar24;
            iVar50 = piVar24[2];
            piVar13 = piVar24 + 4;
            iVar51 = piVar24[6];
            piVar24 = piVar24 + 8;
            uVar29 = uVar29 + 1;
            _local_c0 = CONCAT14((char)iVar50,iVar49);
            _local_c0 = CONCAT15((char)((uint)iVar50 >> 8),_local_c0);
            _local_c0 = CONCAT17((char)((uint)iVar50 >> 0x18),
                                 CONCAT16((char)((uint)iVar50 >> 0x10),_local_c0));
            puVar33[1] = CONCAT44((int)(CONCAT17((char)((uint)iVar51 >> 0x18),
                                                 CONCAT16((char)((uint)iVar51 >> 0x10),
                                                          CONCAT15((char)((uint)iVar51 >> 8),
                                                                   CONCAT14((char)iVar51,*piVar13)))
                                                ) >> 0x20) - iVar32,*piVar13 - iVar32);
            *puVar33 = CONCAT44((int)((ulong)_local_c0 >> 0x20) - iVar32,iVar49 - iVar32);
            puVar33 = puVar33 + 2;
          } while (uVar29 < uVar1);
          if (uVar30 != uVar14) {
            uVar14 = uVar30 + 1;
            *(int *)((long)puVar26 + (ulong)uVar30 * 4) =
                 *(int *)(lVar36 + (ulong)uVar30 * 8 + 4) - iVar32;
            if (uVar14 < uVar15) {
              uVar1 = uVar30 + 2;
              *(int *)((long)puVar26 + (ulong)uVar14 * 4) =
                   *(int *)(lVar36 + (ulong)uVar14 * 8 + 4) - iVar32;
              if (uVar1 < uVar15) {
                uVar14 = uVar30 + 3;
                *(int *)((long)puVar26 + (ulong)uVar1 * 4) =
                     *(int *)(lVar36 + (ulong)uVar1 * 8 + 4) - iVar32;
                if (uVar14 < uVar15) {
                  uVar1 = uVar30 + 4;
                  *(int *)((long)puVar26 + (ulong)uVar14 * 4) =
                       *(int *)(lVar36 + (ulong)uVar14 * 8 + 4) - iVar32;
                  if (uVar1 < uVar15) {
                    uVar14 = uVar30 + 5;
                    *(int *)((long)puVar26 + (ulong)uVar1 * 4) =
                         *(int *)(lVar36 + (ulong)uVar1 * 8 + 4) - iVar32;
                    if (uVar14 < uVar15) {
                      uVar30 = uVar30 + 6;
                      *(int *)((long)puVar26 + (ulong)uVar14 * 4) =
                           *(int *)(lVar36 + (ulong)uVar14 * 8 + 4) - iVar32;
                      if (uVar30 < uVar15) {
                        *(int *)((long)puVar26 + (ulong)uVar30 * 4) =
                             *(int *)(lVar36 + (ulong)uVar30 * 8 + 4) - iVar32;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_00c0a190:
      __src = (void *)param_1[10];
      pvVar16 = (void *)(uVar42 + lVar2);
      lVar34 = param_1[8];
      *(void **)(uVar42 + 0x58) = pvVar16;
      *(ulong *)(uVar42 + 0x60) = (long)pvVar16 + local_58;
      memcpy(pvVar16,__src,(ulong)(uint)((int)lVar34 - (int)__src));
      if (((*(byte *)(*(long *)(lVar40 + 0x10) + 0xc3) & 1) != 0) &&
         (lVar34 = FUN_00c1e1b4(lVar40,0x1c418), lVar34 != 0)) {
        puVar27 = *(ulong **)(lVar40 + 0x28);
        *(ulong **)(lVar40 + 0x28) = puVar27 + 1;
        *puVar27 = uVar42 | 0xfffc000000000000;
        FUN_00c1e2dc(lVar40,lVar34);
      }
      uVar43 = *(undefined4 *)((long)plVar37 + 0x54);
      lVar34 = plVar37[4];
      *(long *)(lVar40 + 0x28) = *(long *)(lVar40 + 0x28) + -8;
      *(undefined4 *)((long)param_1 + 0x9c) = uVar43;
      *param_1 = lVar34;
      return uVar42;
    }
  }
  if ((*(byte *)(plVar37[3] + 0xd) >> 3 & 1) != 0) {
    FUN_00c07f70(plVar37,0x80000032);
  }
  FUN_00c07f70(plVar37,0x1004b);
  goto switchD_00c0a218_caseD_43;
}

