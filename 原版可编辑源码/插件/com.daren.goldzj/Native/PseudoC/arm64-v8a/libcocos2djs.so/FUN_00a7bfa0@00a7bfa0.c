
/* WARNING: Removing unreachable block (ram,0x00a7c07c) */
/* WARNING: Removing unreachable block (ram,0x00a7c0d4) */

undefined8
FUN_00a7bfa0(float param_1,int param_2,ushort *param_3,int *param_4,int *param_5,float *param_6,
            float *param_7,float *param_8)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = *param_6;
                    /* catch() { ... } // from try @ 00a7bea4 with catch @ 00a7bfa4 */
  if (fVar6 == param_1) {
    return 0;
  }
                    /* catch() { ... } // from try @ 00a7beec with catch @ 00a7bfc4 */
                    /* catch() { ... } // from try @ 00a7bdf4 with catch @ 00a7bfdc */
  fVar8 = 0.0;
                    /* catch() { ... } // from try @ 00a7c104 with catch @ 00a7c11c */
                    /* catch() { ... } // from try @ 00a7c0f4 with catch @ 00a7c12c */
  if ((((param_1 < 0.0) || (fVar8 = param_1, param_1 == 0.0)) || (fVar8 = 0.0, NAN(param_1))) ||
     ((ABS(param_1) != INFINITY &&
      ((ABS(param_1) < 1.1754944e-38 || (fVar8 = param_1, param_1 <= 1.0)))))) {
    if (param_2 != 0) goto LAB_00a7c008;
LAB_00a7c0c8:
    uVar3 = (ushort)(int)(fVar8 * 4096.0);
    iVar4 = (int)(fVar8 * 4096.0) << 0x10;
  }
  else {
                    /* try { // try from 00a7c140 to 00b7c177 has its CatchHandler @ 00a7c140
                       catch() { ... } // from try @ 00a7c140 with catch @ 00a7c140
                       catch() { ... } // from try @ 00a7c180 with catch @ 00a7c140 */
    fVar8 = 1.0;
    if (param_2 == 0) goto LAB_00a7c0c8;
LAB_00a7c008:
    fVar7 = *param_7;
    if (fVar7 != fVar6) {
      __android_log_print((double)fVar7,(double)fVar6,3,"AudioMixer",
                          "previous float ramp hasn\'t finished, prev:%f  set_to:%f");
      fVar7 = *param_7;
    }
    fVar5 = (fVar8 - fVar7) / (float)param_2;
    fVar6 = fVar8;
    if (fVar8 <= fVar7) {
      fVar6 = fVar7;
    }
    if (((fVar6 + fVar5 == fVar6) || (ABS(fVar5) < 1.1754944e-38)) ||
       ((NAN(fVar5) || (INFINITY <= ABS(fVar5))))) goto LAB_00a7c0c8;
    *param_8 = fVar5;
    iVar2 = *param_4;
    uVar3 = (ushort)(int)(fVar8 * 4096.0);
    if (iVar2 != (uint)*param_3 * 0x10000) {
                    /* try { // try from 00a7c178 to 00b7c17f has its CatchHandler @ 00a7c190 */
                    /* try { // try from 00a7c180 to 00b7c1a3 has its CatchHandler @ 00a7c140 */
      __android_log_print(3,"AudioMixer","previous int ramp hasn\'t finished, prev:%d  set_to:%d");
                    /* catch() { ... } // from try @ 00a7c178 with catch @ 00a7c190 */
      iVar2 = *param_4;
    }
    iVar4 = (int)(fVar8 * 4096.0) * 0x10000;
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = (iVar4 - iVar2) / param_2;
    }
    if (iVar1 != 0) {
      *param_5 = iVar1;
      goto LAB_00a7c0f0;
    }
  }
  *param_8 = 0.0;
  *param_7 = fVar8;
  *param_5 = 0;
  *param_4 = iVar4;
LAB_00a7c0f0:
  *param_6 = fVar8;
                    /* try { // try from 00a7c0f4 to 00b7c0fb has its CatchHandler @ 00a7c12c */
  *param_3 = uVar3;
                    /* try { // try from 00a7c104 to 00b7c107 has its CatchHandler @ 00a7c11c */
                    /* try { // try from 00a7c108 to 00b7c13f has its CatchHandler @ 00a7c0c0 */
  return 1;
}

