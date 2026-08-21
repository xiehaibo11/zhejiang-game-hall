
/* dtObstacleAvoidanceQuery::prepare(float const*, float const*) */

void __thiscall
dtObstacleAvoidanceQuery::prepare(dtObstacleAvoidanceQuery *this,float *param_1,float *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(this + 0x38);
  if (0 < iVar1) {
    lVar3 = 0;
    pfVar4 = (float *)(*(long *)(this + 0x30) + 0x20);
    do {
      fVar6 = pfVar4[-8] - *param_1;
      pfVar4[2] = fVar6;
      lVar3 = lVar3 + 1;
      fVar7 = pfVar4[-7] - param_1[1];
      pfVar4[3] = fVar7;
      fVar8 = pfVar4[-6] - param_1[2];
      fVar9 = 1.0 / SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8);
      fVar10 = fVar6 * fVar9;
      fVar11 = fVar8 * fVar9;
      pfVar4[2] = fVar10;
      pfVar4[3] = fVar7 * fVar9;
      pfVar4[4] = fVar11;
      fVar7 = -(fVar8 * fVar9);
      if (0.01 <= fVar11 * (pfVar4[-2] - *param_2) - fVar10 * (*pfVar4 - param_2[2])) {
        fVar7 = fVar11;
        fVar10 = -(fVar6 * fVar9);
      }
      pfVar4[7] = fVar10;
      pfVar4[5] = fVar7;
      pfVar4 = pfVar4 + 0x10;
    } while (lVar3 < iVar1);
  }
  if (0 < *(int *)(this + 0x48)) {
    lVar5 = 0;
    lVar3 = 0;
    do {
      pfVar4 = (float *)(*(long *)(this + 0x40) + lVar5);
      fVar10 = (float)dtDistancePtSegSqr2D(param_1,pfVar4,pfVar4 + 3,&fStack_5c);
      *(bool *)(pfVar4 + 6) = fVar10 < 0.0001;
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + 0x1c;
    } while (lVar3 < *(int *)(this + 0x48));
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

