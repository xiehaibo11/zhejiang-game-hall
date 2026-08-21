
/* dtObstacleAvoidanceQuery::processSample(float const*, float, float const*, float, float const*,
   float const*, float, dtObstacleAvoidanceDebugData*) */

undefined1  [16] __thiscall
dtObstacleAvoidanceQuery::processSample
          (dtObstacleAvoidanceQuery *this,float *param_1,float param_2,float *param_3,float param_4,
          float *param_5,float *param_6,float param_7,dtObstacleAvoidanceDebugData *param_8)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  undefined1 auVar7 [16];
  undefined4 in_register_00005044;
  undefined8 in_register_00005048;
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
  
  fVar8 = *param_1;
  fVar12 = param_1[2];
  fVar9 = *param_5 - fVar8;
  fVar11 = param_5[2] - fVar12;
  fVar13 = *(float *)(this + 0x14);
  fVar10 = (float)*(undefined8 *)(this + 4) *
           SQRT((*param_6 - fVar8) * (*param_6 - fVar8) +
                (param_6[2] - fVar12) * (param_6[2] - fVar12)) * *(float *)(this + 0x24);
  fVar11 = (float)((ulong)*(undefined8 *)(this + 4) >> 0x20) *
           SQRT(fVar9 * fVar9 + fVar11 * fVar11) * *(float *)(this + 0x24);
  fVar9 = (*(float *)(this + 0x10) / ((param_7 - fVar10) - fVar11) + -0.1) * fVar13;
  if (fVar9 - fVar13 <= -1.1920929e-07) {
    if (*(int *)(this + 0x38) < 1) {
      lVar3 = 0;
      fVar14 = 0.0;
    }
    else {
      lVar3 = 0;
      pfVar5 = (float *)(*(long *)(this + 0x30) + 0x24);
      fVar14 = 0.0;
      do {
        fVar18 = ((fVar8 + fVar8) - *param_5) - pfVar5[-6];
        fVar17 = ((fVar12 + fVar12) - param_5[2]) - pfVar5[-4];
        fVar19 = fVar18 * pfVar5[4] + fVar17 * pfVar5[6];
        fVar19 = fVar19 + fVar19;
        fVar16 = (fVar18 * pfVar5[1] + fVar17 * pfVar5[3]) * 0.5 + 0.5;
        if (fVar19 <= fVar16) {
          fVar16 = fVar19;
        }
        fVar19 = fVar18 * fVar18 + fVar17 * fVar17;
        bVar2 = 0.0 <= fVar16;
        if (1.0 < fVar16) {
          fVar16 = 1.0;
        }
        fVar15 = 0.0;
        if (bVar2) {
          fVar15 = fVar16;
        }
        if (0.0001 <= fVar19) {
          fVar20 = pfVar5[-9] - *param_3;
          fVar16 = pfVar5[-7] - param_3[2];
          fVar17 = fVar18 * fVar20 + fVar17 * fVar16;
          fVar16 = fVar17 * fVar17 -
                   fVar19 * ((fVar20 * fVar20 + fVar16 * fVar16) -
                            (*pfVar5 + param_4) * (*pfVar5 + param_4));
          if (0.0 <= fVar16) {
            fVar16 = SQRT(fVar16);
            fVar18 = (1.0 / fVar19) * (fVar17 - fVar16);
            bVar2 = false;
            if ((0.0 < (1.0 / fVar19) * (fVar17 + fVar16)) && (bVar2 = false, !NAN(fVar18))) {
              bVar2 = fVar18 < 0.0;
            }
            fVar16 = fVar18 * -0.5;
            if (!bVar2) {
              fVar16 = fVar18;
            }
            if (((0.0 <= fVar16) && (fVar16 < fVar13)) && (fVar13 = fVar16, fVar16 < fVar9))
            goto LAB_01192d00;
          }
        }
        lVar3 = lVar3 + 1;
        fVar14 = fVar14 + fVar15;
        pfVar5 = pfVar5 + 0x10;
      } while (lVar3 < *(int *)(this + 0x38));
    }
    if (0 < *(int *)(this + 0x48)) {
      lVar4 = 0;
      pfVar5 = (float *)(*(long *)(this + 0x40) + 0xc);
      if (*(char *)(*(long *)(this + 0x40) + 0x18) != '\0') goto LAB_01192b80;
      do {
        fVar16 = *pfVar5 - pfVar5[-3];
        fVar17 = pfVar5[2] - pfVar5[-1];
        fVar18 = fVar12 * fVar16;
        fVar19 = fVar8 * fVar17;
        pfVar6 = pfVar5;
        if (1e-06 <= ABS(fVar18 - fVar19)) {
          fVar18 = 1.0 / (fVar18 - fVar19);
          fVar15 = *param_3 - pfVar5[-3];
          fVar19 = param_3[2] - pfVar5[-1];
          fVar16 = fVar18 * (fVar17 * fVar15 - fVar16 * fVar19);
          if (((0.0 <= fVar16) && (fVar16 <= 1.0)) &&
             ((fVar18 = fVar18 * (fVar12 * fVar15 - fVar8 * fVar19), 0.0 <= fVar18 &&
              (fVar18 <= 1.0)))) goto LAB_01192bac;
        }
        while( true ) {
          lVar4 = lVar4 + 1;
          pfVar5 = pfVar6 + 7;
          if (*(int *)(this + 0x48) <= lVar4) goto LAB_01192c50;
          if (*(char *)(pfVar6 + 10) == '\0') break;
LAB_01192b80:
          fVar16 = 0.0;
          pfVar6 = pfVar5;
          if (0.0 <= fVar12 * (*pfVar5 - pfVar5[-3]) - fVar8 * (pfVar5[2] - pfVar5[-1])) {
LAB_01192bac:
            fVar16 = fVar16 + fVar16;
            pfVar6 = pfVar5;
            if ((fVar16 < fVar13) && (fVar13 = fVar16, fVar16 < fVar9)) goto LAB_01192d00;
          }
        }
      } while( true );
    }
LAB_01192c50:
    if ((int)lVar3 != 0) {
      fVar14 = fVar14 / (float)(int)lVar3;
    }
    fVar9 = *(float *)(this + 0xc);
    fVar13 = *(float *)(this + 0x10) * (1.0 / (fVar13 * *(float *)(this + 0x1c) + 0.1));
    param_7 = fVar10 + fVar11 + fVar14 * fVar9 + fVar13;
    in_register_00005044 = 0;
    in_register_00005048 = 0;
    if (param_8 != (dtObstacleAvoidanceDebugData *)0x0) {
      iVar1 = *(int *)param_8;
      if (iVar1 < *(int *)(param_8 + 4)) {
        pfVar5 = (float *)(*(long *)(param_8 + 8) + (long)(iVar1 * 3) * 4);
        *pfVar5 = fVar8;
        pfVar5[1] = param_1[1];
        pfVar5[2] = param_1[2];
        lVar3 = (long)iVar1 * 4;
        *(float *)(*(long *)(param_8 + 0x10) + lVar3) = param_2;
        *(float *)(*(long *)(param_8 + 0x18) + lVar3) = param_7;
        *(float *)(*(long *)(param_8 + 0x20) + lVar3) = fVar10;
        *(float *)(*(long *)(param_8 + 0x28) + lVar3) = fVar11;
        *(float *)(*(long *)(param_8 + 0x30) + lVar3) = fVar14 * fVar9;
        *(float *)(*(long *)(param_8 + 0x38) + lVar3) = fVar13;
        *(int *)param_8 = iVar1 + 1;
      }
    }
  }
LAB_01192d00:
  auVar7._4_4_ = in_register_00005044;
  auVar7._0_4_ = param_7;
  auVar7._8_8_ = in_register_00005048;
  return auVar7;
}

