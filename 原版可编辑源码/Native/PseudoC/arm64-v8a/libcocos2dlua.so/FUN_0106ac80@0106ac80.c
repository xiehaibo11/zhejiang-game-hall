
ulong FUN_0106ac80(long *param_1,int param_2,long param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  undefined8 local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  uint local_64;
  
                    /* try { // try from 0106ac90 to 0116acbf has its CatchHandler @ 0106af3c */
  iVar2 = (int)param_1[0xb];
  if (iVar2 == 0) {
    uVar8 = FUN_0106c540(param_1);
    return uVar8;
  }
  lVar11 = param_1[0xd];
  lVar17 = (long)param_2;
                    /* try { // try from 0106acc8 to 0116ace3 has its CatchHandler @ 0106af38 */
  puVar1 = (uint *)(param_1 + (long)param_2 * 6 + 0xe);
  lVar12 = lVar17 * -0xb40000 + 0x5a0000;
  if (iVar2 == 1) {
LAB_0106ae28:
    FT_Vector_From_Polar(&local_80,lVar11,param_1[1] + lVar12);
                    /* try { // try from 0106ae48 to 0116ae53 has its CatchHandler @ 0106af4c */
    local_80 = local_80 + param_1[2];
    lStack_78 = lStack_78 + param_1[3];
    *(undefined1 *)(param_1 + lVar17 * 6 + 0x11) = 0;
    uVar9 = *puVar1;
    if (uVar9 != 0) {
                    /* try { // try from 0106ae70 to 0116ae83 has its CatchHandler @ 0106af2c */
      if (((ulong)((*(long *)(param_1[lVar17 * 6 + 0xf] + (ulong)(uVar9 - 1) * 0x10) + 1) - local_80
                  ) < 3) &&
         ((ulong)((*(long *)(param_1[lVar17 * 6 + 0xf] + (ulong)(uVar9 - 1) * 0x10 + 8) + 1) -
                 lStack_78) < 3)) {
        return 0;
      }
    }
                    /* try { // try from 0106aeb4 to 0116aecb has its CatchHandler @ 0106af34 */
    puVar14 = (uint *)((long)param_1 + lVar17 * 0x30 + 0x74);
    uVar3 = *puVar14;
    local_90 = (ulong)local_90._4_4_ << 0x20;
                    /* try { // try from 0106aecc to 0116afa7 has its CatchHandler @ 0106ac2c */
    if (uVar3 < uVar9 + 1) {
      lVar12 = param_1[lVar17 * 6 + 0x12];
      uVar16 = uVar3;
      do {
        uVar16 = uVar16 + (uVar16 >> 1) + 0x10;
      } while (uVar16 < uVar9 + 1);
      plVar15 = param_1 + lVar17 * 6 + 0xf;
      lVar11 = ft_mem_realloc(lVar12,0x10,uVar3,uVar16,*plVar15,&local_90);
      *plVar15 = lVar11;
      uVar8 = local_90 & 0xffffffff;
      if ((uint)local_90 != 0) goto LAB_0106b004;
                    /* catch() { ... } // from try @ 0106ae70 with catch @ 0106af2c */
                    /* catch() { ... } // from try @ 0106ace8 with catch @ 0106af30 */
                    /* catch() { ... } // from try @ 0106ad34 with catch @ 0106af34
                       catch() { ... } // from try @ 0106aeb4 with catch @ 0106af34 */
                    /* catch() { ... } // from try @ 0106acc8 with catch @ 0106af38 */
                    /* catch() { ... } // from try @ 0106ac90 with catch @ 0106af3c */
      lVar12 = ft_mem_realloc(lVar12,1,uVar3,uVar16,param_1[lVar17 * 6 + 0x10],&local_90);
                    /* catch() { ... } // from try @ 0106ad94 with catch @ 0106af48 */
                    /* catch() { ... } // from try @ 0106ae48 with catch @ 0106af4c */
      param_1[lVar17 * 6 + 0x10] = lVar12;
      uVar8 = local_90 & 0xffffffff;
      if ((uint)local_90 != 0) goto LAB_0106b004;
      *puVar14 = uVar16;
      uVar9 = *puVar1;
    }
    else {
      lVar12 = param_1[lVar17 * 6 + 0x10];
      plVar15 = param_1 + lVar17 * 6 + 0xf;
    }
    uVar8 = 0;
    plVar15 = (long *)(*plVar15 + (ulong)uVar9 * 0x10);
    plVar15[1] = lStack_78;
    *plVar15 = local_80;
    *(undefined1 *)(lVar12 + (ulong)uVar9) = 1;
    *puVar1 = *puVar1 + 1;
LAB_0106b004:
    *(undefined1 *)(param_1 + lVar17 * 6 + 0x11) = 0;
    return uVar8;
  }
  lVar4 = FT_Angle_Diff(*param_1,param_1[1]);
                    /* try { // try from 0106ace8 to 0116acfb has its CatchHandler @ 0106af30 */
  if (lVar4 == 0xb40000) {
    lVar13 = *param_1;
    lVar4 = lVar12;
  }
  else {
    if (lVar4 < 0) {
      lVar4 = lVar4 + 1;
    }
                    /* try { // try from 0106ad34 to 0116ad47 has its CatchHandler @ 0106af34 */
    lVar4 = lVar4 >> 1;
    lVar13 = lVar4 + lVar12 + *param_1;
  }
  uVar5 = FT_Cos(lVar4);
  lVar6 = FT_MulFix(param_1[0xc],uVar5);
  if (0xffff < lVar6) {
LAB_0106af64:
    uVar5 = FT_DivFix(param_1[0xd],uVar5);
                    /* catch() { ... } // from try @ 0106adbc with catch @ 0106af78 */
    FT_Vector_From_Polar(&local_80,uVar5,lVar13);
    local_80 = local_80 + param_1[2];
    lStack_78 = lStack_78 + param_1[3];
    plVar15 = param_1 + lVar17 * 6 + 0x11;
    if ((char)*plVar15 == '\0') {
      uVar9 = *puVar1;
      if (uVar9 == 0) {
LAB_0106b090:
                    /* try { // try from 0106b094 to 0116b0a7 has its CatchHandler @ 0106b16c */
        puVar14 = (uint *)((long)param_1 + lVar17 * 0x30 + 0x74);
        uVar3 = *puVar14;
        local_90 = local_90 & 0xffffffff00000000;
        if (uVar3 < uVar9 + 1) {
          lVar11 = param_1[lVar17 * 6 + 0x12];
          uVar16 = uVar3;
          do {
            uVar16 = uVar16 + (uVar16 >> 1) + 0x10;
                    /* try { // try from 0106b0c4 to 0116b0cb has its CatchHandler @ 0106b13c */
          } while (uVar16 < uVar9 + 1);
          plVar10 = param_1 + lVar17 * 6 + 0xf;
                    /* try { // try from 0106b0cc to 0116b187 has its CatchHandler @ 0106afa8 */
          lVar4 = ft_mem_realloc(lVar11,0x10,uVar3,uVar16,*plVar10,&local_90);
          *plVar10 = lVar4;
          if ((uint)local_90 == 0) {
            lVar11 = ft_mem_realloc(lVar11,1,uVar3,uVar16,param_1[lVar17 * 6 + 0x10],&local_90);
            param_1[lVar17 * 6 + 0x10] = lVar11;
            if ((uint)local_90 == 0) {
              *puVar14 = uVar16;
              uVar9 = *puVar1;
              goto LAB_0106b154;
            }
          }
                    /* catch() { ... } // from try @ 0106b0c4 with catch @ 0106b13c */
          uVar8 = (ulong)(uint)local_90;
        }
        else {
          lVar11 = param_1[lVar17 * 6 + 0x10];
          plVar10 = param_1 + lVar17 * 6 + 0xf;
LAB_0106b154:
          plVar10 = (long *)(*plVar10 + (ulong)uVar9 * 0x10);
          plVar10[1] = lStack_78;
          *plVar10 = local_80;
                    /* catch() { ... } // from try @ 0106b094 with catch @ 0106b16c */
          *(undefined1 *)(lVar11 + (ulong)uVar9) = 1;
          uVar8 = 0;
          *puVar1 = *puVar1 + 1;
        }
        goto LAB_0106b180;
      }
      if ((2 < (ulong)((*(long *)(param_1[lVar17 * 6 + 0xf] + (ulong)(uVar9 - 1) * 0x10) + 1) -
                      local_80)) ||
         (2 < (ulong)((1 - lStack_78) +
                     *(long *)(param_1[lVar17 * 6 + 0xf] + (ulong)(uVar9 - 1) * 0x10 + 8))))
      goto LAB_0106b090;
      uVar8 = 0;
    }
    else {
                    /* try { // try from 0106afa8 to 0116b093 has its CatchHandler @ 0106afa8
                       catch() { ... } // from try @ 0106afa8 with catch @ 0106afa8
                       catch() { ... } // from try @ 0106b0cc with catch @ 0106afa8 */
      uVar8 = 0;
      plVar10 = (long *)(param_1[lVar17 * 6 + 0xf] + (ulong)(*puVar1 - 1) * 0x10);
      plVar10[1] = lStack_78;
      *plVar10 = local_80;
LAB_0106b180:
      *(char *)plVar15 = '\0';
                    /* try { // try from 0106b188 to 0116b3db has its CatchHandler @ 0106b188
                       catch() { ... } // from try @ 0106b188 with catch @ 0106b188
                       catch() { ... } // from try @ 0106b4ec with catch @ 0106b188
                       catch() { ... } // from try @ 0106b5e0 with catch @ 0106b188 */
    }
    if (param_3 != 0) {
      return uVar8;
    }
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    FT_Vector_From_Polar(&local_80,param_1[0xd],param_1[1] + lVar12);
    local_80 = local_80 + param_1[2];
    lStack_78 = lStack_78 + param_1[3];
    if ((char)*plVar15 != '\0') {
      plVar10 = (long *)(param_1[lVar17 * 6 + 0xf] + (ulong)(*puVar1 - 1) * 0x10);
      plVar10[1] = lStack_78;
      *plVar10 = local_80;
      *(char *)plVar15 = '\0';
      return 0;
    }
    uVar9 = *puVar1;
    if (uVar9 != 0) {
      if (((ulong)((*(long *)(param_1[lVar17 * 6 + 0xf] + (ulong)(uVar9 - 1) * 0x10) + 1) - local_80
                  ) < 3) &&
         ((ulong)((1 - lStack_78) +
                 *(long *)(param_1[lVar17 * 6 + 0xf] + (ulong)(uVar9 - 1) * 0x10 + 8)) < 3)) {
        return 0;
      }
    }
    puVar14 = (uint *)((long)param_1 + lVar17 * 0x30 + 0x74);
    uVar3 = *puVar14;
    local_90 = local_90 & 0xffffffff00000000;
    if (uVar3 < uVar9 + 1) {
      lVar12 = param_1[lVar17 * 6 + 0x12];
      uVar16 = uVar3;
      do {
        uVar16 = uVar16 + (uVar16 >> 1) + 0x10;
      } while (uVar16 < uVar9 + 1);
      plVar10 = param_1 + lVar17 * 6 + 0xf;
      lVar11 = ft_mem_realloc(lVar12,0x10,uVar3,uVar16,*plVar10,&local_90);
      *plVar10 = lVar11;
      uVar8 = local_90 & 0xffffffff;
      if ((uint)local_90 != 0) goto LAB_0106b324;
      lVar12 = ft_mem_realloc(lVar12,1,uVar3,uVar16,param_1[lVar17 * 6 + 0x10],&local_90);
      param_1[lVar17 * 6 + 0x10] = lVar12;
      uVar8 = local_90 & 0xffffffff;
      if ((uint)local_90 != 0) goto LAB_0106b324;
      *puVar14 = uVar16;
      uVar9 = *puVar1;
    }
    else {
      lVar12 = param_1[lVar17 * 6 + 0x10];
      plVar10 = param_1 + lVar17 * 6 + 0xf;
    }
    uVar8 = 0;
    plVar10 = (long *)(*plVar10 + (ulong)uVar9 * 0x10);
    plVar10[1] = lStack_78;
    *plVar10 = local_80;
    *(undefined1 *)(lVar12 + (ulong)uVar9) = 1;
    *puVar1 = *puVar1 + 1;
LAB_0106b324:
    *(char *)plVar15 = '\0';
    return uVar8;
  }
  if (iVar2 != 2) goto LAB_0106ae28;
  lVar7 = -lVar4;
  if (-1 < lVar4) {
    lVar7 = lVar4;
  }
  if (lVar7 < 0x3a) goto LAB_0106af64;
  uVar5 = FT_MulFix(lVar11,param_1[0xc]);
                    /* try { // try from 0106ad94 to 0116ada3 has its CatchHandler @ 0106af48 */
  FT_Vector_From_Polar(&local_80,uVar5,lVar13);
  local_80 = local_80 + param_1[2];
  lStack_78 = lStack_78 + param_1[3];
  lVar7 = FT_Sin(lVar4);
                    /* try { // try from 0106adbc to 0116adc3 has its CatchHandler @ 0106af78 */
  lVar4 = -lVar7;
  if (-1 < lVar7) {
    lVar4 = lVar7;
  }
  uVar5 = FT_MulDiv(lVar11,0x10000 - lVar6,lVar4);
  FT_Vector_From_Polar(&local_90,uVar5,lVar13 + lVar12);
  local_90 = local_90 + local_80;
  lStack_88 = lStack_88 + lStack_78;
  plVar15 = param_1 + lVar17 * 6 + 0x11;
  if ((char)*plVar15 == '\0') {
    uVar9 = *puVar1;
    if (uVar9 == 0) {
LAB_0106b384:
      puVar14 = (uint *)((long)param_1 + lVar17 * 0x30 + 0x74);
      uVar3 = *puVar14;
      local_64 = 0;
      if (uVar3 < uVar9 + 1) {
        lVar4 = param_1[lVar17 * 6 + 0x12];
        uVar16 = uVar3;
        do {
          uVar16 = uVar16 + (uVar16 >> 1) + 0x10;
        } while (uVar16 < uVar9 + 1);
        plVar10 = param_1 + lVar17 * 6 + 0xf;
                    /* try { // try from 0106b3dc to 0116b3e7 has its CatchHandler @ 0106b62c */
        lVar6 = ft_mem_realloc(lVar4,0x10,uVar3,uVar16,*plVar10,&local_64);
        *plVar10 = lVar6;
        if (local_64 != 0) {
LAB_0106b434:
          *(char *)plVar15 = '\0';
          return (ulong)local_64;
        }
        lVar4 = ft_mem_realloc(lVar4,1,uVar3,uVar16,param_1[lVar17 * 6 + 0x10],&local_64);
        param_1[lVar17 * 6 + 0x10] = lVar4;
        if (local_64 != 0) goto LAB_0106b434;
        *puVar14 = uVar16;
        uVar9 = *puVar1;
      }
      else {
                    /* try { // try from 0106b448 to 0116b497 has its CatchHandler @ 0106b614 */
        lVar4 = param_1[lVar17 * 6 + 0x10];
        plVar10 = param_1 + lVar17 * 6 + 0xf;
      }
      plVar10 = (long *)(*plVar10 + (ulong)uVar9 * 0x10);
      plVar10[1] = lStack_88;
      *plVar10 = local_90;
      *(undefined1 *)(lVar4 + (ulong)uVar9) = 1;
      *puVar1 = *puVar1 + 1;
      goto LAB_0106b474;
    }
    if ((2 < (*(long *)(param_1[lVar17 * 6 + 0xf] + (ulong)(uVar9 - 1) * 0x10) + 1) - local_90) ||
       (2 < (ulong)((1 - lStack_88) +
                   *(long *)(param_1[lVar17 * 6 + 0xf] + (ulong)(uVar9 - 1) * 0x10 + 8))))
    goto LAB_0106b384;
  }
  else {
    plVar10 = (long *)(param_1[lVar17 * 6 + 0xf] + (ulong)(*puVar1 - 1) * 0x10);
    plVar10[1] = lStack_88;
    *plVar10 = local_90;
LAB_0106b474:
    *(char *)plVar15 = '\0';
  }
  FT_Vector_From_Polar(&local_90,uVar5,lVar13 - lVar12);
  local_90 = local_90 + local_80;
  lStack_88 = lStack_88 + lStack_78;
  if ((char)*plVar15 == '\0') {
    uVar9 = *puVar1;
    if (uVar9 == 0) {
LAB_0106b528:
      puVar14 = (uint *)((long)param_1 + lVar17 * 0x30 + 0x74);
      uVar3 = *puVar14;
      local_64 = 0;
                    /* try { // try from 0106b540 to 0116b54f has its CatchHandler @ 0106b5f8 */
      if (uVar3 < uVar9 + 1) {
        lVar4 = param_1[lVar17 * 6 + 0x12];
        uVar16 = uVar3;
        do {
          uVar16 = uVar16 + (uVar16 >> 1) + 0x10;
        } while (uVar16 < uVar9 + 1);
        plVar10 = param_1 + lVar17 * 6 + 0xf;
                    /* try { // try from 0106b580 to 0116b58b has its CatchHandler @ 0106b5e8 */
        lVar13 = ft_mem_realloc(lVar4,0x10,uVar3,uVar16,*plVar10,&local_64);
        *plVar10 = lVar13;
        if (local_64 == 0) {
          lVar4 = ft_mem_realloc(lVar4,1,uVar3,uVar16,param_1[lVar17 * 6 + 0x10],&local_64);
          param_1[lVar17 * 6 + 0x10] = lVar4;
          if (local_64 == 0) {
            *puVar14 = uVar16;
                    /* try { // try from 0106b7e8 to 0116b7ef has its CatchHandler @ 0106b7f0 */
            uVar9 = *puVar1;
            goto LAB_0106b5e8;
          }
        }
        uVar8 = (ulong)local_64;
      }
      else {
                    /* try { // try from 0106b5d8 to 0116b5df has its CatchHandler @ 0106b5e4 */
                    /* try { // try from 0106b5e0 to 0116b63f has its CatchHandler @ 0106b188 */
        lVar4 = param_1[lVar17 * 6 + 0x10];
                    /* catch() { ... } // from try @ 0106b5d8 with catch @ 0106b5e4 */
        plVar10 = param_1 + lVar17 * 6 + 0xf;
LAB_0106b5e8:
                    /* catch() { ... } // from try @ 0106b580 with catch @ 0106b5e8 */
                    /* catch() { ... } // from try @ 0106b540 with catch @ 0106b5f8 */
                    /* catch() { ... } // from try @ 0106b4e4 with catch @ 0106b5fc */
        plVar10 = (long *)(*plVar10 + (ulong)uVar9 * 0x10);
        plVar10[1] = lStack_88;
        *plVar10 = local_90;
        *(undefined1 *)(lVar4 + (ulong)uVar9) = 1;
        uVar8 = 0;
        *puVar1 = *puVar1 + 1;
      }
      goto LAB_0106b614;
    }
                    /* try { // try from 0106b4e4 to 0116b4eb has its CatchHandler @ 0106b5fc */
                    /* try { // try from 0106b4ec to 0116b53f has its CatchHandler @ 0106b188 */
    if ((2 < (*(long *)(param_1[lVar17 * 6 + 0xf] + (ulong)(uVar9 - 1) * 0x10) + 1) - local_90) ||
       (2 < (ulong)((1 - lStack_88) +
                   *(long *)(param_1[lVar17 * 6 + 0xf] + (ulong)(uVar9 - 1) * 0x10 + 8))))
    goto LAB_0106b528;
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    plVar10 = (long *)(param_1[lVar17 * 6 + 0xf] + (ulong)(*puVar1 - 1) * 0x10);
    plVar10[1] = lStack_88;
    *plVar10 = local_90;
LAB_0106b614:
                    /* catch() { ... } // from try @ 0106b448 with catch @ 0106b614 */
    *(char *)plVar15 = '\0';
  }
  if (param_3 != 0) {
    return uVar8;
  }
  if ((int)uVar8 != 0) {
    return uVar8;
  }
                    /* catch() { ... } // from try @ 0106b3dc with catch @ 0106b62c */
  FT_Vector_From_Polar(&local_90,lVar11,param_1[1] + lVar12);
                    /* try { // try from 0106b640 to 0116b67f has its CatchHandler @ 0106b640
                       catch() { ... } // from try @ 0106b640 with catch @ 0106b640
                       catch() { ... } // from try @ 0106b7ac with catch @ 0106b640
                       catch() { ... } // from try @ 0106b7f0 with catch @ 0106b640 */
  local_90 = local_90 + param_1[2];
  lStack_88 = lStack_88 + param_1[3];
  if ((char)*plVar15 != '\0') {
    uVar8 = 0;
    plVar10 = (long *)(param_1[lVar17 * 6 + 0xf] + (ulong)(*puVar1 - 1) * 0x10);
    plVar10[1] = lStack_88;
    *plVar10 = local_90;
    goto LAB_0106b7c0;
  }
  uVar9 = *puVar1;
  if (uVar9 != 0) {
                    /* try { // try from 0106b680 to 0116b68b has its CatchHandler @ 0106b820 */
                    /* try { // try from 0106b6c8 to 0116b6db has its CatchHandler @ 0106b804 */
    if (((*(long *)(param_1[lVar17 * 6 + 0xf] + (ulong)(uVar9 - 1) * 0x10) + 1) - local_90 < 3) &&
       ((ulong)((1 - lStack_88) +
               *(long *)(param_1[lVar17 * 6 + 0xf] + (ulong)(uVar9 - 1) * 0x10 + 8)) < 3)) {
      return 0;
    }
  }
  puVar14 = (uint *)((long)param_1 + lVar17 * 0x30 + 0x74);
  uVar3 = *puVar14;
  local_64 = 0;
  if (uVar3 < uVar9 + 1) {
                    /* try { // try from 0106b6e8 to 0116b6ef has its CatchHandler @ 0106b808 */
    lVar12 = param_1[lVar17 * 6 + 0x12];
    uVar16 = uVar3;
    do {
      uVar16 = uVar16 + (uVar16 >> 1) + 0x10;
    } while (uVar16 < uVar9 + 1);
    plVar10 = param_1 + lVar17 * 6 + 0xf;
                    /* try { // try from 0106b724 to 0116b72b has its CatchHandler @ 0106b804 */
    lVar11 = ft_mem_realloc(lVar12,0x10,uVar3,uVar16,*plVar10,&local_64);
    *plVar10 = lVar11;
    uVar8 = (ulong)local_64;
    if (local_64 != 0) goto LAB_0106b7c0;
    lVar12 = ft_mem_realloc(lVar12,1,uVar3,uVar16,param_1[lVar17 * 6 + 0x10],&local_64);
    param_1[lVar17 * 6 + 0x10] = lVar12;
    uVar8 = (ulong)local_64;
    if (local_64 != 0) goto LAB_0106b7c0;
    *puVar14 = uVar16;
    uVar9 = *puVar1;
  }
  else {
    lVar12 = param_1[lVar17 * 6 + 0x10];
    plVar10 = param_1 + lVar17 * 6 + 0xf;
  }
                    /* try { // try from 0106b7a4 to 0116b7ab has its CatchHandler @ 0106b7f0 */
  uVar8 = 0;
                    /* try { // try from 0106b7ac to 0116b7e7 has its CatchHandler @ 0106b640 */
  plVar10 = (long *)(*plVar10 + (ulong)uVar9 * 0x10);
  plVar10[1] = lStack_88;
  *plVar10 = local_90;
  *(undefined1 *)(lVar12 + (ulong)uVar9) = 1;
  *puVar1 = *puVar1 + 1;
LAB_0106b7c0:
  *(char *)plVar15 = '\0';
  return uVar8;
}

