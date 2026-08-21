
/* dtNavMeshQuery::findRandomPoint(dtQueryFilter const*, float (*)(), unsigned int*, float*) const
    */

void __thiscall
dtNavMeshQuery::findRandomPoint
          (dtNavMeshQuery *this,dtQueryFilter *param_1,_func_float *param_2,uint *param_3,
          float *param_4)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  dtMeshTile *pdVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  float *pfVar12;
  ulong uVar13;
  long lVar14;
  float *pfVar15;
  undefined4 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  dtMeshTile *pdVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float local_e4;
  float afStack_e0 [6];
  float local_c8;
  float local_c4;
  float local_c0;
  undefined4 auStack_b4 [13];
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  iVar4 = dtNavMesh::getMaxTiles(*(dtNavMesh **)this);
  if (0 < iVar4) {
    pdVar21 = (dtMeshTile *)0x0;
    iVar4 = 0;
    fVar26 = 0.0;
    do {
      pdVar7 = (dtMeshTile *)dtNavMesh::getTile(*(dtNavMesh **)this,iVar4);
      if ((pdVar7 != (dtMeshTile *)0x0) && (*(long *)(pdVar7 + 8) != 0)) {
        fVar26 = fVar26 + 1.0;
        fVar23 = (*param_2)();
        if (fVar26 * fVar23 <= 1.0) {
          pdVar21 = pdVar7;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = dtNavMesh::getMaxTiles(*(dtNavMesh **)this);
    } while (iVar4 < iVar5);
    if (pdVar21 != (dtMeshTile *)0x0) {
      uVar6 = dtNavMesh::getPolyRefBase(*(dtNavMesh **)this,pdVar21);
      lVar9 = *(long *)(pdVar21 + 8);
      if (0 < *(int *)(lVar9 + 0x18)) {
        lVar19 = 0;
        lVar22 = 0;
        uVar20 = 0;
        fVar26 = 0.0;
        do {
          lVar1 = *(long *)(pdVar21 + 0x10) + lVar19 * 0x20;
          if (((*(byte *)(lVar1 + 0x1f) < 0x40) &&
              ((*(ushort *)(param_1 + 0x100) & *(ushort *)(lVar1 + 0x1c)) != 0)) &&
             ((*(ushort *)(param_1 + 0x102) & *(ushort *)(lVar1 + 0x1c)) == 0)) {
            lVar9 = *(long *)(pdVar21 + 0x10) + lVar19 * 0x20;
            fVar23 = 0.0;
            if (2 < (ulong)*(byte *)(lVar9 + 0x1e)) {
              lVar10 = *(long *)(pdVar21 + 0x18);
              fVar23 = 0.0;
              lVar14 = 4;
              pfVar12 = (float *)(lVar10 + (ulong)*(ushort *)(lVar9 + 4) * 0xc);
              fVar24 = *pfVar12;
              fVar25 = pfVar12[2];
              uVar18 = (ulong)*(ushort *)(lVar9 + 6);
              do {
                uVar13 = (ulong)*(ushort *)(lVar9 + lVar14 * 2);
                pfVar12 = (float *)(lVar10 + uVar18 * 0xc);
                pfVar15 = (float *)(lVar10 + uVar13 * 0xc);
                uVar17 = lVar14 - 1;
                lVar14 = lVar14 + 1;
                fVar23 = fVar23 + ((pfVar12[2] - fVar25) * (*pfVar15 - fVar24) -
                                  (*pfVar12 - fVar24) * (pfVar15[2] - fVar25));
                uVar18 = uVar13;
              } while (uVar17 < *(byte *)(lVar9 + 0x1e));
            }
            fVar26 = fVar26 + fVar23;
            fVar24 = (*param_2)();
            lVar9 = *(long *)(pdVar21 + 8);
            if (fVar26 * fVar24 <= fVar23) {
              lVar22 = lVar1;
              uVar20 = uVar6 | (uint)lVar19;
            }
          }
          lVar19 = lVar19 + 1;
        } while (lVar19 < *(int *)(lVar9 + 0x18));
        if (lVar22 != 0) {
          lVar9 = *(long *)(pdVar21 + 0x18);
          pfVar12 = (float *)(lVar9 + (ulong)*(ushort *)(lVar22 + 4) * 0xc);
          local_c8 = *pfVar12;
          local_c4 = pfVar12[1];
          local_c0 = pfVar12[2];
          bVar2 = *(byte *)(lVar22 + 0x1e);
          if (1 < (ulong)bVar2) {
            lVar19 = 3;
            puVar11 = auStack_b4;
            do {
              puVar16 = (undefined4 *)(lVar9 + (ulong)*(ushort *)(lVar22 + lVar19 * 2) * 0xc);
              puVar11[-2] = *puVar16;
              puVar11[-1] = puVar16[1];
              uVar18 = lVar19 - 1;
              lVar19 = lVar19 + 1;
              *puVar11 = puVar16[2];
              puVar11 = puVar11 + 3;
            } while (uVar18 < bVar2);
          }
          fVar26 = (*param_2)();
          fVar23 = (*param_2)();
          dtRandomPointInConvexPoly
                    (&local_c8,(uint)*(byte *)(lVar22 + 0x1e),afStack_e0,fVar26,fVar23,&fStack_ec);
          local_f0 = 0.0;
          uVar8 = getPolyHeight(this,uVar20,&fStack_ec,&local_f0);
          if (-1 < (int)uVar8) {
            uVar8 = 0x40000000;
            local_e8 = local_f0;
            *param_4 = fStack_ec;
            param_4[1] = local_f0;
            param_4[2] = local_e4;
            *param_3 = uVar20;
          }
          goto LAB_01188eb4;
        }
      }
    }
  }
  uVar8 = 0x80000000;
LAB_01188eb4:
  if (*(long *)(lVar3 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}

