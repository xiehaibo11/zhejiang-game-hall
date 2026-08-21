
/* dtNavMeshQuery::getPortalPoints(unsigned int, dtPoly const*, dtMeshTile const*, unsigned int,
   dtPoly const*, dtMeshTile const*, float*, float*) const */

undefined8 __thiscall
dtNavMeshQuery::getPortalPoints
          (dtNavMeshQuery *this,uint param_1,dtPoly *param_2,dtMeshTile *param_3,uint param_4,
          dtPoly *param_5,dtMeshTile *param_6,float *param_7,float *param_8)

{
  uint uVar1;
  byte bVar2;
  dtPoly dVar3;
  byte bVar4;
  ushort uVar5;
  long lVar6;
  dtPoly *pdVar7;
  float *pfVar8;
  uint uVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  float fVar15;
  
  uVar9 = *(uint *)param_2;
  if (uVar9 == 0xffffffff) {
    return 0x80000008;
  }
  lVar6 = *(long *)(param_3 + 0x20);
  uVar1 = uVar9;
  while( true ) {
    uVar12 = (ulong)uVar1;
    puVar13 = (uint *)(lVar6 + uVar12 * 0xc);
    if (*puVar13 == param_4) break;
    uVar1 = *(uint *)(lVar6 + uVar12 * 0xc + 4);
    if (uVar1 == 0xffffffff) {
      return 0x80000008;
    }
  }
  if (puVar13 == (uint *)0x0) {
    return 0x80000008;
  }
  if (((byte)param_2[0x1f] & 0xc0) == 0x40) {
    while (*(uint *)(lVar6 + (ulong)uVar9 * 0xc) != param_4) {
      uVar9 = *(uint *)(lVar6 + (ulong)uVar9 * 0xc + 4);
      if (uVar9 == 0xffffffff) {
        return 0x80000008;
      }
    }
    lVar10 = *(long *)(param_3 + 0x18);
    pdVar7 = param_2 + (ulong)*(byte *)(lVar6 + (ulong)uVar9 * 0xc + 8) * 2;
  }
  else {
    if (((byte)param_5[0x1f] & 0xc0) != 0x40) {
      lVar10 = lVar6 + uVar12 * 0xc;
      bVar2 = *(byte *)(lVar10 + 8);
      lVar14 = *(long *)(param_3 + 0x18);
      dVar3 = param_2[0x1e];
      uVar9 = bVar2 + 1;
      uVar1 = 0;
      if ((byte)dVar3 != 0) {
        uVar1 = uVar9 / (byte)dVar3;
      }
      pfVar8 = (float *)(lVar14 + (ulong)*(ushort *)(param_2 + (ulong)bVar2 * 2 + 4) * 0xc);
      uVar5 = *(ushort *)(param_2 + (ulong)(uVar9 - uVar1 * (byte)dVar3) * 2 + 4);
      *param_7 = *pfVar8;
      pfVar11 = (float *)(lVar14 + (ulong)uVar5 * 0xc);
      param_7[1] = pfVar8[1];
      param_7[2] = pfVar8[2];
      *param_8 = *pfVar11;
      param_8[1] = pfVar11[1];
      param_8[2] = pfVar11[2];
      if (*(char *)(lVar10 + 9) == -1) {
        return 0x40000000;
      }
      lVar6 = lVar6 + uVar12 * 0xc;
      bVar2 = *(byte *)(lVar6 + 10);
      bVar4 = *(byte *)(lVar6 + 0xb);
      if ((bVar2 == 0) && (bVar4 == 0xff)) {
        return 0x40000000;
      }
      fVar15 = (float)bVar2 * 0.003921569;
      *param_7 = *pfVar8 + fVar15 * (*pfVar11 - *pfVar8);
      param_7[1] = pfVar8[1] + fVar15 * (pfVar11[1] - pfVar8[1]);
      param_7[2] = pfVar8[2] + fVar15 * (pfVar11[2] - pfVar8[2]);
      fVar15 = (float)bVar4 * 0.003921569;
      *param_8 = *pfVar8 + fVar15 * (*pfVar11 - *pfVar8);
      param_8[1] = pfVar8[1] + fVar15 * (pfVar11[1] - pfVar8[1]);
      param_8[2] = pfVar8[2] + fVar15 * (pfVar11[2] - pfVar8[2]);
      return 0x40000000;
    }
    uVar9 = *(uint *)param_5;
    if (uVar9 == 0xffffffff) {
      return 0x80000008;
    }
    lVar6 = *(long *)(param_6 + 0x20);
    while (*(uint *)(lVar6 + (ulong)uVar9 * 0xc) != param_1) {
      uVar9 = *(uint *)(lVar6 + (ulong)uVar9 * 0xc + 4);
      if (uVar9 == 0xffffffff) {
        return 0x80000008;
      }
    }
    lVar10 = *(long *)(param_6 + 0x18);
    pdVar7 = param_5 + (ulong)*(byte *)(lVar6 + (ulong)uVar9 * 0xc + 8) * 2;
  }
  pfVar8 = (float *)(lVar10 + (ulong)*(ushort *)(pdVar7 + 4) * 0xc);
  *param_7 = *pfVar8;
  param_7[1] = pfVar8[1];
  param_7[2] = pfVar8[2];
  *param_8 = *pfVar8;
  param_8[1] = pfVar8[1];
  param_8[2] = pfVar8[2];
  return 0x40000000;
}

