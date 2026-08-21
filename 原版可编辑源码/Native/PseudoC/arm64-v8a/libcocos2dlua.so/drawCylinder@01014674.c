
/* btIDebugDraw::drawCylinder(float, float, int, btTransform const&, btVector3 const&) */

void __thiscall
btIDebugDraw::drawCylinder
          (btIDebugDraw *this,float param_1,float param_2,int param_3,btTransform *param_4,
          btVector3 *param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  float fVar15;
  undefined4 in_register_00005004;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  float local_128;
  undefined4 local_124;
  float local_120;
  float fStack_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float fStack_10c;
  float local_108;
  undefined4 local_104;
  float local_100 [2];
  ulong local_f8;
  float local_f0 [2];
  ulong local_e8;
  float local_e0 [12];
  long local_b0;
  
  uVar16 = CONCAT44(in_register_00005004,param_1);
  lVar1 = tpidr_el0;
  local_b0 = *(long *)(lVar1 + 0x28);
  fVar24 = *(float *)(param_4 + 0x30);
  fVar25 = *(float *)(param_4 + 0x34);
  fVar26 = *(float *)(param_4 + 0x38);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01014784 with catch @ 01014700
                       catch(type#1 @ 00000000) { ... } // from try @ 010147dc with catch @ 01014700
                       catch(type#1 @ 00000000) { ... } // from try @ 01014820 with catch @ 01014700
                        */
  lVar14 = (long)((param_3 + 1) % 3);
  lVar11 = (long)((param_3 + 2) % 3);
  uVar13 = 0;
  uVar12 = -(ulong)((uint)param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_3 << 2;
  local_e0[8] = 0.0;
  local_e0[9] = 0.0;
  local_e0[10] = 0.0;
  local_e0[0xb] = 0.0;
  *(float *)((long)local_e0 + uVar12 + 0x20) = param_2;
  local_e0[4] = 0.0;
  local_e0[5] = 0.0;
  local_e0[6] = 0.0;
  local_e0[7] = 0.0;
  *(float *)((long)local_e0 + uVar12 + 0x10) = -param_2;
  local_e0[0] = 0.0;
  local_e0[1] = 0.0;
  local_e0[2] = 0.0;
  local_e0[3] = 0.0;
  *(float *)((long)local_e0 + uVar12) = param_2;
  do {
    sincosf((float)(int)uVar13 * 0.017453292,&fStack_134,&local_138);
                    /* try { // try from 01014778 to 01114783 has its CatchHandler @ 010147fc */
                    /* try { // try from 01014784 to 011147cf has its CatchHandler @ 01014700 */
    local_e0[lVar14 + 4] = fStack_134 * param_1;
    local_e0[lVar14] = fStack_134 * param_1;
    local_e0[lVar11 + 4] = local_138 * param_1;
    local_e0[lVar11] = local_138 * param_1;
                    /* try { // try from 010147d0 to 011147db has its CatchHandler @ 01014828 */
                    /* try { // try from 010147dc to 01114813 has its CatchHandler @ 01014700 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01014778 with catch @ 010147fc
                        */
                    /* try { // try from 01014814 to 01114817 has its CatchHandler @ 01014818 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01014814 with catch @ 01014818
                        */
                    /* try { // try from 0101481c to 0111481f has its CatchHandler @ 01014824 */
                    /* try { // try from 01014820 to 0111483b has its CatchHandler @ 01014700 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0101481c with catch @ 01014824
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010147d0 with catch @ 01014828
                        */
    local_f0[1] = fVar25 + local_e0[4] * *(float *)(param_4 + 0x10) +
                           local_e0[5] * *(float *)(param_4 + 0x14) +
                           local_e0[6] * *(float *)(param_4 + 0x18);
    local_f0[0] = fVar24 + *(float *)param_4 * local_e0[4] + *(float *)(param_4 + 4) * local_e0[5] +
                           *(float *)(param_4 + 8) * local_e0[6];
    local_e8 = (ulong)(uint)(fVar26 + local_e0[4] * *(float *)(param_4 + 0x20) +
                                      local_e0[5] * *(float *)(param_4 + 0x24) +
                                      local_e0[6] * *(float *)(param_4 + 0x28));
    local_100[1] = fVar25 + *(float *)(param_4 + 0x10) * local_e0[0] +
                            *(float *)(param_4 + 0x14) * local_e0[1] +
                            *(float *)(param_4 + 0x18) * local_e0[2];
    local_100[0] = fVar24 + *(float *)param_4 * local_e0[0] + *(float *)(param_4 + 4) * local_e0[1]
                            + *(float *)(param_4 + 8) * local_e0[2];
    local_f8 = (ulong)(uint)(fVar26 + *(float *)(param_4 + 0x20) * local_e0[0] +
                                      *(float *)(param_4 + 0x24) * local_e0[1] +
                                      *(float *)(param_4 + 0x28) * local_e0[2]);
    (**(code **)(*(long *)this + 0x10))(this,local_f0,local_100,param_5);
    uVar13 = uVar13 + 0x1e;
  } while (uVar13 < 0x168);
  local_f0[0] = 0.0;
  local_f0[1] = 0.0;
  local_e8 = 0;
  local_f0[param_3] = 1.0;
  local_100[0] = 0.0;
  local_100[1] = 0.0;
  local_f8 = 0;
  local_100[lVar14] = 1.0;
  fVar8 = local_e0[8];
  fVar9 = local_e0[9];
  fVar15 = *(float *)param_4;
  fVar17 = *(float *)(param_4 + 4);
  fVar19 = *(float *)(param_4 + 0x10);
  fVar20 = *(float *)(param_4 + 0x14);
  fVar22 = *(float *)(param_4 + 0x20);
  fVar23 = *(float *)(param_4 + 0x24);
  fVar5 = local_f0[0];
  fVar6 = local_f0[1];
  fVar2 = local_100[0];
  fVar3 = local_100[1];
  fVar10 = local_e0[10];
  fVar27 = *(float *)(param_4 + 8);
  fVar18 = *(float *)(param_4 + 0x18);
  fVar21 = *(float *)(param_4 + 0x28);
  fVar7 = (float)local_e8;
  fVar4 = (float)local_f8;
  local_120 = fVar15 * local_f0[0] + fVar17 * local_f0[1] + fVar27 * (float)local_e8;
  fStack_11c = fVar19 * local_f0[0] + fVar20 * local_f0[1] + fVar18 * (float)local_e8;
  local_118 = fVar22 * local_f0[0] + fVar23 * local_f0[1] + fVar21 * (float)local_e8;
  fStack_12c = fVar19 * local_100[0] + fVar20 * local_100[1] + fVar18 * (float)local_f8;
  local_130 = fVar15 * local_100[0] + fVar17 * local_100[1] + fVar27 * (float)local_f8;
  local_128 = fVar22 * local_100[0] + fVar23 * local_100[1] + fVar21 * (float)local_f8;
  local_110 = fVar24 - (fVar15 * local_e0[8] + fVar17 * local_e0[9] + fVar27 * local_e0[10]);
  fStack_10c = fVar25 - (local_e0[8] * fVar19 + local_e0[9] * fVar20 + local_e0[10] * fVar18);
  local_108 = fVar26 - (local_e0[8] * fVar22 + local_e0[9] * fVar23 + local_e0[10] * fVar21);
  local_104 = 0;
  local_114 = 0;
  local_124 = 0;
  (**(code **)(*(long *)this + 0x78))
            (uVar16,uVar16,0,0x40c90fdb,0x41200000,this,&local_110,&local_120,&local_130,param_5,0);
  fVar27 = *(float *)(param_4 + 8);
  fVar20 = *(float *)(param_4 + 0x18);
  fVar23 = *(float *)(param_4 + 0x28);
  fVar15 = *(float *)param_4;
  fVar17 = *(float *)(param_4 + 4);
  fVar18 = *(float *)(param_4 + 0x10);
  fVar19 = *(float *)(param_4 + 0x14);
  fVar21 = *(float *)(param_4 + 0x20);
  fVar22 = *(float *)(param_4 + 0x24);
                    /* try { // try from 01014ad0 to 01114b2f has its CatchHandler @ 01014ad0
                       catch() { ... } // from try @ 01014ad0 with catch @ 01014ad0
                       catch() { ... } // from try @ 01014b3c with catch @ 01014ad0 */
  local_120 = fVar5 * fVar15 + fVar6 * fVar17 + fVar7 * fVar27;
  fStack_11c = fVar5 * fVar18 + fVar6 * fVar19 + fVar7 * fVar20;
  local_118 = fVar5 * fVar21 + fVar6 * fVar22 + fVar7 * fVar23;
  local_130 = fVar2 * fVar15 + fVar3 * fVar17 + fVar4 * fVar27;
  fStack_12c = fVar2 * fVar18 + fVar3 * fVar19 + fVar4 * fVar20;
  local_128 = fVar2 * fVar21 + fVar3 * fVar22 + fVar4 * fVar23;
  local_110 = fVar24 + fVar8 * fVar15 + fVar9 * fVar17 + fVar10 * fVar27;
  fStack_10c = fVar25 + fVar8 * fVar18 + fVar9 * fVar19 + fVar10 * fVar20;
  local_108 = fVar26 + fVar8 * fVar21 + fVar9 * fVar22 + fVar10 * fVar23;
  local_104 = 0;
  local_114 = 0;
  local_124 = 0;
                    /* try { // try from 01014b30 to 01114b3b has its CatchHandler @ 01014b60 */
                    /* try { // try from 01014b3c to 01114b73 has its CatchHandler @ 01014ad0 */
  (**(code **)(*(long *)this + 0x78))
            (uVar16,uVar16,0,0x40c90fdb,0x41200000,this,&local_110,&local_120,&local_130,param_5,0);
                    /* catch() { ... } // from try @ 01014b30 with catch @ 01014b60 */
  if (*(long *)(lVar1 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

