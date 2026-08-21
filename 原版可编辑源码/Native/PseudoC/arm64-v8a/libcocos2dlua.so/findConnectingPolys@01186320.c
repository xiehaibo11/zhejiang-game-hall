
/* dtNavMesh::findConnectingPolys(float const*, float const*, dtMeshTile const*, int, unsigned int*,
   float*, int) const */

int dtNavMesh::findConnectingPolys
              (float *param_1,float *param_2,dtMeshTile *param_3,int param_4,uint *param_5,
              float *param_6,int param_7)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  uint uVar10;
  ulong uVar11;
  int in_w7;
  long lVar12;
  dtMeshTile *pdVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  float *pfVar18;
  float *pfVar19;
  float in_s0;
  float in_s1;
  float fVar20;
  float in_s3;
  float fVar21;
  float in_s6;
  float fVar22;
  float fVar23;
  float in_s16;
  float in_s17;
  float in_s18;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  piVar9 = (int *)(ulong)(uint)param_4;
  if (piVar9 == (int *)0x0) {
    return 0;
  }
  uVar10 = (uint)param_5;
  pdVar13 = (dtMeshTile *)param_2;
  if (((ulong)param_5 & 0xfffffffb) == 0) {
    fVar20 = param_2[2];
    in_s1 = *(float *)(param_3 + 8);
    pfVar19 = param_2;
    in_s0 = fVar20;
    if (in_s1 <= fVar20) {
      pdVar13 = param_3;
      param_3 = (dtMeshTile *)param_2;
      in_s0 = in_s1;
      in_s1 = fVar20;
    }
  }
  else {
    if ((uVar10 | 4) != 6) {
      fVar20 = 0.0;
      goto LAB_0118639c;
    }
    pfVar19 = param_2 + 2;
    fVar20 = *param_2;
    in_s1 = *(float *)param_3;
    in_s0 = fVar20;
    if (in_s1 <= fVar20) {
      pdVar13 = param_3;
      param_3 = (dtMeshTile *)param_2;
      in_s0 = in_s1;
      in_s1 = fVar20;
    }
  }
  in_s6 = *(float *)(pdVar13 + 4);
  in_s3 = *(float *)(param_3 + 4);
  fVar20 = *pfVar19;
LAB_0118639c:
  lVar14 = *(long *)(piVar9 + 2);
  iVar16 = *(int *)(lVar14 + 0x18);
  if (iVar16 < 1) {
    return 0;
  }
  lVar17 = *(long *)(param_1 + 0x14);
  fVar3 = param_1[0x17];
  fVar4 = param_1[0x18];
  iVar5 = *piVar9;
  lVar12 = *(long *)(piVar9 + 4);
  fVar21 = (in_s3 - in_s6) / (in_s1 - in_s0);
  fVar23 = in_s0 * fVar21;
  lVar15 = 0;
  iVar7 = 0;
  fVar22 = in_s6 - fVar23;
  do {
    uVar8 = (ulong)*(byte *)(lVar12 + lVar15 * 0x20 + 0x1e);
    if (uVar8 != 0) {
      uVar11 = 0;
      do {
        lVar1 = lVar12 + lVar15 * 0x20;
        if ((uVar10 & 0x7fff | 0x8000) == (uint)*(ushort *)(lVar1 + uVar11 * 2 + 0x10)) {
          lVar1 = lVar1 + 4;
          uVar2 = 0;
          if (uVar11 + 1 != uVar8) {
            uVar2 = uVar11 + 1 & 0xffffffff;
          }
          pfVar18 = (float *)(*(long *)(piVar9 + 6) + (ulong)*(ushort *)(lVar1 + uVar11 * 2) * 0xc);
          pfVar19 = pfVar18;
          if (((ulong)param_5 & 0xfffffffb) == 0) {
LAB_011864b0:
            fVar24 = *pfVar19;
          }
          else {
            fVar24 = 0.0;
            if ((uVar10 | 4) == 6) {
              pfVar19 = pfVar18 + 2;
              goto LAB_011864b0;
            }
          }
          fVar24 = fVar20 - fVar24;
          fVar25 = -fVar24;
          if (0.0 <= fVar24) {
            fVar25 = fVar24;
          }
          if (fVar25 <= 0.01) {
            pfVar19 = (float *)(*(long *)(piVar9 + 6) + (ulong)*(ushort *)(lVar1 + uVar2 * 2) * 0xc)
            ;
            if (((ulong)param_5 & 0xfffffffb) == 0) {
              fVar23 = pfVar18[2];
              fVar24 = pfVar19[2];
LAB_011864f4:
              in_s16 = fVar24;
              pfVar6 = pfVar19;
              if (fVar24 <= fVar23) {
                in_s16 = fVar23;
                fVar23 = fVar24;
                pfVar6 = pfVar18;
                pfVar18 = pfVar19;
              }
              in_s18 = pfVar18[1];
              in_s17 = pfVar6[1];
            }
            else if ((uVar10 | 4) == 6) {
              fVar23 = *pfVar18;
              fVar24 = *pfVar19;
              goto LAB_011864f4;
            }
            fVar24 = in_s0 + 0.01;
            if (in_s0 + 0.01 <= fVar23 + 0.01) {
              fVar24 = fVar23 + 0.01;
            }
            fVar25 = in_s1 + -0.01;
            if (in_s16 + -0.01 <= in_s1 + -0.01) {
              fVar25 = in_s16 + -0.01;
            }
            if (fVar24 <= fVar25) {
              fVar26 = (in_s17 - in_s18) / (in_s16 - fVar23);
              fVar27 = in_s18 - fVar23 * fVar26;
              fVar24 = (fVar24 * fVar26 + fVar27) - (fVar22 + fVar21 * fVar24);
              fVar25 = (fVar26 * fVar25 + fVar27) - (fVar22 + fVar21 * fVar25);
              if (((fVar24 * fVar25 < 0.0) ||
                  (fVar26 = *(float *)(lVar14 + 0x44) + *(float *)(lVar14 + 0x44),
                  fVar26 = fVar26 * fVar26, fVar25 * fVar25 <= fVar26)) ||
                 (fVar24 * fVar24 <= fVar26)) {
                if (iVar7 < in_w7) {
                  fVar24 = in_s0;
                  if (in_s0 <= fVar23) {
                    fVar24 = fVar23;
                  }
                  *(float *)((ulong)(uint)param_7 + (long)(iVar7 << 1) * 4) = fVar24;
                  fVar24 = in_s1;
                  if (in_s16 <= in_s1) {
                    fVar24 = in_s16;
                  }
                  *(float *)((ulong)(uint)param_7 + ((long)iVar7 << 3 | 4U)) = fVar24;
                  param_6[iVar7] =
                       (float)(iVar5 << (ulong)((int)fVar3 + (int)fVar4 & 0x1f) |
                               (int)((ulong)((long)piVar9 - lVar17) >> 3) * -0x3b13b13b <<
                               (ulong)((uint)fVar4 & 0x1f) | (uint)lVar15);
                  iVar16 = *(int *)(lVar14 + 0x18);
                  iVar7 = iVar7 + 1;
                }
                break;
              }
            }
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar8);
    }
    lVar15 = lVar15 + 1;
    if (iVar16 <= lVar15) {
      return iVar7;
    }
  } while( true );
}

