
/* cocos2d::MathUtil::addMatrix(float const*, float, float*) */

void cocos2d::MathUtil::addMatrix(float *param_1,float param_2,float *param_3)

{
  long lVar1;
  long lVar2;
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
  
                    /* catch() { ... } // from try @ 009992a0 with catch @ 00999540
                       catch() { ... } // from try @ 00999374 with catch @ 00999540 */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00999254 with catch @ 00999568 */
  fVar6 = param_1[1];
  fVar10 = param_1[2];
  fVar14 = param_1[3];
  fVar3 = param_1[4];
  fVar7 = param_1[5];
  fVar11 = param_1[6];
  fVar15 = param_1[7];
  fVar4 = param_1[8];
  fVar8 = param_1[9];
  fVar12 = param_1[10];
  fVar16 = param_1[0xb];
  fVar5 = param_1[0xc];
  fVar9 = param_1[0xd];
  fVar13 = param_1[0xe];
  fVar17 = param_1[0xf];
                    /* catch() { ... } // from try @ 00999248 with catch @ 0099956c */
                    /* catch() { ... } // from try @ 00999228 with catch @ 00999570 */
                    /* catch() { ... } // from try @ 00999260 with catch @ 00999580
                       catch() { ... } // from try @ 00999308 with catch @ 00999580
                       catch() { ... } // from try @ 00999454 with catch @ 00999580 */
  *param_3 = *param_1 + param_2;
  param_3[1] = fVar6 + param_2;
  param_3[2] = fVar10 + param_2;
  param_3[3] = fVar14 + param_2;
  param_3[4] = fVar3 + param_2;
  param_3[5] = fVar7 + param_2;
  param_3[6] = fVar11 + param_2;
  param_3[7] = fVar15 + param_2;
  param_3[8] = fVar4 + param_2;
  param_3[9] = fVar8 + param_2;
  param_3[10] = fVar12 + param_2;
  param_3[0xb] = fVar16 + param_2;
  param_3[0xc] = fVar5 + param_2;
  param_3[0xd] = fVar9 + param_2;
  param_3[0xe] = fVar13 + param_2;
  param_3[0xf] = fVar17 + param_2;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

