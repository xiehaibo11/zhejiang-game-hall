
/* dtNavMesh::closestPointOnPoly(unsigned int, float const*, float*, bool*) const */

void __thiscall
dtNavMesh::closestPointOnPoly
          (dtNavMesh *this,uint param_1,float *param_2,float *param_3,bool *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  long lVar13;
  uint uVar14;
  float *pfVar15;
  ushort *puVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  int *piVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float local_e4;
  float afStack_e0 [6];
  float local_c8 [6];
  float local_b0 [18];
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  lVar22 = *(long *)(this + 0x50);
  uVar24 = (ulong)(param_1 >> ((ulong)*(uint *)(this + 0x60) & 0x3f) &
                  ~(-1 << (ulong)(*(uint *)(this + 0x5c) & 0x1f)));
  lVar20 = *(long *)(lVar22 + uVar24 * 0x68 + 0x10);
  uVar21 = (ulong)(param_1 & (-1 << (ulong)(*(uint *)(this + 0x60) & 0x1f) ^ 0xffffffffU));
  lVar3 = lVar20 + uVar21 * 0x20;
  if ((*(byte *)(lVar3 + 0x1f) & 0xc0) == 0x40) {
    lVar22 = *(long *)(lVar22 + uVar24 * 0x68 + 0x18);
    pfVar15 = (float *)(lVar22 + (ulong)*(ushort *)(lVar3 + 4) * 0xc);
    pfVar12 = (float *)(lVar22 + (ulong)*(ushort *)(lVar3 + 6) * 0xc);
    fVar28 = *pfVar15;
    fVar29 = pfVar15[1] - param_2[1];
    fVar26 = pfVar12[1] - param_2[1];
    fVar30 = pfVar15[2] - param_2[2];
    fVar31 = fVar28 - *param_2;
    fVar25 = *pfVar12 - *param_2;
    fVar27 = pfVar12[2] - param_2[2];
    fVar29 = SQRT(fVar31 * fVar31 + fVar29 * fVar29 + fVar30 * fVar30);
    fVar29 = fVar29 / (fVar29 + SQRT(fVar25 * fVar25 + fVar26 * fVar26 + fVar27 * fVar27));
    *param_3 = fVar28 + (*pfVar12 - fVar28) * fVar29;
    param_3[1] = pfVar15[1] + (pfVar12[1] - pfVar15[1]) * fVar29;
    param_3[2] = pfVar15[2] + fVar29 * (pfVar12[2] - pfVar15[2]);
    if (param_4 != (bool *)0x0) {
      *param_4 = false;
    }
  }
  else {
    lVar19 = *(long *)(lVar22 + uVar24 * 0x68 + 0x28);
    bVar5 = *(byte *)(lVar3 + 0x1e);
    if (bVar5 != 0) {
      lVar13 = *(long *)(lVar22 + uVar24 * 0x68 + 0x18);
      pfVar12 = local_b0 + 2;
      puVar16 = (ushort *)(lVar20 + uVar21 * 0x20 + 4);
      uVar9 = (ulong)bVar5;
      do {
        uVar9 = uVar9 - 1;
        pfVar15 = (float *)(lVar13 + (ulong)*puVar16 * 0xc);
        pfVar12[-2] = *pfVar15;
        pfVar12[-1] = pfVar15[1];
        *pfVar12 = pfVar15[2];
        pfVar12 = pfVar12 + 3;
        puVar16 = puVar16 + 1;
      } while (uVar9 != 0);
    }
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    uVar9 = dtDistancePtPolyEdgesSqr(param_2,local_b0,(uint)bVar5,local_c8,afStack_e0);
    if ((uVar9 & 1) == 0) {
      uVar18 = (uint)bVar5;
      if (uVar18 == 0) {
        iVar11 = -1;
      }
      else {
        uVar9 = 0;
        iVar11 = -1;
        fVar25 = 3.4028235e+38;
        do {
          fVar29 = local_c8[uVar9];
          iVar7 = (int)uVar9;
          if (fVar25 <= local_c8[uVar9]) {
            fVar29 = fVar25;
            iVar7 = iVar11;
          }
          iVar11 = iVar7;
          fVar25 = fVar29;
          uVar9 = uVar9 + 1;
        } while (bVar5 != uVar9);
      }
      iVar7 = 0;
      if (uVar18 != 0) {
        iVar7 = (iVar11 + 1) / (int)uVar18;
      }
      lVar13 = (long)(int)((iVar11 + 1) - iVar7 * uVar18);
      fVar26 = afStack_e0[iVar11];
      fVar25 = (float)*(undefined8 *)(local_b0 + (long)iVar11 * 3);
      fVar29 = (float)((ulong)*(undefined8 *)(local_b0 + (long)iVar11 * 3) >> 0x20);
      *(ulong *)param_3 =
           CONCAT44(fVar29 + ((float)((ulong)*(undefined8 *)(local_b0 + lVar13 * 3) >> 0x20) -
                             fVar29) * fVar26,
                    fVar25 + ((float)*(undefined8 *)(local_b0 + lVar13 * 3) - fVar25) * fVar26);
      param_3[2] = local_b0[(long)iVar11 * 3 + 2] +
                   fVar26 * (local_b0[lVar13 * 3 + 2] - local_b0[(long)iVar11 * 3 + 2]);
      if (param_4 != (bool *)0x0) {
        *param_4 = false;
      }
    }
    else if (param_4 != (bool *)0x0) {
      *param_4 = true;
    }
    pbVar17 = (byte *)(lVar19 + uVar21 * 0xc + 9);
    if (*pbVar17 != 0) {
      lVar22 = lVar22 + uVar24 * 0x68;
      piVar23 = (int *)(lVar19 + uVar21 * 0xc);
      uVar18 = 0;
      plVar1 = (long *)(lVar22 + 0x30);
      plVar2 = (long *)(lVar22 + 0x18);
      do {
        pbVar4 = (byte *)(*(long *)(lVar22 + 0x38) + (ulong)((uVar18 + piVar23[1]) * 4));
        bVar5 = *pbVar4;
        bVar6 = *(byte *)(lVar3 + 0x1e);
        if ((uint)bVar5 < (uint)bVar6) {
          pfVar12 = (float *)(*plVar2 +
                             (ulong)*(ushort *)(lVar20 + uVar21 * 0x20 + (ulong)bVar5 * 2 + 4) * 0xc
                             );
        }
        else {
          pfVar12 = (float *)(*plVar1 + (ulong)((((uint)bVar5 - (uint)bVar6) + *piVar23) * 3) * 4);
        }
        bVar5 = pbVar4[1];
        uVar14 = (uint)bVar6;
        if (bVar5 < uVar14) {
          pfVar15 = (float *)(*plVar2 +
                             (ulong)*(ushort *)(lVar20 + uVar21 * 0x20 + (ulong)bVar5 * 2 + 4) * 0xc
                             );
        }
        else {
          pfVar15 = (float *)(*plVar1 + (ulong)(((bVar5 - uVar14) + *piVar23) * 3) * 4);
        }
        bVar5 = pbVar4[2];
        if (bVar5 < uVar14) {
          pfVar10 = (float *)(*plVar2 +
                             (ulong)*(ushort *)(lVar20 + uVar21 * 0x20 + (ulong)bVar5 * 2 + 4) * 0xc
                             );
        }
        else {
          pfVar10 = (float *)(*plVar1 + (ulong)(((bVar5 - uVar14) + *piVar23) * 3) * 4);
        }
        uVar24 = dtClosestHeightPointTriangle(param_2,pfVar12,pfVar15,pfVar10,&local_e4);
        if ((uVar24 & 1) != 0) {
          param_3[1] = local_e4;
          break;
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < *pbVar17);
    }
  }
  if (*(long *)(lVar8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

