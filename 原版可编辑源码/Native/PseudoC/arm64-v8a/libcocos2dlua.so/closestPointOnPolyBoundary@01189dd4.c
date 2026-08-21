
/* dtNavMeshQuery::closestPointOnPolyBoundary(unsigned int, float const*, float*) const */

void __thiscall
dtNavMeshQuery::closestPointOnPolyBoundary
          (dtNavMeshQuery *this,uint param_1,float *param_2,float *param_3)

{
  long lVar1;
  dtPoly dVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  float fVar10;
  float *pfVar11;
  float *pfVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  dtPoly *local_c0;
  dtMeshTile *local_b8;
  float afStack_b0 [6];
  float local_98 [6];
  float local_80 [18];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  local_c0 = (dtPoly *)0x0;
  local_b8 = (dtMeshTile *)0x0;
  iVar5 = dtNavMesh::getTileAndPolyByRef(*(dtNavMesh **)this,param_1,&local_b8,&local_c0);
  if (iVar5 < 0) {
    uVar7 = 0x80000008;
  }
  else {
    dVar2 = local_c0[0x1e];
    if ((ulong)(byte)dVar2 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      lVar9 = *(long *)(local_b8 + 0x18);
      pfVar11 = local_80 + 2;
      do {
        lVar1 = uVar13 * 2;
        uVar13 = uVar13 + 1;
        pfVar12 = (float *)(lVar9 + (ulong)*(ushort *)(local_c0 + lVar1 + 4) * 0xc);
        pfVar11[-2] = *pfVar12;
        pfVar11[-1] = pfVar12[1];
        *pfVar11 = pfVar12[2];
        pfVar11 = pfVar11 + 3;
      } while (uVar13 < (byte)dVar2);
    }
    iVar5 = (int)uVar13;
    uVar6 = dtDistancePtPolyEdgesSqr(param_2,local_80,iVar5,local_98,afStack_b0);
    if ((uVar6 & 1) == 0) {
      if (iVar5 == 0) {
        iVar8 = -1;
      }
      else {
        uVar6 = 0;
        iVar8 = -1;
        fVar10 = 3.4028235e+38;
        do {
          fVar14 = local_98[uVar6];
          iVar3 = (int)uVar6;
          if (fVar10 <= local_98[uVar6]) {
            fVar14 = fVar10;
            iVar3 = iVar8;
          }
          iVar8 = iVar3;
          fVar10 = fVar14;
          uVar6 = uVar6 + 1;
        } while ((uVar13 & 0xffffffff) != uVar6);
      }
      iVar3 = 0;
      if (iVar5 != 0) {
        iVar3 = (iVar8 + 1) / iVar5;
      }
      lVar9 = (long)((iVar8 + 1) - iVar3 * iVar5);
      fVar15 = afStack_b0[iVar8];
      fVar10 = (float)*(undefined8 *)(local_80 + (long)iVar8 * 3);
      fVar14 = (float)((ulong)*(undefined8 *)(local_80 + (long)iVar8 * 3) >> 0x20);
      *(ulong *)param_3 =
           CONCAT44(fVar14 + ((float)((ulong)*(undefined8 *)(local_80 + lVar9 * 3) >> 0x20) - fVar14
                             ) * fVar15,
                    fVar10 + ((float)*(undefined8 *)(local_80 + lVar9 * 3) - fVar10) * fVar15);
      param_3[2] = local_80[(long)iVar8 * 3 + 2] +
                   fVar15 * (local_80[lVar9 * 3 + 2] - local_80[(long)iVar8 * 3 + 2]);
    }
    else {
      *param_3 = *param_2;
      param_3[1] = param_2[1];
      param_3[2] = param_2[2];
    }
    uVar7 = 0x40000000;
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

