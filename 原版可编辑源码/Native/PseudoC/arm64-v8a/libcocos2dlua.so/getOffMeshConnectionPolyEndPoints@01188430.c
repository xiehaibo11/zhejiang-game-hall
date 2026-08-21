
/* dtNavMesh::getOffMeshConnectionPolyEndPoints(unsigned int, unsigned int, float*, float*) const */

undefined8 __thiscall
dtNavMesh::getOffMeshConnectionPolyEndPoints
          (dtNavMesh *this,uint param_1,uint param_2,float *param_3,float *param_4)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  
  if (param_2 == 0) {
    return 0x80000000;
  }
  uVar12 = *(uint *)(this + 0x60);
  uVar1 = param_2 >> ((ulong)uVar12 & 0x3f) & ~(-1 << (ulong)(*(uint *)(this + 0x5c) & 0x1f));
  uVar5 = (ulong)uVar1;
  uVar3 = 0x80000008;
  if ((((uVar1 < *(uint *)(this + 0x30)) &&
       (lVar6 = *(long *)(this + 0x50),
       *(uint *)(lVar6 + uVar5 * 0x68) ==
       (param_2 >> (ulong)(uVar12 + *(uint *)(this + 0x5c) & 0x1f) &
       (-1 << (ulong)(*(uint *)(this + 0x58) & 0x1f) ^ 0xffffffffU)))) &&
      (lVar4 = *(long *)(lVar6 + uVar5 * 0x68 + 8), lVar4 != 0)) &&
     (uVar12 = param_2 & (-1 << (ulong)(uVar12 & 0x1f) ^ 0xffffffffU),
     uVar12 < *(uint *)(lVar4 + 0x18))) {
    lVar4 = *(long *)(lVar6 + uVar5 * 0x68 + 0x10);
    uVar8 = (ulong)uVar12;
    if ((*(byte *)(lVar4 + uVar8 * 0x20 + 0x1f) & 0xc0) != 0x40) {
      return 0x80000000;
    }
    uVar12 = *(uint *)(lVar4 + uVar8 * 0x20);
    if (uVar12 == 0xffffffff) {
      uVar11 = 0;
      uVar9 = 1;
    }
    else {
      lVar10 = *(long *)(lVar6 + uVar5 * 0x68 + 0x20);
      uVar9 = 1;
      do {
        if (*(char *)(lVar10 + (ulong)uVar12 * 0xc + 8) == '\0') {
          bVar2 = *(uint *)(lVar10 + (ulong)uVar12 * 0xc) == param_1;
          uVar9 = (ulong)bVar2;
          uVar11 = (ulong)!bVar2;
          goto LAB_01188554;
        }
        uVar12 = *(uint *)(lVar10 + (ulong)uVar12 * 0xc + 4);
      } while (uVar12 != 0xffffffff);
      uVar11 = 0;
    }
LAB_01188554:
    lVar4 = lVar4 + uVar8 * 0x20 + 4;
    lVar6 = *(long *)(lVar6 + uVar5 * 0x68 + 0x18);
    uVar3 = 0x40000000;
    pfVar7 = (float *)(lVar6 + (ulong)*(ushort *)(lVar4 + uVar11 * 2) * 0xc);
    *param_3 = *pfVar7;
    param_3[1] = pfVar7[1];
    param_3[2] = pfVar7[2];
    pfVar7 = (float *)(lVar6 + (ulong)*(ushort *)(lVar4 + uVar9 * 2) * 0xc);
    *param_4 = *pfVar7;
    param_4[1] = pfVar7[1];
    param_4[2] = pfVar7[2];
  }
  return uVar3;
}

