
/* dtNavMeshQuery::queryPolygonsInTile(dtMeshTile const*, float const*, float const*, dtQueryFilter
   const*, unsigned int*, int) const */

int __thiscall
dtNavMeshQuery::queryPolygonsInTile
          (dtNavMeshQuery *this,dtMeshTile *param_1,float *param_2,float *param_3,
          dtQueryFilter *param_4,uint *param_5,int param_6)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  float *pfVar16;
  ulong uVar17;
  ushort *puVar18;
  float fVar19;
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
  
  puVar18 = *(ushort **)(param_1 + 0x40);
  if (puVar18 == (ushort *)0x0) {
    uVar6 = dtNavMesh::getPolyRefBase(*(dtNavMesh **)this,param_1);
    lVar11 = *(long *)(param_1 + 8);
    iVar14 = *(int *)(lVar11 + 0x18);
    if (0 < iVar14) {
      lVar13 = *(long *)(param_1 + 0x10);
      lVar12 = 0;
      iVar7 = 0;
      lVar15 = lVar13;
      do {
        lVar10 = lVar13 + lVar12 * 0x20;
        if ((((*(byte *)(lVar10 + 0x1f) & 0xc0) != 0x40) &&
            (uVar2 = *(ushort *)(lVar10 + 0x1c), (*(ushort *)(param_4 + 0x100) & uVar2) != 0)) &&
           ((*(ushort *)(param_4 + 0x102) & uVar2) == 0)) {
          lVar10 = lVar13 + lVar12 * 0x20;
          uVar9 = (ulong)*(byte *)(lVar10 + 0x1e);
          pfVar16 = (float *)(*(long *)(param_1 + 0x18) + (ulong)*(ushort *)(lVar10 + 4) * 0xc);
          fVar28 = *pfVar16;
          fVar27 = pfVar16[1];
          fVar26 = pfVar16[2];
          fVar21 = fVar28;
          fVar19 = fVar27;
          fVar22 = fVar26;
          if (1 < uVar9) {
            lVar10 = 3;
            do {
              pfVar16 = (float *)(*(long *)(param_1 + 0x18) +
                                 (ulong)*(ushort *)(lVar15 + lVar10 * 2) * 0xc);
              fVar24 = *pfVar16;
              fVar29 = pfVar16[1];
              fVar30 = pfVar16[2];
              if (fVar24 <= fVar21) {
                fVar21 = fVar24;
              }
              if (fVar29 <= fVar19) {
                fVar19 = fVar29;
              }
              if (fVar30 <= fVar22) {
                fVar22 = fVar30;
              }
              if (fVar28 <= fVar24) {
                fVar28 = fVar24;
              }
              if (fVar27 <= fVar29) {
                fVar27 = fVar29;
              }
              if (fVar26 <= fVar30) {
                fVar26 = fVar30;
              }
              uVar17 = lVar10 - 1;
              lVar10 = lVar10 + 1;
            } while (uVar17 < uVar9);
          }
          if ((fVar28 < *param_2) || (*param_3 < fVar21)) {
            bVar4 = 0;
          }
          else {
            bVar4 = 1;
          }
          if ((fVar27 < param_2[1]) || (param_3[1] < fVar19)) {
            bVar4 = 0;
          }
          if (((param_2[2] <= fVar26) && (!(bool)(param_6 <= iVar7 | bVar4 ^ 1))) &&
             (fVar22 <= param_3[2])) {
            param_5[iVar7] = uVar6 | (uint)lVar12;
            iVar14 = *(int *)(lVar11 + 0x18);
            iVar7 = iVar7 + 1;
          }
        }
        lVar12 = lVar12 + 1;
        lVar15 = lVar15 + 0x20;
      } while (lVar12 < iVar14);
      return iVar7;
    }
  }
  else {
    lVar11 = *(long *)(param_1 + 8);
    fVar19 = *param_2;
    fVar22 = param_2[1];
    fVar24 = param_2[2];
    fVar29 = *(float *)(lVar11 + 0x50);
    fVar26 = *(float *)(lVar11 + 0x54);
    fVar31 = *(float *)(lVar11 + 0x48);
    fVar30 = *(float *)(lVar11 + 0x4c);
    fVar27 = *(float *)(lVar11 + 0x58);
    fVar28 = *(float *)(lVar11 + 0x5c);
    fVar32 = *(float *)(lVar11 + 0x60);
    fVar21 = fVar26;
    if (fVar19 <= fVar26) {
      fVar21 = fVar19;
    }
    fVar20 = fVar31;
    if (fVar31 <= fVar19) {
      fVar20 = fVar21;
    }
    fVar21 = fVar27;
    if (fVar22 <= fVar27) {
      fVar21 = fVar22;
    }
    fVar23 = *param_3;
    fVar19 = fVar30;
    if (fVar30 <= fVar22) {
      fVar19 = fVar21;
    }
    fVar21 = fVar28;
    if (fVar24 <= fVar28) {
      fVar21 = fVar24;
    }
    fVar25 = param_3[1];
    fVar22 = fVar29;
    if (fVar29 <= fVar24) {
      fVar22 = fVar21;
    }
    if (fVar23 <= fVar26) {
      fVar26 = fVar23;
    }
    fVar24 = param_3[2];
    fVar21 = fVar31;
    if (fVar31 <= fVar23) {
      fVar21 = fVar26;
    }
    iVar14 = *(int *)(lVar11 + 0x30);
    if (fVar25 <= fVar27) {
      fVar27 = fVar25;
    }
    fVar26 = fVar30;
    if (fVar30 <= fVar25) {
      fVar26 = fVar27;
    }
    if (fVar24 <= fVar28) {
      fVar28 = fVar24;
    }
    fVar27 = fVar29;
    if (fVar29 <= fVar24) {
      fVar27 = fVar28;
    }
    uVar6 = dtNavMesh::getPolyRefBase(*(dtNavMesh **)this,param_1);
    if (0 < iVar14) {
      iVar7 = 0;
      puVar1 = puVar18 + (long)iVar14 * 8;
      do {
        if ((uint)puVar18[3] < ((int)(fVar32 * (fVar20 - fVar31)) & 0xfffeU)) {
          bVar5 = false;
        }
        else {
          bVar5 = (uint)*puVar18 <= ((int)(fVar32 * (fVar21 - fVar31) + 1.0) | 1U);
        }
        if ((uint)puVar18[4] < ((int)(fVar32 * (fVar19 - fVar30)) & 0xfffeU)) {
          bVar4 = 0;
        }
        else {
          bVar4 = bVar5 & (uint)puVar18[1] <= ((int)(fVar32 * (fVar26 - fVar30) + 1.0) | 1U);
        }
        if ((uint)puVar18[5] < ((int)(fVar32 * (fVar22 - fVar29)) & 0xfffeU)) {
          bVar5 = false;
          uVar8 = ~*(uint *)(puVar18 + 6) >> 0x1f;
LAB_0118a4d0:
          if ((uVar8 != 0) || (bVar5)) goto LAB_0118a45c;
          lVar11 = -(long)*(int *)(puVar18 + 6);
        }
        else {
          uVar3 = *(uint *)(puVar18 + 6);
          bVar5 = (bool)(bVar4 & (uint)puVar18[2] <= ((int)(fVar32 * (fVar27 - fVar29) + 1.0) | 1U))
          ;
          uVar8 = ~uVar3 >> 0x1f;
          if (((int)uVar3 < 0) || (!bVar5)) goto LAB_0118a4d0;
          uVar2 = *(ushort *)(*(long *)(param_1 + 0x10) + (long)(int)uVar3 * 0x20 + 0x1c);
          if (((*(ushort *)(param_4 + 0x100) & uVar2) != 0) &&
             ((iVar7 < param_6 && ((*(ushort *)(param_4 + 0x102) & uVar2) == 0)))) {
            param_5[iVar7] = uVar3 | uVar6;
            iVar7 = iVar7 + 1;
          }
LAB_0118a45c:
          lVar11 = 1;
        }
        puVar18 = puVar18 + lVar11 * 8;
        if (puVar1 <= puVar18) {
          return iVar7;
        }
      } while( true );
    }
  }
  return 0;
}

