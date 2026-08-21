
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_01074aa4(long *param_1,uint param_2,uint param_3,char param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  byte *pbVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  short sVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  undefined1 uVar15;
  bool bVar16;
  ushort uVar17;
  undefined4 uVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  void *__dest;
  undefined8 uVar23;
  undefined8 uVar24;
  void *__src;
  short sVar25;
  uint uVar26;
  uint uVar27;
  undefined8 *puVar28;
  long lVar29;
  ulong uVar30;
  long *plVar31;
  ulong uVar32;
  int *piVar33;
  long lVar34;
  long *plVar35;
  long lVar36;
  long *plVar37;
  ulong uVar38;
  uint uVar39;
  long lVar40;
  long lVar41;
  uint uVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  ulong local_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  undefined8 local_d0;
  int local_c8;
  undefined1 auStack_c0 [80];
  long *local_70;
  uint local_64;
  
                    /* catch() { ... } // from try @ 01074a9c with catch @ 01074ab0 */
  lVar40 = *param_1;
  lVar41 = param_1[3];
  local_70 = (long *)0x0;
  if ((1 < param_3) && (*(ushort *)(lVar40 + 0x1ea) < param_3)) {
    return 0x15;
  }
  if (*(uint *)(lVar40 + 0x20) <= param_2) {
    return 0x10;
  }
  *(uint *)(param_1 + 5) = param_2;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    uVar24 = *(undefined8 *)(param_1[1] + 0x60);
    uVar22 = *(undefined8 *)(param_1[1] + 0x68);
  }
  else {
    uVar22 = 0x10000;
    uVar24 = 0x10000;
  }
  puVar28 = *(undefined8 **)(*(long *)(lVar40 + 0xf0) + 0x60);
  if (puVar28 == (undefined8 *)0x0) {
    lVar20 = FUN_01074238(lVar40,param_2,param_1 + 7);
    bVar16 = false;
  }
  else {
    uVar18 = (**(code **)*puVar28)(puVar28[1],param_2,&local_d0);
    if (uVar18 != 0) {
      return (ulong)(uint)uVar18;
    }
    *(int *)(param_1 + 7) = local_c8;
    memset(auStack_c0,0,0x50);
    FT_Stream_OpenMemory(auStack_c0,local_d0,(long)local_c8);
    lVar20 = 0;
    param_1[6] = (long)auStack_c0;
    bVar16 = true;
  }
  plVar37 = param_1 + 7;
                    /* try { // try from 01074bbc to 01174c67 has its CatchHandler @ 01074bbc
                       catch(type#1 @ 00000000) { ... } // from try @ 01074bbc with catch @ 01074bbc
                       catch(type#1 @ 00000000) { ... } // from try @ 01074ce0 with catch @ 01074bbc
                        */
  if ((int)*plVar37 < 1) {
    uVar15 = false;
    if ((int)*plVar37 == 0) {
LAB_01074df8:
                    /* try { // try from 01074e00 to 01174e47 has its CatchHandler @ 01074e00
                       catch() { ... } // from try @ 01074e00 with catch @ 01074e00
                       catch() { ... } // from try @ 01074e80 with catch @ 01074e00 */
      param_1[9] = 0;
      param_1[8] = 0;
      param_1[0xb] = 0;
      param_1[10] = 0;
      uVar18 = FUN_01075fc8(param_1,param_2);
      uVar47 = (ulong)(uint)uVar18;
      if ((param_4 == '\0') && (uVar18 == 0)) {
        lVar41 = param_1[0xb] + (long)(int)param_1[0x27];
        param_1[0x28] = 0;
        param_1[0x29] = lVar41;
        lVar20 = *param_1;
        lVar36 = param_1[8] - (long)(int)param_1[0xc];
        param_1[0xe] = lVar36;
        param_1[0xf] = 0;
                    /* try { // try from 01074e48 to 01174e73 has its CatchHandler @ 01074e90 */
        param_1[0x10] = lVar36 + *(int *)((long)param_1 + 100);
        param_1[0x11] = 0;
        param_1[0x2a] = 0;
        param_1[0x2b] = lVar41 - *(int *)((long)param_1 + 0x13c);
        plVar37 = *(long **)(*(long *)(lVar20 + 0xf0) + 0x60);
        if ((plVar37 != (long *)0x0) && (*(code **)(*plVar37 + 0x10) != (code *)0x0)) {
          lStack_108 = 0;
          lStack_f8 = 0;
          local_110 = (long)(int)param_1[0xc];
          local_100 = (long)*(int *)((long)param_1 + 100);
                    /* try { // try from 01074e7c to 01174e7f has its CatchHandler @ 01074ea0 */
                    /* try { // try from 01074e80 to 01174ef7 has its CatchHandler @ 01074e00 */
          iVar19 = (**(code **)(*plVar37 + 0x10))(plVar37[1],param_2,0,&local_110);
          if (iVar19 == 0) {
                    /* catch() { ... } // from try @ 01074e48 with catch @ 01074e90 */
            param_1[0x27] = 0;
            *(int *)(param_1 + 0xc) = (int)(short)local_110;
            *(uint *)((long)param_1 + 100) = (uint)(ushort)local_100;
                    /* catch() { ... } // from try @ 01074e7c with catch @ 01074ea0 */
            if (*(char *)((long)param_1 + 0x6c) == '\0') {
              *(undefined1 *)((long)param_1 + 0x6c) = 1;
              *(uint *)(param_1 + 0xd) = (uint)(ushort)local_100;
            }
          }
          lVar20 = *param_1;
        }
        if (*(char *)(lVar20 + 0x448) != '\0') {
          uVar23 = *(undefined8 *)(lVar20 + 0xb8);
          uVar18 = FUN_010760f4(*(undefined8 *)(lVar20 + 0xc0),*(char *)(lVar20 + 0x448),
                                *(undefined8 *)(lVar20 + 0x450),param_2,&local_70,4);
          uVar47 = (ulong)(uint)uVar18;
          if (uVar18 != 0) goto joined_r0x01074fd0;
          lVar41 = *local_70;
          param_1[0xf] = param_1[0xf] + local_70[1];
          param_1[0xe] = param_1[0xe] + lVar41;
          lVar41 = local_70[2];
          param_1[0x11] = param_1[0x11] + local_70[3];
          param_1[0x10] = param_1[0x10] + lVar41;
          lVar41 = local_70[4];
          param_1[0x29] = param_1[0x29] + local_70[5];
          param_1[0x28] = param_1[0x28] + lVar41;
          lVar41 = local_70[6];
          param_1[0x2b] = param_1[0x2b] + local_70[7];
          param_1[0x2a] = param_1[0x2a] + lVar41;
          ft_mem_free(uVar23);
          local_70 = (long *)0x0;
        }
        if ((*(byte *)(param_1 + 4) & 1) == 0) {
          lVar41 = FT_MulFix(param_1[0xe],uVar24);
          param_1[0xe] = lVar41;
          lVar41 = FT_MulFix(param_1[0x10],uVar24);
          param_1[0x10] = lVar41;
          lVar41 = FT_MulFix(param_1[0x28],uVar24);
          param_1[0x28] = lVar41;
          lVar41 = FT_MulFix(param_1[0x29],uVar22);
          param_1[0x29] = lVar41;
          lVar41 = FT_MulFix(param_1[0x2a],uVar24);
          param_1[0x2a] = lVar41;
                    /* try { // try from 01074f98 to 01174fe3 has its CatchHandler @ 01074f98
                       catch() { ... } // from try @ 01074f98 with catch @ 01074f98
                       catch() { ... } // from try @ 01075008 with catch @ 01074f98 */
          lVar41 = FT_MulFix(param_1[0x2b],uVar22);
          param_1[0x2b] = lVar41;
        }
        uVar47 = 0;
      }
    }
    else {
LAB_01074c40:
      sVar25 = *(short *)((long)param_1 + 0x3c);
      if (sVar25 == 0) goto LAB_01074df8;
      lVar20 = param_1[0xb] + (long)(int)param_1[0x27];
      param_1[0x28] = 0;
      param_1[0x29] = lVar20;
                    /* try { // try from 01074c68 to 01174c6f has its CatchHandler @ 01074d9c */
      lVar36 = param_1[8] - (long)(int)param_1[0xc];
      param_1[0xe] = lVar36;
      param_1[0xf] = 0;
      param_1[0x10] = lVar36 + *(int *)((long)param_1 + 100);
      param_1[0x11] = 0;
      param_1[0x2a] = 0;
      param_1[0x2b] = lVar20 - *(int *)((long)param_1 + 0x13c);
      plVar35 = *(long **)(*(long *)(*param_1 + 0xf0) + 0x60);
      if ((plVar35 != (long *)0x0) && (*(code **)(*plVar35 + 0x10) != (code *)0x0)) {
        lStack_108 = 0;
        lStack_f8 = 0;
        local_110 = (long)(int)param_1[0xc];
        local_100 = (long)*(int *)((long)param_1 + 100);
        iVar19 = (**(code **)(*plVar35 + 0x10))(plVar35[1],param_2,0,&local_110);
        if (iVar19 == 0) {
                    /* try { // try from 01074cc0 to 01174cc3 has its CatchHandler @ 01074d64 */
          param_1[0x27] = 0;
          *(int *)(param_1 + 0xc) = (int)(short)local_110;
          *(uint *)((long)param_1 + 100) = (uint)(ushort)local_100;
          if (*(char *)((long)param_1 + 0x6c) == '\0') {
                    /* try { // try from 01074cd0 to 01174cdf has its CatchHandler @ 01074d68 */
            *(undefined1 *)((long)param_1 + 0x6c) = 1;
            *(uint *)(param_1 + 0xd) = (uint)(ushort)local_100;
          }
        }
        sVar25 = *(short *)((long)param_1 + 0x3c);
      }
                    /* try { // try from 01074ce0 to 01174dd7 has its CatchHandler @ 01074bbc */
      puVar14 = (ulong *)(param_1 + 0xe);
      plVar35 = param_1 + 0x10;
      plVar3 = param_1 + 0x28;
      plVar4 = param_1 + 0x2a;
      if (sVar25 < 1) {
        if (sVar25 == -1) {
                    /* try { // try from 01074fe4 to 01175007 has its CatchHandler @ 01075020 */
          uVar9 = *(ushort *)(lVar41 + 0x1a);
          sVar25 = *(short *)(lVar41 + 0x18);
          uVar18 = (**(code **)(lVar40 + 0x358))(param_1);
          uVar47 = (ulong)(uint)uVar18;
          if (uVar18 == 0) {
            lVar20 = param_1[0x25];
            (**(code **)(lVar40 + 0x340))(param_1);
            if (*(char *)(lVar40 + 0x448) != '\0') {
              uVar23 = *(undefined8 *)(lVar40 + 0xb8);
              uVar18 = FUN_010760f4(*(undefined8 *)(lVar40 + 0xc0),*(char *)(lVar40 + 0x448),
                                    *(undefined8 *)(lVar40 + 0x450),param_2,&local_70,
                                    *(int *)(lVar41 + 0x98) + 4);
              uVar47 = (ulong)(uint)uVar18;
              if (uVar18 != 0) goto joined_r0x010759c4;
              uVar27 = *(uint *)(lVar41 + 0x98);
              uVar47 = (ulong)uVar27;
              if ((int)uVar27 < 1) {
                uVar27 = 0;
              }
              else {
                piVar33 = (int *)(*(long *)(lVar41 + 0xa0) + (ulong)*(uint *)(lVar41 + 0x50) * 0x30
                                 + 0xc);
                lVar36 = 8;
                do {
                  if ((*(byte *)(piVar33 + -2) >> 1 & 1) != 0) {
                    piVar33[-1] = (int)((short *)((long)local_70 + lVar36))[-4] + piVar33[-1];
                    *piVar33 = (int)*(short *)((long)local_70 + lVar36) + *piVar33;
                  }
                  lVar36 = lVar36 + 0x10;
                  uVar47 = uVar47 - 1;
                  piVar33 = piVar33 + 0xc;
                } while (uVar47 != 0);
              }
              plVar31 = local_70 + (long)(int)uVar27 * 2;
              lVar36 = *plVar31;
              param_1[0xf] = param_1[0xf] + plVar31[1];
              *puVar14 = *puVar14 + lVar36;
              lVar36 = plVar31[2];
              param_1[0x11] = param_1[0x11] + plVar31[3];
              *plVar35 = *plVar35 + lVar36;
              lVar36 = plVar31[4];
              param_1[0x29] = param_1[0x29] + plVar31[5];
              *plVar3 = *plVar3 + lVar36;
              lVar36 = plVar31[6];
              param_1[0x2b] = param_1[0x2b] + plVar31[7];
              *plVar4 = *plVar4 + lVar36;
              ft_mem_free(uVar23);
              local_70 = (long *)0x0;
            }
            uVar27 = (uint)param_1[4];
            if ((param_1[4] & 1U) == 0) {
              lVar36 = FT_MulFix(param_1[0xe],uVar24);
              param_1[0xe] = lVar36;
              lVar36 = FT_MulFix(param_1[0x10],uVar24);
              param_1[0x10] = lVar36;
              lVar36 = FT_MulFix(param_1[0x28],uVar24);
              param_1[0x28] = lVar36;
              lVar36 = FT_MulFix(param_1[0x29],uVar22);
              param_1[0x29] = lVar36;
              lVar36 = FT_MulFix(param_1[0x2a],uVar24);
              param_1[0x2a] = lVar36;
              lVar36 = FT_MulFix(param_1[0x2b],uVar22);
              uVar27 = (uint)param_1[4];
              param_1[0x2b] = lVar36;
            }
            if ((uVar27 >> 10 & 1) != 0) {
              FT_GlyphLoader_Add(lVar41);
              uVar47 = 0;
              *(undefined4 *)(param_1[2] + 0x90) = 0x636f6d70;
              goto joined_r0x010759c4;
            }
            uVar27 = *(uint *)(lVar41 + 0x50);
            uVar42 = *(uint *)(lVar41 + 0x98);
            lVar44 = param_1[6];
            lVar36 = param_1[7];
            FT_GlyphLoader_Add(lVar41);
            if (uVar42 == 0) {
                    /* try { // try from 01075684 to 011756cb has its CatchHandler @ 01075684
                       catch() { ... } // from try @ 01075684 with catch @ 01075684
                       catch() { ... } // from try @ 01075704 with catch @ 01075684 */
              lVar29 = 0;
              uVar17 = uVar9;
            }
            else {
              uVar21 = 0;
              do {
                lStack_108 = param_1[0xf];
                local_110 = *puVar14;
                lStack_f8 = param_1[0x11];
                local_100 = *plVar35;
                lStack_e8 = param_1[0x29];
                local_f0 = *plVar3;
                lStack_d8 = param_1[0x2b];
                local_e0 = *plVar4;
                uVar10 = *(ushort *)(lVar41 + 0x1a);
                uVar30 = (ulong)(short)uVar10;
                uVar18 = FUN_01074aa4(param_1,*(undefined4 *)
                                               (*(long *)(lVar41 + 0x58) + (ulong)uVar27 * 0x30 +
                                               uVar21 * 0x30),param_3 + 1,0);
                uVar47 = (ulong)(uint)uVar18;
                if (uVar18 != 0) goto joined_r0x010759c4;
                    /* try { // try from 01075304 to 0117532f has its CatchHandler @ 01075304
                       catch() { ... } // from try @ 01075304 with catch @ 01075304
                       catch() { ... } // from try @ 01075334 with catch @ 01075304 */
                lVar29 = *(long *)(lVar41 + 0x58) + (ulong)uVar27 * 0x30 + uVar21 * 0x30;
                if ((*(byte *)(lVar29 + 5) >> 1 & 1) == 0) {
                  param_1[0xf] = lStack_108;
                  *puVar14 = local_110;
                  param_1[0x11] = lStack_f8;
                  *plVar35 = local_100;
                    /* try { // try from 01075330 to 01175333 has its CatchHandler @ 01075344 */
                    /* try { // try from 01075334 to 01175357 has its CatchHandler @ 01075304 */
                  param_1[0x29] = lStack_e8;
                  *plVar3 = local_f0;
                    /* catch() { ... } // from try @ 01075330 with catch @ 01075344 */
                  param_1[0x2b] = lStack_d8;
                  *plVar4 = local_e0;
                }
                uVar17 = *(ushort *)(lVar41 + 0x1a);
                if (uVar17 != uVar10) {
                  lVar46 = param_1[3];
                  uVar8 = *(ushort *)(lVar29 + 4);
                  uVar26 = (uint)uVar8;
                  lVar45 = *(long *)(lVar46 + 0x20);
                  uVar12 = (uint)(short)*(ushort *)(lVar46 + 0x1a);
                  if ((uVar10 < *(ushort *)(lVar46 + 0x1a)) && ((uVar8 & 200) != 0)) {
                    lVar43 = uVar12 - uVar30;
                    lVar34 = lVar45 + (uVar30 & 0xffffffff) * 0x10;
                    do {
                      FT_Vector_Transform(lVar34,lVar29 + 0x10);
                      lVar43 = lVar43 + -1;
                      lVar34 = lVar34 + 0x10;
                    } while (lVar43 != 0);
                    uVar26 = (uint)*(ushort *)(lVar29 + 4);
                  }
                  iVar19 = *(int *)(lVar29 + 8);
                  uVar47 = (ulong)iVar19;
                  uVar39 = (uint)(short)uVar10;
                  if ((uVar26 >> 1 & 1) == 0) {
                    uVar26 = iVar19 + (short)uVar9;
                    if ((uVar39 <= uVar26) ||
                       (uVar5 = *(int *)(lVar29 + 0xc) + uVar39, uVar12 <= uVar5)) {
                      uVar47 = 0x15;
                      goto joined_r0x010759c4;
                    }
                    plVar31 = (long *)(*(long *)(lVar46 + 0x20) + (ulong)uVar26 * 0x10);
                    plVar1 = (long *)(*(long *)(lVar46 + 0x20) + (ulong)uVar5 * 0x10);
                    uVar47 = *plVar31 - *plVar1;
                    uVar32 = plVar31[1] - plVar1[1];
                    if (uVar47 != 0 || uVar32 != 0) goto LAB_0107552c;
                  }
                  else {
                    uVar32 = (ulong)*(int *)(lVar29 + 0xc);
                    /* try { // try from 01075440 to 011754eb has its CatchHandler @ 01075440
                       catch(type#1 @ 00000000) { ... } // from try @ 01075440 with catch @ 01075440
                       catch(type#1 @ 00000000) { ... } // from try @ 01075564 with catch @ 01075440
                        */
                    if (*(int *)(lVar29 + 0xc) != 0 || iVar19 != 0) {
                      if (((uVar8 & 200) == 0) || ((uVar26 >> 0xb & 1) == 0)) {
                        bVar7 = *(byte *)(param_1 + 4);
                      }
                      else {
                        uVar24 = FT_Hypot(*(undefined8 *)(lVar29 + 0x10),
                                          *(undefined8 *)(lVar29 + 0x18));
                        uVar22 = FT_Hypot(*(undefined8 *)(lVar29 + 0x28),
                                          *(undefined8 *)(lVar29 + 0x20));
                        uVar47 = FT_MulFix(uVar47,uVar24);
                        uVar32 = FT_MulFix(uVar32,uVar22);
                        bVar7 = *(byte *)(param_1 + 4);
                      }
                      if ((bVar7 & 1) == 0) {
                        uVar24 = *(undefined8 *)(param_1[1] + 0x68);
                        uVar47 = FT_MulFix(uVar47,*(undefined8 *)(param_1[1] + 0x60));
                        uVar32 = FT_MulFix(uVar32,uVar24);
                        if ((*(byte *)(lVar29 + 4) >> 2 & 1) != 0) {
                    /* try { // try from 010754ec to 011754f3 has its CatchHandler @ 01075620 */
                          uVar47 = uVar47 + 0x20 & 0xffffffffffffffc0;
                          uVar32 = uVar32 + 0x20 & 0xffffffffffffffc0;
                        }
                        if (uVar47 != 0 || uVar32 != 0) {
LAB_0107552c:
                          uVar12 = uVar12 - uVar39;
                          if ((uVar12 != 0) && (uVar47 != 0)) {
                            if (uVar12 < 2) {
                    /* try { // try from 01075544 to 01175547 has its CatchHandler @ 010755e8 */
                              lVar46 = 0;
                            }
                            else {
                              lVar46 = (ulong)uVar12 - (ulong)(uVar12 & 1);
                    /* try { // try from 01075554 to 01175563 has its CatchHandler @ 010755ec */
                              if (lVar46 != 0) {
                                plVar31 = (long *)(lVar45 + uVar30 * 0x10 + 0x10);
                                lVar34 = lVar46;
                                do {
                    /* try { // try from 01075564 to 0117565b has its CatchHandler @ 01075440 */
                                  lVar34 = lVar34 + -2;
                                  plVar31[-2] = plVar31[-2] + uVar47;
                                  *plVar31 = *plVar31 + uVar47;
                                  plVar31 = plVar31 + 4;
                                } while (lVar34 != 0);
                                if ((uVar12 & 1) == 0) goto LAB_010755a8;
                              }
                            }
                            lVar34 = (ulong)uVar12 - lVar46;
                            plVar31 = (long *)(lVar45 + (lVar46 + uVar30) * 0x10);
                            do {
                              lVar34 = lVar34 + -1;
                              *plVar31 = *plVar31 + uVar47;
                              plVar31 = plVar31 + 2;
                            } while (lVar34 != 0);
                          }
LAB_010755a8:
                          if ((uVar12 != 0) && (uVar32 != 0)) {
                            if (uVar12 < 2) {
                              lVar46 = 0;
                            }
                            else {
                              lVar46 = (ulong)uVar12 - (ulong)(uVar12 & 1);
                              if (lVar46 != 0) {
                                plVar31 = (long *)(lVar45 + uVar30 * 0x10 + 0x18);
                                lVar34 = lVar46;
                                do {
                                  lVar34 = lVar34 + -2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01075544 with catch @ 010755e8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01075554 with catch @ 010755ec
                        */
                                  plVar31[-2] = plVar31[-2] + uVar32;
                                  *plVar31 = *plVar31 + uVar32;
                                  plVar31 = plVar31 + 4;
                                } while (lVar34 != 0);
                                if ((uVar12 & 1) == 0) goto LAB_01075630;
                              }
                            }
                            lVar34 = (ulong)uVar12 - lVar46;
                            plVar31 = (long *)(lVar45 + (lVar46 * 2 + uVar30 * 2) * 8 + 8);
                            do {
                              lVar34 = lVar34 + -1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010754ec with catch @ 01075620
                        */
                              *plVar31 = *plVar31 + uVar32;
                              plVar31 = plVar31 + 2;
                            } while (lVar34 != 0);
                          }
                        }
                      }
                      else if (uVar47 != 0 || uVar32 != 0) goto LAB_0107552c;
                    }
                  }
                }
LAB_01075630:
                uVar21 = uVar21 + 1;
              } while (uVar21 < uVar42);
            }
            param_1[6] = lVar44;
            *(int *)(param_1 + 7) = (int)lVar36;
            param_1[0x25] = lVar20;
            if ((*(byte *)(param_1 + 4) >> 1 & 1) == 0) {
              uVar47 = 0;
              if ((uVar17 <= uVar9) || ((*(ushort *)(lVar29 + 4) >> 8 & 1) == 0))
              goto joined_r0x010759c4;
              lVar41 = param_1[3];
              sVar11 = *(short *)(lVar41 + 0x1a);
              iVar19 = sVar11 + 4;
                    /* try { // try from 010756cc to 011756f7 has its CatchHandler @ 01075714 */
              if ((iVar19 != 0) &&
                 ((ulong)*(uint *)(lVar41 + 8) <
                  (ulong)((long)*(short *)(lVar41 + 0x62) + (long)(iVar19 + sVar11)))) {
                local_64 = FT_GlyphLoader_CheckPoints(lVar41,iVar19,0);
                uVar47 = (ulong)local_64;
                if (local_64 != 0) goto joined_r0x010759c4;
                sVar11 = *(short *)(lVar41 + 0x1a);
              }
              local_64 = 0;
              uVar47 = *puVar14;
              puVar14 = (ulong *)(*(long *)(lVar41 + 0x20) + (long)sVar11 * 0x10);
              puVar14[1] = param_1[0xf];
              *puVar14 = uVar47;
              lVar36 = *plVar35;
              lVar20 = *(long *)(lVar41 + 0x20) + (long)*(short *)(lVar41 + 0x1a) * 0x10;
                    /* try { // try from 010758f0 to 011758f7 has its CatchHandler @ 01075968 */
              *(long *)(lVar20 + 0x18) = param_1[0x11];
              *(long *)(lVar20 + 0x10) = lVar36;
              lVar36 = *plVar3;
              lVar20 = *(long *)(lVar41 + 0x20) + (long)*(short *)(lVar41 + 0x1a) * 0x10;
              *(long *)(lVar20 + 0x28) = param_1[0x29];
              *(long *)(lVar20 + 0x20) = lVar36;
                    /* try { // try from 01075914 to 0117593b has its CatchHandler @ 01075950 */
              lVar36 = *plVar4;
              lVar20 = *(long *)(lVar41 + 0x20) + (long)*(short *)(lVar41 + 0x1a) * 0x10;
              *(long *)(lVar20 + 0x38) = param_1[0x2b];
              *(long *)(lVar20 + 0x30) = lVar36;
              *(undefined1 *)(*(long *)(lVar41 + 0x28) + (long)*(short *)(lVar41 + 0x1a)) = 0;
              *(undefined1 *)(*(long *)(lVar41 + 0x28) + (long)*(short *)(lVar41 + 0x1a) + 1) = 0;
                    /* try { // try from 0107593c to 0117597b has its CatchHandler @ 010758bc */
              *(undefined1 *)(*(long *)(lVar41 + 0x28) + (long)*(short *)(lVar41 + 0x1a) + 2) = 0;
                    /* catch() { ... } // from try @ 01075914 with catch @ 01075950 */
              *(undefined1 *)(*(long *)(lVar41 + 0x28) + (long)*(short *)(lVar41 + 0x1a) + 3) = 0;
              lVar41 = param_1[6];
                    /* catch() { ... } // from try @ 010758f0 with catch @ 01075968 */
              local_64 = FT_Stream_Seek(lVar41,param_1[0x25]);
              uVar47 = (ulong)local_64;
              if (local_64 != 0) goto joined_r0x010759c4;
                    /* try { // try from 0107597c to 011759cf has its CatchHandler @ 0107597c
                       catch() { ... } // from try @ 0107597c with catch @ 0107597c
                       catch() { ... } // from try @ 010759fc with catch @ 0107597c */
              uVar17 = FT_Stream_ReadUShort(lVar41,&local_64);
              uVar47 = (ulong)local_64;
              if (local_64 != 0) goto joined_r0x010759c4;
              if (*(ushort *)(*param_1 + 0x1e6) < uVar17) {
                if ((int)*plVar37 < (int)(uint)uVar17) {
                  uVar47 = 0x16;
                  goto joined_r0x010759c4;
                }
                lVar20 = param_1[0x23];
                uVar21 = (ulong)(uint)uVar17;
                uVar27 = *(uint *)(lVar20 + 0x2b0);
                if (uVar27 < uVar21) {
                    /* try { // try from 010759fc to 01175a27 has its CatchHandler @ 0107597c */
                  uVar24 = ft_mem_realloc(*(undefined8 *)(lVar20 + 0x10),1,(ulong)uVar27,uVar21,
                                          *(undefined8 *)(lVar20 + 0x2b8),&local_110);
                    /* catch() { ... } // from try @ 010759d0 with catch @ 01075a0c */
                  *(undefined8 *)(lVar20 + 0x2b8) = uVar24;
                  uVar47 = local_110 & 0xffffffff;
                  lVar20 = param_1[0x23];
                  uVar42 = (uint)uVar17;
                  if ((int)local_110 != 0) {
                    uVar42 = uVar27;
                  }
                }
                else {
                  uVar47 = 0;
                  uVar42 = uVar27;
                }
                local_64 = (uint)uVar47;
                *(uint *)(lVar20 + 0x2b0) = uVar42 & 0xffff;
                if (local_64 != 0) goto joined_r0x010759c4;
              }
              else {
                if (uVar17 == 0) goto LAB_010758b0;
                    /* try { // try from 010759d0 to 011759fb has its CatchHandler @ 01075a0c */
                lVar20 = param_1[0x23];
                uVar21 = (ulong)uVar17;
              }
              local_64 = FT_Stream_Read(lVar41,*(undefined8 *)(lVar20 + 0x2b8),uVar21);
              uVar47 = (ulong)local_64;
              if (local_64 == 0) {
                lVar41 = param_1[2];
                *(undefined8 *)(lVar41 + 0x100) = *(undefined8 *)(param_1[0x23] + 0x2b8);
                *(ulong *)(lVar41 + 0x108) = uVar21;
                lVar41 = param_1[3];
                lVar20 = (long)(short)uVar9 * 0x10;
                uVar27 = (uint)*(ushort *)(lVar41 + 0x1a) - (int)(short)uVar9;
                uVar17 = (ushort)uVar27;
                *(ushort *)((long)param_1 + 0xe4) = uVar17;
                *(short *)((long)param_1 + 0xe6) = *(short *)(lVar41 + 0x18) - sVar25;
                param_1[0x1d] = *(long *)(lVar41 + 0x40) + lVar20;
                param_1[0x1e] = *(long *)(lVar41 + 0x20) + lVar20;
                param_1[0x1f] = *(long *)(lVar41 + 0x48) + lVar20;
                pbVar6 = (byte *)(*(long *)(lVar41 + 0x28) + (long)(short)uVar9);
                param_1[0x20] = (long)pbVar6;
                lVar41 = *(long *)(lVar41 + 0x30);
                *(ushort *)(param_1 + 0x22) = uVar9;
                param_1[0x21] = lVar41 + (ulong)(uint)(int)sVar25 * 2;
                if ((uVar27 & 0xffff) != 0) {
                    /* try { // try from 01075ae4 to 01175b43 has its CatchHandler @ 01075ae4
                       catch(type#1 @ 00000000) { ... } // from try @ 01075ae4 with catch @ 01075ae4
                       catch(type#1 @ 00000000) { ... } // from try @ 01075c1c with catch @ 01075ae4
                        */
                  *pbVar6 = *pbVar6 & 0xe7;
                  uVar17 = *(ushort *)((long)param_1 + 0xe4);
                  if (1 < uVar17) {
                    uVar47 = 1;
                    do {
                      uVar27 = (int)uVar47 + 1;
                      *(byte *)(param_1[0x20] + uVar47) = *(byte *)(param_1[0x20] + uVar47) & 0xe7;
                      uVar17 = *(ushort *)((long)param_1 + 0xe4);
                      uVar47 = (ulong)uVar27;
                    } while (uVar27 < uVar17);
                  }
                }
                *(ushort *)((long)param_1 + 0xe4) = uVar17 + 4;
                uVar47 = FUN_01076670(param_1,1);
                uVar47 = uVar47 & 0xffffffff;
              }
              goto joined_r0x010759c4;
            }
            goto LAB_010758b0;
          }
        }
        else {
          uVar47 = 0x14;
        }
      }
      else {
        uVar18 = (**(code **)(lVar40 + 0x350))(param_1);
        uVar47 = (ulong)(uint)uVar18;
        if (uVar18 == 0) {
          (**(code **)(lVar40 + 0x340))(param_1);
          lVar45 = param_1[3];
          sVar25 = *(short *)(lVar45 + 0x62);
          lVar46 = (long)sVar25;
          uVar47 = *puVar14;
          lVar20 = lVar46 + 1;
          lVar36 = lVar46 + 2;
          puVar13 = (ulong *)(*(long *)(lVar45 + 0x68) + lVar46 * 0x10);
          puVar13[1] = param_1[0xf];
          *puVar13 = uVar47;
          uVar21 = lVar46 + 4;
          lVar44 = *plVar35;
          plVar37 = (long *)(*(long *)(lVar45 + 0x68) + lVar20 * 0x10);
          plVar37[1] = param_1[0x11];
          *plVar37 = lVar44;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01074cc0 with catch @ 01074d64
                        */
          lVar44 = *plVar3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01074cd0 with catch @ 01074d68
                        */
          plVar37 = (long *)(*(long *)(lVar45 + 0x68) + lVar36 * 0x10);
          plVar37[1] = param_1[0x29];
          *plVar37 = lVar44;
          lVar29 = *plVar4;
          lVar44 = lVar46 + 3;
          plVar37 = (long *)(*(long *)(lVar45 + 0x68) + lVar44 * 0x10);
          plVar37[1] = param_1[0x2b];
          *plVar37 = lVar29;
          *(undefined1 *)(*(long *)(lVar45 + 0x70) + lVar46) = 0;
          *(undefined1 *)(*(long *)(lVar45 + 0x70) + lVar20) = 0;
          *(undefined1 *)(*(long *)(lVar45 + 0x70) + lVar36) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01074c68 with catch @ 01074d9c
                        */
          *(undefined1 *)(*(long *)(lVar45 + 0x70) + lVar44) = 0;
          lVar29 = *param_1;
          if (*(char *)(lVar29 + 0x448) != '\0') {
            uVar24 = *(undefined8 *)(lVar29 + 0xb8);
            uVar18 = FUN_010760f4(*(undefined8 *)(lVar29 + 0xc0),*(char *)(lVar29 + 0x448),
                                  *(undefined8 *)(lVar29 + 0x450),(int)param_1[5],&local_110,
                                  uVar21 & 0xffffffff);
            uVar47 = (ulong)(uint)uVar18;
            if (uVar18 != 0) goto joined_r0x010759c4;
            if (-4 < sVar25) {
              uVar30 = *(ulong *)(lVar45 + 0x68);
              uVar47 = uVar21;
              if ((long)uVar21 < 2) {
                uVar47 = 1;
              }
              if (uVar47 < 4) {
                uVar32 = 0;
              }
              else {
                uVar32 = uVar47 & 0x7ffffffffffffffc;
                if (uVar32 != 0) {
                  uVar38 = uVar21;
                  if ((long)uVar21 < 2) {
                    uVar38 = 1;
                  }
                  if ((uVar30 < local_110 + uVar38 * 0x10) && (local_110 < uVar30 + uVar38 * 0x10))
                  {
                    uVar32 = 0;
                  }
                  else {
                    /* try { // try from 01075700 to 01175703 has its CatchHandler @ 01075724 */
                    /* try { // try from 01075704 to 0117577b has its CatchHandler @ 01075684 */
                    plVar37 = (long *)(uVar30 + 0x20);
                    plVar31 = (long *)(local_110 + 0x20);
                    uVar38 = uVar32;
                    do {
                      lVar29 = plVar31[-3];
                      lVar43 = plVar31[-1];
                      lVar34 = plVar31[-2];
                    /* catch() { ... } // from try @ 010756cc with catch @ 01075714 */
                      lVar49 = plVar31[1];
                      lVar48 = *plVar31;
                      lVar51 = plVar31[3];
                      lVar50 = plVar31[2];
                    /* catch() { ... } // from try @ 01075700 with catch @ 01075724 */
                      uVar38 = uVar38 - 4;
                      plVar37[-4] = plVar37[-4] + plVar31[-4];
                      plVar37[-3] = plVar37[-3] + lVar29;
                      plVar37[-2] = plVar37[-2] + lVar34;
                      plVar37[-1] = plVar37[-1] + lVar43;
                      *plVar37 = *plVar37 + lVar48;
                      plVar37[1] = plVar37[1] + lVar49;
                      plVar37[2] = plVar37[2] + lVar50;
                      plVar37[3] = plVar37[3] + lVar51;
                      plVar37 = plVar37 + 8;
                      plVar31 = plVar31 + 8;
                    } while (uVar38 != 0);
                    if (uVar47 == uVar32) goto LAB_01075780;
                  }
                }
              }
              do {
                lVar29 = uVar32 * 0x10;
                lVar34 = *(long *)(local_110 + lVar29);
                lVar43 = *(long *)(uVar30 + lVar29);
                uVar32 = uVar32 + 1;
                ((long *)(uVar30 + lVar29))[1] =
                     ((long *)(uVar30 + lVar29))[1] + ((long *)(local_110 + lVar29))[1];
                *(long *)(uVar30 + lVar29) = lVar43 + lVar34;
              } while ((long)uVar32 < (long)uVar21);
            }
LAB_01075780:
            ft_mem_free(uVar24,local_110);
          }
          uVar47 = param_1[4];
          uVar27 = (uint)uVar47;
          if ((uVar27 >> 1 & 1) == 0) {
            uVar9 = *(ushort *)(lVar45 + 0x62);
            *(ushort *)((long)param_1 + 0xe4) = uVar9;
            *(undefined2 *)((long)param_1 + 0xe6) = *(undefined2 *)(lVar45 + 0x60);
            param_1[0x1d] = *(long *)(lVar45 + 0x88);
            __src = *(void **)(lVar45 + 0x68);
            param_1[0x1e] = (long)__src;
            __dest = *(void **)(lVar45 + 0x90);
            param_1[0x1f] = (long)__dest;
            lVar34 = *(long *)(lVar45 + 0x78);
            lVar29 = *(long *)(lVar45 + 0x70);
            *(undefined2 *)(param_1 + 0x22) = 0;
            param_1[0x21] = lVar34;
            param_1[0x20] = lVar29;
            memcpy(__dest,__src,(ulong)uVar9 * 0x10 + 0x40);
            uVar47 = param_1[4];
            uVar27 = (uint)uVar47;
          }
          if ((uVar47 & 1) == 0) {
            puVar28 = *(undefined8 **)(lVar45 + 0x68);
            if (-4 < sVar25) {
              puVar2 = puVar28 + (long)(int)uVar21 * 2;
              uVar24 = *(undefined8 *)(param_1[1] + 0x60);
              uVar22 = *(undefined8 *)(param_1[1] + 0x68);
              do {
                uVar23 = FT_MulFix(*puVar28,uVar24);
                *puVar28 = uVar23;
                uVar23 = FT_MulFix(puVar28[1],uVar22);
                puVar28[1] = uVar23;
                puVar28 = puVar28 + 2;
              } while (puVar28 < puVar2);
              puVar28 = *(undefined8 **)(lVar45 + 0x68);
              uVar27 = (uint)param_1[4];
            }
            uVar47 = puVar28[lVar46 * 2];
            param_1[0xf] = (puVar28 + lVar46 * 2)[1];
            *puVar14 = uVar47;
            plVar37 = (long *)(*(long *)(lVar45 + 0x68) + lVar20 * 0x10);
            lVar20 = *plVar37;
            param_1[0x11] = plVar37[1];
            *plVar35 = lVar20;
            plVar37 = (long *)(*(long *)(lVar45 + 0x68) + lVar36 * 0x10);
            lVar20 = *plVar37;
            param_1[0x29] = plVar37[1];
            *plVar3 = lVar20;
            plVar37 = (long *)(*(long *)(lVar45 + 0x68) + lVar44 * 0x10);
            lVar20 = *plVar37;
            param_1[0x2b] = plVar37[1];
            *plVar4 = lVar20;
          }
          if ((uVar27 >> 1 & 1) == 0) {
            *(short *)((long)param_1 + 0xe4) = *(short *)((long)param_1 + 0xe4) + 4;
            uVar18 = FUN_01076670(param_1,0);
            uVar47 = (ulong)(uint)uVar18;
            if (uVar18 != 0) goto joined_r0x010759c4;
          }
          FT_GlyphLoader_Add(lVar41);
LAB_010758b0:
          uVar47 = 0;
          goto joined_r0x010759c4;
        }
      }
    }
joined_r0x01074fd0:
    if (!(bool)uVar15) goto joined_r0x010759c4;
  }
  else {
    if ((param_1[0x12] == 0) && (*(long *)(*(long *)(lVar40 + 0xf0) + 0x60) == 0)) {
      uVar47 = 8;
      goto joined_r0x010759c4;
    }
    uVar18 = (**(code **)(lVar40 + 0x338))(param_1,param_2,param_1[0x12] + lVar20);
    uVar47 = (ulong)(uint)uVar18;
    if (uVar18 != 0) goto joined_r0x010759c4;
    uVar18 = (**(code **)(lVar40 + 0x348))(param_1);
    uVar47 = (ulong)(uint)uVar18;
    if (uVar18 == 0) {
      uVar18 = FUN_01075fc8(param_1,param_2);
      uVar47 = (ulong)(uint)uVar18;
      if ((param_4 == '\0') && (uVar18 == 0)) {
        uVar15 = true;
        if ((int)*plVar37 != 0) goto LAB_01074c40;
        goto LAB_01074df8;
      }
    }
  }
  (**(code **)(lVar40 + 0x340))(param_1);
joined_r0x010759c4:
  if (bVar16) {
                    /* catch() { ... } // from try @ 01074fe4 with catch @ 01075020 */
    plVar37 = *(long **)(*(long *)(lVar40 + 0xf0) + 0x60);
    (**(code **)(*plVar37 + 8))(plVar37[1],&local_d0);
  }
  return uVar47;
}

