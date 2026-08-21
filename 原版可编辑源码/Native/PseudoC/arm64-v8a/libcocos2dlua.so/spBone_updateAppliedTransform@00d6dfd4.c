
void spBone_updateAppliedTransform(long param_1)

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
  float __x;
  float __y;
  
                    /* try { // try from 00d6dfec to 00e6e0b3 has its CatchHandler @ 00d6e514 */
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x60) = 1;
  if (lVar1 == 0) {
                    /* try { // try from 00d6e11c to 00e6e11f has its CatchHandler @ 00d6e580 */
    fVar2 = *(float *)(param_1 + 0x70);
                    /* try { // try from 00d6e124 to 00e6e12f has its CatchHandler @ 00d6e52c */
    fVar4 = *(float *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x78);
                    /* try { // try from 00d6e130 to 00e6e13b has its CatchHandler @ 00d6e530 */
    fVar3 = atan2f(fVar2,fVar4);
    fVar5 = *(float *)(param_1 + 0x68);
    fVar6 = *(float *)(param_1 + 0x74);
    *(float *)(param_1 + 0x4c) = fVar3 * 57.295776;
                    /* try { // try from 00d6e174 to 00e6e1ab has its CatchHandler @ 00d6e580 */
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(ulong *)(param_1 + 0x50) =
         CONCAT44(SQRT(fVar5 * fVar5 + fVar6 * fVar6),SQRT(fVar2 * fVar2 + fVar4 * fVar4));
    fVar2 = atan2f(fVar4 * fVar5 + fVar2 * fVar6,fVar4 * fVar6 - fVar2 * fVar5);
    *(float *)(param_1 + 0x5c) = fVar2 * 57.295776;
  }
  else {
    fVar2 = *(float *)(lVar1 + 100);
    fVar4 = *(float *)(lVar1 + 0x68);
    fVar6 = *(float *)(lVar1 + 0x70);
    fVar9 = *(float *)(lVar1 + 0x74);
    fVar8 = *(float *)(param_1 + 0x78) - *(float *)(lVar1 + 0x78);
    fVar5 = *(float *)(param_1 + 0x6c) - *(float *)(lVar1 + 0x6c);
    fVar7 = 1.0 / (fVar2 * fVar9 - fVar4 * fVar6);
    __x = fVar9 * fVar7 * *(float *)(param_1 + 100) - fVar4 * fVar7 * *(float *)(param_1 + 0x70);
    __y = fVar2 * fVar7 * *(float *)(param_1 + 0x70) - fVar6 * fVar7 * *(float *)(param_1 + 100);
    fVar3 = fVar2 * fVar7 * *(float *)(param_1 + 0x74) - fVar6 * fVar7 * *(float *)(param_1 + 0x68);
    *(float *)(param_1 + 0x44) = fVar7 * fVar9 * fVar5 - fVar7 * fVar4 * fVar8;
    *(float *)(param_1 + 0x48) = fVar7 * fVar2 * fVar8 - fVar7 * fVar6 * fVar5;
    fVar5 = SQRT(__x * __x + __y * __y);
                    /* try { // try from 00d6e0b8 to 00e6e0c3 has its CatchHandler @ 00d6e4c8 */
    fVar2 = fVar9 * fVar7 * *(float *)(param_1 + 0x68) - fVar4 * fVar7 * *(float *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(float *)(param_1 + 0x50) = fVar5;
    if (fVar5 <= 0.0001) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(float *)(param_1 + 0x54) = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      fVar2 = atan2f(fVar3,fVar2);
      fVar2 = fVar2 * -57.295776 + 90.0;
    }
    else {
      fVar4 = __x * fVar3 - __y * fVar2;
                    /* try { // try from 00d6e0e4 to 00e6e0e7 has its CatchHandler @ 00d6e580 */
      *(float *)(param_1 + 0x54) = fVar4 / fVar5;
      fVar2 = atan2f(__x * fVar2 + __y * fVar3,fVar4);
                    /* try { // try from 00d6e0f4 to 00e6e0fb has its CatchHandler @ 00d6e570 */
                    /* try { // try from 00d6e0fc to 00e6e107 has its CatchHandler @ 00d6e574 */
      *(float *)(param_1 + 0x5c) = fVar2 * 57.295776;
                    /* try { // try from 00d6e10c to 00e6e113 has its CatchHandler @ 00d6e578 */
      fVar2 = atan2f(__y,__x);
      fVar2 = fVar2 * 57.295776;
    }
    *(float *)(param_1 + 0x4c) = fVar2;
  }
  return;
}

