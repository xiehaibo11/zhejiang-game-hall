
/* btIDebugDraw::drawCone(float, float, int, btTransform const&, btVector3 const&) */

void btIDebugDraw::drawCone
               (float param_1,float param_2,int param_3,btTransform *param_4,btVector3 *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 in_register_00005004;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float local_138;
  undefined4 local_134;
  float local_130;
  float fStack_12c;
  float local_128;
  undefined4 local_124;
  float local_120;
  float fStack_11c;
  float local_118;
  undefined4 local_114;
  float local_110 [2];
  ulong local_108;
  float local_100 [2];
  ulong local_f8;
  float local_f0 [16];
  long local_b0;
  
  plVar4 = (long *)(ulong)(uint)param_3;
  lVar3 = tpidr_el0;
  iVar5 = (int)param_4;
                    /* catch() { ... } // from try @ 01014c5c with catch @ 01014bd8 */
  local_b0 = *(long *)(lVar3 + 0x28);
  uVar6 = -((ulong)param_4 >> 0x1f & 1) & 0xfffffffc00000000 | ((ulong)param_4 & 0xffffffff) << 2;
                    /* try { // try from 01014c0c to 01114c13 has its CatchHandler @ 01014cc8 */
  iVar1 = (iVar5 + 1) % 3;
  fVar8 = *(float *)(param_5 + 0x30);
  fVar9 = *(float *)(param_5 + 0x34);
  fVar10 = *(float *)(param_5 + 0x38);
  local_f0[0xc] = 0.0;
  local_f0[0xd] = 0.0;
  local_f0[0xe] = 0.0;
  local_f0[0xf] = 0.0;
  *(float *)((long)local_f0 + uVar6 + 0x30) = param_2 * 0.5;
  fVar12 = local_f0[0xc];
  fVar14 = local_f0[0xd];
  fVar16 = local_f0[0xe];
  iVar2 = (iVar5 + 2) % 3;
                    /* try { // try from 01014c50 to 01114c5b has its CatchHandler @ 01014cb8 */
                    /* try { // try from 01014c5c to 01114ce3 has its CatchHandler @ 01014bd8 */
  uVar7 = 0;
  local_f0[8] = 0.0;
  local_f0[9] = 0.0;
  local_f0[10] = 0.0;
  local_f0[0xb] = 0.0;
  local_f0[(long)iVar1 + 8] = param_1;
  local_f0[4] = 0.0;
  local_f0[5] = 0.0;
  local_f0[6] = 0.0;
  local_f0[7] = 0.0;
  local_f0[0] = 0.0;
  local_f0[1] = 0.0;
  local_f0[2] = 0.0;
  local_f0[3] = 0.0;
  *(float *)((long)local_f0 + uVar6) = param_2 * -0.5;
  local_f0[(long)iVar2 + 4] = param_1;
  do {
    sincosf((float)(int)uVar7 * 0.017453292,&fStack_144,&local_148);
                    /* catch() { ... } // from try @ 01014c50 with catch @ 01014cb8 */
    local_f0[iVar1] = fStack_144 * param_1;
                    /* catch() { ... } // from try @ 01014c0c with catch @ 01014cc8 */
    local_f0[iVar2] = local_148 * param_1;
    local_100[1] = fVar9 + fVar12 * *(float *)(param_5 + 0x10) + fVar14 * *(float *)(param_5 + 0x14)
                           + fVar16 * *(float *)(param_5 + 0x18);
    local_100[0] = fVar8 + *(float *)param_5 * fVar12 + *(float *)(param_5 + 4) * fVar14 +
                           *(float *)(param_5 + 8) * fVar16;
    local_f8 = (ulong)(uint)(fVar10 + fVar12 * *(float *)(param_5 + 0x20) +
                                      fVar14 * *(float *)(param_5 + 0x24) +
                                      fVar16 * *(float *)(param_5 + 0x28));
    local_110[1] = fVar9 + *(float *)(param_5 + 0x10) * local_f0[0] +
                           *(float *)(param_5 + 0x14) * local_f0[1] +
                           *(float *)(param_5 + 0x18) * local_f0[2];
    local_110[0] = fVar8 + *(float *)param_5 * local_f0[0] + *(float *)(param_5 + 4) * local_f0[1] +
                           *(float *)(param_5 + 8) * local_f0[2];
    local_108 = (ulong)(uint)(fVar10 + *(float *)(param_5 + 0x20) * local_f0[0] +
                                       *(float *)(param_5 + 0x24) * local_f0[1] +
                                       *(float *)(param_5 + 0x28) * local_f0[2]);
    (**(code **)(*plVar4 + 0x10))(plVar4,local_100,local_110);
    uVar7 = uVar7 + 0x1e;
  } while (uVar7 < 0x168);
  fVar11 = local_f0[8];
  fVar13 = local_f0[9];
  fVar15 = local_f0[10];
  fVar17 = local_f0[8] - fVar12;
  fVar18 = local_f0[9] - fVar14;
  fVar19 = local_f0[10] - fVar16;
  local_100[1] = fVar9 + fVar12 * *(float *)(param_5 + 0x10) + fVar14 * *(float *)(param_5 + 0x14) +
                         fVar16 * *(float *)(param_5 + 0x18);
  local_100[0] = fVar8 + *(float *)param_5 * fVar12 + *(float *)(param_5 + 4) * fVar14 +
                         *(float *)(param_5 + 8) * fVar16;
  local_f8 = (ulong)(uint)(fVar10 + fVar12 * *(float *)(param_5 + 0x20) +
                                    fVar14 * *(float *)(param_5 + 0x24) +
                                    fVar16 * *(float *)(param_5 + 0x28));
  local_110[1] = fVar9 + *(float *)(param_5 + 0x10) * fVar17 + *(float *)(param_5 + 0x14) * fVar18 +
                         *(float *)(param_5 + 0x18) * fVar19;
  local_110[0] = fVar8 + *(float *)param_5 * fVar17 + *(float *)(param_5 + 4) * fVar18 +
                         *(float *)(param_5 + 8) * fVar19;
  local_108 = (ulong)(uint)(fVar10 + *(float *)(param_5 + 0x20) * fVar17 +
                                     *(float *)(param_5 + 0x24) * fVar18 +
                                     *(float *)(param_5 + 0x28) * fVar19);
  (**(code **)(*plVar4 + 0x10))(plVar4,local_100,local_110);
  fVar11 = -fVar12 - fVar11;
  fVar13 = -fVar14 - fVar13;
  fVar15 = -fVar16 - fVar15;
  local_100[1] = fVar9 + fVar12 * *(float *)(param_5 + 0x10) + fVar14 * *(float *)(param_5 + 0x14) +
                         fVar16 * *(float *)(param_5 + 0x18);
  local_100[0] = fVar8 + *(float *)param_5 * fVar12 + *(float *)(param_5 + 4) * fVar14 +
                         *(float *)(param_5 + 8) * fVar16;
  local_f8 = (ulong)(uint)(fVar10 + fVar12 * *(float *)(param_5 + 0x20) +
                                    fVar14 * *(float *)(param_5 + 0x24) +
                                    fVar16 * *(float *)(param_5 + 0x28));
  local_110[1] = fVar9 + fVar11 * *(float *)(param_5 + 0x10) + fVar13 * *(float *)(param_5 + 0x14) +
                         fVar15 * *(float *)(param_5 + 0x18);
  local_110[0] = fVar8 + *(float *)param_5 * fVar11 + *(float *)(param_5 + 4) * fVar13 +
                         *(float *)(param_5 + 8) * fVar15;
  local_108 = (ulong)(uint)(fVar10 + fVar11 * *(float *)(param_5 + 0x20) +
                                     fVar13 * *(float *)(param_5 + 0x24) +
                                     fVar15 * *(float *)(param_5 + 0x28));
  (**(code **)(*plVar4 + 0x10))(plVar4,local_100,local_110);
  fVar11 = local_f0[0xc];
  fVar13 = local_f0[0xd];
  fVar12 = local_f0[4];
  fVar14 = local_f0[5];
  fVar15 = local_f0[0xe];
  fVar16 = local_f0[6];
  fVar17 = local_f0[4] - local_f0[0xc];
  fVar18 = local_f0[5] - local_f0[0xd];
  fVar19 = local_f0[6] - local_f0[0xe];
  local_100[1] = fVar9 + local_f0[0xc] * *(float *)(param_5 + 0x10) +
                         local_f0[0xd] * *(float *)(param_5 + 0x14) +
                         local_f0[0xe] * *(float *)(param_5 + 0x18);
  local_100[0] = fVar8 + *(float *)param_5 * local_f0[0xc] + *(float *)(param_5 + 4) * local_f0[0xd]
                         + *(float *)(param_5 + 8) * local_f0[0xe];
  local_f8 = (ulong)(uint)(fVar10 + local_f0[0xc] * *(float *)(param_5 + 0x20) +
                                    local_f0[0xd] * *(float *)(param_5 + 0x24) +
                                    local_f0[0xe] * *(float *)(param_5 + 0x28));
  local_110[1] = fVar9 + *(float *)(param_5 + 0x10) * fVar17 + *(float *)(param_5 + 0x14) * fVar18 +
                         *(float *)(param_5 + 0x18) * fVar19;
  local_110[0] = fVar8 + *(float *)param_5 * fVar17 + *(float *)(param_5 + 4) * fVar18 +
                         *(float *)(param_5 + 8) * fVar19;
  local_108 = (ulong)(uint)(fVar10 + *(float *)(param_5 + 0x20) * fVar17 +
                                     *(float *)(param_5 + 0x24) * fVar18 +
                                     *(float *)(param_5 + 0x28) * fVar19);
  (**(code **)(*plVar4 + 0x10))(plVar4,local_100,local_110);
  fVar12 = -fVar11 - fVar12;
  fVar14 = -fVar13 - fVar14;
  fVar16 = -fVar15 - fVar16;
  local_100[1] = fVar9 + fVar11 * *(float *)(param_5 + 0x10) + fVar13 * *(float *)(param_5 + 0x14) +
                         fVar15 * *(float *)(param_5 + 0x18);
  local_100[0] = fVar8 + *(float *)param_5 * fVar11 + *(float *)(param_5 + 4) * fVar13 +
                         *(float *)(param_5 + 8) * fVar15;
  local_f8 = (ulong)(uint)(fVar10 + fVar11 * *(float *)(param_5 + 0x20) +
                                    fVar13 * *(float *)(param_5 + 0x24) +
                                    fVar15 * *(float *)(param_5 + 0x28));
  local_110[1] = fVar9 + fVar12 * *(float *)(param_5 + 0x10) + fVar14 * *(float *)(param_5 + 0x14) +
                         fVar16 * *(float *)(param_5 + 0x18);
  local_110[0] = fVar8 + *(float *)param_5 * fVar12 + *(float *)(param_5 + 4) * fVar14 +
                         *(float *)(param_5 + 8) * fVar16;
  local_108 = (ulong)(uint)(fVar10 + fVar12 * *(float *)(param_5 + 0x20) +
                                     fVar14 * *(float *)(param_5 + 0x24) +
                                     fVar16 * *(float *)(param_5 + 0x28));
  (**(code **)(*plVar4 + 0x10))(plVar4,local_100,local_110);
  local_100[0] = 0.0;
  local_100[1] = 0.0;
  local_f8 = 0;
  local_110[0] = 0.0;
  local_110[1] = 0.0;
  local_108 = 0;
  local_100[iVar5] = 1.0;
  local_110[iVar1] = 1.0;
  fVar14 = *(float *)param_5;
  fVar16 = *(float *)(param_5 + 4);
  fVar11 = *(float *)(param_5 + 0x10);
  fVar13 = *(float *)(param_5 + 0x14);
  fVar17 = *(float *)(param_5 + 0x20);
  fVar18 = *(float *)(param_5 + 0x24);
  fVar12 = *(float *)(param_5 + 8);
  fVar15 = *(float *)(param_5 + 0x18);
  fVar19 = *(float *)(param_5 + 0x28);
                    /* try { // try from 01015224 to 0111529b has its CatchHandler @ 01015224
                       catch() { ... } // from try @ 01015224 with catch @ 01015224
                       catch() { ... } // from try @ 010152a4 with catch @ 01015224 */
  local_130 = fVar14 * local_100[0] + fVar16 * local_100[1] + fVar12 * (float)local_f8;
  fStack_12c = fVar11 * local_100[0] + fVar13 * local_100[1] + fVar15 * (float)local_f8;
  local_128 = fVar17 * local_100[0] + fVar18 * local_100[1] + fVar19 * (float)local_f8;
  local_140 = fVar14 * local_110[0] + fVar16 * local_110[1] + fVar12 * (float)local_108;
  fStack_13c = fVar11 * local_110[0] + fVar13 * local_110[1] + fVar15 * (float)local_108;
  local_138 = fVar17 * local_110[0] + fVar18 * local_110[1] + fVar19 * (float)local_108;
  local_120 = fVar8 - (fVar14 * local_f0[0xc] + fVar16 * local_f0[0xd] + fVar12 * local_f0[0xe]);
                    /* try { // try from 0101529c to 011152a3 has its CatchHandler @ 01015308 */
  fStack_11c = fVar9 - (local_f0[0xc] * fVar11 + local_f0[0xd] * fVar13 + local_f0[0xe] * fVar15);
  local_118 = fVar10 - (local_f0[0xc] * fVar17 + local_f0[0xd] * fVar18 + local_f0[0xe] * fVar19);
                    /* try { // try from 010152a4 to 0111533f has its CatchHandler @ 01015224 */
  local_114 = 0;
  local_124 = 0;
  local_134 = 0;
  (**(code **)(*plVar4 + 0x78))
            (CONCAT44(in_register_00005004,param_1),CONCAT44(in_register_00005004,param_1),0,
             0x40c90fdb,0x41200000,plVar4,&local_120,&local_130,&local_140);
                    /* catch() { ... } // from try @ 0101529c with catch @ 01015308 */
  if (*(long *)(lVar3 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

