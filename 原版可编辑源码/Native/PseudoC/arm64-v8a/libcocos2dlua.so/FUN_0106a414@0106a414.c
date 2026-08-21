
ulong FUN_0106a414(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint local_80;
  undefined4 uStack_7c;
  long local_78;
  long local_70;
  long lStack_68;
  uint local_54;
  
  iVar1 = *(int *)((long)param_1 + 0x54);
  if (iVar1 == 0) {
    lVar8 = param_1[0xd];
    FT_Vector_From_Polar(&local_70,lVar8,param_2 + 0x5a0000);
                    /* catch() { ... } // from try @ 0106a534 with catch @ 0106a49c */
    local_70 = local_70 + param_1[2];
    lStack_68 = lStack_68 + param_1[3];
    if ((char)param_1[0x11] == '\0') {
                    /* try { // try from 0106a534 to 0116a5c7 has its CatchHandler @ 0106a49c */
      uVar7 = *(uint *)(param_1 + 0xe);
      if (uVar7 == 0) {
LAB_0106a580:
        uVar2 = *(uint *)((long)param_1 + 0x74);
        local_80 = 0;
        if (uVar2 < uVar7 + 1) {
          lVar6 = param_1[0x12];
          uVar9 = uVar2;
          do {
                    /* catch() { ... } // from try @ 0106a4f4 with catch @ 0106a59c */
                    /* catch() { ... } // from try @ 0106a4d8 with catch @ 0106a5a0 */
            uVar9 = uVar9 + (uVar9 >> 1) + 0x10;
                    /* catch() { ... } // from try @ 0106a4e4 with catch @ 0106a5a4
                       catch() { ... } // from try @ 0106a52c with catch @ 0106a5a4 */
          } while (uVar9 < uVar7 + 1);
                    /* try { // try from 0106a5c8 to 0116a60f has its CatchHandler @ 0106a5c8
                       catch() { ... } // from try @ 0106a5c8 with catch @ 0106a5c8
                       catch() { ... } // from try @ 0106a6b8 with catch @ 0106a5c8
                       catch() { ... } // from try @ 0106a798 with catch @ 0106a5c8
                       catch() { ... } // from try @ 0106a86c with catch @ 0106a5c8
                       catch() { ... } // from try @ 0106a918 with catch @ 0106a5c8 */
          lVar5 = ft_mem_realloc(lVar6,0x10,uVar2,uVar9,param_1[0xf],&local_80);
          param_1[0xf] = lVar5;
          uVar4 = (ulong)local_80;
          if (local_80 != 0) goto LAB_0106a9b4;
          lVar6 = ft_mem_realloc(lVar6,1,uVar2,uVar9,param_1[0x10],&local_80);
          param_1[0x10] = lVar6;
          uVar4 = (ulong)local_80;
          if (local_80 != 0) goto LAB_0106a9b4;
          uVar7 = *(uint *)(param_1 + 0xe);
          *(uint *)((long)param_1 + 0x74) = uVar9;
        }
        else {
          lVar6 = param_1[0x10];
        }
        plVar3 = (long *)(param_1[0xf] + (ulong)uVar7 * 0x10);
        plVar3[1] = lStack_68;
        *plVar3 = local_70;
        *(undefined1 *)(lVar6 + (ulong)uVar7) = 1;
        *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
        goto LAB_0106a70c;
      }
      if ((2 < (ulong)((*(long *)(param_1[0xf] + (ulong)(uVar7 - 1) * 0x10) + 1) - local_70)) ||
         (2 < (ulong)((1 - lStack_68) + *(long *)(param_1[0xf] + (ulong)(uVar7 - 1) * 0x10 + 8))))
      goto LAB_0106a580;
    }
    else {
      plVar3 = (long *)(param_1[0xf] + (ulong)((int)param_1[0xe] - 1) * 0x10);
      plVar3[1] = lStack_68;
      *plVar3 = local_70;
LAB_0106a70c:
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
    FT_Vector_From_Polar(&local_70,lVar8,param_2 + -0x5a0000);
    local_70 = local_70 + param_1[2];
    lStack_68 = lStack_68 + param_1[3];
    if ((char)param_1[0x11] != '\0') goto LAB_0106a890;
    uVar7 = *(uint *)(param_1 + 0xe);
    if (uVar7 != 0) {
      if (((ulong)((*(long *)(param_1[0xf] + (ulong)(uVar7 - 1) * 0x10) + 1) - local_70) < 3) &&
         ((ulong)((1 - lStack_68) + *(long *)(param_1[0xf] + (ulong)(uVar7 - 1) * 0x10 + 8)) < 3)) {
        return 0;
      }
    }
    uVar2 = *(uint *)((long)param_1 + 0x74);
                    /* try { // try from 0106a790 to 0116a797 has its CatchHandler @ 0106a918 */
    local_80 = 0;
                    /* try { // try from 0106a798 to 0116a7fb has its CatchHandler @ 0106a5c8 */
    if (uVar7 + 1 <= uVar2) goto LAB_0106a988;
    lVar8 = param_1[0x12];
    uVar9 = uVar2;
    do {
      uVar9 = uVar9 + (uVar9 >> 1) + 0x10;
    } while (uVar9 < uVar7 + 1);
    lVar6 = ft_mem_realloc(lVar8,0x10,uVar2,uVar9,param_1[0xf],&local_80);
    param_1[0xf] = lVar6;
    uVar4 = (ulong)local_80;
    if (local_80 != 0) goto LAB_0106a9b4;
    lVar8 = ft_mem_realloc(lVar8,1,uVar2,uVar9,param_1[0x10],&local_80);
                    /* try { // try from 0106a7fc to 0116a807 has its CatchHandler @ 0106a924 */
    param_1[0x10] = lVar8;
joined_r0x0106a808:
    uVar4 = (ulong)local_80;
    if (local_80 != 0) goto LAB_0106a9b4;
    uVar7 = *(uint *)(param_1 + 0xe);
    *(uint *)((long)param_1 + 0x74) = uVar9;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 1) {
        return 0;
      }
      *param_1 = param_2;
      param_1[1] = param_2 + 0xb40000;
      uVar4 = FUN_0106c540(param_1,0);
      return uVar4;
    }
    lVar8 = param_1[0xd];
                    /* try { // try from 0106a4d8 to 0116a4df has its CatchHandler @ 0106a5a0 */
    FT_Vector_From_Polar(&local_80,lVar8,param_2 + 0x5a0000);
                    /* try { // try from 0106a4e4 to 0116a4eb has its CatchHandler @ 0106a5a4 */
    FT_Vector_From_Polar(&local_70,lVar8,param_2);
                    /* try { // try from 0106a4f4 to 0116a4fb has its CatchHandler @ 0106a59c */
    local_70 = CONCAT44(uStack_7c,local_80) + param_1[2] + local_70;
    lStack_68 = local_78 + param_1[3] + lStack_68;
    if ((char)param_1[0x11] == '\0') {
                    /* try { // try from 0106a610 to 0116a61f has its CatchHandler @ 0106a934 */
      uVar7 = *(uint *)(param_1 + 0xe);
      if (uVar7 == 0) {
LAB_0106a654:
        uVar2 = *(uint *)((long)param_1 + 0x74);
        local_54 = 0;
        if (uVar2 < uVar7 + 1) {
          lVar6 = param_1[0x12];
          uVar9 = uVar2;
          do {
            uVar9 = uVar9 + (uVar9 >> 1) + 0x10;
          } while (uVar9 < uVar7 + 1);
          lVar5 = ft_mem_realloc(lVar6,0x10,uVar2,uVar9,param_1[0xf],&local_54);
          param_1[0xf] = lVar5;
          uVar4 = (ulong)local_54;
          if (local_54 != 0) goto LAB_0106a9b4;
                    /* try { // try from 0106a6b0 to 0116a6b7 has its CatchHandler @ 0106a91c */
                    /* try { // try from 0106a6b8 to 0116a78f has its CatchHandler @ 0106a5c8 */
          lVar6 = ft_mem_realloc(lVar6,1,uVar2,uVar9,param_1[0x10],&local_54);
          param_1[0x10] = lVar6;
          uVar4 = (ulong)local_54;
          if (local_54 != 0) goto LAB_0106a9b4;
          uVar7 = *(uint *)(param_1 + 0xe);
          *(uint *)((long)param_1 + 0x74) = uVar9;
        }
        else {
          lVar6 = param_1[0x10];
        }
        plVar3 = (long *)(param_1[0xf] + (ulong)uVar7 * 0x10);
        plVar3[1] = lStack_68;
        *plVar3 = local_70;
                    /* try { // try from 0106a828 to 0116a84f has its CatchHandler @ 0106a944 */
        *(undefined1 *)(lVar6 + (ulong)uVar7) = 1;
        *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
        goto LAB_0106a838;
      }
      if ((2 < (ulong)((*(long *)(param_1[0xf] + (ulong)(uVar7 - 1) * 0x10) + 1) - local_70)) ||
         (2 < (ulong)((1 - lStack_68) + *(long *)(param_1[0xf] + (ulong)(uVar7 - 1) * 0x10 + 8))))
      goto LAB_0106a654;
    }
    else {
                    /* try { // try from 0106a52c to 0116a533 has its CatchHandler @ 0106a5a4 */
      plVar3 = (long *)(param_1[0xf] + (ulong)((int)param_1[0xe] - 1) * 0x10);
      plVar3[1] = lStack_68;
      *plVar3 = local_70;
LAB_0106a838:
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
    FT_Vector_From_Polar(&local_80,lVar8,param_2 + -0x5a0000);
                    /* try { // try from 0106a858 to 0116a86b has its CatchHandler @ 0106a920 */
    FT_Vector_From_Polar(&local_70,lVar8,param_2);
                    /* try { // try from 0106a86c to 0116a8ff has its CatchHandler @ 0106a5c8 */
    local_70 = param_1[2] + CONCAT44(uStack_7c,local_80) + local_70;
    lStack_68 = param_1[3] + local_78 + lStack_68;
    if ((char)param_1[0x11] != '\0') {
LAB_0106a890:
      uVar4 = 0;
      plVar3 = (long *)(param_1[0xf] + (ulong)((int)param_1[0xe] - 1) * 0x10);
      plVar3[1] = lStack_68;
      *plVar3 = local_70;
      goto LAB_0106a9b4;
    }
    uVar7 = *(uint *)(param_1 + 0xe);
    if (uVar7 != 0) {
      if (((ulong)((*(long *)(param_1[0xf] + (ulong)(uVar7 - 1) * 0x10) + 1) - local_70) < 3) &&
         ((ulong)((1 - lStack_68) + *(long *)(param_1[0xf] + (ulong)(uVar7 - 1) * 0x10 + 8)) < 3)) {
        return 0;
      }
    }
    uVar2 = *(uint *)((long)param_1 + 0x74);
                    /* try { // try from 0106a900 to 0116a907 has its CatchHandler @ 0106a91c */
    local_54 = 0;
                    /* try { // try from 0106a908 to 0116a917 has its CatchHandler @ 0106a918 */
    if (uVar2 < uVar7 + 1) {
      lVar8 = param_1[0x12];
      uVar9 = uVar2;
      do {
                    /* catch() { ... } // from try @ 0106a790 with catch @ 0106a918
                       catch() { ... } // from try @ 0106a908 with catch @ 0106a918
                       try { // try from 0106a918 to 0116a997 has its CatchHandler @ 0106a5c8 */
        uVar9 = uVar9 + (uVar9 >> 1) + 0x10;
                    /* catch() { ... } // from try @ 0106a6b0 with catch @ 0106a91c
                       catch() { ... } // from try @ 0106a900 with catch @ 0106a91c */
                    /* catch() { ... } // from try @ 0106a858 with catch @ 0106a920 */
      } while (uVar9 < uVar7 + 1);
                    /* catch() { ... } // from try @ 0106a7fc with catch @ 0106a924 */
                    /* catch() { ... } // from try @ 0106a610 with catch @ 0106a934 */
      lVar6 = ft_mem_realloc(lVar8,0x10,uVar2,uVar9,param_1[0xf],&local_54);
                    /* catch() { ... } // from try @ 0106a828 with catch @ 0106a944 */
      param_1[0xf] = lVar6;
      uVar4 = (ulong)local_54;
      if (local_54 != 0) goto LAB_0106a9b4;
      lVar8 = ft_mem_realloc(lVar8,1,uVar2,uVar9,param_1[0x10],&local_54);
      param_1[0x10] = lVar8;
      local_80 = local_54;
      goto joined_r0x0106a808;
    }
LAB_0106a988:
    lVar8 = param_1[0x10];
  }
                    /* try { // try from 0106a998 to 0116a9fb has its CatchHandler @ 0106a998
                       catch() { ... } // from try @ 0106a998 with catch @ 0106a998
                       catch() { ... } // from try @ 0106ab84 with catch @ 0106a998 */
  uVar4 = 0;
  plVar3 = (long *)(param_1[0xf] + (ulong)uVar7 * 0x10);
  plVar3[1] = lStack_68;
  *plVar3 = local_70;
  *(undefined1 *)(lVar8 + (ulong)uVar7) = 1;
  *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
LAB_0106a9b4:
  *(undefined1 *)(param_1 + 0x11) = 0;
  return uVar4;
}

