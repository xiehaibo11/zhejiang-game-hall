
/* dtNavMesh::queryPolygonsInTile(dtMeshTile const*, float const*, float const*, unsigned int*, int)
   const */

int __thiscall
dtNavMesh::queryPolygonsInTile
          (dtNavMesh *this,dtMeshTile *param_1,float *param_2,float *param_3,uint *param_4,
          int param_5)

{
  ushort *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ushort *puVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  float *pfVar17;
  ulong uVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  puVar11 = *(ushort **)(param_1 + 0x40);
  if (puVar11 == (ushort *)0x0) {
    lVar13 = *(long *)(param_1 + 8);
    iVar12 = *(int *)(lVar13 + 0x18);
    if (0 < iVar12) {
      iVar7 = *(int *)(this + 0x5c);
      uVar3 = *(uint *)(this + 0x60);
      iVar8 = *(int *)param_1;
      lVar16 = *(long *)(this + 0x50);
      lVar10 = *(long *)(param_1 + 0x10);
      lVar14 = 0;
      iVar9 = 0;
      lVar15 = lVar10;
      do {
        lVar2 = lVar10 + lVar14 * 0x20;
        if ((*(byte *)(lVar2 + 0x1f) & 0xc0) != 0x40) {
          pfVar17 = (float *)(*(long *)(param_1 + 0x18) + (ulong)*(ushort *)(lVar2 + 4) * 0xc);
          fVar27 = *pfVar17;
          fVar28 = pfVar17[1];
          fVar29 = pfVar17[2];
          fVar30 = fVar27;
          fVar20 = fVar28;
          fVar21 = fVar29;
          if (1 < (ulong)*(byte *)(lVar2 + 0x1e)) {
            lVar19 = 3;
            do {
              pfVar17 = (float *)(*(long *)(param_1 + 0x18) +
                                 (ulong)*(ushort *)(lVar15 + lVar19 * 2) * 0xc);
              fVar22 = *pfVar17;
              fVar23 = pfVar17[1];
              fVar25 = pfVar17[2];
              if (fVar22 <= fVar30) {
                fVar30 = fVar22;
              }
              if (fVar23 <= fVar20) {
                fVar20 = fVar23;
              }
              if (fVar25 <= fVar21) {
                fVar21 = fVar25;
              }
              if (fVar27 <= fVar22) {
                fVar27 = fVar22;
              }
              if (fVar28 <= fVar23) {
                fVar28 = fVar23;
              }
              if (fVar29 <= fVar25) {
                fVar29 = fVar25;
              }
              uVar18 = lVar19 - 1;
              lVar19 = lVar19 + 1;
            } while (uVar18 < *(byte *)(lVar2 + 0x1e));
          }
          if ((fVar27 < *param_2) || (*param_3 < fVar30)) {
            bVar5 = 0;
          }
          else {
            bVar5 = 1;
          }
          if ((fVar28 < param_2[1]) || (param_3[1] < fVar20)) {
            bVar5 = 0;
          }
          if (((param_2[2] <= fVar29) && (!(bool)(param_5 <= iVar9 | bVar5 ^ 1))) &&
             (fVar21 <= param_3[2])) {
            param_4[iVar9] =
                 iVar8 << (ulong)(iVar7 + uVar3 & 0x1f) |
                 (int)((ulong)((long)param_1 - lVar16) >> 3) * -0x3b13b13b << (ulong)(uVar3 & 0x1f)
                 | (uint)lVar14;
            iVar12 = *(int *)(lVar13 + 0x18);
            iVar9 = iVar9 + 1;
          }
        }
        lVar14 = lVar14 + 1;
        lVar15 = lVar15 + 0x20;
      } while (lVar14 < iVar12);
      return iVar9;
    }
  }
  else {
    lVar13 = *(long *)(param_1 + 8);
    fVar23 = *param_2;
    fVar25 = param_2[1];
    fVar26 = param_2[2];
    fVar31 = *param_3;
    fVar32 = param_3[1];
    fVar20 = *(float *)(lVar13 + 0x50);
    fVar27 = *(float *)(lVar13 + 0x54);
    fVar22 = *(float *)(lVar13 + 0x48);
    fVar21 = *(float *)(lVar13 + 0x4c);
    fVar28 = *(float *)(lVar13 + 0x58);
    fVar29 = *(float *)(lVar13 + 0x5c);
    fVar30 = fVar27;
    if (fVar23 <= fVar27) {
      fVar30 = fVar23;
    }
    fVar24 = fVar22;
    if (fVar22 <= fVar23) {
      fVar24 = fVar30;
    }
    fVar30 = fVar28;
    if (fVar25 <= fVar28) {
      fVar30 = fVar25;
    }
    fVar23 = fVar21;
    if (fVar21 <= fVar25) {
      fVar23 = fVar30;
    }
    fVar30 = fVar29;
    if (fVar26 <= fVar29) {
      fVar30 = fVar26;
    }
    fVar25 = fVar20;
    if (fVar20 <= fVar26) {
      fVar25 = fVar30;
    }
    fVar30 = param_3[2];
    if (fVar31 <= fVar27) {
      fVar27 = fVar31;
    }
    fVar26 = fVar22;
    if (fVar22 <= fVar31) {
      fVar26 = fVar27;
    }
    if (fVar32 <= fVar28) {
      fVar28 = fVar32;
    }
    fVar27 = fVar21;
    if (fVar21 <= fVar32) {
      fVar27 = fVar28;
    }
    if (fVar30 <= fVar29) {
      fVar29 = fVar30;
    }
    fVar28 = fVar20;
    if (fVar20 <= fVar30) {
      fVar28 = fVar29;
    }
    if (0 < *(int *)(lVar13 + 0x30)) {
      fVar29 = *(float *)(lVar13 + 0x60);
      lVar14 = *(long *)(this + 0x50);
      iVar12 = *(int *)(this + 0x5c);
      uVar3 = *(uint *)(this + 0x60);
      iVar9 = *(int *)param_1;
      iVar7 = 0;
      puVar1 = puVar11 + (long)*(int *)(lVar13 + 0x30) * 8;
      do {
        if ((uint)puVar11[3] < ((int)(fVar29 * (fVar24 - fVar22)) & 0xfffeU)) {
          bVar6 = false;
        }
        else {
          bVar6 = (uint)*puVar11 <= ((int)(fVar29 * (fVar26 - fVar22) + 1.0) | 1U);
        }
        if ((uint)puVar11[4] < ((int)(fVar29 * (fVar23 - fVar21)) & 0xfffeU)) {
          bVar5 = 0;
        }
        else {
          bVar5 = bVar6 & (uint)puVar11[1] <= ((int)(fVar29 * (fVar27 - fVar21) + 1.0) | 1U);
        }
        iVar8 = iVar7;
        if ((uint)puVar11[5] < ((int)(fVar29 * (fVar25 - fVar20)) & 0xfffeU)) {
          uVar4 = *(uint *)(puVar11 + 6);
LAB_01187730:
          lVar13 = 1;
          iVar7 = iVar8;
          if ((int)uVar4 < 0) {
            lVar13 = -(long)*(int *)(puVar11 + 6);
          }
        }
        else {
          uVar4 = *(uint *)(puVar11 + 6);
          bVar6 = (bool)(bVar5 & (uint)puVar11[2] <= ((int)(fVar29 * (fVar28 - fVar20) + 1.0) | 1U))
          ;
          if (((iVar7 < param_5) && (bVar6)) && (-1 < (int)uVar4)) {
            iVar8 = iVar7 + 1;
            param_4[iVar7] =
                 iVar9 << (ulong)(iVar12 + uVar3 & 0x1f) |
                 (int)((ulong)((long)param_1 - lVar14) >> 3) * -0x3b13b13b << (ulong)(uVar3 & 0x1f)
                 | uVar4;
          }
          if (!bVar6) goto LAB_01187730;
          lVar13 = 1;
          iVar7 = iVar8;
        }
        puVar11 = puVar11 + lVar13 * 8;
        if (puVar1 <= puVar11) {
          return iVar7;
        }
      } while( true );
    }
  }
  return 0;
}

