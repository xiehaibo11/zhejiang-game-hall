
/* dtNavMeshQuery::getPolyHeight(unsigned int, float const*, float*) const */

undefined4 __thiscall
dtNavMeshQuery::getPolyHeight(dtNavMeshQuery *this,uint param_1,float *param_2,float *param_3)

{
  byte *pbVar1;
  dtPoly dVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  ulong uVar10;
  undefined4 uVar11;
  byte *pbVar12;
  int *piVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_7c;
  dtPoly *local_78;
  dtMeshTile *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_78 = (dtPoly *)0x0;
  local_70 = (dtMeshTile *)0x0;
  uVar11 = 0x80000008;
  iVar5 = dtNavMesh::getTileAndPolyByRef(*(dtNavMesh **)this,param_1,&local_70,&local_78);
  if (-1 < iVar5) {
    if (((byte)local_78[0x1f] & 0xc0) == 0x40) {
      if (param_3 != (float *)0x0) {
        pfVar8 = (float *)(*(long *)(local_70 + 0x18) + (ulong)*(ushort *)(local_78 + 4) * 0xc);
        pfVar7 = (float *)(*(long *)(local_70 + 0x18) + (ulong)*(ushort *)(local_78 + 6) * 0xc);
        fVar17 = pfVar8[2] - param_2[2];
        fVar18 = *pfVar8 - *param_2;
        fVar15 = *pfVar7 - *param_2;
        fVar16 = pfVar7[2] - param_2[2];
        fVar17 = SQRT(fVar18 * fVar18 + fVar17 * fVar17);
        *param_3 = pfVar8[1] +
                   (fVar17 / (fVar17 + SQRT(fVar15 * fVar15 + fVar16 * fVar16))) *
                   (pfVar7[1] - pfVar8[1]);
      }
LAB_0118910c:
      uVar11 = 0x40000000;
    }
    else {
      uVar10 = (ulong)((long)local_78 - *(long *)(local_70 + 0x10)) >> 5 & 0xffffffff;
      pbVar12 = (byte *)(*(long *)(local_70 + 0x28) + uVar10 * 0xc + 9);
      if (*pbVar12 != 0) {
        piVar13 = (int *)(*(long *)(local_70 + 0x28) + uVar10 * 0xc);
        uVar14 = 1;
        while( true ) {
          pbVar1 = (byte *)(*(long *)(local_70 + 0x38) + (ulong)((uVar14 + piVar13[1]) * 4 - 4));
          dVar2 = local_78[0x1e];
          bVar3 = *pbVar1;
          if ((uint)bVar3 < (uint)(byte)dVar2) {
            pfVar7 = (float *)(*(long *)(local_70 + 0x18) +
                              (ulong)*(ushort *)(local_78 + (ulong)bVar3 * 2 + 4) * 0xc);
          }
          else {
            pfVar7 = (float *)(*(long *)(local_70 + 0x30) +
                              (ulong)((((uint)bVar3 - (uint)(byte)dVar2) + *piVar13) * 3) * 4);
          }
          bVar3 = pbVar1[1];
          uVar9 = (uint)(byte)dVar2;
          if (bVar3 < uVar9) {
            pfVar8 = (float *)(*(long *)(local_70 + 0x18) +
                              (ulong)*(ushort *)(local_78 + (ulong)bVar3 * 2 + 4) * 0xc);
          }
          else {
            pfVar8 = (float *)(*(long *)(local_70 + 0x30) +
                              (ulong)(((bVar3 - uVar9) + *piVar13) * 3) * 4);
          }
          bVar3 = pbVar1[2];
          if (bVar3 < uVar9) {
            pfVar6 = (float *)(*(long *)(local_70 + 0x18) +
                              (ulong)*(ushort *)(local_78 + (ulong)bVar3 * 2 + 4) * 0xc);
          }
          else {
            pfVar6 = (float *)(*(long *)(local_70 + 0x30) +
                              (ulong)(((bVar3 - uVar9) + *piVar13) * 3) * 4);
          }
          uVar10 = dtClosestHeightPointTriangle(param_2,pfVar7,pfVar8,pfVar6,&local_7c);
          if ((uVar10 & 1) != 0) {
            if (param_3 != (float *)0x0) {
              *param_3 = local_7c;
            }
            goto LAB_0118910c;
          }
          if (*pbVar12 <= uVar14) break;
          uVar14 = uVar14 + 1;
        }
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

