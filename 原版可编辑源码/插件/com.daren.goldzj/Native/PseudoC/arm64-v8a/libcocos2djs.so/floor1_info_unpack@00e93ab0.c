
long * floor1_info_unpack(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  short sVar9;
  void *pvVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  char cVar13;
  byte bVar14;
  ushort uVar15;
  int iVar16;
  uint uVar17;
  long *plVar18;
  void *pvVar19;
  void *__ptr;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  undefined4 uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  ushort uVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  ulong uVar34;
  undefined4 uVar35;
  byte *pbVar36;
  ulong uVar37;
  ulong uVar38;
  undefined1 *puVar39;
  void *__dest;
  long lVar40;
  long lVar41;
  uint uVar42;
  undefined2 *puVar43;
  uint uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  
  lVar41 = *(long *)(param_1 + 0x30);
  plVar18 = calloc(1,0x40);
  iVar16 = oggpack_read(param_2,5);
  *(int *)(plVar18 + 6) = iVar16;
  pvVar19 = malloc((long)iVar16);
  plVar18[1] = (long)pvVar19;
  if (iVar16 < 1) {
    uVar17 = 0xffffffff;
  }
  else {
    lVar40 = 0;
    uVar42 = 0xffffffff;
    do {
      uVar12 = oggpack_read(param_2,4);
      *(undefined1 *)(plVar18[1] + lVar40) = uVar12;
      pbVar36 = (byte *)(plVar18[1] + lVar40);
      lVar40 = lVar40 + 1;
      uVar17 = (uint)*pbVar36;
      if ((int)(uint)*pbVar36 <= (int)uVar42) {
        uVar17 = uVar42;
      }
      uVar42 = uVar17;
    } while (lVar40 < (int)plVar18[6]);
  }
  pvVar19 = malloc((long)(int)(uVar17 + 1) * 0xb);
  *plVar18 = (long)pvVar19;
  if (-1 < (int)uVar17) {
    lVar40 = 3;
    lVar29 = 0;
    do {
      cVar13 = oggpack_read(param_2,3);
      *(char *)(*plVar18 + lVar29 * 0xb) = cVar13 + '\x01';
      uVar12 = oggpack_read(param_2,2);
      *(undefined1 *)(*plVar18 + lVar29 * 0xb + 1) = uVar12;
      iVar16 = oggpack_eop(param_2);
      if (iVar16 < 0) goto LAB_00e93e00;
      lVar22 = *plVar18;
      if (*(char *)(lVar22 + lVar29 * 0xb + 1) == '\0') {
        bVar14 = 0;
      }
      else {
        bVar14 = oggpack_read(param_2,8);
        lVar22 = *plVar18;
      }
      *(byte *)(lVar22 + lVar29 * 0xb + 2) = bVar14;
      if (*(int *)(lVar41 + 0x20) <= (int)(uint)bVar14) goto LAB_00e93e00;
      if (*(char *)(lVar22 + lVar29 * 0xb + 1) != '\x1f') {
        lVar22 = 0;
        do {
          cVar13 = oggpack_read(param_2,8);
          *(char *)(*plVar18 + lVar40 + lVar22) = cVar13 + -1;
          bVar14 = *(byte *)(*plVar18 + lVar40 + lVar22);
          if ((bVar14 != 0xff) &&
             (uVar42 = *(uint *)(lVar41 + 0x20), uVar42 == bVar14 || (int)uVar42 < (int)(uint)bVar14
             )) goto LAB_00e93e00;
          lVar22 = lVar22 + 1;
        } while (lVar22 < 1 << (ulong)(*(byte *)(*plVar18 + lVar29 * 0xb + 1) & 0x1f));
      }
      lVar40 = lVar40 + 0xb;
      bVar1 = lVar29 < (int)uVar17;
      lVar29 = lVar29 + 1;
    } while (bVar1);
  }
  iVar16 = oggpack_read(param_2,2);
  *(int *)(plVar18 + 7) = iVar16 + 1;
  uVar17 = oggpack_read(param_2,4);
  iVar16 = (int)plVar18[6];
  if (iVar16 < 1) {
    uVar42 = 0;
  }
  else {
    lVar41 = *plVar18;
    uVar26 = (ulong)iVar16;
    if (iVar16 == 1) {
      uVar28 = 0;
      uVar42 = 0;
    }
    else {
      uVar28 = uVar26 & 0xfffffffffffffffe;
      iVar31 = 0;
      iVar32 = 0;
      pbVar36 = (byte *)(plVar18[1] + 1);
      uVar20 = uVar28;
      do {
        uVar20 = uVar20 - 2;
        iVar31 = iVar31 + (uint)*(byte *)(lVar41 + (ulong)pbVar36[-1] * 0xb);
        iVar32 = iVar32 + (uint)*(byte *)(lVar41 + (ulong)*pbVar36 * 0xb);
        pbVar36 = pbVar36 + 2;
      } while (uVar20 != 0);
      uVar42 = iVar32 + iVar31;
      if (uVar28 == uVar26) goto LAB_00e93d34;
    }
    do {
      pbVar36 = (byte *)(plVar18[1] + uVar28);
      uVar28 = uVar28 + 1;
      uVar42 = uVar42 + *(byte *)(lVar41 + (ulong)*pbVar36 * 0xb);
    } while ((long)uVar28 < (long)uVar26);
  }
LAB_00e93d34:
  pvVar19 = malloc((ulong)((uVar42 + 2) * 2));
  plVar18[2] = (long)pvVar19;
  pvVar19 = malloc((ulong)(uVar42 + 2));
  plVar18[3] = (long)pvVar19;
  pvVar19 = malloc((ulong)uVar42);
  plVar18[5] = (long)pvVar19;
  pvVar19 = malloc((ulong)uVar42);
  plVar18[4] = (long)pvVar19;
  if (iVar16 < 1) {
    uVar42 = 2;
  }
  else {
    lVar40 = 0;
    lVar41 = 0;
    uVar26 = 0;
    do {
      uVar26 = (ulong)*(byte *)(*plVar18 + (ulong)*(byte *)(plVar18[1] + lVar40) * 0xb) +
               (uVar26 & 0xffffffff);
      if ((int)lVar41 < (int)uVar26) {
        lVar41 = (long)(int)lVar41;
        do {
          uVar15 = oggpack_read(param_2,uVar17);
          *(ushort *)(plVar18[2] + lVar41 * 2 + 4) = uVar15;
          if (1 << (ulong)(uVar17 & 0x1f) <= (int)(uint)uVar15) goto LAB_00e93e00;
          lVar41 = lVar41 + 1;
        } while (lVar41 < (long)uVar26);
        iVar16 = (int)plVar18[6];
      }
      lVar40 = lVar40 + 1;
    } while (lVar40 < iVar16);
    uVar42 = (int)uVar26 + 2;
  }
  iVar16 = oggpack_eop(param_2);
  if (iVar16 == 0) {
    puVar43 = (undefined2 *)plVar18[2];
    *puVar43 = 0;
    puVar43[1] = (short)(1 << (ulong)(uVar17 & 0x1f));
    *(uint *)((long)plVar18 + 0x34) = uVar42;
    if (0 < (int)uVar42) {
      lVar41 = 0;
      do {
        *(char *)(plVar18[3] + lVar41) = (char)lVar41;
        uVar42 = *(uint *)((long)plVar18 + 0x34);
        lVar41 = lVar41 + 1;
      } while (lVar41 < (int)uVar42);
      puVar43 = (undefined2 *)plVar18[2];
    }
    __dest = (void *)plVar18[3];
    uVar17 = uVar42 & 0xffff;
    __ptr = malloc((ulong)uVar17);
    pvVar19 = __dest;
    if (1 < uVar17) {
      uVar44 = 1;
      pvVar10 = __ptr;
      do {
        __ptr = pvVar19;
        pvVar19 = pvVar10;
        if (uVar44 < uVar17) {
          uVar24 = 0;
          uVar26 = 0;
          uVar4 = uVar44;
          do {
            uVar3 = uVar24 + uVar44 * 2;
            if (uVar17 <= uVar3) {
              uVar3 = uVar17;
            }
            uVar33 = uVar4;
            if (uVar24 < uVar4) {
              if (uVar4 < uVar3) {
                do {
                  uVar28 = (ulong)uVar24;
                  bVar14 = *(byte *)((long)__ptr + (long)(int)uVar33);
                  uVar20 = uVar26 & 0xffff;
                  uVar26 = (ulong)((int)uVar26 + 1);
                  if ((ushort)puVar43[*(byte *)((long)__ptr + uVar28)] < (ushort)puVar43[bVar14]) {
                    uVar24 = uVar24 + 1;
                    bVar14 = *(byte *)((long)__ptr + uVar28);
                  }
                  else {
                    uVar33 = uVar33 + 1;
                  }
                  *(byte *)((long)pvVar19 + uVar20) = bVar14;
                } while (((int)uVar24 < (int)uVar4) && ((int)uVar33 < (int)uVar3));
              }
              uVar28 = uVar26;
              if ((int)uVar24 < (int)uVar4) {
LAB_00e94010:
                uVar28 = (ulong)(int)uVar24;
                lVar41 = (long)(int)uVar4;
                uVar20 = lVar41 - uVar28;
                uVar23 = (uint)uVar26;
                if (((uVar20 < 0x20) || ((~uVar23 & 0xffff) < ((uint)(~uVar28 + lVar41) & 0xffff)))
                   || (~uVar28 + lVar41 >> 0x10 != 0)) {
LAB_00e940b4:
                  lVar41 = lVar41 - uVar28;
                  puVar39 = (undefined1 *)((long)__ptr + uVar28);
                  do {
                    uVar28 = uVar26 & 0xffff;
                    uVar26 = (ulong)((int)uVar26 + 1);
                    lVar41 = lVar41 + -1;
                    *(undefined1 *)((long)pvVar19 + uVar28) = *puVar39;
                    puVar39 = puVar39 + 1;
                  } while (lVar41 != 0);
                }
                else {
                  uVar34 = (long)__ptr + uVar28;
                  if (((long)pvVar19 + (uVar26 & 0xffff) < (ulong)((long)__ptr + lVar41)) &&
                     (uVar34 < (long)pvVar19 + (((uVar26 & 0xffff) + lVar41) - uVar28)))
                  goto LAB_00e940b4;
                  uVar21 = uVar20 & 0xffffffffffffffe0;
                  uVar27 = 0;
                  uVar28 = uVar21 + uVar28;
                  do {
                    puVar5 = (undefined8 *)(uVar34 + uVar27);
                    uVar45 = *puVar5;
                    uVar47 = puVar5[3];
                    uVar46 = puVar5[2];
                    sVar9 = (short)uVar27;
                    uVar27 = uVar27 + 0x20;
                    puVar2 = (undefined8 *)((long)pvVar19 + (ulong)(ushort)((short)uVar26 + sVar9));
                    puVar2[1] = puVar5[1];
                    *puVar2 = uVar45;
                    puVar2[3] = uVar47;
                    puVar2[2] = uVar46;
                  } while (uVar21 != uVar27);
                  uVar26 = (ulong)(uVar23 + (int)uVar21);
                  if (uVar20 != uVar21) goto LAB_00e940b4;
                }
                uVar28 = (ulong)((uVar23 + uVar4) - uVar24);
              }
            }
            else {
              uVar28 = uVar26;
              if (uVar24 < uVar4) goto LAB_00e94010;
            }
            uVar26 = uVar28;
            if ((int)uVar33 < (int)uVar3) {
              uVar20 = (ulong)(int)uVar33;
              uVar27 = (ulong)uVar3;
              uVar34 = uVar27;
              if ((long)uVar27 < (long)(uVar20 + 1)) {
                uVar34 = uVar20 + 1;
              }
              uVar34 = uVar34 - uVar20;
              if (0x1f < uVar34) {
                uVar26 = uVar27;
                if ((long)uVar27 < (long)(uVar20 + 1)) {
                  uVar26 = uVar20 + 1;
                }
                if ((((uint)(uVar26 + ~uVar20) & 0xffff) <= (~(uint)uVar28 & 0xffff)) &&
                   (uVar26 + ~uVar20 >> 0x10 == 0)) {
                  uVar26 = uVar27;
                  if ((long)uVar27 < (long)(uVar20 + 1)) {
                    uVar26 = uVar20 + 1;
                  }
                  uVar21 = (long)__ptr + uVar20;
                  if (((long)__ptr + uVar26 <= (long)pvVar19 + (uVar28 & 0xffff)) ||
                     ((long)pvVar19 + ((uVar26 + (uVar28 & 0xffff)) - uVar20) <= uVar21)) {
                    uVar37 = uVar34 & 0xffffffffffffffe0;
                    uVar38 = 0;
                    uVar20 = uVar37 + uVar20;
                    uVar26 = (ulong)((uint)uVar28 + (int)uVar37);
                    do {
                      puVar5 = (undefined8 *)(uVar21 + uVar38);
                      uVar45 = *puVar5;
                      uVar47 = puVar5[3];
                      uVar46 = puVar5[2];
                      sVar9 = (short)uVar38;
                      uVar38 = uVar38 + 0x20;
                      puVar2 = (undefined8 *)
                               ((long)pvVar19 + (ulong)(ushort)((short)uVar28 + sVar9));
                      puVar2[1] = puVar5[1];
                      *puVar2 = uVar45;
                      puVar2[3] = uVar47;
                      puVar2[2] = uVar46;
                    } while (uVar37 != uVar38);
                    uVar28 = uVar26;
                    if (uVar34 == uVar37) goto LAB_00e940e8;
                  }
                }
              }
              do {
                puVar39 = (undefined1 *)((long)__ptr + uVar20);
                uVar20 = uVar20 + 1;
                uVar26 = (ulong)((int)uVar28 + 1);
                *(undefined1 *)((long)pvVar19 + (uVar28 & 0xffff)) = *puVar39;
                uVar28 = uVar26;
              } while ((long)uVar20 < (long)uVar27);
            }
LAB_00e940e8:
            uVar24 = (uint)uVar26 & 0xffff;
            uVar4 = uVar44 + uVar24;
          } while (uVar4 < uVar17);
        }
        else {
          uVar26 = 0;
        }
        if (((uint)uVar26 & 0xffff) < (uVar42 & 0xffff)) {
          memcpy((void *)((long)pvVar19 + (uVar26 & 0xffff)),
                 (void *)((long)__ptr + (uVar26 & 0xffff)),
                 ((ulong)(~(uint)uVar26 + uVar42) & 0xffff) + 1);
        }
        uVar44 = (uVar44 & 0x7fff) << 1;
        pvVar10 = __ptr;
      } while (uVar44 < uVar17);
    }
    if ((__ptr == __dest) && (__ptr = pvVar19, (uVar42 & 0xffff) != 0)) {
      memcpy(__dest,pvVar19,(ulong)uVar17);
    }
    free(__ptr);
    if (2 < *(int *)((long)plVar18 + 0x34)) {
      lVar40 = 0;
      lVar41 = 2;
      do {
        lVar22 = plVar18[2];
        lVar29 = 0;
        uVar25 = 0;
        uVar15 = *(ushort *)(lVar22 + 2);
        uVar7 = *(ushort *)(lVar22 + lVar40 * 2 + 4);
        uVar35 = 1;
        uVar30 = 0;
        do {
          uVar8 = *(ushort *)(lVar22 + lVar29 * 2);
          uVar11 = (int)lVar29;
          uVar6 = uVar8;
          if (uVar7 <= uVar8 || uVar8 <= uVar30) {
            uVar11 = uVar25;
            uVar6 = uVar30;
          }
          uVar25 = uVar11;
          uVar11 = (int)lVar29;
          if (uVar8 <= uVar7 || uVar15 <= uVar8) {
            uVar11 = uVar35;
            uVar8 = uVar15;
          }
          uVar15 = uVar8;
          uVar35 = uVar11;
          lVar29 = lVar29 + 1;
          uVar30 = uVar6;
        } while (lVar41 != lVar29);
        lVar41 = lVar41 + 1;
        *(char *)(plVar18[5] + lVar40) = (char)uVar25;
        *(char *)(plVar18[4] + lVar40) = (char)uVar35;
        lVar40 = lVar40 + 1;
      } while (lVar40 < (long)*(int *)((long)plVar18 + 0x34) + -2);
    }
  }
  else {
LAB_00e93e00:
    floor1_free_info(plVar18);
    plVar18 = (long *)0x0;
  }
  return plVar18;
}

