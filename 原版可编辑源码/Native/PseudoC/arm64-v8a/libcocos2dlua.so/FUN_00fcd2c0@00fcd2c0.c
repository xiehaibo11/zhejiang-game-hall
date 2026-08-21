
void FUN_00fcd2c0(long *param_1,int *param_2,ulong param_3,ulong param_4,ulong param_5,int param_6)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ushort *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint local_48 [4];
  uint uStack_38;
  uint local_34;
  uint local_30;
  uint uStack_2c;
  uint local_28 [4];
  long local_18;
  
  uVar12 = (uint)(param_5 >> 0x20);
  uVar11 = (uint)param_5;
  lVar8 = tpidr_el0;
  local_18 = *(long *)(lVar8 + 0x28);
  puVar14 = (ushort *)*param_1;
                    /* try { // try from 00fcd2e0 to 010cd2e7 has its CatchHandler @ 00fcd390 */
  uVar13 = 0;
  if ((param_4 & 1) == 0) {
    uVar13 = 0xff000000;
  }
  uVar5 = *puVar14;
  *param_1 = (long)(puVar14 + 1);
  uVar4 = puVar14[1];
  *param_1 = (long)(puVar14 + 2);
                    /* try { // try from 00fcd304 to 010cd30b has its CatchHandler @ 00fcd38c */
                    /* try { // try from 00fcd30c to 010cd37f has its CatchHandler @ 00fcd218 */
  uVar17 = ((uint)(byte)(uVar5 >> 8) | (uint)uVar5 << 0x13) & 0xf800f8;
  uVar19 = ((uint)(uVar4 >> 8) | (uint)uVar4 << 0x13) & 0xf800f8;
  uVar9 = (uVar5 & 0x7e0) >> 1 & 0x300 | (uVar5 >> 5 & 0x3f) << 10;
  uVar15 = (uVar4 & 0x7e0) >> 1 & 0x300 | (uVar4 >> 5 & 0x3f) << 10;
  local_28[0] = uVar17 | uVar13 | uVar9;
  local_28[1] = uVar19 | uVar13 | uVar15;
  if (((uint)uVar4 < (uint)uVar5) || ((param_4 & 1) != 0)) {
                    /* try { // try from 00fcd380 to 010cd38b has its CatchHandler @ 00fcd3b0 */
                    /* catch() { ... } // from try @ 00fcd304 with catch @ 00fcd38c
                       try { // try from 00fcd38c to 010cd3cf has its CatchHandler @ 00fcd218 */
                    /* catch() { ... } // from try @ 00fcd2e0 with catch @ 00fcd390 */
    uVar16 = (uVar15 + uVar9 * 2) * 0x15 >> 6;
                    /* catch() { ... } // from try @ 00fcd25c with catch @ 00fcd3b0
                       catch() { ... } // from try @ 00fcd380 with catch @ 00fcd3b0 */
                    /* catch() { ... } // from try @ 00fcd2ac with catch @ 00fcd3b4 */
    uVar10 = (uVar19 + uVar17 * 2) * 0x15 >> 6 & 0xff00ff;
    local_28[3] = (uVar17 + uVar19 * 2) * 0x15 >> 6 & 0xff00ff | uVar13 |
                  (uVar9 + uVar15 * 2) * 0x15 >> 6 & 0xff00;
  }
  else {
    local_28[3] = 0;
    uVar10 = uVar19 + uVar17 >> 1;
    uVar16 = uVar15 + uVar9 >> 1;
  }
  local_28[2] = uVar10 + uVar13 + (uVar16 & 0xff00);
  uVar13 = *(uint *)(puVar14 + 2);
  *param_1 = (long)(puVar14 + 4);
  if (param_6 == 5) {
    local_48[0] = uVar11 & 0xff;
    local_48[1] = uVar11 >> 8 & 0xff;
    if (local_48[0] < local_48[1]) {
      local_30 = 0;
      uVar16 = (uint)((ulong)(local_48[0] + local_48[1] * 4) * 0xcccccccd >> 0x20);
      uVar19 = (uint)((ulong)(local_48[1] * 2 + local_48[0] * 3) * 0xcccccccd >> 0x20);
      uVar10 = (uint)((ulong)(local_48[1] * 3 + local_48[0] * 2) * 0xcccccccd >> 0x20);
      uStack_2c = 0xff;
      local_48[2] = (local_48[1] + local_48[0] * 4) / 5;
    }
    else {
                    /* try { // try from 00fcd650 to 010cd653 has its CatchHandler @ 00fcd668 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fcd650 with catch @ 00fcd668
                        */
      uVar6 = local_48[1] + local_48[0] * 6;
      uVar11 = local_48[1] * 2 + local_48[0] * 5;
      uVar7 = local_48[0] + local_48[1] * 6;
      uVar9 = local_48[1] * 3 + local_48[0] * 4;
      uVar15 = local_48[1] * 5 + local_48[0] * 2;
      uVar17 = local_48[1] * 4 + local_48[0] * 3;
      uVar20 = uVar6 / 7;
      uVar21 = uVar7 / 7;
                    /* try { // try from 00fcd6ac to 010cd6af has its CatchHandler @ 00fcd6cc */
      uVar19 = uVar11 / 7;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fcd6ac with catch @ 00fcd6cc
                        */
      uVar10 = uVar9 / 7;
      uVar16 = uVar17 / 7;
      uVar18 = uVar15 / 7;
      uVar19 = uVar19 + (uVar11 - uVar19 >> 1);
      uVar10 = uVar10 + (uVar9 - uVar10 >> 1);
      uVar16 = uVar16 + (uVar17 - uVar16 >> 1);
      local_48[2] = uVar20 + (uVar6 - uVar20 >> 1) >> 2;
      local_30 = uVar18 + (uVar15 - uVar18 >> 1) >> 2;
      uStack_2c = uVar21 + (uVar7 - uVar21 >> 1) >> 2;
    }
                    /* try { // try from 00fcd714 to 010cd717 has its CatchHandler @ 00fcd734 */
    local_48[3] = uVar19 >> 2 & 0xffff;
    uStack_38 = uVar10 >> 2 & 0xffff;
    local_34 = uVar16 >> 2 & 0xffff;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fcd714 with catch @ 00fcd734
                        */
    param_3 = param_3 & 0xffffffff;
    piVar1 = param_2 + param_3;
    *param_2 = local_28[(ulong)uVar13 & 3] +
               *(int *)((long)local_48 + ((param_5 & 0x50000) >> 0xe)) * 0x1000000;
    param_2[1] = local_28[(ulong)(uVar13 >> 2) & 3] +
                 *(int *)((long)local_48 + ((param_5 & 0x280000) >> 0x11)) * 0x1000000;
    param_2[2] = local_28[(ulong)(uVar13 >> 4) & 3] +
                 *(int *)((long)local_48 + ((param_5 & 0x1400000) >> 0x14)) * 0x1000000;
    param_2[3] = local_28[(ulong)(uVar13 >> 6) & 3] +
                 *(int *)((long)local_48 + ((param_5 & 0xa000000) >> 0x17)) * 0x1000000;
    *piVar1 = local_28[(ulong)(uVar13 >> 8) & 3] +
              *(int *)((long)local_48 + ((param_5 & 0x50000000) >> 0x1a)) * 0x1000000;
    piVar1[1] = local_28[(ulong)(uVar13 >> 10) & 3] +
                *(int *)((long)local_48 + (param_5 >> 0x1d & 0x14)) * 0x1000000;
    piVar1[2] = local_28[(ulong)(uVar13 >> 0xc) & 3] +
                *(int *)((long)local_48 + ((ulong)uVar12 & 0x14)) * 0x1000000;
                    /* catch() { ... } // from try @ 00fcd828 with catch @ 00fcd7f0 */
    piVar1[3] = local_28[(ulong)(uVar13 >> 0xe) & 3] +
                *(int *)((long)local_48 + ((ulong)(uVar12 >> 3) & 0x14)) * 0x1000000;
    piVar1 = piVar1 + param_3;
    piVar2 = piVar1 + param_3;
    *piVar1 = local_28[uVar13 >> 0x10 & 3] +
              *(int *)((long)local_48 + ((ulong)(uVar12 >> 6) & 0x14)) * 0x1000000;
                    /* try { // try from 00fcd820 to 010cd827 has its CatchHandler @ 00fcd8bc */
                    /* try { // try from 00fcd828 to 010cd8d7 has its CatchHandler @ 00fcd7f0 */
    piVar1[1] = local_28[uVar13 >> 0x12 & 3] +
                *(int *)((long)local_48 + ((ulong)(uVar12 >> 9) & 0x14)) * 0x1000000;
    piVar1[2] = local_28[uVar13 >> 0x14 & 3] +
                *(int *)((long)local_48 + ((ulong)(uVar12 >> 0xc) & 0x14)) * 0x1000000;
    piVar1[3] = local_28[uVar13 >> 0x16 & 3] +
                *(int *)((long)local_48 + ((ulong)(uVar12 >> 0xf) & 0x14)) * 0x1000000;
    *piVar2 = local_28[uVar13 >> 0x18 & 3] +
              *(int *)((long)local_48 + ((ulong)(uVar12 >> 0x12) & 0x14)) * 0x1000000;
    piVar2[1] = local_28[uVar13 >> 0x1a & 3] +
                *(int *)((long)local_48 + ((ulong)(uVar12 >> 0x15) & 0x14)) * 0x1000000;
    iVar3 = *(int *)((long)local_48 + ((ulong)(uVar12 >> 0x1b) & 0x14));
    uVar11 = local_28[uVar13 >> 0x1e];
    piVar2[2] = local_28[uVar13 >> 0x1c & 3] +
                *(int *)((long)local_48 + ((ulong)(uVar12 >> 0x18) & 0x14)) * 0x1000000;
    piVar2[3] = uVar11 + iVar3 * 0x1000000;
  }
  else {
    *param_2 = local_28[(ulong)uVar13 & 3] + (uVar11 << 0x1c | (uVar11 & 0xf) << 0x18);
    uVar16 = (uint)(param_5 >> 4);
    param_2[1] = local_28[(ulong)(uVar13 >> 2) & 3] + ((uVar11 & 0xf0) << 0x14 | uVar16 << 0x1c);
    param_3 = param_3 & 0xffffffff;
    uVar19 = (uint)(param_5 >> 8);
    param_2[2] = local_28[(ulong)(uVar13 >> 4) & 3] + ((uVar11 & 0xf00) << 0x10 | uVar19 << 0x1c);
    uVar10 = (uint)(param_5 >> 0xc);
                    /* catch() { ... } // from try @ 00fcd514 with catch @ 00fcd4d4 */
    param_2[3] = local_28[(ulong)(uVar13 >> 6) & 3] + ((uVar11 & 0xf000) << 0xc | uVar10 << 0x1c);
    uVar17 = (uint)(param_5 >> 0x10);
    param_2 = param_2 + param_3;
    *param_2 = local_28[(ulong)(uVar13 >> 8) & 3] + ((uVar11 & 0xf0000) << 8 | uVar17 << 0x1c);
                    /* try { // try from 00fcd50c to 010cd513 has its CatchHandler @ 00fcd5a0 */
    uVar15 = (uint)(param_5 >> 0x14);
                    /* try { // try from 00fcd514 to 010cd5bb has its CatchHandler @ 00fcd4d4 */
    param_2[1] = local_28[(ulong)(uVar13 >> 10) & 3] + ((uVar11 & 0xf00000) << 4 | uVar15 << 0x1c);
    uVar9 = (uint)(param_5 >> 0x18);
    param_2[2] = local_28[(ulong)(uVar13 >> 0xc) & 3] + (uVar11 & 0xf000000 | uVar9 << 0x1c);
    param_2[3] = local_28[(ulong)(uVar13 >> 0xe) & 3] + (uVar16 & 0xf000000 | uVar11 & 0xf0000000);
    param_2 = param_2 + param_3;
    *param_2 = local_28[uVar13 >> 0x10 & 3] + (uVar19 & 0xf000000 | uVar12 << 0x1c);
    param_2[1] = local_28[uVar13 >> 0x12 & 3] + (uVar10 & 0xf000000 | (uVar12 >> 4) << 0x1c);
                    /* catch() { ... } // from try @ 00fcd50c with catch @ 00fcd5a0 */
    param_2[2] = local_28[uVar13 >> 0x14 & 3] + (uVar17 & 0xf000000 | (uVar12 >> 8) << 0x1c);
    param_2[3] = local_28[uVar13 >> 0x16 & 3] + (uVar15 & 0xf000000 | (uVar12 >> 0xc) << 0x1c);
    param_2 = param_2 + param_3;
    *param_2 = local_28[uVar13 >> 0x18 & 3] + (uVar9 & 0xf000000 | (uVar12 >> 0x10) << 0x1c);
    param_2[1] = local_28[uVar13 >> 0x1a & 3] +
                 ((uint)(param_5 >> 0x1c) & 0xf000000 | (uVar12 >> 0x14) << 0x1c);
    param_2[2] = local_28[uVar13 >> 0x1c & 3] + (uVar12 & 0xf000000 | (uVar12 >> 0x18) << 0x1c);
    param_2[3] = local_28[uVar13 >> 0x1e] + ((uVar12 >> 0x1c) << 0x1c | (uVar12 >> 0x1c) << 0x18);
  }
                    /* catch() { ... } // from try @ 00fcd820 with catch @ 00fcd8bc */
  if (*(long *)(lVar8 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

