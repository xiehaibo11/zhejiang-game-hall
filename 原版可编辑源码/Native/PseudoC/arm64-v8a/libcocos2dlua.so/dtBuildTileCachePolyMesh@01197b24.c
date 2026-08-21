
/* WARNING: Removing unreachable block (ram,0x01198f78) */
/* WARNING: Removing unreachable block (ram,0x01198ba0) */
/* WARNING: Type propagation algorithm not settling */
/* dtBuildTileCachePolyMesh(dtTileCacheAlloc*, dtTileCacheContourSet&, dtTileCachePolyMesh&) */

int dtBuildTileCachePolyMesh
              (dtTileCacheAlloc *param_1,dtTileCacheContourSet *param_2,dtTileCachePolyMesh *param_3
              )

{
  byte *pbVar1;
  undefined2 *puVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined1 uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  undefined2 uVar16;
  ushort uVar17;
  ushort uVar18;
  long lVar19;
  int iVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int *piVar27;
  void *__s;
  long lVar28;
  void *pvVar29;
  long lVar30;
  void *__s_00;
  ushort *puVar31;
  ulong uVar32;
  void *__s_01;
  long lVar33;
  undefined2 *puVar34;
  uint uVar35;
  uint uVar36;
  ushort *puVar37;
  uint uVar38;
  int iVar39;
  ulong uVar40;
  long lVar41;
  undefined8 *puVar42;
  undefined8 uVar43;
  ulong uVar44;
  undefined8 *puVar45;
  undefined1 *puVar46;
  long lVar47;
  ushort uVar48;
  int iVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  uint *puVar53;
  ulong uVar54;
  undefined4 uVar55;
  ulong uVar56;
  long *plVar57;
  int iVar58;
  ulong uVar59;
  ulong uVar60;
  ushort *puVar61;
  uint uVar62;
  undefined4 uVar63;
  ulong uVar64;
  int iVar65;
  short sVar66;
  short sVar67;
  short sVar68;
  short sVar70;
  short sVar71;
  short sVar72;
  undefined8 uVar69;
  undefined8 local_a50;
  undefined8 uStack_a48;
  ulong local_9d8;
  ulong local_9d0;
  undefined4 local_9a8;
  undefined4 local_9a4;
  undefined8 local_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 local_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 local_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 local_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 local_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 local_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 local_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 local_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined1 auStack_799 [49];
  undefined8 local_768;
  undefined4 local_760;
  undefined2 local_528 [144];
  undefined1 local_408 [144];
  ushort local_378 [143];
  ushort uStack_25a;
  ushort local_258 [47];
  ushort auStack_1fa [49];
  undefined4 local_198;
  ushort local_194 [142];
  long local_78;
  
  lVar19 = tpidr_el0;
  local_78 = *(long *)(lVar19 + 0x28);
  uVar62 = *(uint *)param_2;
  uVar40 = (ulong)(int)uVar62;
  if ((int)uVar62 < 1) {
    iVar39 = 0;
    uVar56 = 0;
    uVar60 = 0;
  }
  else {
    if (uVar62 < 3) {
      uVar44 = 0;
      uVar60 = 0;
      uVar56 = 0;
      iVar39 = 0;
    }
    else {
      uVar44 = uVar40 & 0xfffffffffffffffe;
      iVar26 = 0;
      iVar49 = 0;
      iVar65 = 0;
      iVar39 = 0;
      iVar58 = 0;
      piVar27 = *(int **)(param_2 + 8);
      uVar56 = uVar44;
      iVar23 = 0;
      do {
        iVar7 = *piVar27;
        iVar8 = piVar27[6];
        piVar27 = piVar27 + 0xc;
        iVar6 = iVar39;
        if (iVar39 <= iVar7) {
          iVar6 = iVar7;
        }
        iVar5 = iVar58;
        if (iVar58 <= iVar8) {
          iVar5 = iVar8;
        }
        iVar20 = iVar65 + iVar7 + -2;
        if (iVar7 < 3) {
          iVar7 = 0;
          iVar20 = iVar65;
          iVar6 = iVar39;
        }
        iVar39 = iVar6;
        iVar65 = iVar20;
        iVar26 = iVar26 + iVar7;
        iVar6 = iVar23 + iVar8 + -2;
        if (iVar8 < 3) {
          iVar8 = 0;
          iVar6 = iVar23;
          iVar5 = iVar58;
        }
        iVar58 = iVar5;
        uVar56 = uVar56 - 2;
        iVar49 = iVar49 + iVar8;
        iVar23 = iVar6;
      } while (uVar56 != 0);
      uVar56 = (ulong)(uint)(iVar6 + iVar65);
      if (iVar39 <= iVar58) {
        iVar39 = iVar58;
      }
      uVar60 = (ulong)(uint)(iVar49 + iVar26);
      if (uVar44 == uVar40) goto LAB_01197c6c;
    }
    piVar27 = *(int **)(param_2 + 8) + uVar44 * 6;
    do {
      iVar26 = *piVar27;
      if (2 < iVar26) {
        uVar60 = (ulong)(uint)(iVar26 + (int)uVar60);
        uVar56 = (ulong)(((int)uVar56 + iVar26) - 2);
        if (iVar39 <= iVar26) {
          iVar39 = iVar26;
        }
      }
      uVar44 = uVar44 + 1;
      piVar27 = piVar27 + 6;
    } while ((long)uVar44 < (long)uVar40);
  }
LAB_01197c6c:
  *(undefined4 *)param_3 = 6;
  iVar26 = -0x7ffffffc;
  __s = (void *)(**(code **)(*(long *)param_1 + 0x18))(param_1,uVar60);
  if (__s != (void *)0x0) {
    iVar49 = (int)uVar60;
    memset(__s,0,(long)iVar49);
    uVar40 = -(uVar60 >> 0x1f) & 0xfffffffe00000000 | uVar60 << 1;
    uVar60 = (uVar40 + (long)iVar49) * 2;
    lVar28 = (**(code **)(*(long *)param_1 + 0x18))(param_1,uVar60 & 0xffffffff);
    *(long *)(param_3 + 0x10) = lVar28;
    if (lVar28 != 0) {
      iVar65 = (int)uVar56;
      uVar64 = -(uVar56 >> 0x1f) & 0xfffffffe00000000 | uVar56 << 1;
      uVar44 = (uVar64 + (long)iVar65) * 8;
      lVar28 = (**(code **)(*(long *)param_1 + 0x18))(param_1,uVar44 & 0xffffffff);
      *(long *)(param_3 + 0x18) = lVar28;
      if (lVar28 != 0) {
        lVar28 = (**(code **)(*(long *)param_1 + 0x18))(param_1,uVar56);
        *(long *)(param_3 + 0x28) = lVar28;
        if (lVar28 != 0) {
          pvVar29 = (void *)(**(code **)(*(long *)param_1 + 0x18))(param_1,uVar56 << 1 & 0xffffffff)
          ;
          *(void **)(param_3 + 0x20) = pvVar29;
          if (pvVar29 != (void *)0x0) {
            memset(pvVar29,0,uVar64);
            *(undefined4 *)(param_3 + 4) = 0;
            *(undefined4 *)(param_3 + 8) = 0;
            memset(*(void **)(param_3 + 0x10),0,uVar60);
            memset(*(void **)(param_3 + 0x18),0xff,uVar44);
            memset(*(void **)(param_3 + 0x28),0,(long)iVar65);
            uStack_7b8 = 0xffffffffffffffff;
            local_7c0 = 0xffffffffffffffff;
            uStack_7a8 = 0xffffffffffffffff;
            uStack_7b0 = 0xffffffffffffffff;
            uStack_7d8 = 0xffffffffffffffff;
            local_7e0 = 0xffffffffffffffff;
            uStack_7c8 = 0xffffffffffffffff;
            uStack_7d0 = 0xffffffffffffffff;
            uStack_7f8 = 0xffffffffffffffff;
            local_800 = 0xffffffffffffffff;
            uStack_7e8 = 0xffffffffffffffff;
            uStack_7f0 = 0xffffffffffffffff;
            uStack_818 = 0xffffffffffffffff;
            local_820 = 0xffffffffffffffff;
            uStack_808 = 0xffffffffffffffff;
            uStack_810 = 0xffffffffffffffff;
            uStack_838 = 0xffffffffffffffff;
            local_840 = 0xffffffffffffffff;
            uStack_828 = 0xffffffffffffffff;
            uStack_830 = 0xffffffffffffffff;
            uStack_858 = 0xffffffffffffffff;
            local_860 = 0xffffffffffffffff;
            uStack_848 = 0xffffffffffffffff;
            uStack_850 = 0xffffffffffffffff;
            uStack_878 = 0xffffffffffffffff;
            local_880 = 0xffffffffffffffff;
            uStack_868 = 0xffffffffffffffff;
            uStack_870 = 0xffffffffffffffff;
            uStack_898 = 0xffffffffffffffff;
            local_8a0 = 0xffffffffffffffff;
            uStack_888 = 0xffffffffffffffff;
            uStack_890 = 0xffffffffffffffff;
            uStack_8b8 = 0xffffffffffffffff;
            local_8c0 = 0xffffffffffffffff;
            uStack_8a8 = 0xffffffffffffffff;
            uStack_8b0 = 0xffffffffffffffff;
            uStack_8d8 = 0xffffffffffffffff;
            local_8e0 = 0xffffffffffffffff;
            uStack_8c8 = 0xffffffffffffffff;
            uStack_8d0 = 0xffffffffffffffff;
            uStack_8f8 = 0xffffffffffffffff;
            local_900 = 0xffffffffffffffff;
            uStack_8e8 = 0xffffffffffffffff;
            uStack_8f0 = 0xffffffffffffffff;
            uStack_918 = 0xffffffffffffffff;
            local_920 = 0xffffffffffffffff;
            uStack_908 = 0xffffffffffffffff;
            uStack_910 = 0xffffffffffffffff;
            uStack_938 = 0xffffffffffffffff;
            local_940 = 0xffffffffffffffff;
            uStack_928 = 0xffffffffffffffff;
            uStack_930 = 0xffffffffffffffff;
            uStack_958 = 0xffffffffffffffff;
            local_960 = 0xffffffffffffffff;
            uStack_948 = 0xffffffffffffffff;
            uStack_950 = 0xffffffffffffffff;
            uStack_978 = 0xffffffffffffffff;
            local_980 = 0xffffffffffffffff;
            uStack_968 = 0xffffffffffffffff;
            uStack_970 = 0xffffffffffffffff;
            uStack_998 = 0xffffffffffffffff;
            local_9a0 = 0xffffffffffffffff;
            uStack_988 = 0xffffffffffffffff;
            uStack_990 = 0xffffffffffffffff;
            pvVar29 = (void *)(**(code **)(*(long *)param_1 + 0x18))(param_1,iVar49 << 1);
            if (pvVar29 != (void *)0x0) {
              memset(pvVar29,0,uVar40);
              lVar28 = (**(code **)(*(long *)param_1 + 0x18))(param_1,iVar39 << 1);
              iVar26 = -0x7ffffffc;
              if (lVar28 != 0) {
                lVar30 = (**(code **)(*(long *)param_1 + 0x18))(param_1,iVar39 * 6);
                if (lVar30 != 0) {
                  __s_00 = (void *)(**(code **)(*(long *)param_1 + 0x18))(param_1,iVar39 * 0xc);
                  if (__s_00 != (void *)0x0) {
                    if (0 < *(int *)param_2) {
                      lVar50 = 0;
                      uStack_a48 = 0x7000600050004;
                      local_a50 = 0x3000200010000;
                      do {
                        lVar47 = *(long *)(param_2 + 8);
                        puVar53 = (uint *)(lVar47 + lVar50 * 0x18);
                        uVar62 = *puVar53;
                        uVar40 = (ulong)uVar62;
                        if (2 < (int)uVar62) {
                          if (0xf < uVar62) {
                            uVar56 = uVar40 & 0xfffffff0;
                            uVar60 = uVar56;
                            puVar45 = (undefined8 *)(lVar28 + 0x10);
                            uVar43 = local_a50;
                            uVar69 = uStack_a48;
                            do {
                              sVar66 = (short)((ulong)uVar43 >> 0x10);
                              sVar67 = (short)((ulong)uVar43 >> 0x20);
                              sVar68 = (short)((ulong)uVar43 >> 0x30);
                              sVar70 = (short)((ulong)uVar69 >> 0x10);
                              sVar71 = (short)((ulong)uVar69 >> 0x20);
                              sVar72 = (short)((ulong)uVar69 >> 0x30);
                              puVar45[-1] = uVar69;
                              puVar45[-2] = uVar43;
                              puVar45[1] = CONCAT26(sVar72 + 8,
                                                    CONCAT24(sVar71 + 8,
                                                             CONCAT22(sVar70 + 8,(short)uVar69 + 8))
                                                   );
                              *puVar45 = CONCAT26(sVar68 + 8,
                                                  CONCAT24(sVar67 + 8,
                                                           CONCAT22(sVar66 + 8,(short)uVar43 + 8)));
                              uVar43 = CONCAT26(sVar68 + 0x10,
                                                CONCAT24(sVar67 + 0x10,
                                                         CONCAT22(sVar66 + 0x10,(short)uVar43 + 0x10
                                                                 )));
                              uVar69 = CONCAT26(sVar72 + 0x10,
                                                CONCAT24(sVar71 + 0x10,
                                                         CONCAT22(sVar70 + 0x10,(short)uVar69 + 0x10
                                                                 )));
                              uVar60 = uVar60 - 0x10;
                              puVar45 = puVar45 + 4;
                              if (uVar60 == 0) goto joined_r0x01197f4c;
                            } while( true );
                          }
                          uVar56 = 0;
                          do {
                            *(short *)(lVar28 + uVar56 * 2) = (short)uVar56;
                            uVar56 = uVar56 + 1;
joined_r0x01197f4c:
                          } while (uVar56 != uVar40);
                          plVar57 = (long *)(lVar47 + lVar50 * 0x18 + 8);
                          uVar22 = FUN_01199790(uVar40,*plVar57,lVar28,lVar30);
                          uVar62 = -uVar22;
                          if (-1 < (int)uVar22) {
                            uVar62 = uVar22;
                          }
                          if (0 < (int)*puVar53) {
                            lVar41 = 0;
                            do {
                              pbVar1 = (byte *)(*plVar57 + (ulong)(uint)((int)lVar41 << 2));
                              bVar9 = *pbVar1;
                              bVar10 = pbVar1[2];
                              bVar11 = pbVar1[1];
                              uVar40 = (ulong)((uint)bVar9 * 0xb343 + (uint)bVar10 * 0xb31f) & 0xff;
                              uVar48 = *(ushort *)((long)&local_9a0 + uVar40 * 2);
                              if (uVar48 != 0xffff) {
                                uVar56 = (ulong)(uint)uVar48;
                                do {
                                  puVar31 = (ushort *)(*(long *)(param_3 + 0x10) + uVar56 * 6);
                                  if (((uint)*puVar31 == (uint)bVar9) &&
                                     ((uint)puVar31[2] == (uint)bVar10)) {
                                    iVar49 = (uint)puVar31[1] - (uint)bVar11;
                                    iVar26 = -iVar49;
                                    if (-1 < iVar49) {
                                      iVar26 = iVar49;
                                    }
                                    if (iVar26 < 3) goto LAB_01198074;
                                  }
                                  uVar13 = *(ushort *)((long)pvVar29 + uVar56 * 2);
                                  uVar56 = (ulong)uVar13;
                                } while (uVar13 != 0xffff);
                              }
                              uVar22 = *(uint *)(param_3 + 4);
                              uVar56 = (ulong)uVar22;
                              puVar31 = (ushort *)
                                        (*(long *)(param_3 + 0x10) + (uVar56 & 0xffff) * 6);
                              *(uint *)(param_3 + 4) = uVar22 + 1;
                              *puVar31 = (ushort)bVar9;
                              puVar31[1] = (ushort)bVar11;
                              puVar31[2] = (ushort)bVar10;
                              *(ushort *)((long)pvVar29 + (uVar56 & 0xffff) * 2) = uVar48;
                              *(short *)((long)&local_9a0 + uVar40 * 2) = (short)uVar22;
LAB_01198074:
                              *(short *)(lVar28 + lVar41 * 2) = (short)uVar56;
                              if ((char)pbVar1[3] < '\0') {
                                *(undefined1 *)((long)__s + (uVar56 & 0xffff)) = 1;
                              }
                              lVar41 = lVar41 + 1;
                            } while (lVar41 < (int)*puVar53);
                          }
                          memset(__s_00,0xff,(long)iVar39 * 0xc);
                          if (0 < (int)uVar62) {
                            uVar40 = 0;
                            iVar26 = 0;
                            uVar56 = (ulong)uVar62;
                            do {
                              puVar31 = (ushort *)(lVar30 + (uVar40 & 0xffffffff) * 2);
                              uVar48 = *puVar31;
                              if (((uVar48 != puVar31[1]) && (uVar48 != puVar31[2])) &&
                                 (puVar31[1] != puVar31[2])) {
                                lVar41 = (long)iVar26;
                                puVar34 = (undefined2 *)((long)__s_00 + (long)(int)(lVar41 * 6) * 2)
                                ;
                                *puVar34 = *(undefined2 *)(lVar28 + (ulong)uVar48 * 2);
                                iVar26 = iVar26 + 1;
                                *(undefined2 *)
                                 ((long)__s_00 + (((ulong)(lVar41 * 6) >> 1) << 2 | 2)) =
                                     *(undefined2 *)(lVar28 + (ulong)puVar31[1] * 2);
                                puVar34[2] = *(undefined2 *)(lVar28 + (ulong)puVar31[2] * 2);
                              }
                              uVar56 = uVar56 - 1;
                              uVar40 = uVar40 + 3;
                            } while (uVar56 != 0);
                            if (iVar26 != 0) {
                              uVar40 = (long)iVar26;
                              while (uVar56 = uVar40 - 1, 0 < (long)uVar56) {
                                uVar55 = 0;
                                uVar63 = 0;
                                iVar58 = 0;
                                iVar26 = 0;
                                iVar49 = 0;
                                uVar44 = 6;
                                uVar60 = 1;
                                uVar64 = 0;
                                do {
                                  uVar32 = uVar64 + 1;
                                  if ((long)uVar32 < (long)uVar40) {
                                    uVar54 = uVar44;
                                    uVar59 = uVar60;
                                    do {
                                      iVar23 = FUN_01199a94((void *)((long)__s_00 +
                                                                    (ulong)(uint)((int)uVar64 * 6) *
                                                                    2),
                                                            (void *)((long)__s_00 +
                                                                    (uVar54 & 0xfffffffe) * 2),
                                                            *(undefined8 *)(param_3 + 0x10),
                                                            &local_768,&local_198);
                                      if (iVar49 < iVar23) {
                                        iVar58 = (int)uVar59;
                                        uVar55 = local_198;
                                        uVar63 = (undefined4)local_768;
                                        iVar26 = (int)uVar64;
                                        iVar49 = iVar23;
                                      }
                                      uVar59 = uVar59 + 1;
                                      uVar54 = uVar54 + 6;
                                    } while ((uVar40 & 0xffffffff) != uVar59);
                                  }
                                  uVar60 = uVar60 + 1;
                                  uVar44 = uVar44 + 6;
                                  uVar64 = uVar32;
                                } while (uVar32 != (uVar56 & 0xffffffff));
                                if (iVar49 < 1) break;
                                puVar45 = (undefined8 *)((long)__s_00 + (long)(iVar58 * 6) * 2);
                                FUN_01199d9c((void *)((long)__s_00 + (long)(iVar26 * 6) * 2),puVar45
                                             ,uVar63,uVar55);
                                puVar42 = (undefined8 *)((long)__s_00 + uVar56 * 0xc);
                                uVar55 = *(undefined4 *)(puVar42 + 1);
                                *puVar45 = *puVar42;
                                *(undefined4 *)(puVar45 + 1) = uVar55;
                                uVar40 = uVar56;
                              }
                              if (0 < (int)uVar40) {
                                iVar26 = *(int *)(param_3 + 8);
                                uVar56 = 0;
                                uVar40 = uVar40 & 0xffffffff;
                                do {
                                  puVar2 = (undefined2 *)((long)__s_00 + (uVar56 & 0xfffffffe) * 2);
                                  puVar34 = (undefined2 *)
                                            (*(long *)(param_3 + 0x18) + (long)(iVar26 * 0xc) * 2);
                                  *puVar34 = *puVar2;
                                  puVar34[1] = puVar2[1];
                                  puVar34[2] = puVar2[2];
                                  puVar34[3] = puVar2[3];
                                  puVar34[4] = puVar2[4];
                                  puVar34[5] = puVar2[5];
                                  *(undefined1 *)(*(long *)(param_3 + 0x28) + (long)iVar26) =
                                       *(undefined1 *)(lVar47 + lVar50 * 0x18 + 0x11);
                                  iVar49 = *(int *)(param_3 + 8);
                                  iVar26 = iVar49 + 1;
                                  *(int *)(param_3 + 8) = iVar26;
                                  if (iVar65 <= iVar49) {
                                    iVar26 = -0x7ffffff0;
                                    goto LAB_011992d0;
                                  }
                                  uVar40 = uVar40 - 1;
                                  uVar56 = uVar56 + 6;
                                } while (uVar40 != 0);
                              }
                            }
                          }
                        }
                        lVar50 = lVar50 + 1;
                      } while (lVar50 < *(int *)param_2);
                    }
                    uVar62 = *(uint *)(param_3 + 4);
                    uVar40 = (ulong)uVar62;
                    if (0 < (int)uVar62) {
                      uVar22 = 0;
LAB_011983ac:
                      lVar50 = (long)(int)uVar22;
                      if (*(char *)((long)__s + lVar50) != '\0') {
                        uVar62 = *(uint *)(param_3 + 8);
                        uVar56 = (ulong)uVar62;
                        if (0 < (int)uVar62) {
                          lVar41 = *(long *)(param_3 + 0x18);
                          lVar47 = 0;
                          iVar26 = 0;
                          iVar39 = 0;
                          do {
                            uVar25 = (int)lVar47 * 3;
                            puVar31 = (ushort *)(lVar41 + ((long)((ulong)uVar25 << 0x22) >> 0x1f));
                            uVar48 = *puVar31;
                            uVar36 = (uint)uVar48;
                            if (uVar36 != 0xffff) {
                              uVar13 = puVar31[1];
                              uVar24 = (uint)uVar13;
                              if (uVar24 == 0xffff) {
                                bVar21 = uVar36 == (uVar22 & 0xffff);
                                uVar36 = (uint)bVar21;
                                if (bVar21) {
                                  iVar26 = iVar26 + 1;
                                }
                                uVar35 = 1;
                              }
                              else {
                                if (puVar31[2] == 0xffff) {
                                  uVar35 = 2;
                                }
                                else if (puVar31[3] == 0xffff) {
                                  uVar35 = 3;
                                }
                                else if (puVar31[4] == 0xffff) {
                                  uVar35 = 4;
                                }
                                else {
                                  uVar35 = 5;
                                  if (puVar31[5] != 0xffff) {
                                    uVar35 = 6;
                                  }
                                }
                                uVar4 = uVar22 & 0xffff;
                                uVar38 = 2;
                                if (uVar24 != uVar4) {
                                  uVar38 = 1;
                                }
                                if (uVar48 == uVar4) {
                                  iVar26 = iVar26 + 1;
                                }
                                uVar36 = (uint)(uVar24 == uVar4);
                                if (uVar48 == uVar4) {
                                  uVar36 = uVar38;
                                }
                                if (uVar13 == uVar4) {
                                  iVar26 = iVar26 + 1;
                                }
                                if (uVar35 != 2) {
                                  lVar51 = (ulong)uVar35 - 2;
                                  puVar31 = (ushort *)
                                            (lVar41 + 4 +
                                            (-((ulong)(uVar25 >> 0x1d) & 1) & 0xffffffff00000000 |
                                            ((ulong)uVar25 & 0x3fffffff) << 2) * 2);
                                  do {
                                    if ((uint)*puVar31 == (uVar22 & 0xffff)) {
                                      uVar36 = uVar36 + 1;
                                      iVar26 = iVar26 + 1;
                                    }
                                    lVar51 = lVar51 + -1;
                                    puVar31 = puVar31 + 1;
                                  } while (lVar51 != 0);
                                }
                              }
                              if (uVar36 != 0) {
                                iVar39 = uVar35 + iVar39 + ~uVar36;
                              }
                            }
                            lVar47 = lVar47 + 1;
                          } while (lVar47 != (int)uVar62);
                          if ((iVar26 < 0x19) && (2 < iVar39)) {
                            uVar60 = 0;
                            uVar62 = 0;
                            do {
                              puVar31 = (ushort *)
                                        (lVar41 + ((long)((ulong)(uint)((int)uVar60 * 3) << 0x22) >>
                                                  0x1f));
                              uVar48 = *puVar31;
                              if (uVar48 != 0xffff) {
                                if (puVar31[1] == 0xffff) {
                                  uVar25 = 1;
                                }
                                else if (puVar31[2] == 0xffff) {
                                  uVar25 = 2;
                                }
                                else if (puVar31[3] == 0xffff) {
                                  uVar25 = 3;
                                }
                                else if (puVar31[4] == 0xffff) {
                                  uVar25 = 4;
                                }
                                else {
                                  uVar25 = 5;
                                  if (puVar31[5] != 0xffff) {
                                    uVar25 = 6;
                                  }
                                }
                                iVar39 = uVar25 - 1;
                                uVar44 = 0;
                                do {
                                  uVar36 = (uint)puVar31[iVar39];
                                  if (((uint)uVar48 == (uVar22 & 0xffff)) ||
                                     (uVar36 = uVar22, (uint)puVar31[iVar39] == (uVar22 & 0xffff)))
                                  {
                                    bVar21 = (uVar36 & 0xffff) != (uVar22 & 0xffff);
                                    uVar13 = (ushort)uVar36;
                                    if (bVar21) {
                                      uVar13 = uVar48;
                                    }
                                    uVar24 = (uint)uVar48;
                                    if (bVar21) {
                                      uVar24 = uVar36;
                                    }
                                    if (0 < (int)uVar62) {
                                      uVar64 = 0;
                                      bVar21 = false;
                                      uVar32 = (ulong)uVar62;
                                      do {
                                        uVar59 = uVar64 & 0xffffffff;
                                        if ((uint)auStack_1fa[uVar59 + 2] == (uVar24 & 0xffff)) {
                                          auStack_1fa[uVar59 + 3] = auStack_1fa[uVar59 + 3] + 1;
                                          bVar21 = true;
                                        }
                                        uVar32 = uVar32 - 1;
                                        uVar64 = uVar64 + 3;
                                      } while (uVar32 != 0);
                                      if (bVar21) goto LAB_01198610;
                                    }
                                    lVar47 = (long)(int)uVar62;
                                    uVar62 = uVar62 + 1;
                                    auStack_1fa[lVar47 * 3 + 1] = uVar13;
                                    auStack_1fa[lVar47 * 3 + 2] = (ushort)uVar24;
                                    auStack_1fa[lVar47 * 3 + 3] = 1;
                                  }
LAB_01198610:
                                  uVar64 = uVar44 + 1;
                                  if (uVar64 == uVar25) break;
                                  uVar48 = puVar31[uVar64];
                                  iVar39 = (int)uVar44;
                                  uVar44 = uVar64;
                                } while( true );
                              }
                              uVar60 = uVar60 + 1;
                            } while (uVar60 != uVar56);
                            if ((int)uVar62 < 1) goto LAB_01198674;
                            uVar60 = (ulong)uVar62;
                            if (uVar62 == 1) {
                              uVar64 = 0;
                              uVar62 = 0;
LAB_01198648:
                              lVar47 = uVar60 - uVar64;
                              uVar60 = uVar64 * 3 + 2;
                              do {
                                uVar44 = uVar60 & 0xffffffff;
                                uVar60 = uVar60 + 3;
                                if (auStack_1fa[uVar44 + 1] < 2) {
                                  uVar62 = uVar62 + 1;
                                }
                                lVar47 = lVar47 + -1;
                              } while (lVar47 != 0);
                            }
                            else {
                              uVar32 = uVar60 - 1;
                              uVar44 = (uVar32 & 0xffffffff) + (uVar32 & 0xffffffff) * 2;
                              uVar64 = 0;
                              uVar62 = 0;
                              if (((0xfffffffd < (uint)uVar44) || (uVar62 = 0, uVar32 >> 0x20 != 0))
                                 || (uVar44 >> 0x20 != 0)) goto LAB_01198648;
                              uVar64 = uVar60 & 0xfffffffe;
                              iVar39 = 0;
                              iVar26 = 0;
                              uVar62 = 5;
                              uVar44 = uVar64;
                              do {
                                uVar25 = uVar62 - 3;
                                uVar32 = (ulong)uVar62;
                                uVar62 = uVar62 + 6;
                                if (auStack_1fa[((ulong)uVar25 & 0xfffffffe) + 1] < 2) {
                                  iVar39 = iVar39 + 1;
                                }
                                if (auStack_1fa[uVar32 + 1] < 2) {
                                  iVar26 = iVar26 + 1;
                                }
                                uVar44 = uVar44 - 2;
                              } while (uVar44 != 0);
                              uVar62 = iVar26 + iVar39;
                              if (uVar64 != uVar60) goto LAB_01198648;
                            }
                            if (uVar62 < 3) {
LAB_01198674:
                              uVar62 = 0;
                              iVar39 = 0;
                              do {
                                iVar26 = iVar39 * 0xc;
                                puVar31 = (ushort *)(lVar41 + (long)iVar26 * 2);
                                uVar48 = *puVar31;
                                if (uVar48 != 0xffff) {
                                  if (puVar31[1] == 0xffff) {
                                    if ((uint)uVar48 == (uVar22 & 0xffff)) {
                                      uVar25 = 1;
                                      uVar40 = 1;
                                      goto LAB_01198754;
                                    }
                                  }
                                  else {
                                    if (puVar31[2] == 0xffff) {
                                      uVar25 = 2;
                                    }
                                    else if (puVar31[3] == 0xffff) {
                                      uVar25 = 3;
                                    }
                                    else if (puVar31[4] == 0xffff) {
                                      uVar25 = 4;
                                    }
                                    else {
                                      uVar25 = 5;
                                      if (puVar31[5] != 0xffff) {
                                        uVar25 = 6;
                                      }
                                    }
                                    uVar40 = (ulong)uVar25;
                                    bVar21 = (uint)puVar31[1] == (uVar22 & 0xffff) ||
                                             (uint)uVar48 == (uVar22 & 0xffff);
                                    if (uVar25 != 2) {
                                      lVar47 = uVar40 - 2;
                                      puVar37 = (ushort *)(lVar41 + (long)iVar26 * 2 + 4);
                                      do {
                                        lVar47 = lVar47 + -1;
                                        bVar21 = (bool)((uint)*puVar37 == (uVar22 & 0xffff) | bVar21
                                                       );
                                        puVar37 = puVar37 + 1;
                                      } while (lVar47 != 0);
                                    }
                                    if (bVar21) {
LAB_01198754:
                                      lVar52 = *(long *)(param_3 + 0x28);
                                      iVar49 = uVar25 - 1;
                                      lVar51 = (long)iVar39;
                                      lVar47 = 0;
                                      while( true ) {
                                        if (((uint)uVar48 != (uVar22 & 0xffff)) &&
                                           ((uint)puVar31[iVar49] != (uVar22 & 0xffff))) {
                                          if (0x2f < (int)uVar62) goto LAB_01198b50;
                                          lVar33 = (long)(int)uVar62;
                                          local_194[lVar33 * 3 + -2] = puVar31[iVar49];
                                          local_194[lVar33 * 3 + -1] = uVar48;
                                          uVar62 = uVar62 + 1;
                                          local_194[lVar33 * 3] = (ushort)*(byte *)(lVar52 + lVar51)
                                          ;
                                        }
                                        if (uVar40 - 1 == lVar47) break;
                                        uVar48 = *(ushort *)
                                                  (lVar41 + (long)iVar26 * 2 + 2 + lVar47 * 2);
                                        iVar49 = (int)lVar47;
                                        lVar47 = lVar47 + 1;
                                      }
                                      puVar45 = (undefined8 *)
                                                (lVar41 + (long)((int)uVar56 * 0xc + -0xc) * 2);
                                      uVar55 = *(undefined4 *)(puVar45 + 1);
                                      uVar43 = *puVar45;
                                      puVar31[6] = 0xffff;
                                      puVar31[7] = 0xffff;
                                      puVar31[8] = 0xffff;
                                      puVar31[9] = 0xffff;
                                      puVar31[10] = 0xffff;
                                      puVar31[0xb] = 0xffff;
                                      *(undefined4 *)(puVar31 + 4) = uVar55;
                                      *(undefined8 *)puVar31 = uVar43;
                                      iVar39 = iVar39 + -1;
                                      *(undefined1 *)(*(long *)(param_3 + 0x28) + lVar51) =
                                           *(undefined1 *)
                                            ((long)*(int *)(param_3 + 8) + *(long *)(param_3 + 0x28)
                                            + -1);
                                      uVar56 = (ulong)(*(int *)(param_3 + 8) - 1U);
                                      *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) - 1U;
                                    }
                                  }
                                }
                                iVar39 = iVar39 + 1;
                                iVar26 = (int)uVar56;
                                if (iVar26 <= iVar39) goto LAB_011988a0;
                                lVar41 = *(long *)(param_3 + 0x18);
                              } while( true );
                            }
                          }
                        }
                      }
                      goto LAB_011983a0;
                    }
LAB_01198fb4:
                    uVar22 = *(uint *)(param_3 + 8);
                    lVar50 = *(long *)(param_3 + 0x10);
                    lVar47 = *(long *)(param_3 + 0x18);
                    __s_01 = (void *)(**(code **)(*(long *)param_1 + 0x18))
                                               (param_1,(uVar62 + uVar22 * 6) * 2);
                    if (__s_01 == (void *)0x0) {
                      bVar21 = false;
                    }
                    else {
                      lVar41 = (**(code **)(*(long *)param_1 + 0x18))(param_1,uVar22 * 0x48);
                      if (lVar41 == 0) {
                        bVar21 = false;
                      }
                      else {
                        if (0 < (int)uVar62) {
                          memset(__s_01,0xff,(ulong)uVar62 << 1);
                        }
                        if ((int)uVar22 < 1) {
                          uVar25 = 0;
                        }
                        else {
                          lVar51 = 0;
                          uVar40 = 0;
                          uVar25 = 0;
                          do {
                            puVar31 = (ushort *)(lVar47 + (lVar51 >> 0x1f));
                            uVar48 = *puVar31;
                            if ((ulong)uVar48 != 0xffff) {
                              uVar13 = puVar31[1];
                              uVar56 = (ulong)uVar13;
                              uVar17 = (ushort)uVar40;
                              if ((uVar13 != 0xffff) && (uVar48 < uVar13)) {
                                puVar37 = (ushort *)(lVar41 + (long)(int)uVar25 * 0xc);
                                lVar52 = (ulong)uVar48 * 2;
                                *puVar37 = uVar48;
                                puVar37[1] = uVar13;
                                puVar37[4] = uVar17;
                                puVar37[2] = 0;
                                puVar37[3] = 0xff;
                                puVar37[5] = uVar17;
                                *(undefined2 *)
                                 ((long)__s_01 + (long)(int)uVar25 * 2 + (long)(int)uVar62 * 2) =
                                     *(undefined2 *)((long)__s_01 + lVar52);
                                *(short *)((long)__s_01 + lVar52) = (short)uVar25;
                                uVar56 = (ulong)puVar31[1];
                                uVar25 = uVar25 + 1;
                              }
                              if ((uint)uVar56 != 0xffff) {
                                uVar48 = puVar31[2];
                                uVar36 = (uint)uVar48;
                                uVar13 = uVar48;
                                if (uVar36 == 0xffff) {
                                  uVar36 = (uint)*puVar31;
                                  uVar13 = *puVar31;
                                }
                                if ((uint)uVar56 < uVar36) {
                                  puVar34 = (undefined2 *)(lVar41 + (long)(int)uVar25 * 0xc);
                                  *puVar34 = (short)uVar56;
                                  puVar34[1] = uVar13;
                                  puVar34[4] = uVar17;
                                  *(undefined4 *)(puVar34 + 2) = 0xff0001;
                                  puVar34[5] = uVar17;
                                  *(undefined2 *)
                                   ((long)__s_01 + (long)(int)uVar25 * 2 + (long)(int)uVar62 * 2) =
                                       *(undefined2 *)((long)__s_01 + uVar56 * 2);
                                  *(short *)((long)__s_01 + uVar56 * 2) = (short)uVar25;
                                  uVar48 = puVar31[2];
                                  uVar25 = uVar25 + 1;
                                }
                                if (uVar48 != 0xffff) {
                                  uVar13 = puVar31[3];
                                  uVar18 = uVar13;
                                  if (uVar13 == 0xffff) {
                                    uVar18 = *puVar31;
                                  }
                                  if (uVar48 < uVar18) {
                                    puVar37 = (ushort *)(lVar41 + (long)(int)uVar25 * 0xc);
                                    *puVar37 = uVar48;
                                    puVar37[1] = uVar18;
                                    puVar37[4] = uVar17;
                                    puVar37[2] = 2;
                                    puVar37[3] = 0xff;
                                    puVar37[5] = uVar17;
                                    *(undefined2 *)
                                     ((long)__s_01 + (long)(int)uVar25 * 2 + (long)(int)uVar62 * 2)
                                         = *(undefined2 *)((long)__s_01 + (ulong)uVar48 * 2);
                                    *(short *)((long)__s_01 + (ulong)uVar48 * 2) = (short)uVar25;
                                    uVar13 = puVar31[3];
                                    uVar25 = uVar25 + 1;
                                  }
                                  if (uVar13 != 0xffff) {
                                    uVar48 = puVar31[4];
                                    uVar18 = uVar48;
                                    if (uVar48 == 0xffff) {
                                      uVar18 = *puVar31;
                                    }
                                    if (uVar13 < uVar18) {
                                      puVar37 = (ushort *)(lVar41 + (long)(int)uVar25 * 0xc);
                                      *puVar37 = uVar13;
                                      puVar37[1] = uVar18;
                                      puVar37[4] = uVar17;
                                      puVar37[2] = 3;
                                      puVar37[3] = 0xff;
                                      puVar37[5] = uVar17;
                                      *(undefined2 *)
                                       ((long)__s_01 + (long)(int)uVar25 * 2 + (long)(int)uVar62 * 2
                                       ) = *(undefined2 *)((long)__s_01 + (ulong)uVar13 * 2);
                                      *(short *)((long)__s_01 + (ulong)uVar13 * 2) = (short)uVar25;
                                      uVar48 = puVar31[4];
                                      uVar25 = uVar25 + 1;
                                    }
                                    if (uVar48 != 0xffff) {
                                      uVar13 = puVar31[5];
                                      uVar18 = uVar13;
                                      if (uVar13 == 0xffff) {
                                        uVar18 = *puVar31;
                                      }
                                      if (uVar48 < uVar18) {
                                        puVar37 = (ushort *)(lVar41 + (long)(int)uVar25 * 0xc);
                                        *puVar37 = uVar48;
                                        puVar37[1] = uVar18;
                                        puVar37[4] = uVar17;
                                        puVar37[2] = 4;
                                        puVar37[3] = 0xff;
                                        puVar37[5] = uVar17;
                                        *(undefined2 *)
                                         ((long)__s_01 +
                                         (long)(int)uVar25 * 2 + (long)(int)uVar62 * 2) =
                                             *(undefined2 *)((long)__s_01 + (ulong)uVar48 * 2);
                                        *(short *)((long)__s_01 + (ulong)uVar48 * 2) = (short)uVar25
                                        ;
                                        uVar13 = puVar31[5];
                                        uVar25 = uVar25 + 1;
                                      }
                                      if (uVar13 != 0xffff) {
                                        uVar48 = *puVar31;
                                        if (uVar13 < uVar48) {
                                          puVar31 = (ushort *)(lVar41 + (long)(int)uVar25 * 0xc);
                                          *puVar31 = uVar13;
                                          puVar31[1] = uVar48;
                                          puVar31[4] = uVar17;
                                          puVar31[2] = 5;
                                          puVar31[3] = 0xff;
                                          puVar31[5] = uVar17;
                                          *(undefined2 *)
                                           ((long)__s_01 +
                                           (long)(int)uVar25 * 2 + (long)(int)uVar62 * 2) =
                                               *(undefined2 *)((long)__s_01 + (ulong)uVar13 * 2);
                                          *(short *)((long)__s_01 + (ulong)uVar13 * 2) =
                                               (short)uVar25;
                                          uVar25 = uVar25 + 1;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            uVar40 = uVar40 + 1;
                            lVar51 = lVar51 + 0xc00000000;
                          } while (uVar22 != uVar40);
                          uVar40 = 0;
                          do {
                            puVar31 = (ushort *)
                                      (lVar47 + ((long)((ulong)(uint)((int)uVar40 * 3) << 0x22) >>
                                                0x1f));
                            uVar56 = 0;
                            do {
                              uVar48 = puVar31[uVar56];
                              if (uVar48 == 0xffff) break;
                              uVar60 = uVar56 + 1;
                              if ((4 < uVar56) || (uVar13 = puVar31[uVar60], uVar13 == 0xffff)) {
                                uVar13 = *puVar31;
                              }
                              if (uVar13 < uVar48) {
                                uVar18 = (ushort)uVar40;
                                uVar17 = *(ushort *)((long)__s_01 + (ulong)uVar13 * 2);
                                while (uVar17 != 0xffff) {
                                  uVar44 = (ulong)uVar17;
                                  if ((*(ushort *)(lVar41 + uVar44 * 0xc + 2) == uVar48) &&
                                     (lVar51 = lVar41 + uVar44 * 0xc,
                                     puVar37 = (ushort *)(lVar51 + 10),
                                     *(ushort *)(lVar51 + 8) == *puVar37)) {
                                    *puVar37 = uVar18;
                                    *(ushort *)(lVar41 + uVar44 * 0xc + 6) = (ushort)uVar56;
                                    goto joined_r0x011993f0;
                                  }
                                  uVar17 = *(ushort *)
                                            ((long)__s_01 + uVar44 * 2 + (long)(int)uVar62 * 2);
                                }
                                puVar37 = (ushort *)(lVar41 + (long)(int)uVar25 * 0xc);
                                lVar51 = (ulong)uVar13 * 2;
                                *puVar37 = uVar13;
                                puVar37[1] = uVar48;
                                puVar37[4] = uVar18;
                                puVar37[2] = (ushort)uVar56;
                                puVar37[5] = uVar18;
                                puVar37[3] = 0xff;
                                *(undefined2 *)
                                 ((long)__s_01 + (long)(int)uVar25 * 2 + (long)(int)uVar62 * 2) =
                                     *(undefined2 *)((long)__s_01 + lVar51);
                                *(short *)((long)__s_01 + lVar51) = (short)uVar25;
                                uVar25 = uVar25 + 1;
                              }
joined_r0x011993f0:
                              uVar56 = uVar60;
                            } while (uVar60 != 6);
                            uVar40 = uVar40 + 1;
                          } while (uVar40 != uVar22);
                        }
                        iVar39 = *(int *)param_2;
                        if (0 < iVar39) {
                          lVar52 = *(long *)(param_2 + 8);
                          lVar51 = 0;
                          do {
                            uVar62 = *(uint *)(lVar52 + lVar51 * 0x18);
                            if (2 < (int)uVar62) {
                              lVar33 = *(long *)(lVar52 + lVar51 * 0x18 + 8);
                              uVar40 = 0;
                              iVar26 = uVar62 - 1;
                              do {
                                pbVar1 = (byte *)(lVar33 + (iVar26 << 2));
                                iVar26 = (int)uVar40;
                                pbVar3 = (byte *)(lVar33 + (ulong)(uint)(iVar26 << 2));
                                uVar48 = pbVar1[3] & 0xf;
                                if ((pbVar1[3] & 0xf) == 0) {
LAB_011994a4:
                                  bVar9 = pbVar1[2];
                                  bVar10 = pbVar3[2];
                                  uVar13 = (ushort)bVar9;
                                  if (bVar10 <= bVar9) {
                                    uVar13 = (ushort)bVar10;
                                  }
                                  uVar17 = (ushort)bVar9;
                                  if (bVar9 <= bVar10) {
                                    uVar17 = (ushort)bVar10;
                                  }
                                  if (0 < (int)uVar25) {
                                    bVar9 = *pbVar1;
                                    uVar56 = (ulong)uVar25;
                                    puVar31 = (ushort *)(lVar41 + 6);
                                    do {
                                      if (puVar31[1] == puVar31[2]) {
                                        puVar37 = (ushort *)(lVar50 + (ulong)puVar31[-3] * 6);
                                        if ((*puVar37 == (ushort)bVar9) &&
                                           (puVar61 = (ushort *)(lVar50 + (ulong)puVar31[-2] * 6),
                                           *puVar61 == (ushort)bVar9)) {
                                          uVar14 = puVar37[2];
                                          uVar15 = puVar61[2];
                                          uVar18 = uVar14;
                                          if (uVar14 <= uVar15) {
                                            uVar18 = uVar15;
                                            uVar15 = uVar14;
                                          }
                                          if ((uVar15 < uVar17) && (uVar13 < uVar18)) {
                                            *puVar31 = uVar48;
                                          }
                                        }
                                      }
                                      uVar56 = uVar56 - 1;
                                      puVar31 = puVar31 + 6;
                                    } while (uVar56 != 0);
                                  }
                                }
                                else if (uVar48 != 0xf) {
                                  if (uVar48 == 2) goto LAB_011994a4;
                                  bVar9 = *pbVar1;
                                  bVar10 = *pbVar3;
                                  uVar13 = (ushort)bVar9;
                                  if (bVar10 <= bVar9) {
                                    uVar13 = (ushort)bVar10;
                                  }
                                  uVar17 = (ushort)bVar9;
                                  if (bVar9 <= bVar10) {
                                    uVar17 = (ushort)bVar10;
                                  }
                                  if (0 < (int)uVar25) {
                                    bVar9 = pbVar1[2];
                                    uVar56 = (ulong)uVar25;
                                    puVar31 = (ushort *)(lVar41 + 6);
                                    do {
                                      if (puVar31[1] == puVar31[2]) {
                                        puVar37 = (ushort *)(lVar50 + (ulong)puVar31[-3] * 6);
                                        if ((puVar37[2] == (ushort)bVar9) &&
                                           (puVar61 = (ushort *)(lVar50 + (ulong)puVar31[-2] * 6),
                                           puVar61[2] == (ushort)bVar9)) {
                                          uVar14 = *puVar37;
                                          uVar15 = *puVar61;
                                          uVar18 = uVar14;
                                          if (uVar14 <= uVar15) {
                                            uVar18 = uVar15;
                                            uVar15 = uVar14;
                                          }
                                          if ((uVar15 < uVar17) && (uVar13 < uVar18)) {
                                            *puVar31 = uVar48;
                                          }
                                        }
                                      }
                                      uVar56 = uVar56 - 1;
                                      puVar31 = puVar31 + 6;
                                    } while (uVar56 != 0);
                                  }
                                }
                                uVar40 = uVar40 + 1;
                              } while (uVar40 != uVar62);
                            }
                            lVar51 = lVar51 + 1;
                          } while (lVar51 != iVar39);
                        }
                        if (0 < (int)uVar25) {
                          lVar50 = 0;
                          uVar40 = (ulong)uVar25;
                          puVar31 = (ushort *)(lVar41 + 10);
                          do {
                            uVar13 = puVar31[-1];
                            uVar48 = *puVar31;
                            uVar56 = (ulong)uVar48;
                            if (uVar13 == uVar48) {
                              if (puVar31[-2] != 0xff) {
                                uVar48 = puVar31[-2] | 0x8000;
                                puVar37 = puVar31 + -3;
                                uVar56 = (ulong)uVar13;
                                goto LAB_01199640;
                              }
                            }
                            else {
                              *(ushort *)
                               (lVar47 + (ulong)uVar13 * 0x18 + (ulong)puVar31[-3] * 2 + 0xc) =
                                   uVar48;
                              uVar48 = puVar31[-1];
                              puVar37 = (ushort *)(lVar41 + lVar50 * 0xc + 6);
LAB_01199640:
                              *(ushort *)(lVar47 + uVar56 * 0x18 + (ulong)*puVar37 * 2 + 0xc) =
                                   uVar48;
                            }
                            lVar50 = lVar50 + 1;
                            uVar40 = uVar40 - 1;
                            puVar31 = puVar31 + 6;
                          } while (uVar40 != 0);
                        }
                        if (param_1 == (dtTileCacheAlloc *)0x0) {
                          iVar26 = 0x40000000;
                          goto LAB_01199748;
                        }
                        bVar21 = true;
                      }
                      (**(code **)(*(long *)param_1 + 0x20))(param_1,lVar41);
                    }
                    (**(code **)(*(long *)param_1 + 0x20))(param_1,__s_01);
                    iVar26 = 0x40000000;
                    if (!bVar21) {
                      iVar26 = -0x7ffffffc;
                    }
                  }
                  goto LAB_011996e4;
                }
                goto LAB_011996f8;
              }
              goto LAB_0119970c;
            }
            iVar26 = -0x7ffffffc;
            goto LAB_01199720;
          }
        }
      }
      iVar26 = -0x7ffffffc;
    }
  }
  goto LAB_01199734;
LAB_011988a0:
  iVar39 = *(int *)(param_3 + 4);
  uVar25 = uVar22 & 0xffff;
  if ((int)uVar25 < iVar39) {
    lVar41 = *(long *)(param_3 + 0x10);
    lVar47 = (long)iVar39 - (ulong)uVar25;
    uVar25 = uVar25 * 3;
    do {
      lVar47 = lVar47 + -1;
      *(undefined2 *)(lVar41 + (ulong)uVar25 * 2) =
           *(undefined2 *)(lVar41 + (ulong)(uVar25 + 3) * 2);
      *(undefined2 *)(lVar41 + (ulong)(uVar25 + 1) * 2) =
           *(undefined2 *)(lVar41 + (ulong)(uVar25 + 4) * 2);
      *(undefined2 *)(lVar41 + (ulong)(uVar25 + 2) * 2) =
           *(undefined2 *)(lVar41 + (ulong)(uVar25 + 5) * 2);
      uVar25 = uVar25 + 3;
    } while (lVar47 != 0);
  }
  *(int *)(param_3 + 4) = iVar39 + -1;
  if (0 < iVar26) {
    lVar41 = *(long *)(param_3 + 0x18);
    lVar47 = 0;
    do {
      uVar25 = (int)lVar47 * 3;
      puVar31 = (ushort *)(lVar41 + ((long)((ulong)uVar25 << 0x22) >> 0x1f));
      uVar48 = *puVar31;
      if (uVar48 != 0xffff) {
        if (puVar31[1] == 0xffff) {
          lVar51 = 1;
        }
        else if (puVar31[2] == 0xffff) {
          lVar51 = 2;
        }
        else if (puVar31[3] == 0xffff) {
          lVar51 = 3;
        }
        else if (puVar31[4] == 0xffff) {
          lVar51 = 4;
        }
        else {
          lVar51 = 5;
          if (puVar31[5] != 0xffff) {
            lVar51 = 6;
          }
        }
        puVar31 = (ushort *)
                  (lVar41 + 2 +
                  (-((ulong)(uVar25 >> 0x1d) & 1) & 0xffffffff00000000 |
                  ((ulong)uVar25 & 0x3fffffff) << 2) * 2);
        while( true ) {
          lVar51 = lVar51 + -1;
          if ((uVar22 & 0xffff) < (uint)uVar48) {
            puVar31[-1] = uVar48 - 1;
          }
          if (lVar51 == 0) break;
          uVar48 = *puVar31;
          puVar31 = puVar31 + 1;
        }
      }
      lVar47 = lVar47 + 1;
    } while (lVar47 != iVar26);
  }
  if (0 < (int)uVar62) {
    uVar40 = (ulong)uVar62;
    uVar25 = 1;
    do {
      if ((uVar22 & 0xffff) < (uint)local_194[(ulong)(uVar25 - 1) - 2]) {
        local_194[(ulong)(uVar25 - 1) - 2] = local_194[(ulong)(uVar25 - 1) - 2] - 1;
      }
      if ((uVar22 & 0xffff) < (uint)local_194[(ulong)uVar25 - 2]) {
        local_194[(ulong)uVar25 - 2] = local_194[(ulong)uVar25 - 2] - 1;
      }
      uVar40 = uVar40 - 1;
      uVar25 = uVar25 + 3;
    } while (uVar40 != 0);
  }
  if (uVar62 != 0) {
    uVar40 = 1;
    auStack_1fa[1] = (ushort)local_198;
    iVar39 = 1;
    local_258[0] = local_194[0];
    do {
      if ((int)uVar62 < 1) break;
      iVar26 = 0;
      bVar21 = false;
      do {
        lVar47 = (long)iVar26 + (long)iVar26 * 2;
        lVar41 = (long)(int)lVar47;
        uVar48 = local_194[lVar47 + -2];
        uVar13 = local_194[lVar41];
        iVar49 = (int)uVar40;
        if (auStack_1fa[1] == local_194[lVar41 + -1]) {
          if (0x2f < iVar49) goto LAB_01198b50;
          if (0 < iVar49) {
            lVar51 = (long)iVar49;
            do {
              lVar52 = lVar51 + 1;
              puVar31 = auStack_1fa + lVar51;
              lVar51 = lVar51 + -1;
              auStack_1fa[lVar52] = *puVar31;
            } while (0 < lVar51);
          }
          auStack_1fa[1] = uVar48;
          if (0 < iVar39) {
            lVar51 = (long)iVar39;
            do {
              lVar52 = lVar51 * 2;
              puVar31 = &uStack_25a + lVar51;
              lVar51 = lVar51 + -1;
              *(ushort *)((long)local_258 + lVar52) = *puVar31;
            } while (0 < lVar51);
          }
          local_258[0] = uVar13;
LAB_01198a5c:
          iVar58 = uVar62 * 3;
          iVar39 = iVar39 + 1;
          uVar40 = (ulong)(iVar49 + 1);
          uVar62 = uVar62 - 1;
          local_194[lVar47 + -2] = local_194[(long)(iVar58 + -3) + -2];
          iVar26 = iVar26 + -1;
          bVar21 = true;
          local_194[lVar41 + -1] = local_194[(long)(iVar58 + -2) + -2];
          local_194[lVar41] = local_194[(long)(iVar58 + -1) + -2];
        }
        else if (auStack_1fa[iVar49] == uVar48) {
          if (iVar49 < 0x30) {
            auStack_1fa[(long)iVar49 + 1] = local_194[lVar41 + -1];
            *(ushort *)((long)local_258 + (long)iVar39 * 2) = uVar13;
            goto LAB_01198a5c;
          }
          goto LAB_01198b50;
        }
        iVar26 = iVar26 + 1;
      } while (iVar26 < (int)uVar62);
    } while (bVar21);
    if (0 < (int)uVar40) {
      lVar47 = *(long *)(param_3 + 0x10);
      uVar56 = 0;
      uVar62 = 3;
      do {
        iVar39 = (uint)auStack_1fa[uVar56 + 1] * 3;
        local_408[uVar62 - 3] = (char)*(undefined2 *)(lVar47 + (ulong)auStack_1fa[uVar56 + 1] * 6);
        local_408[uVar62 - 2] = (char)*(undefined2 *)(lVar47 + (ulong)(iVar39 + 1) * 2);
        uVar16 = *(undefined2 *)(lVar47 + (ulong)(iVar39 + 2) * 2);
        local_528[uVar56] = (short)uVar56;
        uVar56 = uVar56 + 1;
        local_408[uVar62 - 1] = (char)uVar16;
        local_408[uVar62] = 0;
        uVar62 = uVar62 + 4;
      } while (uVar40 != uVar56);
    }
    uVar25 = FUN_01199790(uVar40,local_408,local_528,local_378);
    uVar62 = -uVar25;
    if (-1 < (int)uVar25) {
      uVar62 = uVar25;
    }
    if ((int)uVar62 < 0x31) {
      __memset_chk(&local_768,0xff,uVar62 * 0xc,0x240);
      if ((int)uVar62 < 1) {
        iVar26 = 0x40000000;
      }
      else {
        uVar40 = 0;
        iVar39 = 0;
        uVar56 = (ulong)uVar62;
        do {
          uVar60 = uVar40 & 0xffffffff;
          uVar48 = local_378[uVar60];
          uVar13 = local_378[uVar60 + 1];
          if (uVar48 != uVar13) {
            uVar17 = local_378[uVar60 + 2];
            if ((uVar48 != uVar17) && (uVar13 != uVar17)) {
              lVar41 = (long)iVar39;
              lVar47 = lVar41 + (long)iVar39 * 2;
              uVar13 = auStack_1fa[(ulong)uVar13 + 1];
              uVar17 = auStack_1fa[(ulong)uVar17 + 1];
              uVar12 = *(undefined1 *)((long)local_258 + (ulong)uVar48 * 2);
              uVar60 = (ulong)((int)lVar47 * 2);
              *(ushort *)((long)&local_768 + lVar47 * 4) = auStack_1fa[(ulong)uVar48 + 1];
              iVar39 = iVar39 + 1;
              auStack_799[lVar41 + 1] = uVar12;
              *(ushort *)((long)&local_768 + ((uVar60 >> 1) << 2 | 2)) = uVar13;
              *(ushort *)((long)&local_768 + uVar60 * 2 + 4) = uVar17;
            }
          }
          uVar56 = uVar56 - 1;
          uVar40 = uVar40 + 3;
        } while (uVar56 != 0);
        if (iVar39 == 0) goto LAB_01198b64;
        uVar40 = (long)iVar39;
        while (uVar56 = uVar40 - 1, 0 < (long)uVar56) {
          iVar39 = 0;
          uVar44 = 6;
          uVar60 = 1;
          uVar63 = 0;
          uVar55 = 0;
          local_9d0 = 0;
          local_9d8 = 0;
          uVar64 = 0;
          do {
            uVar32 = uVar64 + 1;
            if ((long)uVar32 < (long)uVar40) {
              uVar54 = uVar44;
              uVar59 = uVar60;
              do {
                iVar26 = FUN_01199a94((long)&local_768 + (ulong)(uint)((int)uVar64 * 6) * 2,
                                      (long)&local_768 + (uVar54 & 0xfffffffe) * 2,
                                      *(undefined8 *)(param_3 + 0x10),&local_9a4,&local_9a8);
                if (iVar39 < iVar26) {
                  local_9d8 = uVar64 & 0xffffffff;
                  local_9d0 = uVar59 & 0xffffffff;
                  iVar39 = iVar26;
                  uVar55 = local_9a4;
                  uVar63 = local_9a8;
                }
                uVar59 = uVar59 + 1;
                uVar54 = uVar54 + 6;
              } while ((uVar40 & 0xffffffff) != uVar59);
            }
            uVar60 = uVar60 + 1;
            uVar44 = uVar44 + 6;
            uVar64 = uVar32;
          } while (uVar32 != (uVar56 & 0xffffffff));
          if (iVar39 < 1) break;
          iVar39 = (int)local_9d0;
          puVar45 = (undefined8 *)((long)&local_768 + (long)iVar39 * 0xc);
          FUN_01199d9c((long)&local_768 + (long)(int)local_9d8 * 0xc,puVar45,uVar55,uVar63);
          uVar55 = (&local_760)[uVar56 * 3];
          uVar43 = *(undefined8 *)((long)&local_768 + uVar56 * 0xc);
          auStack_799[(long)iVar39 + 1] = auStack_799[uVar40];
          (&local_760)[(long)iVar39 * 3] = uVar55;
          *puVar45 = uVar43;
          uVar40 = uVar56;
        }
        if (0 < (int)uVar40) {
          iVar39 = *(int *)(param_3 + 8);
          uVar56 = 0;
          uVar40 = uVar40 & 0xffffffff;
          puVar46 = auStack_799;
          do {
            puVar46 = puVar46 + 1;
            if (iVar65 <= iVar39) break;
            lVar47 = (uVar56 & 0xfffffffe) * 2;
            puVar45 = (undefined8 *)(*(long *)(param_3 + 0x18) + (long)(iVar39 * 0xc) * 2);
            puVar45[1] = 0xffffffffffffffff;
            puVar45[2] = 0xffffffffffffffff;
            *puVar45 = 0xffffffffffffffff;
            *(undefined2 *)puVar45 = *(undefined2 *)((long)&local_768 + lVar47);
            *(undefined2 *)((long)puVar45 + 2) =
                 *(undefined2 *)((long)&local_768 + ((uVar56 >> 1 & 0x7fffffff) << 2 | 2));
            *(undefined2 *)((long)puVar45 + 4) = *(undefined2 *)((long)&local_768 + lVar47 + 4);
            *(undefined2 *)((long)puVar45 + 6) = *(undefined2 *)((long)&local_768 + lVar47 + 6);
            *(undefined2 *)(puVar45 + 1) = *(undefined2 *)((long)&local_760 + lVar47);
            *(undefined2 *)((long)puVar45 + 10) = *(undefined2 *)((long)&local_760 + lVar47 + 2);
            *(undefined1 *)(*(long *)(param_3 + 0x28) + (long)*(int *)(param_3 + 8)) = *puVar46;
            iVar26 = *(int *)(param_3 + 8);
            iVar39 = iVar26 + 1;
            *(int *)(param_3 + 8) = iVar39;
            if (iVar65 <= iVar26) {
              iVar26 = -0x7ffffff0;
              goto LAB_01198f94;
            }
            uVar40 = uVar40 - 1;
            uVar56 = uVar56 + 6;
          } while (uVar40 != 0);
        }
        iVar26 = 0x40000000;
      }
    }
    else {
      iVar26 = -0x7ffffff0;
    }
LAB_01198f94:
    if (iVar26 < 0) goto LAB_011992d0;
  }
LAB_01198b64:
  uVar40 = (ulong)*(uint *)(param_3 + 4);
  if ((int)uVar22 < (int)*(uint *)(param_3 + 4)) {
    do {
      *(undefined1 *)((long)__s + lVar50) = ((undefined1 *)((long)__s + lVar50))[1];
      uVar40 = (ulong)*(int *)(param_3 + 4);
      lVar50 = lVar50 + 1;
    } while (lVar50 < (long)uVar40);
  }
  uVar22 = uVar22 - 1;
LAB_011983a0:
  uVar22 = uVar22 + 1;
  uVar62 = (uint)uVar40;
  if ((int)uVar62 <= (int)uVar22) goto LAB_01198fb4;
  goto LAB_011983ac;
LAB_01198b50:
  iVar26 = -0x7ffffff0;
LAB_011992d0:
  if (param_1 == (dtTileCacheAlloc *)0x0) goto LAB_01199748;
LAB_011996e4:
  (**(code **)(*(long *)param_1 + 0x20))(param_1,__s_00);
LAB_011996f8:
  (**(code **)(*(long *)param_1 + 0x20))(param_1,lVar30);
LAB_0119970c:
  (**(code **)(*(long *)param_1 + 0x20))(param_1,lVar28);
LAB_01199720:
  (**(code **)(*(long *)param_1 + 0x20))(param_1,pvVar29);
LAB_01199734:
  (**(code **)(*(long *)param_1 + 0x20))(param_1,__s);
LAB_01199748:
  if (*(long *)(lVar19 + 0x28) == local_78) {
    return iVar26;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

