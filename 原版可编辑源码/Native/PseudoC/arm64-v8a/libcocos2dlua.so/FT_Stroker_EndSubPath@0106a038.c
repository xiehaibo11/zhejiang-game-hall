
ulong FT_Stroker_EndSubPath(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint uVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  uint uVar20;
  undefined8 uVar21;
  ulong local_50 [2];
  
  if (param_1 == (undefined8 *)0x0) {
                    /* try { // try from 0106a11c to 0116a137 has its CatchHandler @ 0106a308 */
    uVar6 = 6;
  }
  else if (*(char *)((long)param_1 + 0x29) == '\0') {
                    /* try { // try from 0106a138 to 0116a2b7 has its CatchHandler @ 01069df0 */
    if (((param_1[2] == param_1[7]) && (param_1[3] == param_1[8])) ||
       (uVar6 = FT_Stroker_LineTo(param_1), (int)uVar6 == 0)) {
      param_1[1] = param_1[6];
      uVar9 = FT_Angle_Diff(*param_1);
      if ((uVar9 == 0) ||
         ((uVar6 = FUN_0106a9d4(param_1,uVar9 >> 0x3f,param_1[9]), (int)uVar6 == 0 &&
          (uVar6 = FUN_0106ac80(param_1,(uint)(uVar9 >> 0x3f) ^ 1,param_1[9]), (int)uVar6 == 0)))) {
        uVar12 = *(uint *)((long)param_1 + 0x8c);
        uVar6 = (ulong)uVar12;
        uVar14 = *(uint *)(param_1 + 0xe);
        if (uVar12 + 1 < uVar14) {
          *(uint *)(param_1 + 0xe) = uVar14 - 1;
          puVar16 = (undefined8 *)(param_1[0xf] + (ulong)(uVar14 - 1) * 0x10);
          uVar19 = *puVar16;
          puVar13 = (undefined8 *)(param_1[0xf] + uVar6 * 0x10);
          puVar13[1] = puVar16[1];
          *puVar13 = uVar19;
          *(byte *)(param_1[0x10] + uVar6) = *(byte *)(param_1[0x10] + uVar6) | 4;
          *(byte *)(param_1[0x10] + (ulong)(uVar14 - 2)) =
               *(byte *)(param_1[0x10] + (ulong)(uVar14 - 2)) | 8;
        }
        else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01069ff4 with catch @ 0106a2d0
                        */
          *(uint *)(param_1 + 0xe) = uVar12;
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01069ef4 with catch @ 0106a2d4
                        */
        uVar12 = *(uint *)((long)param_1 + 0xbc);
        uVar6 = (ulong)uVar12;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106a0a8 with catch @ 0106a2d8
                       catch(type#1 @ 00000000) { ... } // from try @ 0106a2c8 with catch @ 0106a2d8
                        */
        uVar14 = *(uint *)(param_1 + 0x14);
        *(undefined4 *)((long)param_1 + 0x8c) = 0xffffffff;
        *(undefined1 *)(param_1 + 0x11) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01069f90 with catch @ 0106a2f0
                       catch(type#1 @ 00000000) { ... } // from try @ 0106a2c0 with catch @ 0106a2f0
                        */
        if (uVar12 + 1 < uVar14) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01069e90 with catch @ 0106a2f8
                       catch(type#1 @ 00000000) { ... } // from try @ 0106a2b8 with catch @ 0106a2f8
                        */
          uVar9 = (ulong)(uVar14 - 1);
          *(uint *)(param_1 + 0x14) = uVar14 - 1;
          puVar16 = (undefined8 *)(param_1[0x15] + uVar9 * 0x10);
          uVar19 = *puVar16;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106a11c with catch @ 0106a308
                        */
          puVar13 = (undefined8 *)(param_1[0x15] + uVar6 * 0x10);
          puVar13[1] = puVar16[1];
          *puVar13 = uVar19;
          lVar8 = param_1[0x15];
          puVar16 = (undefined8 *)(lVar8 + uVar6 * 0x10 + 0x10);
          if (puVar16 < (undefined8 *)((lVar8 + uVar9 * 0x10) - 0x10)) {
            puVar13 = (undefined8 *)((lVar8 + uVar9 * 0x10) - 0x20);
            do {
              uVar21 = puVar16[1];
              uVar19 = *puVar16;
              uVar7 = puVar13[2];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106a020 with catch @ 0106a344
                        */
              puVar16[1] = puVar13[3];
              *puVar16 = uVar7;
              bVar5 = puVar16 + 2 < puVar13;
              puVar13[3] = uVar21;
              puVar13[2] = uVar19;
              puVar16 = puVar16 + 2;
              puVar13 = puVar13 + -2;
            } while (bVar5);
          }
          lVar8 = param_1[0x16];
          if (lVar8 + uVar6 + 1 < (lVar8 + uVar9) - 1) {
            lVar18 = uVar6 + 1;
            do {
              lVar1 = lVar8 + uVar9;
              uVar3 = *(undefined1 *)(lVar8 + lVar18);
              uVar9 = uVar9 - 1;
              *(undefined1 *)(lVar8 + lVar18) = *(undefined1 *)(lVar1 + -1);
              lVar18 = lVar18 + 1;
              *(undefined1 *)(lVar1 + -1) = uVar3;
            } while ((ulong)(lVar8 + lVar18) < lVar1 - 2U);
            lVar8 = param_1[0x16];
          }
          *(byte *)(lVar8 + uVar6) = *(byte *)(lVar8 + uVar6) | 4;
          *(byte *)(param_1[0x16] + (ulong)(uVar14 - 2)) =
               *(byte *)(param_1[0x16] + (ulong)(uVar14 - 2)) | 8;
        }
        else {
          *(uint *)(param_1 + 0x14) = uVar12;
        }
        uVar6 = 0;
        *(undefined4 *)((long)param_1 + 0xbc) = 0xffffffff;
        *(undefined1 *)(param_1 + 0x17) = 0;
      }
    }
  }
  else {
    uVar6 = FUN_0106a414(param_1,*param_1);
    if ((int)uVar6 == 0) {
      uVar12 = *(uint *)(param_1 + 0x14);
      iVar11 = *(int *)((long)param_1 + 0xbc);
      iVar4 = uVar12 - iVar11;
      if (0 < iVar4) {
        uVar14 = *(uint *)(param_1 + 0xe);
        uVar2 = *(uint *)((long)param_1 + 0x74);
        local_50[0] = local_50[0] & 0xffffffff00000000;
        if (uVar2 < uVar14 + iVar4) {
          uVar19 = param_1[0x12];
          uVar20 = uVar2;
          do {
            uVar20 = uVar20 + (uVar20 >> 1) + 0x10;
                    /* try { // try from 0106a0a8 to 0116a0af has its CatchHandler @ 0106a2d8 */
          } while (uVar20 < uVar14 + iVar4);
                    /* try { // try from 0106a0b0 to 0116a0f3 has its CatchHandler @ 01069df0 */
          uVar7 = ft_mem_realloc(uVar19,0x10,uVar2,uVar20,param_1[0xf],local_50);
          param_1[0xf] = uVar7;
          if ((int)local_50[0] != 0) {
            return local_50[0] & 0xffffffff;
          }
                    /* try { // try from 0106a0f4 to 0116a0f7 has its CatchHandler @ 0106a2cc */
          lVar8 = ft_mem_realloc(uVar19,1,uVar2,uVar20,param_1[0x10],local_50);
          param_1[0x10] = lVar8;
          if ((int)local_50[0] != 0) {
            return local_50[0] & 0xffffffff;
          }
          uVar14 = *(uint *)(param_1 + 0xe);
          uVar12 = *(uint *)(param_1 + 0x14);
          iVar11 = *(int *)((long)param_1 + 0xbc);
          *(uint *)((long)param_1 + 0x74) = uVar20;
        }
        else {
          lVar8 = param_1[0x10];
        }
        puVar16 = (undefined8 *)((param_1[0x15] + (ulong)uVar12 * 0x10) - 0x10);
        if ((undefined8 *)(param_1[0x15] + (long)iVar11 * 0x10) <= puVar16) {
          pbVar15 = (byte *)(param_1[0x16] + (ulong)uVar12);
          pbVar10 = (byte *)(lVar8 + (ulong)uVar14);
          puVar13 = (undefined8 *)(param_1[0xf] + (ulong)uVar14 * 0x10);
          do {
            pbVar15 = pbVar15 + -1;
            puVar17 = puVar16 + -2;
            uVar19 = *puVar16;
            puVar13[1] = puVar16[1];
            *puVar13 = uVar19;
            *pbVar10 = *pbVar15 & 0xf3;
            iVar11 = *(int *)((long)param_1 + 0xbc);
            pbVar10 = pbVar10 + 1;
            puVar13 = puVar13 + 2;
            puVar16 = puVar17;
          } while ((undefined8 *)(param_1[0x15] + (long)iVar11 * 0x10) <= puVar17);
          uVar14 = *(uint *)(param_1 + 0xe);
        }
        *(int *)(param_1 + 0x14) = iVar11;
        *(undefined1 *)(param_1 + 0x11) = 0;
        *(uint *)(param_1 + 0xe) = uVar14 + iVar4;
        *(undefined1 *)(param_1 + 0x17) = 0;
      }
      param_1[3] = param_1[8];
      param_1[2] = param_1[7];
      uVar6 = FUN_0106a414(param_1,param_1[6] + 0xb40000);
      if ((int)uVar6 == 0) {
        uVar12 = *(uint *)((long)param_1 + 0x8c);
        uVar6 = (ulong)uVar12;
        uVar14 = *(uint *)(param_1 + 0xe);
        if (uVar12 + 1 < uVar14) {
          *(uint *)(param_1 + 0xe) = uVar14 - 1;
          puVar16 = (undefined8 *)(param_1[0xf] + (ulong)(uVar14 - 1) * 0x10);
          uVar19 = *puVar16;
          puVar13 = (undefined8 *)(param_1[0xf] + uVar6 * 0x10);
          puVar13[1] = puVar16[1];
          *puVar13 = uVar19;
                    /* try { // try from 0106a2b8 to 0116a2bf has its CatchHandler @ 0106a2f8 */
          *(byte *)(param_1[0x10] + uVar6) = *(byte *)(param_1[0x10] + uVar6) | 4;
                    /* try { // try from 0106a2c0 to 0116a2c7 has its CatchHandler @ 0106a2f0 */
                    /* try { // try from 0106a2c8 to 0116a2cb has its CatchHandler @ 0106a2d8 */
          *(byte *)(param_1[0x10] + (ulong)(uVar14 - 2)) =
               *(byte *)(param_1[0x10] + (ulong)(uVar14 - 2)) | 8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106a0f4 with catch @ 0106a2cc
                       try { // try from 0106a2cc to 0116a49b has its CatchHandler @ 01069df0 */
        }
        else {
          *(uint *)(param_1 + 0xe) = uVar12;
        }
        uVar6 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01069f14 with catch @ 0106a3f4
                        */
        *(undefined4 *)((long)param_1 + 0x8c) = 0xffffffff;
        *(undefined1 *)(param_1 + 0x11) = 0;
      }
    }
  }
  return uVar6;
}

