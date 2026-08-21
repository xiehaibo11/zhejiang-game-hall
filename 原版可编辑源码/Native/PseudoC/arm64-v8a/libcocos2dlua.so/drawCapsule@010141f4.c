
/* btIDebugDraw::drawCapsule(float, float, int, btTransform const&, btVector3 const&) */

void __thiscall
btIDebugDraw::drawCapsule
          (btIDebugDraw *this,float param_1,float param_2,int param_3,btTransform *param_4,
          btVector3 *param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 in_register_00005004;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined8 local_100;
  ulong uStack_f8;
  undefined8 local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  float fStack_b8;
  undefined4 uStack_b4;
  float local_b0 [8];
  long local_90;
  
                    /* catch() { ... } // from try @ 01013ff8 with catch @ 010141fc */
                    /* catch() { ... } // from try @ 01013f90 with catch @ 01014200 */
  lVar2 = tpidr_el0;
                    /* catch() { ... } // from try @ 0101402c with catch @ 01014220
                       catch() { ... } // from try @ 0101409c with catch @ 01014220 */
  uVar6 = -(ulong)((uint)param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_3 << 2;
  local_90 = *(long *)(lVar2 + 0x28);
  local_b0[4] = 0.0;
  local_b0[5] = 0.0;
  local_b0[6] = 0.0;
  local_b0[7] = 0.0;
  *(float *)((long)local_b0 + uVar6 + 0x10) = -param_2;
  local_b0[0] = 0.0;
  local_b0[1] = 0.0;
  local_b0[2] = 0.0;
  local_b0[3] = 0.0;
  *(float *)((long)local_b0 + uVar6) = param_2;
  uStack_e8 = *(undefined8 *)(param_4 + 8);
  local_f0 = *(undefined8 *)param_4;
                    /* catch() { ... } // from try @ 010142c4 with catch @ 0101427c */
  uStack_d8 = *(undefined8 *)(param_4 + 0x18);
  local_e0 = *(undefined8 *)(param_4 + 0x10);
  uStack_c8 = *(undefined8 *)(param_4 + 0x28);
  local_d0 = *(undefined8 *)(param_4 + 0x20);
                    /* try { // try from 010142a8 to 011142ab has its CatchHandler @ 010142dc */
                    /* try { // try from 010142b8 to 011142c3 has its CatchHandler @ 010142e0 */
  fStack_b8 = local_b0[4] * *(float *)(param_4 + 0x20) + local_b0[5] * *(float *)(param_4 + 0x24) +
              local_b0[6] * *(float *)(param_4 + 0x28) + *(float *)(param_4 + 0x38);
                    /* try { // try from 010142c4 to 01114313 has its CatchHandler @ 0101427c */
                    /* catch() { ... } // from try @ 010142a8 with catch @ 010142dc */
                    /* catch() { ... } // from try @ 010142b8 with catch @ 010142e0 */
  uVar1 = (param_3 + 1) % 3;
  uStack_b4 = 0;
  local_100 = CONCAT44(*(float *)(param_4 + 0x10) * local_b0[4] +
                       *(float *)(param_4 + 0x14) * local_b0[5] +
                       *(float *)(param_4 + 0x18) * local_b0[6] +
                       (float)((ulong)*(undefined8 *)(param_4 + 0x30) >> 0x20),
                       *(float *)param_4 * local_b0[4] + *(float *)(param_4 + 4) * local_b0[5] +
                       *(float *)(param_4 + 8) * local_b0[6] +
                       (float)*(undefined8 *)(param_4 + 0x30));
  local_c0 = local_100;
  uVar5 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  uStack_f8 = (ulong)(uint)fStack_b8;
  local_110 = *(undefined4 *)((long)&local_f0 + uVar5);
  uStack_10c = *(undefined4 *)((long)&local_e0 + uVar5);
  local_108 = *(undefined4 *)((long)&local_d0 + uVar5);
  local_120 = -*(float *)((long)&local_f0 + uVar6);
  fStack_11c = -*(float *)((long)&local_e0 + uVar6);
  local_118 = -*(float *)((long)&local_d0 + uVar6);
  uStack_104 = 0;
  local_114 = 0;
  (**(code **)(*(long *)this + 0x80))
            (CONCAT44(in_register_00005004,param_1),0xbfc90fdb,0x3fc90fdb,0xbfc90fdb,0x3fc90fdb,
             0x41f00000,this,&local_100,&local_110,&local_120,param_5,0);
  uStack_e8 = *(ulong *)(param_4 + 8);
  local_f0 = *(undefined8 *)param_4;
                    /* try { // try from 010143d8 to 01114513 has its CatchHandler @ 010143d8
                       catch() { ... } // from try @ 010143d8 with catch @ 010143d8
                       catch() { ... } // from try @ 0101451c with catch @ 010143d8 */
  uStack_d8 = *(undefined8 *)(param_4 + 0x18);
  local_e0 = *(undefined8 *)(param_4 + 0x10);
  uStack_c8 = *(undefined8 *)(param_4 + 0x28);
  local_d0 = *(undefined8 *)(param_4 + 0x20);
  fStack_b8 = local_b0[0] * *(float *)(param_4 + 0x20) + local_b0[1] * *(float *)(param_4 + 0x24) +
              local_b0[2] * *(float *)(param_4 + 0x28) + *(float *)(param_4 + 0x38);
  local_100 = CONCAT44(*(float *)(param_4 + 0x10) * local_b0[0] +
                       *(float *)(param_4 + 0x14) * local_b0[1] +
                       *(float *)(param_4 + 0x18) * local_b0[2] +
                       (float)((ulong)*(undefined8 *)(param_4 + 0x30) >> 0x20),
                       *(float *)param_4 * local_b0[0] + *(float *)(param_4 + 4) * local_b0[1] +
                       *(float *)(param_4 + 8) * local_b0[2] +
                       (float)*(undefined8 *)(param_4 + 0x30));
  uStack_b4 = 0;
  local_c0 = local_100;
  uStack_f8 = (ulong)(uint)fStack_b8;
  local_110 = *(undefined4 *)((long)&local_f0 + uVar5);
  uStack_10c = *(undefined4 *)((long)&local_e0 + uVar5);
  local_108 = *(undefined4 *)((long)&local_d0 + uVar5);
  local_120 = *(float *)((long)&local_f0 + uVar6);
  fStack_11c = *(float *)((long)&local_e0 + uVar6);
  local_118 = *(float *)((long)&local_d0 + uVar6);
  uStack_104 = 0;
  local_114 = 0;
  (**(code **)(*(long *)this + 0x80))
            (CONCAT44(in_register_00005004,param_1),0xbfc90fdb,0x3fc90fdb,0xbfc90fdb,0x3fc90fdb,
             0x41f00000,this,&local_100,&local_110,&local_120,param_5,0);
  fVar7 = *(float *)(param_4 + 0x30);
  fVar8 = *(float *)(param_4 + 0x34);
  fVar9 = *(float *)(param_4 + 0x38);
  lVar3 = (long)((param_3 + 2) % 3);
  uVar4 = 0;
  do {
                    /* try { // try from 01014514 to 0111451b has its CatchHandler @ 010145e8 */
                    /* try { // try from 0101451c to 011145fb has its CatchHandler @ 010143d8 */
    sincosf((float)(int)uVar4 * 0.017453292,&fStack_124,&local_128);
    local_b0[(long)(int)uVar1 + 4] = fStack_124 * param_1;
    local_b0[(int)uVar1] = fStack_124 * param_1;
    local_b0[lVar3 + 4] = local_128 * param_1;
    local_b0[lVar3] = local_128 * param_1;
                    /* catch() { ... } // from try @ 01014514 with catch @ 010145e8 */
    local_f0 = CONCAT44(fVar8 + local_b0[4] * *(float *)(param_4 + 0x10) +
                                local_b0[5] * *(float *)(param_4 + 0x14) +
                                local_b0[6] * *(float *)(param_4 + 0x18),
                        fVar7 + *(float *)param_4 * local_b0[4] +
                                *(float *)(param_4 + 4) * local_b0[5] +
                                *(float *)(param_4 + 8) * local_b0[6]);
    uStack_e8 = (ulong)(uint)(fVar9 + local_b0[4] * *(float *)(param_4 + 0x20) +
                                      local_b0[5] * *(float *)(param_4 + 0x24) +
                                      local_b0[6] * *(float *)(param_4 + 0x28));
    local_100 = CONCAT44(fVar8 + *(float *)(param_4 + 0x10) * local_b0[0] +
                                 *(float *)(param_4 + 0x14) * local_b0[1] +
                                 *(float *)(param_4 + 0x18) * local_b0[2],
                         fVar7 + *(float *)param_4 * local_b0[0] +
                                 *(float *)(param_4 + 4) * local_b0[1] +
                                 *(float *)(param_4 + 8) * local_b0[2]);
    uStack_f8 = (ulong)(uint)(fVar9 + *(float *)(param_4 + 0x20) * local_b0[0] +
                                      *(float *)(param_4 + 0x24) * local_b0[1] +
                                      *(float *)(param_4 + 0x28) * local_b0[2]);
    (**(code **)(*(long *)this + 0x10))(this,&local_f0,&local_100,param_5);
    uVar4 = uVar4 + 0x1e;
  } while (uVar4 < 0x168);
  if (*(long *)(lVar2 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

