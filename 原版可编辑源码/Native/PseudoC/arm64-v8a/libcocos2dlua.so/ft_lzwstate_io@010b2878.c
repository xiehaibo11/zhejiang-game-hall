
ulong ft_lzwstate_io(int *param_1,undefined1 *param_2,ulong param_3)

{
  void *__dest;
  uint uVar1;
  undefined1 uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  uint local_64;
  
  uVar16 = param_1[0x12];
  uVar14 = param_1[0x13];
  uVar4 = param_1[0x14];
  if (param_3 == 0) {
    uVar13 = 0;
  }
  else {
    iVar10 = *param_1;
    if (iVar10 == 0) {
      iVar10 = FT_Stream_Seek(*(undefined8 *)(param_1 + 0x32),2);
      if ((iVar10 == 0) &&
         (lVar6 = FT_Stream_TryRead(*(undefined8 *)(param_1 + 0x32),&local_64,1), lVar6 == 1)) {
        uVar5 = local_64 & 0x1f;
        iVar10 = (int)(1L << ((ulong)(byte)local_64 & 0x1f));
        param_1[0xc] = uVar5;
        param_1[0xd] = local_64 & 0x80;
        param_1[0xe] = iVar10 + -0x100;
        if (uVar5 < 0x11) {
          param_1[0xf] = 9;
          param_1[0x10] = (uint)((byte)local_64 >> 7);
          iVar8 = 0x100;
          if (uVar5 < 10) {
            iVar8 = iVar10 + -0xff;
          }
          param_1[0x11] = iVar8;
          uVar4 = FUN_010b2d68(param_1);
          if (uVar4 < 0x100) {
            if (param_2 != (undefined1 *)0x0) {
              *param_2 = (char)uVar4;
            }
            uVar16 = uVar4;
            uVar14 = uVar4;
            if (1 < param_3) {
              uVar4 = 0;
              uVar11 = 1;
              *param_1 = 1;
              goto LAB_010b29e8;
            }
            uVar4 = 0;
            uVar13 = 1;
            goto LAB_010b2ce8;
          }
          uVar4 = 0;
        }
      }
      uVar11 = 0;
LAB_010b2ce0:
      *param_1 = 3;
      uVar13 = uVar11;
    }
    else {
      uVar11 = 0;
      if (iVar10 == 1) goto LAB_010b29e8;
      uVar13 = uVar11;
      if (iVar10 == 2) {
        uVar11 = 0;
        if (param_2 == (undefined1 *)0x0) goto LAB_010b2c58;
LAB_010b28e0:
        do {
          uVar5 = param_1[0x1e];
          if (uVar5 == 0) {
            do {
              uVar5 = param_1[0x10];
              if (uVar5 < (uint)param_1[0xe]) {
                uVar9 = param_1[0x1a];
                uVar13 = (ulong)uVar9;
                if (uVar9 <= uVar5) {
                  uVar1 = 0x200;
                  if (uVar9 != 0) {
                    uVar1 = uVar9 + (uVar9 >> 2);
                  }
                  lVar6 = ft_mem_realloc(*(undefined8 *)(param_1 + 0x34),3,uVar13,(ulong)uVar1,
                                         *(undefined8 *)(param_1 + 0x16),&local_64);
                  *(long *)(param_1 + 0x16) = lVar6;
                    /* try { // try from 010b2cd8 to 011b2cdb has its CatchHandler @ 010b2d0c */
                  if (local_64 != 0) goto LAB_010b2ce0;
                  __dest = (void *)(lVar6 + (ulong)uVar1 * 2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010b2c14 with catch @ 010b2d20
                        */
                  *(void **)(param_1 + 0x18) = __dest;
                  memmove(__dest,(void *)(lVar6 + uVar13 * 2),uVar13);
                  uVar5 = param_1[0x10];
                  param_1[0x1a] = uVar1;
                }
                *(short *)(*(long *)(param_1 + 0x16) + (ulong)uVar5 * 2) = (short)uVar16;
                    /* try { // try from 010b2d44 to 011b2e3f has its CatchHandler @ 010b2d44
                       catch(type#1 @ 00000000) { ... } // from try @ 010b2d44 with catch @ 010b2d44
                       catch(type#1 @ 00000000) { ... } // from try @ 010b2e44 with catch @ 010b2d44
                        */
                *(char *)(*(long *)(param_1 + 0x18) + (ulong)uVar5) = (char)uVar14;
                param_1[0x10] = param_1[0x10] + 1;
              }
              *param_1 = 1;
              uVar16 = uVar4;
LAB_010b29e8:
              uVar5 = FUN_010b2d68(param_1);
              uVar9 = uVar16;
              if ((int)uVar5 < 0) goto LAB_010b2ce0;
              while (uVar16 = uVar9, uVar5 == 0x100) {
                if (param_1[0xd] == 0) {
                  uVar4 = 0x100;
                  goto LAB_010b2a58;
                }
                param_1[0x10] = 0;
                *(undefined1 *)(param_1 + 8) = 1;
                uVar5 = FUN_010b2d68(param_1);
                uVar16 = 0;
                uVar14 = 0;
                uVar9 = 0;
                if ((int)uVar5 < 0) {
                  uVar14 = 0;
                  goto LAB_010b2ce0;
                }
              }
              uVar4 = uVar5;
              if (0xff < uVar5) {
LAB_010b2a58:
                uVar5 = uVar4;
                if ((uint)param_1[0x10] <= uVar4 - 0x100) {
                  if ((uint)param_1[0x10] < uVar4 - 0x100) goto LAB_010b2ce0;
                  uVar5 = param_1[0x1e];
                  uVar13 = *(ulong *)(param_1 + 0x20);
                  if (uVar5 < uVar13) {
                    lVar6 = *(long *)(param_1 + 0x1c);
                  }
                  else {
                    piVar7 = *(int **)(param_1 + 0x1c);
                    uVar15 = uVar13 + (uVar13 >> 1) + 4;
                    if (piVar7 == param_1 + 0x22) {
                      piVar7 = (int *)0x0;
                      uVar13 = 0;
                      param_1[0x1c] = 0;
                      param_1[0x1d] = 0;
                    }
                    if (0x10000 < uVar15) {
                      if (uVar13 == 0x10000) goto LAB_010b2ce0;
                      uVar15 = 0x10000;
                    }
                    lVar6 = ft_mem_realloc(*(undefined8 *)(param_1 + 0x34),1,uVar13,uVar15,piVar7,
                                           &local_64);
                    *(long *)(param_1 + 0x1c) = lVar6;
                    if (local_64 != 0) goto LAB_010b2ce0;
                    uVar5 = param_1[0x1e];
                    *(ulong *)(param_1 + 0x20) = uVar15;
                  }
                  param_1[0x1e] = uVar5 + 1;
                  *(char *)(lVar6 + (ulong)uVar5) = (char)uVar14;
                  uVar5 = uVar16;
                  if (uVar16 < 0x100) goto LAB_010b2bbc;
                }
                lVar6 = *(long *)(param_1 + 0x16);
                do {
                  if (lVar6 == 0) goto LAB_010b2ce0;
                  uVar9 = param_1[0x1e];
                  uVar13 = *(ulong *)(param_1 + 0x20);
                  if (uVar9 < uVar13) {
                    lVar6 = *(long *)(param_1 + 0x1c);
                  }
                  else {
                    piVar7 = *(int **)(param_1 + 0x1c);
                    uVar15 = uVar13 + (uVar13 >> 1) + 4;
                    if (piVar7 == param_1 + 0x22) {
                      piVar7 = (int *)0x0;
                      uVar13 = 0;
                      param_1[0x1c] = 0;
                      param_1[0x1d] = 0;
                    }
                    if (0x10000 < uVar15) {
                      if (uVar13 == 0x10000) goto LAB_010b2ce0;
                      uVar15 = 0x10000;
                    }
                    lVar6 = ft_mem_realloc(*(undefined8 *)(param_1 + 0x34),1,uVar13,uVar15,piVar7,
                                           &local_64);
                    *(long *)(param_1 + 0x1c) = lVar6;
                    if (local_64 != 0) goto LAB_010b2ce0;
                    uVar9 = param_1[0x1e];
                    *(ulong *)(param_1 + 0x20) = uVar15;
                  }
                  uVar2 = *(undefined1 *)(*(long *)(param_1 + 0x18) + (ulong)(uVar5 - 0x100));
                  param_1[0x1e] = uVar9 + 1;
                  *(undefined1 *)(lVar6 + (ulong)uVar9) = uVar2;
                  lVar6 = *(long *)(param_1 + 0x16);
                  uVar3 = *(ushort *)(lVar6 + (ulong)(uVar5 - 0x100) * 2);
                  uVar5 = (uint)uVar3;
                } while (0xff < uVar3);
              }
LAB_010b2bbc:
                    /* try { // try from 010b2bbc to 011b2c13 has its CatchHandler @ 010b2bbc
                       catch(type#1 @ 00000000) { ... } // from try @ 010b2bbc with catch @ 010b2bbc
                       catch(type#1 @ 00000000) { ... } // from try @ 010b2c4c with catch @ 010b2bbc
                       catch(type#1 @ 00000000) { ... } // from try @ 010b2cdc with catch @ 010b2bbc
                        */
              uVar14 = uVar5;
              uVar5 = param_1[0x1e];
              uVar13 = *(ulong *)(param_1 + 0x20);
              if (uVar5 < uVar13) {
                lVar6 = *(long *)(param_1 + 0x1c);
              }
              else {
                plVar12 = (long *)(param_1 + 0x1c);
                piVar7 = (int *)*plVar12;
                uVar15 = uVar13 + (uVar13 >> 1) + 4;
                if (piVar7 == param_1 + 0x22) {
                  piVar7 = (int *)0x0;
                  uVar13 = 0;
                  *plVar12 = 0;
                }
                if (0x10000 < uVar15) {
                    /* try { // try from 010b2c14 to 011b2c1b has its CatchHandler @ 010b2d20 */
                  if (uVar13 == 0x10000) goto LAB_010b2ce0;
                  uVar15 = 0x10000;
                }
                lVar6 = ft_mem_realloc(*(undefined8 *)(param_1 + 0x34),1,uVar13,uVar15,piVar7,
                                       &local_64);
                *plVar12 = lVar6;
                if (local_64 != 0) goto LAB_010b2ce0;
                uVar5 = param_1[0x1e];
                *(ulong *)(param_1 + 0x20) = uVar15;
              }
                    /* try { // try from 010b2c40 to 011b2c4b has its CatchHandler @ 010b2c60 */
              param_1[0x1e] = uVar5 + 1;
                    /* try { // try from 010b2c4c to 011b2cd7 has its CatchHandler @ 010b2bbc */
              *(char *)(lVar6 + (ulong)uVar5) = (char)uVar14;
              *param_1 = 2;
              if (param_2 != (undefined1 *)0x0) goto LAB_010b28e0;
LAB_010b2c58:
              iVar10 = param_1[0x1e];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010b2c40 with catch @ 010b2c60
                        */
              while (iVar10 = iVar10 + -1, iVar10 != -1) {
                uVar11 = uVar11 + 1;
                param_1[0x1e] = iVar10;
                uVar13 = param_3;
                if (param_3 == uVar11) goto LAB_010b2ce8;
              }
            } while( true );
          }
          uVar5 = uVar5 - 1;
          param_1[0x1e] = uVar5;
          param_2[uVar11] = *(undefined1 *)(*(long *)(param_1 + 0x1c) + (ulong)uVar5);
          uVar11 = uVar11 + 1;
          uVar13 = param_3;
        } while (param_3 != uVar11);
      }
    }
  }
LAB_010b2ce8:
  param_1[0x12] = uVar16;
  param_1[0x13] = uVar14;
  param_1[0x14] = uVar4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010b2cd8 with catch @ 010b2d0c
                        */
  return uVar13;
}

