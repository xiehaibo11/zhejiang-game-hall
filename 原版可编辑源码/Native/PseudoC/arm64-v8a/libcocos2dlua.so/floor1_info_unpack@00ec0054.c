
long * floor1_info_unpack(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  void *pvVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  char cVar12;
  byte bVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  long *plVar17;
  void *pvVar18;
  void *__ptr;
  ulong uVar19;
  long lVar20;
  undefined1 *puVar21;
  ulong uVar22;
  undefined4 uVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  ushort uVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  long lVar31;
  undefined4 uVar32;
  byte *pbVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  void *__dest;
  uint uVar37;
  ulong uVar38;
  long lVar39;
  long lVar40;
  undefined2 *puVar41;
  uint uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  
                    /* try { // try from 00ec0064 to 00fc00db has its CatchHandler @ 00ec01e0 */
  lVar39 = *(long *)(param_1 + 0x30);
  plVar17 = calloc(1,0x40);
  iVar15 = oggpack_read(param_2,5);
  *(int *)(plVar17 + 6) = iVar15;
  pvVar18 = malloc((long)iVar15);
  plVar17[1] = (long)pvVar18;
  if (iVar15 < 1) {
    uVar16 = 0xffffffff;
  }
  else {
    lVar40 = 0;
    uVar37 = 0xffffffff;
    do {
      uVar11 = oggpack_read(param_2,4);
      *(undefined1 *)(plVar17[1] + lVar40) = uVar11;
      pbVar33 = (byte *)(plVar17[1] + lVar40);
      lVar40 = lVar40 + 1;
                    /* try { // try from 00ec00e0 to 00fc00ef has its CatchHandler @ 00ec01c8 */
      uVar16 = (uint)*pbVar33;
      if ((int)(uint)*pbVar33 <= (int)uVar37) {
        uVar16 = uVar37;
      }
      uVar37 = uVar16;
    } while (lVar40 < (int)plVar17[6]);
  }
                    /* try { // try from 00ec00f4 to 00fc0103 has its CatchHandler @ 00ec01a8 */
  pvVar18 = malloc((long)(int)(uVar16 + 1) * 0xb);
  *plVar17 = (long)pvVar18;
  if (-1 < (int)uVar16) {
    uVar38 = 0;
                    /* try { // try from 00ec0114 to 00fc0123 has its CatchHandler @ 00ec0188 */
    lVar40 = 3;
    do {
                    /* try { // try from 00ec0138 to 00fc01f3 has its CatchHandler @ 00ec0008 */
      cVar12 = oggpack_read(param_2,3);
                    /* catch() { ... } // from try @ 00ec012c with catch @ 00ec014c */
      *(char *)(*plVar17 + uVar38 * 0xb) = cVar12 + '\x01';
      uVar11 = oggpack_read(param_2,2);
      *(undefined1 *)(*plVar17 + uVar38 * 0xb + 1) = uVar11;
      iVar15 = oggpack_eop(param_2);
      if (iVar15 < 0) goto LAB_00ec03b8;
      lVar20 = *plVar17;
      if (*(char *)(lVar20 + uVar38 * 0xb + 1) == '\0') {
        bVar13 = 0;
      }
      else {
                    /* catch() { ... } // from try @ 00ec0114 with catch @ 00ec0188 */
        bVar13 = oggpack_read(param_2,8);
        lVar20 = *plVar17;
      }
      *(byte *)(lVar20 + uVar38 * 0xb + 2) = bVar13;
                    /* catch() { ... } // from try @ 00ec00f4 with catch @ 00ec01a8 */
      if (*(int *)(lVar39 + 0x20) <= (int)(uint)bVar13) goto LAB_00ec03b8;
      if (*(char *)(lVar20 + uVar38 * 0xb + 1) != '\x1f') {
        lVar20 = 0;
                    /* catch() { ... } // from try @ 00ec00e0 with catch @ 00ec01c8 */
        do {
          cVar12 = oggpack_read(param_2,8);
          *(char *)(*plVar17 + lVar40 + lVar20) = cVar12 + -1;
          bVar13 = *(byte *)(*plVar17 + lVar40 + lVar20);
          if ((bVar13 != 0xff) &&
             (uVar37 = *(uint *)(lVar39 + 0x20), uVar37 == bVar13 || (int)uVar37 < (int)(uint)bVar13
             )) goto LAB_00ec03b8;
          lVar20 = lVar20 + 1;
                    /* catch() { ... } // from try @ 00ec0064 with catch @ 00ec01e0 */
        } while (lVar20 < 1 << (ulong)(*(byte *)(*plVar17 + uVar38 * 0xb + 1) & 0x1f));
      }
      uVar38 = uVar38 + 1;
                    /* try { // try from 00ec012c to 00fc0137 has its CatchHandler @ 00ec014c */
      lVar40 = lVar40 + 0xb;
    } while (uVar38 != uVar16 + 1);
  }
  iVar15 = oggpack_read(param_2,2);
  *(int *)(plVar17 + 7) = iVar15 + 1;
  uVar16 = oggpack_read(param_2,4);
  iVar15 = (int)plVar17[6];
  if (iVar15 < 1) {
    uVar37 = 0;
  }
  else {
    lVar39 = *plVar17;
    uVar38 = (ulong)iVar15;
    if (iVar15 == 1) {
      uVar26 = 0;
      uVar37 = 0;
    }
    else {
      uVar26 = uVar38 & 0xfffffffffffffffe;
      iVar28 = 0;
      iVar30 = 0;
      pbVar33 = (byte *)(plVar17[1] + 1);
      uVar19 = uVar26;
      do {
        uVar19 = uVar19 - 2;
        iVar28 = iVar28 + (uint)*(byte *)(lVar39 + (ulong)pbVar33[-1] * 0xb);
        iVar30 = iVar30 + (uint)*(byte *)(lVar39 + (ulong)*pbVar33 * 0xb);
        pbVar33 = pbVar33 + 2;
      } while (uVar19 != 0);
      uVar37 = iVar30 + iVar28;
      if (uVar26 == uVar38) goto LAB_00ec02e4;
    }
    do {
      pbVar33 = (byte *)(plVar17[1] + uVar26);
      uVar26 = uVar26 + 1;
                    /* catch() { ... } // from try @ 00ec0320 with catch @ 00ec02dc */
      uVar37 = uVar37 + *(byte *)(lVar39 + (ulong)*pbVar33 * 0xb);
    } while ((long)uVar26 < (long)uVar38);
  }
LAB_00ec02e4:
  pvVar18 = malloc((ulong)((uVar37 + 2) * 2));
  plVar17[2] = (long)pvVar18;
  pvVar18 = malloc((ulong)(uVar37 + 2));
  plVar17[3] = (long)pvVar18;
  pvVar18 = malloc((ulong)uVar37);
  plVar17[5] = (long)pvVar18;
  pvVar18 = malloc((ulong)uVar37);
                    /* try { // try from 00ec0318 to 00fc031f has its CatchHandler @ 00ec037c */
  plVar17[4] = (long)pvVar18;
                    /* try { // try from 00ec0320 to 00fc0397 has its CatchHandler @ 00ec02dc */
  if (iVar15 < 1) {
    uVar37 = 2;
  }
  else {
    lVar39 = 0;
    uVar38 = 0;
    uVar37 = 0;
    do {
      uVar37 = uVar37 + *(byte *)(*plVar17 + (ulong)*(byte *)(plVar17[1] + lVar39) * 0xb);
      if ((int)uVar38 < (int)uVar37) {
        lVar40 = (-(uVar38 >> 0x1f) & 0xfffffffe00000000 | uVar38 << 1) + 4;
        iVar15 = uVar37 - (int)uVar38;
        do {
                    /* catch() { ... } // from try @ 00ec0318 with catch @ 00ec037c */
          uVar14 = oggpack_read(param_2,uVar16);
          *(ushort *)(plVar17[2] + lVar40) = uVar14;
          if (1 << (ulong)(uVar16 & 0x1f) <= (int)(uint)uVar14) goto LAB_00ec03b8;
          iVar15 = iVar15 + -1;
          lVar40 = lVar40 + 2;
        } while (iVar15 != 0);
        iVar15 = (int)plVar17[6];
        uVar38 = (ulong)uVar37;
      }
      lVar39 = lVar39 + 1;
    } while (lVar39 < iVar15);
    uVar37 = uVar37 + 2;
  }
  iVar15 = oggpack_eop(param_2);
  if (iVar15 == 0) {
    puVar41 = (undefined2 *)plVar17[2];
    *puVar41 = 0;
    puVar41[1] = (short)(1 << (ulong)(uVar16 & 0x1f));
    *(uint *)((long)plVar17 + 0x34) = uVar37;
    if (0 < (int)uVar37) {
      lVar39 = 0;
      do {
        *(char *)(plVar17[3] + lVar39) = (char)lVar39;
        uVar37 = *(uint *)((long)plVar17 + 0x34);
        lVar39 = lVar39 + 1;
      } while (lVar39 < (int)uVar37);
      puVar41 = (undefined2 *)plVar17[2];
    }
    __dest = (void *)plVar17[3];
    uVar16 = uVar37 & 0xffff;
    __ptr = malloc((ulong)uVar16);
    pvVar18 = __dest;
    if (1 < uVar16) {
      uVar42 = 1;
      pvVar9 = __ptr;
      do {
        __ptr = pvVar18;
        pvVar18 = pvVar9;
        if (uVar42 < uVar16) {
          uVar29 = 0;
          uVar38 = 0;
          uVar2 = uVar42;
          do {
            uVar3 = uVar29 + uVar42 * 2;
            if (uVar16 <= uVar3) {
              uVar3 = uVar16;
            }
            uVar25 = uVar2;
            if (uVar29 < uVar2) {
              if (uVar2 < uVar3) {
                do {
                  uVar26 = (ulong)uVar29;
                  bVar13 = *(byte *)((long)__ptr + (long)(int)uVar25);
                  uVar19 = uVar38 & 0xffff;
                  uVar38 = (ulong)((int)uVar38 + 1);
                  if ((ushort)puVar41[*(byte *)((long)__ptr + uVar26)] < (ushort)puVar41[bVar13]) {
                    uVar29 = uVar29 + 1;
                    bVar13 = *(byte *)((long)__ptr + uVar26);
                  }
                  else {
                    uVar25 = uVar25 + 1;
                  }
                  *(byte *)((long)pvVar18 + uVar19) = bVar13;
                } while (((int)uVar29 < (int)uVar2) && ((int)uVar25 < (int)uVar3));
              }
              if ((int)uVar29 < (int)uVar2) {
LAB_00ec04f4:
                uVar26 = (ulong)(int)uVar29;
                lVar39 = (long)(int)uVar2;
                uVar19 = lVar39 - uVar26;
                if (((0x1f < uVar19) &&
                    (((uint)(~uVar26 + lVar39) & 0xffff) <= (~(uint)uVar38 & 0xffff))) &&
                   (~uVar26 + lVar39 >> 0x10 == 0)) {
                  uVar24 = (long)__ptr + uVar26;
                  if (((ulong)((long)__ptr + lVar39) <= (long)pvVar18 + (uVar38 & 0xffff)) ||
                     ((long)pvVar18 + (((uVar38 & 0xffff) + lVar39) - uVar26) <= uVar24)) {
                    uVar36 = uVar19 & 0xffffffffffffffe0;
                    uVar22 = 0;
                    uVar26 = uVar36 + uVar26;
                    uVar35 = (ulong)((uint)uVar38 + (int)uVar36);
                    do {
                      puVar4 = (undefined8 *)(uVar24 + uVar22);
                      uVar43 = *puVar4;
                      uVar45 = puVar4[3];
                      uVar44 = puVar4[2];
                      sVar8 = (short)uVar22;
                      uVar22 = uVar22 + 0x20;
                      puVar1 = (undefined8 *)
                               ((long)pvVar18 + (ulong)(ushort)((short)uVar38 + sVar8));
                      puVar1[1] = puVar4[1];
                      *puVar1 = uVar43;
                      puVar1[3] = uVar45;
                      puVar1[2] = uVar44;
                    } while (uVar36 != uVar22);
                    uVar38 = uVar35;
                    if (uVar19 == uVar36) goto LAB_00ec0594;
                  }
                }
                lVar39 = lVar39 - uVar26;
                puVar21 = (undefined1 *)((long)__ptr + uVar26);
                do {
                  uVar26 = (ulong)((int)uVar38 + 1);
                  lVar39 = lVar39 + -1;
                  *(undefined1 *)((long)pvVar18 + (uVar38 & 0xffff)) = *puVar21;
                  puVar21 = puVar21 + 1;
                  uVar38 = uVar26;
                } while (lVar39 != 0);
              }
            }
            else if (uVar29 < uVar2) goto LAB_00ec04f4;
LAB_00ec0594:
            if ((int)uVar25 < (int)uVar3) {
              uVar26 = (ulong)(int)uVar25;
              uVar24 = (ulong)uVar3;
              uVar19 = uVar24;
              if ((long)uVar24 < (long)(uVar26 + 1)) {
                uVar19 = uVar26 + 1;
              }
              uVar19 = uVar19 - uVar26;
              uVar22 = uVar38;
              if (0x1f < uVar19) {
                uVar35 = uVar24;
                if ((long)uVar24 < (long)(uVar26 + 1)) {
                  uVar35 = uVar26 + 1;
                }
                if ((((uint)(uVar35 + ~uVar26) & 0xffff) <= (~(uint)uVar38 & 0xffff)) &&
                   (uVar35 + ~uVar26 >> 0x10 == 0)) {
                  uVar35 = uVar24;
                  if ((long)uVar24 < (long)(uVar26 + 1)) {
                    uVar35 = uVar26 + 1;
                  }
                  uVar36 = (long)__ptr + uVar26;
                  if (((long)__ptr + uVar35 <= (long)pvVar18 + (uVar38 & 0xffff)) ||
                     ((long)pvVar18 + ((uVar35 + (uVar38 & 0xffff)) - uVar26) <= uVar36)) {
                    uVar34 = uVar19 & 0xffffffffffffffe0;
                    uVar35 = 0;
                    uVar26 = uVar34 + uVar26;
                    uVar22 = (ulong)((uint)uVar38 + (int)uVar34);
                    do {
                      puVar4 = (undefined8 *)(uVar36 + uVar35);
                      uVar43 = *puVar4;
                      uVar45 = puVar4[3];
                      uVar44 = puVar4[2];
                      sVar8 = (short)uVar35;
                      uVar35 = uVar35 + 0x20;
                      puVar1 = (undefined8 *)
                               ((long)pvVar18 + (ulong)(ushort)((short)uVar38 + sVar8));
                      puVar1[1] = puVar4[1];
                      *puVar1 = uVar43;
                      puVar1[3] = uVar45;
                      puVar1[2] = uVar44;
                    } while (uVar34 != uVar35);
                    uVar38 = uVar22;
                    if (uVar19 == uVar34) goto LAB_00ec0480;
                  }
                }
              }
              do {
                puVar21 = (undefined1 *)((long)__ptr + uVar26);
                uVar26 = uVar26 + 1;
                uVar38 = (ulong)((int)uVar22 + 1);
                *(undefined1 *)((long)pvVar18 + (uVar22 & 0xffff)) = *puVar21;
                uVar22 = uVar38;
              } while ((long)uVar26 < (long)uVar24);
            }
LAB_00ec0480:
            uVar29 = (uint)uVar38 & 0xffff;
            uVar2 = uVar42 + uVar29;
          } while (uVar2 < uVar16);
        }
        else {
          uVar38 = 0;
        }
        if (((uint)uVar38 & 0xffff) < (uVar37 & 0xffff)) {
          memcpy((void *)((long)pvVar18 + (uVar38 & 0xffff)),
                 (void *)((long)__ptr + (uVar38 & 0xffff)),
                 ((ulong)(~(uint)uVar38 + uVar37) & 0xffff) + 1);
        }
        uVar42 = (uVar42 & 0x7fff) << 1;
        pvVar9 = __ptr;
      } while (uVar42 < uVar16);
    }
    if ((__ptr == __dest) && (__ptr = pvVar18, (uVar37 & 0xffff) != 0)) {
      memcpy(__dest,pvVar18,(ulong)uVar16);
    }
    free(__ptr);
    if (2 < *(int *)((long)plVar17 + 0x34)) {
      lVar40 = 0;
      lVar39 = 2;
      do {
        lVar31 = plVar17[2];
        lVar20 = 0;
        uVar23 = 0;
        uVar14 = *(ushort *)(lVar31 + 2);
        uVar6 = *(ushort *)(lVar31 + lVar40 * 2 + 4);
        uVar32 = 1;
        uVar27 = 0;
        do {
          uVar7 = *(ushort *)(lVar31 + lVar20 * 2);
          uVar10 = (int)lVar20;
          uVar5 = uVar7;
          if (uVar6 <= uVar7 || uVar7 <= uVar27) {
            uVar10 = uVar23;
            uVar5 = uVar27;
          }
          uVar23 = uVar10;
          uVar10 = (int)lVar20;
          if (uVar7 <= uVar6 || uVar14 <= uVar7) {
            uVar10 = uVar32;
            uVar7 = uVar14;
          }
          uVar14 = uVar7;
          uVar32 = uVar10;
          lVar20 = lVar20 + 1;
          uVar27 = uVar5;
        } while (lVar39 != lVar20);
        lVar39 = lVar39 + 1;
        *(char *)(plVar17[5] + lVar40) = (char)uVar23;
        *(char *)(plVar17[4] + lVar40) = (char)uVar32;
        lVar40 = lVar40 + 1;
      } while (lVar40 < (long)*(int *)((long)plVar17 + 0x34) + -2);
    }
  }
  else {
LAB_00ec03b8:
    floor1_free_info(plVar17);
    plVar17 = (long *)0x0;
  }
  return plVar17;
}

