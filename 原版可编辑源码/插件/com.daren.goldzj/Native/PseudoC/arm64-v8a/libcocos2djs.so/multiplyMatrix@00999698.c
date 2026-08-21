
/* cocos2d::MathUtil::multiplyMatrix(float const*, float const*, float*) */

void cocos2d::MathUtil::multiplyMatrix(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
                    /* try { // try from 00999698 to 00a9969f has its CatchHandler @ 009998e4 */
                    /* try { // try from 009996ac to 00a996bb has its CatchHandler @ 009998c0 */
  fVar1 = *param_2;
  fVar5 = param_2[1];
  fVar9 = param_2[2];
  fVar13 = param_2[3];
  fVar2 = param_2[4];
  fVar6 = param_2[5];
  fVar10 = param_2[6];
  fVar14 = param_2[7];
  fVar3 = param_2[8];
  fVar7 = param_2[9];
  fVar11 = param_2[10];
  fVar15 = param_2[0xb];
  fVar4 = param_2[0xc];
  fVar8 = param_2[0xd];
  fVar12 = param_2[0xe];
  fVar16 = param_2[0xf];
  fVar17 = (float)*(undefined8 *)param_1;
  fVar18 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar19 = (float)*(undefined8 *)(param_1 + 2);
  fVar20 = (float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
                    /* try { // try from 009996bc to 00a996cf has its CatchHandler @ 009998c4 */
  fVar21 = (float)*(undefined8 *)(param_1 + 4);
  fVar22 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  fVar23 = (float)*(undefined8 *)(param_1 + 6);
  fVar24 = (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  fVar25 = (float)*(undefined8 *)(param_1 + 8);
  fVar26 = (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  fVar27 = (float)*(undefined8 *)(param_1 + 10);
  fVar28 = (float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20);
  fVar29 = (float)*(undefined8 *)(param_1 + 0xc);
  fVar30 = (float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
  fVar31 = (float)*(undefined8 *)(param_1 + 0xe);
  fVar32 = (float)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20);
                    /* try { // try from 009996e4 to 00a9974b has its CatchHandler @ 00999914 */
  *param_3 = fVar17 * fVar1 + fVar21 * fVar5 + fVar25 * fVar9 + fVar29 * fVar13;
  param_3[1] = fVar18 * fVar1 + fVar22 * fVar5 + fVar26 * fVar9 + fVar30 * fVar13;
  param_3[2] = fVar19 * fVar1 + fVar23 * fVar5 + fVar27 * fVar9 + fVar31 * fVar13;
  param_3[3] = fVar20 * fVar1 + fVar24 * fVar5 + fVar28 * fVar9 + fVar32 * fVar13;
  param_3[4] = fVar17 * fVar2 + fVar21 * fVar6 + fVar25 * fVar10 + fVar29 * fVar14;
  param_3[5] = fVar18 * fVar2 + fVar22 * fVar6 + fVar26 * fVar10 + fVar30 * fVar14;
  param_3[6] = fVar19 * fVar2 + fVar23 * fVar6 + fVar27 * fVar10 + fVar31 * fVar14;
  param_3[7] = fVar20 * fVar2 + fVar24 * fVar6 + fVar28 * fVar10 + fVar32 * fVar14;
  param_3[8] = fVar17 * fVar3 + fVar21 * fVar7 + fVar25 * fVar11 + fVar29 * fVar15;
  param_3[9] = fVar18 * fVar3 + fVar22 * fVar7 + fVar26 * fVar11 + fVar30 * fVar15;
  param_3[10] = fVar19 * fVar3 + fVar23 * fVar7 + fVar27 * fVar11 + fVar31 * fVar15;
  param_3[0xb] = fVar20 * fVar3 + fVar24 * fVar7 + fVar28 * fVar11 + fVar32 * fVar15;
  param_3[0xc] = fVar17 * fVar4 + fVar21 * fVar8 + fVar25 * fVar12 + fVar29 * fVar16;
  param_3[0xd] = fVar18 * fVar4 + fVar22 * fVar8 + fVar26 * fVar12 + fVar30 * fVar16;
  param_3[0xe] = fVar19 * fVar4 + fVar23 * fVar8 + fVar27 * fVar12 + fVar31 * fVar16;
  param_3[0xf] = fVar20 * fVar4 + fVar24 * fVar8 + fVar28 * fVar12 + fVar32 * fVar16;
  return;
}

