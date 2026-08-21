
ulong FT_Stroker_LineTo(long *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  long local_90;
  long lStack_88;
  uint local_78;
  undefined4 uStack_74;
  long lStack_70;
  uint local_64;
  
  if (param_1 == (long *)0x0) {
    return 6;
  }
  if (param_2 == (long *)0x0) {
    return 6;
  }
  local_90 = *param_2 - param_1[2];
  lStack_88 = param_2[1] - param_1[3];
  if (local_90 == 0 && lStack_88 == 0) {
    return 0;
  }
  lVar6 = FT_Vector_Length(&local_90);
  lVar7 = FT_Atan2(local_90,lStack_88);
  FT_Vector_From_Polar(&local_90,param_1[0xd],lVar7 + 0x5a0000);
  if ((char)param_1[5] == '\0') {
                    /* try { // try from 01067b20 to 01167b27 has its CatchHandler @ 01067b50 */
                    /* try { // try from 01067b28 to 01167b2b has its CatchHandler @ 01067b38 */
    param_1[1] = lVar7;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010679ac with catch @ 01067b2c
                       try { // try from 01067b2c to 01167ca3 has its CatchHandler @ 010676a8 */
    uVar12 = FT_Angle_Diff(*param_1,lVar7);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010678ac with catch @ 01067b30
                        */
    if (uVar12 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010677ac with catch @ 01067b34
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01067960 with catch @ 01067b38
                       catch(type#1 @ 00000000) { ... } // from try @ 01067b28 with catch @ 01067b38
                        */
      uVar8 = FUN_0106a9d4(param_1,uVar12 >> 0x3f,lVar6);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01067848 with catch @ 01067b50
                       catch(type#1 @ 00000000) { ... } // from try @ 01067b20 with catch @ 01067b50
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01067748 with catch @ 01067b58
                       catch(type#1 @ 00000000) { ... } // from try @ 01067b18 with catch @ 01067b58
                        */
      uVar12 = FUN_0106ac80(param_1,(uint)(uVar12 >> 0x3f) ^ 1,lVar6);
      iVar5 = (int)uVar12;
      goto joined_r0x01067b5c;
    }
  }
  else {
    FT_Vector_From_Polar(&local_78,param_1[0xd],lVar7 + 0x5a0000);
    lVar13 = param_1[2];
    lVar10 = param_1[3];
    uVar11 = *(uint *)((long)param_1 + 0x8c);
    uVar12 = (ulong)uVar11;
    if (-1 < (int)uVar11) {
      uVar2 = *(uint *)(param_1 + 0xe);
      if (uVar11 + 1 < uVar2) {
        *(uint *)(param_1 + 0xe) = uVar2 - 1;
        puVar3 = (undefined8 *)(param_1[0xf] + (ulong)(uVar2 - 1) * 0x10);
        uVar17 = *puVar3;
        puVar4 = (undefined8 *)(param_1[0xf] + uVar12 * 0x10);
        puVar4[1] = puVar3[1];
        *puVar4 = uVar17;
        *(byte *)(param_1[0x10] + uVar12) = *(byte *)(param_1[0x10] + uVar12) | 4;
        *(byte *)(param_1[0x10] + (ulong)(uVar2 - 2)) =
             *(byte *)(param_1[0x10] + (ulong)(uVar2 - 2)) | 8;
      }
      else {
        *(uint *)(param_1 + 0xe) = uVar11;
      }
      *(undefined1 *)(param_1 + 0x11) = 0;
      *(undefined4 *)((long)param_1 + 0x8c) = 0xffffffff;
    }
    uVar11 = *(uint *)(param_1 + 0xe);
    lVar13 = CONCAT44(uStack_74,local_78) + lVar13;
    lVar10 = lStack_70 + lVar10;
    *(undefined1 *)(param_1 + 0x11) = 0;
    *(uint *)((long)param_1 + 0x8c) = uVar11;
    if (uVar11 == 0) {
LAB_01067bd8:
      uVar2 = *(uint *)((long)param_1 + 0x74);
      local_64 = 0;
      if (uVar2 < uVar11 + 1) {
        lVar15 = param_1[0x12];
        uVar14 = uVar2;
        do {
          uVar14 = uVar14 + (uVar14 >> 1) + 0x10;
        } while (uVar14 < uVar11 + 1);
        lVar9 = ft_mem_realloc(lVar15,0x10,uVar2,uVar14,param_1[0xf],&local_64);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010677cc with catch @ 01067c28
                        */
        param_1[0xf] = lVar9;
        if (local_64 != 0) {
LAB_01067c60:
          *(undefined1 *)(param_1 + 0x11) = 0;
          return (ulong)local_64;
        }
        lVar15 = ft_mem_realloc(lVar15,1,uVar2,uVar14,param_1[0x10],&local_64);
        param_1[0x10] = lVar15;
        if (local_64 != 0) goto LAB_01067c60;
        *(uint *)((long)param_1 + 0x74) = uVar14;
        uVar11 = *(uint *)(param_1 + 0xe);
      }
      else {
        lVar15 = param_1[0x10];
      }
      plVar16 = (long *)(param_1[0xf] + (ulong)uVar11 * 0x10);
      *plVar16 = lVar13;
      plVar16[1] = lVar10;
      *(undefined1 *)(lVar15 + (ulong)uVar11) = 1;
      *(undefined1 *)(param_1 + 0x11) = 0;
      *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010678d8 with catch @ 01067ba4
                        */
      if ((2 < (ulong)((1 - lVar13) + *(long *)(param_1[0xf] + (ulong)(uVar11 - 1) * 0x10))) ||
         (2 < (ulong)((1 - lVar10) + *(long *)(param_1[0xf] + (ulong)(uVar11 - 1) * 0x10 + 8))))
      goto LAB_01067bd8;
    }
    lVar13 = param_1[2];
    lVar10 = param_1[3];
    uVar11 = *(uint *)((long)param_1 + 0xbc);
    uVar12 = (ulong)uVar11;
    if (-1 < (int)uVar11) {
      uVar2 = *(uint *)(param_1 + 0x14);
      if (uVar11 + 1 < uVar2) {
        *(uint *)(param_1 + 0x14) = uVar2 - 1;
        puVar3 = (undefined8 *)(param_1[0x15] + (ulong)(uVar2 - 1) * 0x10);
        uVar17 = *puVar3;
        puVar4 = (undefined8 *)(param_1[0x15] + uVar12 * 0x10);
        puVar4[1] = puVar3[1];
        *puVar4 = uVar17;
        *(byte *)(param_1[0x16] + uVar12) = *(byte *)(param_1[0x16] + uVar12) | 4;
        *(byte *)(param_1[0x16] + (ulong)(uVar2 - 2)) =
             *(byte *)(param_1[0x16] + (ulong)(uVar2 - 2)) | 8;
      }
      else {
        *(uint *)(param_1 + 0x14) = uVar11;
      }
      *(undefined1 *)(param_1 + 0x17) = 0;
      *(undefined4 *)((long)param_1 + 0xbc) = 0xffffffff;
    }
    uVar11 = *(uint *)(param_1 + 0x14);
    lVar13 = lVar13 - CONCAT44(uStack_74,local_78);
    *(undefined1 *)(param_1 + 0x17) = 0;
    *(uint *)((long)param_1 + 0xbc) = uVar11;
    if (uVar11 == 0) {
LAB_01067d6c:
      uVar2 = *(uint *)((long)param_1 + 0xa4);
      local_64 = 0;
      if (uVar2 < uVar11 + 1) {
                    /* try { // try from 01067d84 to 01167e23 has its CatchHandler @ 01067d84
                       catch() { ... } // from try @ 01067d84 with catch @ 01067d84
                       catch() { ... } // from try @ 01067e2c with catch @ 01067d84
                       catch() { ... } // from try @ 01067f30 with catch @ 01067d84
                       catch() { ... } // from try @ 01068038 with catch @ 01067d84
                       catch() { ... } // from try @ 010680cc with catch @ 01067d84
                       catch() { ... } // from try @ 010681f4 with catch @ 01067d84 */
        lVar15 = param_1[0x18];
        uVar14 = uVar2;
        do {
          uVar14 = uVar14 + (uVar14 >> 1) + 0x10;
        } while (uVar14 < uVar11 + 1);
        lVar9 = ft_mem_realloc(lVar15,0x10,uVar2,uVar14,param_1[0x15],&local_64);
        param_1[0x15] = lVar9;
        if (local_64 == 0) {
          lVar15 = ft_mem_realloc(lVar15,1,uVar2,uVar14,param_1[0x16],&local_64);
          param_1[0x16] = lVar15;
          if (local_64 == 0) {
            *(uint *)((long)param_1 + 0xa4) = uVar14;
            uVar11 = *(uint *)(param_1 + 0x14);
            goto LAB_01067e00;
          }
        }
        uVar12 = (ulong)local_64;
      }
      else {
        lVar15 = param_1[0x16];
LAB_01067e00:
        uVar12 = 0;
        plVar16 = (long *)(param_1[0x15] + (ulong)uVar11 * 0x10);
        *plVar16 = lVar13;
        plVar16[1] = lVar10 - lStack_70;
        *(undefined1 *)(lVar15 + (ulong)uVar11) = 1;
                    /* try { // try from 01067e24 to 01167e2b has its CatchHandler @ 01068214 */
        *(int *)(param_1 + 0x14) = (int)param_1[0x14] + 1;
      }
      *(undefined1 *)(param_1 + 0x17) = 0;
    }
    else {
      if ((2 < (ulong)((1 - lVar13) + *(long *)(param_1[0x15] + (ulong)(uVar11 - 1) * 0x10))) ||
         (2 < (ulong)((1 - (lVar10 - lStack_70)) +
                     *(long *)(param_1[0x15] + (ulong)(uVar11 - 1) * 0x10 + 8)))) goto LAB_01067d6c;
      uVar12 = 0;
    }
                    /* try { // try from 01067e2c to 01167e87 has its CatchHandler @ 01067d84 */
    param_1[6] = lVar7;
    *(undefined1 *)(param_1 + 5) = 0;
    param_1[9] = lVar6;
    iVar5 = (int)uVar12;
joined_r0x01067b5c:
    if (iVar5 != 0) {
      return uVar12;
    }
  }
  lVar15 = *param_2;
  lVar9 = param_2[1];
  plVar16 = param_1 + 0x11;
  lVar13 = local_90 + lVar15;
  lVar10 = lStack_88 + lVar9;
  if ((char)*plVar16 == '\0') {
    uVar11 = *(uint *)(param_1 + 0xe);
    if (uVar11 == 0) {
LAB_01067eb8:
      uVar2 = *(uint *)((long)param_1 + 0x74);
      local_78 = 0;
      if (uVar2 < uVar11 + 1) {
        lVar15 = param_1[0x12];
        uVar14 = uVar2;
        do {
          uVar14 = uVar14 + (uVar14 >> 1) + 0x10;
        } while (uVar14 < uVar11 + 1);
        lVar9 = ft_mem_realloc(lVar15,0x10,uVar2,uVar14,param_1[0xf],&local_78);
        param_1[0xf] = lVar9;
        uVar12 = (ulong)local_78;
        if (local_78 != 0) goto LAB_01068090;
                    /* try { // try from 01067f28 to 01167f2f has its CatchHandler @ 01068208 */
        lVar15 = ft_mem_realloc(lVar15,1,uVar2,uVar14,param_1[0x10],&local_78);
                    /* try { // try from 01067f30 to 01167f8b has its CatchHandler @ 01067d84 */
        param_1[0x10] = lVar15;
        uVar12 = (ulong)local_78;
        if (local_78 != 0) goto LAB_01068090;
        *(uint *)((long)param_1 + 0x74) = uVar14;
        uVar11 = *(uint *)(param_1 + 0xe);
      }
      else {
        lVar15 = param_1[0x10];
      }
      plVar1 = (long *)(param_1[0xf] + (ulong)uVar11 * 0x10);
      *plVar1 = lVar13;
      plVar1[1] = lVar10;
      *(undefined1 *)(lVar15 + (ulong)uVar11) = 1;
      *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
      goto LAB_01067f78;
    }
                    /* try { // try from 01067e88 to 01167e8f has its CatchHandler @ 010681fc */
                    /* try { // try from 01067e98 to 01167ea3 has its CatchHandler @ 010683c8 */
                    /* try { // try from 01067ea4 to 01167ea7 has its CatchHandler @ 01068364 */
    if ((2 < (ulong)((1 - lVar13) + *(long *)(param_1[0xf] + (ulong)(uVar11 - 1) * 0x10))) ||
       (2 < (ulong)((1 - lVar10) + *(long *)(param_1[0xf] + (ulong)(uVar11 - 1) * 0x10 + 8))))
    goto LAB_01067eb8;
  }
  else {
    plVar1 = (long *)(param_1[0xf] + (ulong)((int)param_1[0xe] - 1) * 0x10);
    *plVar1 = lVar13;
    plVar1[1] = lVar10;
LAB_01067f78:
    *(char *)plVar16 = '\x01';
    lVar15 = *param_2;
    lVar9 = param_2[1];
  }
                    /* try { // try from 01067f8c to 01167f93 has its CatchHandler @ 010681f8 */
  plVar16 = param_1 + 0x17;
                    /* try { // try from 01067f9c to 01167fa7 has its CatchHandler @ 010682f0 */
  lVar15 = lVar15 - local_90;
  lVar9 = lVar9 - lStack_88;
  if ((char)*plVar16 == '\0') {
    uVar11 = *(uint *)(param_1 + 0x14);
    if (uVar11 != 0) {
      if (((ulong)((1 - lVar15) + *(long *)(param_1[0x15] + (ulong)(uVar11 - 1) * 0x10)) < 3) &&
         ((ulong)((1 - lVar9) + *(long *)(param_1[0x15] + (ulong)(uVar11 - 1) * 0x10 + 8)) < 3))
      goto LAB_010680d0;
    }
    uVar2 = *(uint *)((long)param_1 + 0xa4);
    local_78 = 0;
    if (uVar2 < uVar11 + 1) {
      lVar13 = param_1[0x18];
      uVar14 = uVar2;
      do {
        uVar14 = uVar14 + (uVar14 >> 1) + 0x10;
                    /* try { // try from 01068030 to 01168037 has its CatchHandler @ 01068200 */
      } while (uVar14 < uVar11 + 1);
                    /* try { // try from 01068038 to 01168097 has its CatchHandler @ 01067d84 */
      local_90 = -local_90;
      lStack_88 = -lStack_88;
      lVar10 = ft_mem_realloc(lVar13,0x10,uVar2,uVar14,param_1[0x15],&local_78);
      param_1[0x15] = lVar10;
      uVar12 = (ulong)local_78;
      if (local_78 != 0) {
LAB_01068090:
        *(char *)plVar16 = '\x01';
        return uVar12;
                    /* try { // try from 01068098 to 0116809f has its CatchHandler @ 010681f4 */
      }
      lVar13 = ft_mem_realloc(lVar13,1,uVar2,uVar14,param_1[0x16],&local_78);
      param_1[0x16] = lVar13;
      uVar12 = (ulong)local_78;
      if (local_78 != 0) goto LAB_01068090;
      *(uint *)((long)param_1 + 0xa4) = uVar14;
      uVar11 = *(uint *)(param_1 + 0x14);
    }
    else {
      lVar13 = param_1[0x16];
    }
                    /* try { // try from 010680a4 to 011680ab has its CatchHandler @ 0106825c */
    plVar1 = (long *)(param_1[0x15] + (ulong)uVar11 * 0x10);
                    /* try { // try from 010680b0 to 011680cb has its CatchHandler @ 01068224 */
    *plVar1 = lVar15;
    plVar1[1] = lVar9;
    *(undefined1 *)(lVar13 + (ulong)uVar11) = 1;
    *(int *)(param_1 + 0x14) = (int)param_1[0x14] + 1;
  }
  else {
                    /* try { // try from 01067fac to 01167fb3 has its CatchHandler @ 010682ac */
    plVar1 = (long *)(param_1[0x15] + (ulong)((int)param_1[0x14] - 1) * 0x10);
    *plVar1 = lVar15;
    plVar1[1] = lVar9;
  }
  *(char *)plVar16 = '\x01';
                    /* try { // try from 010680cc to 011681e3 has its CatchHandler @ 01067d84 */
LAB_010680d0:
  *param_1 = lVar7;
  lVar7 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = lVar7;
  param_1[4] = lVar6;
  return 0;
}

