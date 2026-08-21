
/* dtNavMesh::findNearestPolyInTile(dtMeshTile const*, float const*, float const*, float*) const */

uint __thiscall
dtNavMesh::findNearestPolyInTile
          (dtNavMesh *this,dtMeshTile *param_1,float *param_2,float *param_3,float *param_4)

{
  long lVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  float fVar7;
  float fVar8;
  bool local_2a8 [4];
  float local_2a4;
  float local_2a0;
  float fStack_29c;
  uint local_298 [128];
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  local_8c = *param_2 - *param_3;
  local_98 = *param_2 + *param_3;
  local_88 = param_2[1] - param_3[1];
  fStack_94 = param_2[1] + param_3[1];
  local_84 = param_2[2] - param_3[2];
  local_90 = param_2[2] + param_3[2];
  uVar2 = queryPolygonsInTile(this,param_1,&local_8c,&local_98,local_298,0x80);
  if ((int)uVar2 < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    uVar5 = (ulong)uVar2;
    puVar6 = local_298;
    fVar3 = 3.4028235e+38;
    do {
      uVar2 = *puVar6;
      local_2a8[0] = false;
      closestPointOnPoly(this,uVar2,param_2,&local_2a4,local_2a8);
      fVar7 = param_2[1] - local_2a0;
      if (local_2a8[0] == false) {
        fVar7 = (*param_2 - local_2a4) * (*param_2 - local_2a4) + fVar7 * fVar7 +
                (param_2[2] - fStack_29c) * (param_2[2] - fStack_29c);
      }
      else {
        fVar8 = -fVar7;
        if (0.0 <= fVar7) {
          fVar8 = fVar7;
        }
        fVar8 = fVar8 - *(float *)(*(long *)(param_1 + 8) + 0x44);
        fVar7 = fVar8 * fVar8;
        if (fVar8 <= 0.0) {
          fVar7 = 0.0;
        }
      }
      if (fVar7 < fVar3) {
        *param_4 = local_2a4;
        param_4[1] = local_2a0;
        param_4[2] = fStack_29c;
        uVar4 = uVar2;
        fVar3 = fVar7;
      }
      uVar5 = uVar5 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 != 0);
  }
  if (*(long *)(lVar1 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}

