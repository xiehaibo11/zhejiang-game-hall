
/* dtObstacleAvoidanceQuery::sampleVelocityGrid(float const*, float, float, float const*, float
   const*, float*, dtObstacleAvoidanceParams const*, dtObstacleAvoidanceDebugData*) */

int __thiscall
dtObstacleAvoidanceQuery::sampleVelocityGrid
          (dtObstacleAvoidanceQuery *this,float *param_1,float param_2,float param_3,float *param_4,
          float *param_5,float *param_6,dtObstacleAvoidanceParams *param_7,
          dtObstacleAvoidanceDebugData *param_8)

{
  dtObstacleAvoidanceQuery dVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_b4 [3];
  long local_a8;
  
  lVar2 = tpidr_el0;
  local_a8 = *(long *)(lVar2 + 0x28);
  prepare(this,param_1,param_5);
  uVar13 = *(undefined8 *)(param_7 + 0xc);
  uVar11 = *(undefined8 *)(param_7 + 8);
  uVar10 = *(undefined8 *)param_7;
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_7 + 0x14);
  *(undefined8 *)(this + 0xc) = uVar13;
  fVar14 = 1.0 / param_3;
  if (param_3 <= 0.0) {
    fVar14 = 3.4028235e+38;
  }
  *(undefined8 *)(this + 8) = uVar11;
  *(undefined8 *)this = uVar10;
  *(float *)(this + 0x20) = param_3;
  *(float *)(this + 0x24) = fVar14;
  *(float *)(this + 0x1c) = 1.0 / *(float *)(this + 0x14);
  param_6[0] = 0.0;
  param_6[1] = 0.0;
  param_6[2] = 0.0;
  if (param_8 != (dtObstacleAvoidanceDebugData *)0x0) {
    *(undefined4 *)param_8 = 0;
  }
  dVar1 = this[0x18];
  uVar3 = (uint)(byte)dVar1;
  if ((byte)dVar1 == 0) {
    iVar4 = 0;
  }
  else {
    fVar12 = *(float *)this;
    fVar9 = *param_5;
    fVar15 = param_5[2];
    fVar14 = (float)(int)((byte)dVar1 - 1);
    fVar17 = ((param_3 + param_3) * (1.0 - fVar12)) / fVar14;
    fVar18 = fVar17 * fVar14 * 0.5;
    fVar7 = fVar17 * 0.5 + param_3;
    uVar5 = 0;
    iVar4 = 0;
    fVar14 = 3.4028235e+38;
    if (dVar1 != (dtObstacleAvoidanceQuery)0x0) goto LAB_01192e3c;
    while (uVar5 = uVar5 + 1, uVar5 < uVar3) {
      if (uVar3 != 0) {
LAB_01192e3c:
        uVar6 = 0;
        fVar19 = (fVar12 * fVar15 + fVar17 * (float)(int)uVar5) - fVar18;
        do {
          fVar16 = (fVar9 * fVar12 + fVar17 * (float)(int)uVar6) - fVar18;
          local_b4[1] = 0.0;
          local_b4[0] = fVar16;
          local_b4[2] = fVar19;
          if (fVar19 * fVar19 + fVar16 * fVar16 <= fVar7 * fVar7) {
            fVar8 = (float)processSample(this,local_b4,fVar17,param_1,param_2,param_4,param_5,fVar14
                                         ,param_8);
            iVar4 = iVar4 + 1;
            if (fVar8 < fVar14) {
              *param_6 = fVar16;
              param_6[1] = 0.0;
              param_6[2] = fVar19;
              fVar14 = fVar8;
            }
          }
          uVar3 = (uint)(byte)this[0x18];
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar3);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_a8) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

