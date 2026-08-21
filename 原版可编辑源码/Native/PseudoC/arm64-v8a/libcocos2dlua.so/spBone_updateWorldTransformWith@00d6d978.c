
void spBone_updateWorldTransformWith
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,long *param_8)

{
  int iVar1;
  long lVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float local_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  
  lVar2 = param_8[2];
  *(float *)((long)param_8 + 0x44) = param_1;
  *(float *)(param_8 + 9) = param_2;
  *(float *)((long)param_8 + 0x4c) = param_3;
  *(float *)(param_8 + 10) = param_4;
  *(float *)((long)param_8 + 0x54) = param_5;
  *(float *)(param_8 + 0xb) = param_6;
  *(float *)((long)param_8 + 0x5c) = param_7;
  *(undefined4 *)(param_8 + 0xc) = 1;
  if (lVar2 == 0) {
    sincosf((param_3 + param_6) * 0.017453292,&fStack_b4,&local_b8);
    fVar8 = local_b8 * param_4;
    sincosf((param_3 + 90.0 + param_7) * 0.017453292,&fStack_bc,&local_c0);
    lVar2 = param_8[1];
    local_c0 = local_c0 * param_5;
    if (*(int *)(lVar2 + 0x84) != 0) {
      param_1 = -param_1;
      fVar8 = -fVar8;
      local_c0 = -local_c0;
    }
    fStack_b4 = fStack_b4 * param_4;
    fStack_bc = fStack_bc * param_5;
    if (*(int *)(lVar2 + 0x88) != DAT_01787600) {
      param_2 = -param_2;
      fStack_b4 = -fStack_b4;
      fStack_bc = -fStack_bc;
    }
    *(float *)((long)param_8 + 100) = fVar8;
    *(float *)(param_8 + 0xd) = local_c0;
    *(float *)(param_8 + 0xe) = fStack_b4;
    *(float *)((long)param_8 + 0x74) = fStack_bc;
                    /* try { // try from 00d6dc18 to 00e6dc23 has its CatchHandler @ 00d6de4c */
    *(float *)((long)param_8 + 0x6c) = param_1 + *(float *)(lVar2 + 0x8c);
                    /* try { // try from 00d6dc24 to 00e6dd47 has its CatchHandler @ 00d6d9e4 */
    *(float *)(param_8 + 0xf) = param_2 + *(float *)(lVar2 + 0x90);
    return;
  }
  fVar8 = *(float *)(lVar2 + 100);
  local_c4 = *(float *)(lVar2 + 0x68);
  local_cc = *(float *)(lVar2 + 0x70);
  local_c8 = *(float *)(lVar2 + 0x74);
                    /* try { // try from 00d6d9e4 to 00e6dae3 has its CatchHandler @ 00d6d9e4
                       catch() { ... } // from try @ 00d6d9e4 with catch @ 00d6d9e4
                       catch() { ... } // from try @ 00d6daf0 with catch @ 00d6d9e4
                       catch() { ... } // from try @ 00d6dc24 with catch @ 00d6d9e4
                       catch() { ... } // from try @ 00d6dd54 with catch @ 00d6d9e4
                       catch() { ... } // from try @ 00d6ddc0 with catch @ 00d6d9e4 */
  *(float *)((long)param_8 + 0x6c) = fVar8 * param_1 + local_c4 * param_2 + *(float *)(lVar2 + 0x6c)
  ;
  *(float *)(param_8 + 0xf) = local_cc * param_1 + local_c8 * param_2 + *(float *)(lVar2 + 0x78);
  iVar1 = *(int *)(*param_8 + 0x38);
  switch(iVar1) {
  case 0:
    sincosf((param_3 + param_6) * 0.017453292,&fStack_a4,&local_a8);
    sincosf((param_3 + 90.0 + param_7) * 0.017453292,&fStack_ac,&local_b0);
    *(float *)((long)param_8 + 100) = local_a8 * param_4 * fVar8 + fStack_a4 * param_4 * local_c4;
    *(float *)(param_8 + 0xd) = local_b0 * param_5 * fVar8 + fStack_ac * param_5 * local_c4;
    *(float *)(param_8 + 0xe) = local_a8 * param_4 * local_cc + fStack_a4 * param_4 * local_c8;
    *(float *)((long)param_8 + 0x74) =
         local_b0 * param_5 * local_cc + fStack_ac * param_5 * local_c8;
    return;
                    /* try { // try from 00d6dd48 to 00e6dd53 has its CatchHandler @ 00d6de0c */
  case 1:
                    /* try { // try from 00d6dd54 to 00e6dd9b has its CatchHandler @ 00d6d9e4 */
    sincosf((param_3 + param_6) * 0.017453292,&fStack_94,&local_98);
    *(float *)((long)param_8 + 100) = local_98 * param_4;
    sincosf((param_3 + 90.0 + param_7) * 0.017453292,&fStack_9c,&local_a0);
                    /* try { // try from 00d6dd9c to 00e6ddbf has its CatchHandler @ 00d6de64 */
    *(float *)(param_8 + 0xe) = fStack_94 * param_4;
    *(float *)(param_8 + 0xd) = local_a0 * param_5;
    fStack_9c = fStack_9c * param_5;
    break;
  case 2:
    fVar7 = fVar8 * fVar8 + local_cc * local_cc;
    if (fVar7 <= 0.0001) {
      fVar8 = atan2f(local_c8,local_c4);
      local_cc = 0.0;
      fVar7 = fVar8 * -57.295776 + 90.0;
      fVar8 = 0.0;
    }
    else {
      fVar3 = fVar8 * local_c8 - local_c4 * local_cc;
      local_c8 = -fVar3;
      if (0.0 <= fVar3) {
        local_c8 = fVar3;
      }
      local_c8 = local_c8 / fVar7;
      local_c4 = local_cc * local_c8;
      local_c8 = fVar8 * local_c8;
      fVar7 = atan2f(local_cc,fVar8);
      fVar7 = fVar7 * 57.295776;
    }
                    /* catch() { ... } // from try @ 00d6dc18 with catch @ 00d6de4c */
                    /* catch() { ... } // from try @ 00d6dae4 with catch @ 00d6de50 */
                    /* catch() { ... } // from try @ 00d6dd9c with catch @ 00d6de64 */
    sincosf(((param_3 + param_6) - fVar7) * 0.017453292,&fStack_84,&local_88);
    sincosf((((param_3 + param_7) - fVar7) + 90.0) * 0.017453292,&fStack_8c,&local_90);
    *(float *)(param_8 + 0xe) = local_cc * local_88 * param_4 + local_c8 * fStack_84 * param_4;
    *(float *)((long)param_8 + 100) = fVar8 * local_88 * param_4 - local_c4 * fStack_84 * param_4;
    *(float *)(param_8 + 0xd) = fVar8 * local_90 * param_5 - local_c4 * fStack_8c * param_5;
    fStack_9c = local_cc * local_90 * param_5 + local_c8 * fStack_8c * param_5;
    break;
  case 3:
  case 4:
    sincosf(param_3 * 0.017453292,&fStack_64,&local_68);
    fVar6 = local_68 * fVar8 + fStack_64 * local_c4;
    fVar3 = local_68 * local_cc + fStack_64 * local_c8;
    fVar5 = SQRT(fVar6 * fVar6 + fVar3 * fVar3);
    fVar7 = 1.0 / fVar5;
    if (fVar5 <= 1e-05) {
      fVar7 = fVar5;
    }
    fVar6 = fVar6 * fVar7;
    fVar3 = fVar3 * fVar7;
    fVar7 = SQRT(fVar6 * fVar6 + fVar3 * fVar3);
    dVar4 = atan2((double)fVar3,(double)fVar6);
                    /* try { // try from 00d6dae4 to 00e6daef has its CatchHandler @ 00d6de50 */
                    /* try { // try from 00d6daf0 to 00e6dc17 has its CatchHandler @ 00d6d9e4 */
    sincosf((float)(dVar4 + 1.5707963705062866),&fStack_7c,&local_80);
    fVar5 = fVar7 * local_80;
    fVar7 = fVar7 * fStack_7c;
    sincosf(param_6 * 0.017453292,&fStack_6c,&local_70);
    sincosf((param_7 + 90.0) * 0.017453292,&local_74,&local_78);
    if (iVar1 == 4) {
      if (*(int *)(param_8[1] + 0x84) == *(int *)(param_8[1] + 0x88)) goto LAB_00d6ddd8;
    }
    else {
                    /* try { // try from 00d6ddc0 to 00e6de7f has its CatchHandler @ 00d6d9e4 */
      if (0.0 <= fVar8 * local_c8 - local_c4 * local_cc) goto LAB_00d6ddd8;
    }
    fVar5 = -fVar5;
    fVar7 = -fVar7;
LAB_00d6ddd8:
    *(float *)((long)param_8 + 100) = local_70 * param_4 * fVar6 + fStack_6c * param_4 * fVar5;
    *(float *)(param_8 + 0xd) = local_78 * param_5 * fVar6 + local_74 * param_5 * fVar5;
                    /* catch() { ... } // from try @ 00d6dd48 with catch @ 00d6de0c */
    *(float *)(param_8 + 0xe) = local_70 * param_4 * fVar3 + fStack_6c * param_4 * fVar7;
    *(float *)((long)param_8 + 0x74) = local_78 * param_5 * fVar3 + local_74 * param_5 * fVar7;
    return;
  default:
    goto switchD_00d6da34_default;
  }
  *(float *)((long)param_8 + 0x74) = fStack_9c;
switchD_00d6da34_default:
  if (*(int *)(param_8[1] + 0x84) != 0) {
    *(ulong *)((long)param_8 + 100) =
         CONCAT44(-(float)((ulong)*(undefined8 *)((long)param_8 + 100) >> 0x20),
                  -(float)*(undefined8 *)((long)param_8 + 100));
  }
  if (*(int *)(param_8[1] + 0x88) != DAT_01787600) {
    param_8[0xe] = CONCAT44(-(float)((ulong)param_8[0xe] >> 0x20),-(float)param_8[0xe]);
  }
                    /* try { // try from 00d6df24 to 00e6dfeb has its CatchHandler @ 00d6df24
                       catch() { ... } // from try @ 00d6df24 with catch @ 00d6df24
                       catch() { ... } // from try @ 00d6e3f4 with catch @ 00d6df24
                       catch() { ... } // from try @ 00d6e460 with catch @ 00d6df24 */
  return;
}

