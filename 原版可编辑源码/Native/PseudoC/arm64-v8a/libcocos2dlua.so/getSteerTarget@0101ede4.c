
/* cocos2d::getSteerTarget(dtNavMeshQuery*, float const*, float const*, float, unsigned int const*,
   int, float*, unsigned char&, unsigned int&, float*, int*) */

void cocos2d::getSteerTarget
               (dtNavMeshQuery *param_1,float *param_2,float *param_3,float param_4,uint *param_5,
               int param_6,float *param_7,uchar *param_8,uint *param_9,float *param_10,int *param_11
               )

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  uint local_80;
  byte local_7c [4];
  uint local_78 [3];
  float local_6c [2];
  undefined8 auStack_64 [3];
  long lStack_48;
  
  lVar3 = tpidr_el0;
  lStack_48 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 0101eebc with catch @ 0101ee24 */
  local_80 = 0;
  dtNavMeshQuery::findStraightPath
            (param_1,param_2,param_3,param_5,param_6,local_6c,local_7c,local_78,(int *)&local_80,3,0
            );
  uVar6 = (ulong)local_80;
  if (local_80 == 0) goto LAB_0101ef30;
  if ((param_10 != (float *)0x0) && (param_11 != (int *)0x0)) {
    *param_11 = local_80;
    if ((int)local_80 < 1) goto LAB_0101ef30;
                    /* try { // try from 0101ee70 to 0111ee77 has its CatchHandler @ 0101ef18 */
    if (local_80 < 8) {
      uVar7 = 0;
    }
    else {
      uVar9 = uVar6 - 1;
                    /* try { // try from 0101efa4 to 0111efab has its CatchHandler @ 0101f008 */
                    /* try { // try from 0101efac to 0111f023 has its CatchHandler @ 0101ef68 */
      uVar7 = 0;
      if ((uVar9 >> 0x20 == 0) && ((uVar9 & 0xffffffff) + (uVar9 & 0xffffffff) * 2 >> 0x20 == 0)) {
        uVar7 = uVar6 & 0xfffffff8;
        uVar9 = 0xc;
        uVar10 = uVar7;
        do {
          uVar11 = (ulong)((int)uVar9 - 0xc) & 0xfffffff8;
          uVar4 = uVar9 & 0xfffffffc;
          lVar12 = uVar4 * 4;
          lVar8 = uVar11 * 4;
          uVar13 = *(undefined8 *)((long)auStack_64 + lVar12);
          uVar5 = *(undefined8 *)(local_6c + uVar4);
          uVar15 = *(undefined8 *)((long)auStack_64 + lVar12 + 0x10);
          uVar14 = *(undefined8 *)((long)auStack_64 + lVar12 + 8);
          uVar18 = *(undefined8 *)((long)&lStack_48 + lVar12 + 4);
          uVar17 = *(undefined8 *)(&stack0xffffffffffffffb4 + lVar12);
          uVar19 = *(undefined8 *)(local_6c + uVar11);
          uVar21 = *(undefined8 *)((long)auStack_64 + lVar8 + 0x10);
          uVar20 = *(undefined8 *)((long)auStack_64 + lVar8 + 8);
          uVar23 = *(undefined8 *)((long)&lStack_48 + lVar8 + 4);
          uVar22 = *(undefined8 *)(&stack0xffffffffffffffb4 + lVar8);
          uVar10 = uVar10 - 8;
          pfVar1 = param_10 + uVar4;
                    /* catch() { ... } // from try @ 0101efa4 with catch @ 0101f008 */
          pfVar2 = param_10 + uVar11;
          uVar9 = uVar9 + 0x18;
          *(undefined8 *)(pfVar2 + 2) = *(undefined8 *)((long)auStack_64 + lVar8);
          *(undefined8 *)pfVar2 = uVar19;
          *(undefined8 *)(pfVar2 + 6) = uVar21;
          *(undefined8 *)(pfVar2 + 4) = uVar20;
          *(undefined8 *)(pfVar2 + 10) = uVar23;
          *(undefined8 *)(pfVar2 + 8) = uVar22;
          *(undefined8 *)(pfVar1 + 6) = uVar15;
          *(undefined8 *)(pfVar1 + 4) = uVar14;
          *(undefined8 *)(pfVar1 + 10) = uVar18;
          *(undefined8 *)(pfVar1 + 8) = uVar17;
          *(undefined8 *)(pfVar1 + 2) = uVar13;
          *(undefined8 *)pfVar1 = uVar5;
        } while (uVar10 != 0);
                    /* catch() { ... } // from try @ 0101f0cc with catch @ 0101f024 */
        if (uVar7 == uVar6) goto LAB_0101eeac;
      }
    }
    uVar9 = uVar7 * 3;
    lVar8 = uVar6 - uVar7;
    do {
      uVar7 = uVar9 & 0xffffffff;
      lVar8 = lVar8 + -1;
      uVar9 = uVar9 + 3;
                    /* try { // try from 0101ee9c to 0111eebb has its CatchHandler @ 0101ef30 */
      *(undefined8 *)(param_10 + uVar7) = *(undefined8 *)(local_6c + uVar7);
      (param_10 + uVar7)[2] = *(float *)((long)auStack_64 + uVar7 * 4);
    } while (lVar8 != 0);
  }
LAB_0101eeac:
  if (0 < (int)local_80) {
    uVar9 = 0;
    uVar7 = 0;
                    /* try { // try from 0101eebc to 0111ef67 has its CatchHandler @ 0101ee24 */
    do {
      uVar10 = uVar9 & 0xffffffff;
                    /* catch() { ... } // from try @ 0101ee70 with catch @ 0101ef18 */
      if ((((local_7c[uVar7] >> 2 & 1) != 0) ||
          (fVar16 = param_2[2] - *(float *)((long)auStack_64 + uVar10 * 4),
          param_4 * param_4 <=
          (*param_2 - local_6c[uVar10]) * (*param_2 - local_6c[uVar10]) + fVar16 * fVar16)) ||
         (1000.0 <= ABS(param_2[1] - local_6c[uVar10 + 1]))) {
        uVar5 = 1;
        *(undefined8 *)param_7 = *(undefined8 *)(local_6c + uVar10);
        param_7[2] = *(float *)((long)auStack_64 + uVar10 * 4);
        param_7[1] = param_2[1];
                    /* catch() { ... } // from try @ 0101efac with catch @ 0101ef68 */
        *param_8 = local_7c[uVar7 & 0xffffffff];
        *param_9 = local_78[uVar7 & 0xffffffff];
        goto LAB_0101ef74;
      }
      uVar7 = uVar7 + 1;
      uVar9 = uVar9 + 3;
    } while (uVar6 != uVar7);
  }
LAB_0101ef30:
                    /* catch() { ... } // from try @ 0101ee9c with catch @ 0101ef30 */
  uVar5 = 0;
LAB_0101ef74:
  if (*(long *)(lVar3 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

