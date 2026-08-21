
/* dtNavMeshQuery::findNearestPoly(float const*, float const*, dtQueryFilter const*, unsigned int*,
   float*) const */

void __thiscall
dtNavMeshQuery::findNearestPoly
          (dtNavMeshQuery *this,float *param_1,float *param_2,dtQueryFilter *param_3,uint *param_4,
          float *param_5)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined8 uVar7;
  float fVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  int local_2c4;
  dtPoly *local_2c0;
  dtMeshTile *local_2b8;
  bool local_2b0 [4];
  float local_2ac;
  float local_2a8;
  float fStack_2a4;
  uint local_2a0 [128];
  long local_a0;
  
  lVar2 = tpidr_el0;
  local_a0 = *(long *)(lVar2 + 0x28);
  *param_4 = 0;
  local_2c4 = 0;
  iVar6 = queryPolygons(this,param_1,param_2,param_3,local_2a0,&local_2c4,0x80);
  if (iVar6 < 0) {
    uVar7 = 0x80000008;
    goto LAB_0118a0f4;
  }
  lVar9 = (long)local_2c4;
  if (local_2c4 < 1) {
    uVar10 = 0;
LAB_0118a0ec:
    *param_4 = uVar10;
  }
  else {
    lVar11 = 0;
    uVar10 = 0;
    fVar8 = 3.4028235e+38;
    do {
      uVar1 = local_2a0[lVar11];
      local_2b0[0] = false;
      closestPointOnPoly(this,uVar1,param_1,&local_2ac,local_2b0);
      fVar5 = fStack_2a4;
      fVar4 = local_2a8;
      fVar3 = local_2ac;
      fVar13 = param_1[1] - local_2a8;
      if (local_2b0[0] == false) {
        fVar13 = (*param_1 - local_2ac) * (*param_1 - local_2ac) + fVar13 * fVar13 +
                 (param_1[2] - fStack_2a4) * (param_1[2] - fStack_2a4);
      }
      else {
        local_2c0 = (dtPoly *)0x0;
        local_2b8 = (dtMeshTile *)0x0;
        dtNavMesh::getTileAndPolyByRefUnsafe(*(dtNavMesh **)this,uVar1,&local_2b8,&local_2c0);
        fVar12 = -fVar13;
        if (0.0 <= fVar13) {
          fVar12 = fVar13;
        }
        fVar12 = fVar12 - *(float *)(*(long *)(local_2b8 + 8) + 0x44);
        fVar13 = fVar12 * fVar12;
        if (fVar12 <= 0.0) {
          fVar13 = 0.0;
        }
      }
      if ((fVar13 < fVar8) && (uVar10 = uVar1, fVar8 = fVar13, param_5 != (float *)0x0)) {
        *param_5 = fVar3;
        param_5[1] = fVar4;
        param_5[2] = fVar5;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < lVar9);
    if (param_4 != (uint *)0x0) goto LAB_0118a0ec;
  }
  uVar7 = 0x40000000;
LAB_0118a0f4:
  if (*(long *)(lVar2 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

