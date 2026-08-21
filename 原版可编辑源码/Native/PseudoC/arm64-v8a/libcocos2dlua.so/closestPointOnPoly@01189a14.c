
/* dtNavMeshQuery::closestPointOnPoly(unsigned int, float const*, float*, bool*) const */

void __thiscall
dtNavMeshQuery::closestPointOnPoly
          (dtNavMeshQuery *this,uint param_1,float *param_2,float *param_3,bool *param_4)

{
  byte *pbVar1;
  dtPoly dVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  float *pfVar9;
  float *pfVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  uint uVar14;
  dtPoly *pdVar15;
  byte *pbVar16;
  uint uVar17;
  long lVar18;
  int *piVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_e4;
  dtPoly *local_e0;
  dtMeshTile *local_d8;
  float afStack_d0 [6];
  float local_b8 [6];
  float local_a0 [18];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  local_e0 = (dtPoly *)0x0;
  local_d8 = (dtMeshTile *)0x0;
  iVar6 = dtNavMesh::getTileAndPolyByRef(*(dtNavMesh **)this,param_1,&local_d8,&local_e0);
  uVar7 = 0x80000008;
  if ((-1 < iVar6) && (local_d8 != (dtMeshTile *)0x0)) {
    if (((byte)local_e0[0x1f] & 0xc0) == 0x40) {
      pfVar12 = (float *)(*(long *)(local_d8 + 0x18) + (ulong)*(ushort *)(local_e0 + 4) * 0xc);
      pfVar10 = (float *)(*(long *)(local_d8 + 0x18) + (ulong)*(ushort *)(local_e0 + 6) * 0xc);
      fVar24 = *pfVar12;
      fVar25 = pfVar12[1] - param_2[1];
      fVar22 = pfVar10[1] - param_2[1];
      fVar26 = pfVar12[2] - param_2[2];
      fVar27 = fVar24 - *param_2;
      fVar21 = *pfVar10 - *param_2;
      fVar23 = pfVar10[2] - param_2[2];
      fVar25 = SQRT(fVar27 * fVar27 + fVar25 * fVar25 + fVar26 * fVar26);
      fVar25 = fVar25 / (fVar25 + SQRT(fVar21 * fVar21 + fVar22 * fVar22 + fVar23 * fVar23));
      *param_3 = fVar24 + (*pfVar10 - fVar24) * fVar25;
      param_3[1] = pfVar12[1] + (pfVar10[1] - pfVar12[1]) * fVar25;
      param_3[2] = pfVar12[2] + fVar25 * (pfVar10[2] - pfVar12[2]);
      if (param_4 != (bool *)0x0) {
        *param_4 = false;
      }
    }
    else {
      lVar11 = *(long *)(local_d8 + 0x10);
      dVar2 = local_e0[0x1e];
      lVar18 = *(long *)(local_d8 + 0x28);
      if ((byte)dVar2 != 0) {
        lVar13 = *(long *)(local_d8 + 0x18);
        pfVar10 = local_a0 + 2;
        pdVar15 = local_e0 + 4;
        uVar8 = (ulong)(byte)dVar2;
        do {
          uVar8 = uVar8 - 1;
          pfVar12 = (float *)(lVar13 + (ulong)*(ushort *)pdVar15 * 0xc);
          pfVar10[-2] = *pfVar12;
          pfVar10[-1] = pfVar12[1];
          *pfVar10 = pfVar12[2];
          pfVar10 = pfVar10 + 3;
          pdVar15 = pdVar15 + 2;
        } while (uVar8 != 0);
      }
      *param_3 = *param_2;
      uVar20 = (ulong)((long)local_e0 - lVar11) >> 5 & 0xffffffff;
      param_3[1] = param_2[1];
      param_3[2] = param_2[2];
      uVar8 = dtDistancePtPolyEdgesSqr(param_2,local_a0,(uint)(byte)dVar2,local_b8,afStack_d0);
      if ((uVar8 & 1) == 0) {
        uVar17 = (uint)(byte)dVar2;
        if (uVar17 == 0) {
          iVar6 = -1;
        }
        else {
          uVar8 = 0;
          iVar6 = -1;
          fVar21 = 3.4028235e+38;
          do {
            fVar25 = local_b8[uVar8];
            iVar4 = (int)uVar8;
            if (fVar21 <= local_b8[uVar8]) {
              fVar25 = fVar21;
              iVar4 = iVar6;
            }
            iVar6 = iVar4;
            fVar21 = fVar25;
            uVar8 = uVar8 + 1;
          } while ((byte)dVar2 != uVar8);
        }
        iVar4 = 0;
        if (uVar17 != 0) {
          iVar4 = (iVar6 + 1) / (int)uVar17;
        }
        lVar11 = (long)(int)((iVar6 + 1) - iVar4 * uVar17);
        fVar22 = afStack_d0[iVar6];
        fVar21 = (float)*(undefined8 *)(local_a0 + (long)iVar6 * 3);
        fVar25 = (float)((ulong)*(undefined8 *)(local_a0 + (long)iVar6 * 3) >> 0x20);
        *(ulong *)param_3 =
             CONCAT44(fVar25 + ((float)((ulong)*(undefined8 *)(local_a0 + lVar11 * 3) >> 0x20) -
                               fVar25) * fVar22,
                      fVar21 + ((float)*(undefined8 *)(local_a0 + lVar11 * 3) - fVar21) * fVar22);
        param_3[2] = local_a0[(long)iVar6 * 3 + 2] +
                     fVar22 * (local_a0[lVar11 * 3 + 2] - local_a0[(long)iVar6 * 3 + 2]);
        if (param_4 != (bool *)0x0) {
          *param_4 = false;
        }
      }
      else if (param_4 != (bool *)0x0) {
        *param_4 = true;
      }
      pbVar16 = (byte *)(lVar18 + uVar20 * 0xc + 9);
      if (*pbVar16 != 0) {
        piVar19 = (int *)(lVar18 + uVar20 * 0xc);
        uVar17 = 0;
        do {
          pbVar1 = (byte *)(*(long *)(local_d8 + 0x38) + (ulong)((uVar17 + piVar19[1]) * 4));
          dVar2 = local_e0[0x1e];
          bVar3 = *pbVar1;
          if ((uint)bVar3 < (uint)(byte)dVar2) {
            pfVar10 = (float *)(*(long *)(local_d8 + 0x18) +
                               (ulong)*(ushort *)(local_e0 + (ulong)bVar3 * 2 + 4) * 0xc);
          }
          else {
            pfVar10 = (float *)(*(long *)(local_d8 + 0x30) +
                               (ulong)((((uint)bVar3 - (uint)(byte)dVar2) + *piVar19) * 3) * 4);
          }
          bVar3 = pbVar1[1];
          uVar14 = (uint)(byte)dVar2;
          if (bVar3 < uVar14) {
            pfVar12 = (float *)(*(long *)(local_d8 + 0x18) +
                               (ulong)*(ushort *)(local_e0 + (ulong)bVar3 * 2 + 4) * 0xc);
          }
          else {
            pfVar12 = (float *)(*(long *)(local_d8 + 0x30) +
                               (ulong)(((bVar3 - uVar14) + *piVar19) * 3) * 4);
          }
          bVar3 = pbVar1[2];
          if (bVar3 < uVar14) {
            pfVar9 = (float *)(*(long *)(local_d8 + 0x18) +
                              (ulong)*(ushort *)(local_e0 + (ulong)bVar3 * 2 + 4) * 0xc);
          }
          else {
            pfVar9 = (float *)(*(long *)(local_d8 + 0x30) +
                              (ulong)(((bVar3 - uVar14) + *piVar19) * 3) * 4);
          }
          uVar8 = dtClosestHeightPointTriangle(param_2,pfVar10,pfVar12,pfVar9,&local_e4);
          if ((uVar8 & 1) != 0) {
            param_3[1] = local_e4;
            break;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < *pbVar16);
      }
    }
    uVar7 = 0x40000000;
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

