
int FUN_0106c540(long *param_1,int param_2)

{
  long *plVar1;
  uint *puVar2;
  long *plVar3;
  uint *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  int iStack_64;
  
  lVar17 = param_1[0xd];
  lVar14 = (long)param_2;
  lVar9 = FT_Angle_Diff(*param_1,param_1[1]);
  lVar16 = lVar14 * -0xb40000 + *param_1 + 0x5a0000;
  lVar19 = (lVar14 * 0xb40000 + -0x5a0000) * 2;
  if (lVar9 != 0xb40000) {
    lVar19 = lVar9;
  }
  FT_Vector_From_Polar(&local_80,lVar17,lVar16);
  local_80 = local_80 + param_1[2];
  lStack_78 = lStack_78 + param_1[3];
  if (lVar19 == 0) {
    iStack_64 = 0;
    plVar18 = param_1 + lVar14 * 6 + 0x11;
  }
  else {
                    /* try { // try from 0106c5dc to 0116c5e3 has its CatchHandler @ 0106c5fc */
    lVar9 = (lVar19 >> 0x3f & 0xffffffffff4c0000U) + 0x5a0000;
                    /* try { // try from 0106c5e4 to 0116c60f has its CatchHandler @ 0106c4b4 */
    puVar2 = (uint *)((long)param_1 + lVar14 * 0x30 + 0x74);
                    /* catch() { ... } // from try @ 0106c5dc with catch @ 0106c5fc */
    plVar3 = param_1 + lVar14 * 6 + 0xf;
    puVar4 = (uint *)(param_1 + lVar14 * 6 + 0xe);
    plVar5 = param_1 + lVar14 * 6 + 0x10;
    plVar18 = param_1 + lVar14 * 6 + 0x11;
                    /* try { // try from 0106c610 to 0116c65b has its CatchHandler @ 0106c610
                       catch() { ... } // from try @ 0106c610 with catch @ 0106c610
                       catch() { ... } // from try @ 0106c774 with catch @ 0106c610 */
    do {
      lVar7 = lVar19;
      if (lVar19 < -0x59ffff) {
        lVar7 = -0x5a0000;
      }
      if (0x59ffff < lVar7) {
        lVar7 = 0x5a0000;
      }
      lVar6 = lVar7 + lVar16;
      lVar11 = -lVar7;
      if (-1 < lVar7) {
        lVar11 = lVar7;
      }
      FT_Vector_From_Polar(&local_90,lVar17,lVar6);
                    /* try { // try from 0106c65c to 0116c673 has its CatchHandler @ 0106c8c0 */
      local_90 = local_90 + param_1[2];
      lStack_88 = lStack_88 + param_1[3];
      lVar10 = FT_Sin(lVar11 >> 1);
                    /* try { // try from 0106c67c to 0116c68f has its CatchHandler @ 0106c820 */
      lVar11 = FT_Cos(lVar11 >> 1);
      uVar12 = FT_MulDiv(lVar17,lVar10 << 2,lVar11 * 3 + 0x30000);
                    /* try { // try from 0106c694 to 0116c6b7 has its CatchHandler @ 0106c838 */
      FT_Vector_From_Polar(&local_a0,uVar12,lVar16 + lVar9);
      local_a0 = local_a0 + local_80;
      lStack_98 = lStack_98 + lStack_78;
      FT_Vector_From_Polar(&local_b0,uVar12,lVar6 - lVar9);
                    /* try { // try from 0106c6cc to 0116c6df has its CatchHandler @ 0106c81c */
      local_b0 = local_b0 + local_90;
      lStack_a8 = lStack_a8 + lStack_88;
      uVar13 = *puVar4;
      uVar8 = *puVar2;
      iStack_64 = 0;
      if (uVar8 < uVar13 + 3) {
        lVar16 = param_1[lVar14 * 6 + 0x12];
        uVar15 = uVar8;
        do {
          uVar15 = uVar15 + (uVar15 >> 1) + 0x10;
        } while (uVar15 < uVar13 + 3);
        lVar11 = ft_mem_realloc(lVar16,0x10,uVar8,uVar15,*plVar3,&iStack_64);
        *plVar3 = lVar11;
        if (iStack_64 == 0) {
          lVar16 = ft_mem_realloc(lVar16,1,uVar8,uVar15,*plVar5,&iStack_64);
          *plVar5 = lVar16;
          if (iStack_64 == 0) {
            *puVar2 = uVar15;
            uVar13 = *puVar4;
            goto LAB_0106c790;
          }
        }
        *(undefined1 *)plVar18 = 0;
        goto LAB_0106c80c;
      }
      lVar16 = *plVar5;
LAB_0106c790:
      lVar19 = lVar19 - lVar7;
      plVar1 = (long *)(*plVar3 + (ulong)uVar13 * 0x10);
      plVar1[1] = lStack_98;
      *plVar1 = local_a0;
      plVar1[3] = lStack_a8;
      plVar1[2] = local_b0;
      plVar1[5] = lStack_88;
      plVar1[4] = local_90;
      *(undefined2 *)(lVar16 + (ulong)uVar13) = 0x202;
      *(undefined1 *)((undefined2 *)(lVar16 + (ulong)uVar13) + 1) = 1;
      *puVar4 = *puVar4 + 3;
      *(undefined1 *)plVar18 = 0;
      lStack_78 = lStack_88;
      local_80 = local_90;
      lVar16 = lVar6;
    } while (lVar19 != 0);
    iStack_64 = 0;
  }
LAB_0106c80c:
  *(undefined1 *)plVar18 = 0;
  return iStack_64;
}

