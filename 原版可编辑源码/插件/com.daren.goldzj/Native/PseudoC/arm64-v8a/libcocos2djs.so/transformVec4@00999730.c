
/* cocos2d::MathUtil::transformVec4(float const*, float, float, float, float, float*) */

void cocos2d::MathUtil::transformVec4
               (float *param_1,float param_2,float param_3,float param_4,float param_5,
               float *param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  uVar2 = *(undefined8 *)param_1;
                    /* try { // try from 00999750 to 00a99793 has its CatchHandler @ 009998e4 */
  fVar7 = param_1[2];
  uVar3 = *(undefined8 *)(param_1 + 4);
  fVar8 = param_1[6];
  uVar4 = *(undefined8 *)(param_1 + 8);
  fVar9 = param_1[10];
  uVar5 = *(undefined8 *)(param_1 + 0xc);
  fVar10 = param_1[0xe];
  *param_6 = (float)uVar2 * param_2 + (float)uVar3 * param_3 + (float)uVar4 * param_4 +
             (float)uVar5 * param_5;
  param_6[1] = (float)((ulong)uVar2 >> 0x20) * param_2 + (float)((ulong)uVar3 >> 0x20) * param_3 +
               (float)((ulong)uVar4 >> 0x20) * param_4 + (float)((ulong)uVar5 >> 0x20) * param_5;
  param_6[2] = fVar7 * param_2 + fVar8 * param_3 + fVar9 * param_4 + fVar10 * param_5;
                    /* try { // try from 009997a4 to 00a997e7 has its CatchHandler @ 009998c4 */
  if (*(long *)(lVar1 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

