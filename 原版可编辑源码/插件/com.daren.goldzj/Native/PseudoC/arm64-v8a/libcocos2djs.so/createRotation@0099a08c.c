
/* cocos2d::Mat4::createRotation(cocos2d::Vec3 const&, float, cocos2d::Mat4*) */

void cocos2d::Mat4::createRotation(Vec3 *param_1,float param_2,Mat4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_18;
  float fStack_14;
  
                    /* catch() { ... } // from try @ 00999e44 with catch @ 0099a090
                       catch() { ... } // from try @ 00999efc with catch @ 0099a090 */
  fVar3 = *(float *)param_1;
  fVar4 = *(float *)(param_1 + 4);
  fVar5 = *(float *)(param_1 + 8);
                    /* catch() { ... } // from try @ 00999e04 with catch @ 0099a0a8 */
                    /* catch() { ... } // from try @ 00999df8 with catch @ 0099a0ac */
                    /* catch() { ... } // from try @ 00999dd8 with catch @ 0099a0b0 */
                    /* catch() { ... } // from try @ 00999e10 with catch @ 0099a0c0
                       catch() { ... } // from try @ 00999e90 with catch @ 0099a0c0
                       catch() { ... } // from try @ 00999fbc with catch @ 0099a0c0 */
  fVar1 = fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5;
  if ((fVar1 != 1.0) && (fVar1 = SQRT(fVar1), 1e-06 < fVar1)) {
    fVar1 = 1.0 / fVar1;
    fVar3 = fVar3 * fVar1;
    fVar4 = fVar4 * fVar1;
    fVar5 = fVar5 * fVar1;
  }
  sincosf(param_2,&fStack_14,&local_18);
  *(undefined4 *)(param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  fVar1 = 1.0 - local_18;
  fVar2 = fVar1 * fVar3;
                    /* try { // try from 0099a118 to 00a9a16b has its CatchHandler @ 0099a118
                       catch() { ... } // from try @ 0099a118 with catch @ 0099a118
                       catch() { ... } // from try @ 0099a36c with catch @ 0099a118 */
  fVar6 = fVar5 * fVar1 * fVar4;
  *(undefined8 *)(param_3 + 0x34) = 0;
  *(undefined8 *)(param_3 + 0x2c) = 0;
                    /* try { // try from 0099a16c to 00a9a183 has its CatchHandler @ 0099a3a0 */
  *(float *)param_3 = local_18 + fVar3 * fVar2;
  *(float *)(param_3 + 4) = fStack_14 * fVar5 + fVar4 * fVar2;
  *(float *)(param_3 + 8) = fVar5 * fVar2 - fStack_14 * fVar4;
  *(float *)(param_3 + 0x10) = fVar4 * fVar2 - fStack_14 * fVar5;
  *(float *)(param_3 + 0x14) = local_18 + fVar4 * fVar1 * fVar4;
  *(float *)(param_3 + 0x18) = fVar6 + fStack_14 * fVar3;
  *(float *)(param_3 + 0x20) = fStack_14 * fVar4 + fVar5 * fVar2;
  *(float *)(param_3 + 0x24) = fVar6 - fStack_14 * fVar3;
  *(float *)(param_3 + 0x28) = local_18 + fVar5 * fVar1 * fVar5;
  *(undefined4 *)(param_3 + 0x3c) = 0x3f800000;
                    /* try { // try from 0099a18c to 00a9a197 has its CatchHandler @ 0099a39c */
                    /* try { // try from 0099a198 to 00a9a1a3 has its CatchHandler @ 0099a398 */
  return;
}

