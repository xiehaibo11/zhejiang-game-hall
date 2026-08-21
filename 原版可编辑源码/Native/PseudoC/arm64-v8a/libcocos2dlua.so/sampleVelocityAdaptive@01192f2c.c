
/* dtObstacleAvoidanceQuery::sampleVelocityAdaptive(float const*, float, float, float const*, float
   const*, float*, dtObstacleAvoidanceParams const*, dtObstacleAvoidanceDebugData*) */

int __thiscall
dtObstacleAvoidanceQuery::sampleVelocityAdaptive
          (dtObstacleAvoidanceQuery *this,float *param_1,float param_2,float param_3,float *param_4,
          float *param_5,float *param_6,dtObstacleAvoidanceParams *param_7,
          dtObstacleAvoidanceDebugData *param_8)

{
  dtObstacleAvoidanceQuery dVar1;
  uint uVar2;
  long lVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_4e4;
  float local_4e0;
  float local_4d0;
  float local_4cc;
  float fStack_4c8;
  float local_4c4 [3];
  float local_4b8 [258];
  long local_b0;
  
  lVar3 = tpidr_el0;
  local_b0 = *(long *)(lVar3 + 0x28);
  prepare(this,param_1,param_5);
  uVar21 = *(undefined8 *)(param_7 + 0xc);
  uVar19 = *(undefined8 *)(param_7 + 8);
  uVar18 = *(undefined8 *)param_7;
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_7 + 0x14);
  *(undefined8 *)(this + 0xc) = uVar21;
  fVar22 = 1.0 / param_3;
  if (param_3 <= 0.0) {
    fVar22 = 3.4028235e+38;
  }
  *(undefined8 *)(this + 8) = uVar19;
  *(undefined8 *)this = uVar18;
  *(float *)(this + 0x20) = param_3;
  *(float *)(this + 0x24) = fVar22;
  *(float *)(this + 0x1c) = 1.0 / *(float *)(this + 0x14);
  param_6[0] = 0.0;
  param_6[1] = 0.0;
  param_6[2] = 0.0;
  if (param_8 != (dtObstacleAvoidanceDebugData *)0x0) {
    *(undefined4 *)param_8 = 0;
  }
  dVar1 = this[0x1b];
  uVar5 = (uint)(byte)this[0x19];
  if (0x1f < uVar5) {
    uVar5 = 0x20;
  }
  if (this[0x19] == (dtObstacleAvoidanceQuery)0x0) {
    uVar5 = 1;
  }
  uVar6 = (uint)(byte)this[0x1a];
  if (3 < uVar6) {
    uVar6 = 4;
  }
  fVar22 = (1.0 / (float)uVar5) * 3.1415927;
  if (this[0x1a] == (dtObstacleAvoidanceQuery)0x0) {
    uVar6 = 1;
  }
  sincosf(fVar22 + fVar22,&fStack_4c8,&local_4cc);
  fVar16 = *param_5;
  fVar20 = param_5[2];
  fVar24 = SQRT(fVar16 * fVar16 + fVar20 * fVar20);
  fVar22 = fVar20;
  fVar23 = fVar16;
  if (fVar24 != 0.0) {
    fVar24 = 1.0 / fVar24;
    fVar23 = fVar24 * fVar16;
    fVar22 = fVar24 * fVar20;
  }
  local_4b8[0] = 0.0;
  local_4b8[1] = 0.0;
  if (uVar6 == 0) {
    uVar15 = 1;
  }
  else {
    uVar2 = uVar5 - 1;
    uVar7 = 0;
    uVar15 = 1;
    do {
      iVar14 = uVar15 * 2;
      fVar26 = (float)(int)(uVar6 - uVar7) / (float)uVar6;
      pfVar8 = local_4b8 + (long)(int)uVar15 * 2;
      fVar24 = fVar26 * fVar23;
      uVar15 = uVar15 + 1;
      *pfVar8 = fVar24;
      *(float *)((long)local_4b8 + (((ulong)(long)iVar14 >> 1) << 3 | 4)) = fVar26 * fVar22;
      if (1 < (int)uVar2) {
        iVar11 = 1;
        pfVar4 = local_4b8 + (iVar14 + 2);
        pfVar10 = (float *)(((ulong)local_4b8 | 4) + (long)(iVar14 + 4) * 4);
        pfVar12 = pfVar8;
        do {
          pfVar9 = pfVar4;
          iVar11 = iVar11 + 2;
          fVar24 = local_4cc * fVar24 + fStack_4c8 * pfVar12[1];
          *pfVar9 = fVar24;
          pfVar9[1] = local_4cc * pfVar12[1] - fStack_4c8 * *pfVar12;
          pfVar10[-1] = local_4cc * *pfVar8 - fStack_4c8 * pfVar8[1];
          fVar26 = *pfVar8;
          pfVar4 = pfVar8 + 1;
          pfVar8 = pfVar9 + 2;
          *pfVar10 = fStack_4c8 * fVar26 + local_4cc * *pfVar4;
          pfVar4 = pfVar9 + 4;
          pfVar10 = pfVar10 + 4;
          pfVar12 = pfVar9;
        } while (iVar11 < (int)uVar2);
        uVar15 = (uVar2 & 0xfffffffe) + uVar15;
        pfVar8 = pfVar9 + 2;
      }
      if ((uVar5 & 1) == 0) {
        local_4b8[(long)(int)uVar15 * 2 + 2] = local_4cc * *pfVar8 - fStack_4c8 * pfVar8[1];
        iVar14 = uVar15 << 1;
        uVar15 = uVar15 + 1;
        local_4b8[(long)iVar14 + 3] = fStack_4c8 * *pfVar8 + local_4cc * pfVar8[1];
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar6);
  }
  fVar22 = *(float *)this;
  fVar16 = fVar22 * fVar16;
  fVar20 = fVar22 * fVar20;
  if ((byte)dVar1 != 0) {
    fVar24 = (1.0 - fVar22) * param_3;
    uVar5 = 0;
    iVar14 = 0;
    fVar22 = fVar16;
    fVar23 = fVar20;
    if (0 < (int)uVar15) goto LAB_01193254;
    do {
      local_4e4 = 0.0;
      fVar20 = 0.0;
      fVar16 = 0.0;
      local_4e0 = 0.0;
      while( true ) {
        uVar5 = uVar5 + 1;
        fVar24 = fVar24 * 0.5;
        if (uVar5 == (byte)dVar1) goto LAB_0119332c;
        fVar22 = local_4e0;
        fVar23 = local_4e4;
        if ((int)uVar15 < 1) break;
LAB_01193254:
        local_4e0 = 0.0;
        fVar16 = 0.0;
        fVar20 = 0.0;
        local_4e4 = 0.0;
        local_4d0 = 3.4028235e+38;
        uVar13 = (ulong)uVar15;
        pfVar8 = (float *)((ulong)local_4b8 | 4);
        do {
          local_4c4[1] = 0.0;
          fVar25 = fVar24 * pfVar8[-1] + fVar22;
          fVar26 = fVar24 * *pfVar8 + fVar23;
          local_4c4[0] = fVar25;
          local_4c4[2] = fVar26;
          if (fVar25 * fVar25 + fVar26 * fVar26 <= (param_3 + 0.001) * (param_3 + 0.001)) {
            fVar17 = (float)processSample(this,local_4c4,fVar24 / 10.0,param_1,param_2,param_4,
                                          param_5,local_4d0,param_8);
            iVar14 = iVar14 + 1;
            if (fVar17 < local_4d0) {
              fVar16 = fVar25;
              fVar20 = fVar26;
              local_4e4 = fVar26;
              local_4e0 = fVar25;
              local_4d0 = fVar17;
            }
          }
          uVar13 = uVar13 - 1;
          pfVar8 = pfVar8 + 2;
        } while (uVar13 != 0);
      }
    } while( true );
  }
  iVar14 = 0;
LAB_0119332c:
  *param_6 = fVar16;
  param_6[1] = 0.0;
  param_6[2] = fVar20;
  if (*(long *)(lVar3 + 0x28) == local_b0) {
    return iVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

