
/* dtPathCorridor::moveOverOffmeshConnection(unsigned int, unsigned int*, float*, float*,
   dtNavMeshQuery*) */

undefined8 __thiscall
dtPathCorridor::moveOverOffmeshConnection
          (dtPathCorridor *this,uint param_1,uint *param_2,float *param_3,float *param_4,
          dtNavMeshQuery *param_5)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  
  puVar6 = *(uint **)(this + 0x18);
  iVar9 = *(int *)(this + 0x20);
  uVar4 = *puVar6;
  uVar8 = 0;
  if ((uVar4 == param_1) || (iVar9 < 1)) {
    uVar5 = 0;
    bVar2 = SBORROW4(0,iVar9);
    bVar3 = -iVar9 < 0;
    if (iVar9 == 0) {
      return 0;
    }
  }
  else if (iVar9 < 2) {
    uVar8 = 1;
    bVar2 = SBORROW4(1,iVar9);
    bVar3 = 1 - iVar9 < 0;
    uVar5 = uVar4;
    if (iVar9 == 1) {
      return 0;
    }
  }
  else {
    uVar8 = 1;
    do {
      uVar5 = uVar4;
      uVar4 = puVar6[uVar8];
      uVar8 = uVar8 + 1;
      if (uVar4 == param_1) break;
    } while ((long)uVar8 < (long)iVar9);
    iVar7 = (int)uVar8;
    bVar2 = SBORROW4(iVar7,iVar9);
    bVar3 = iVar7 - iVar9 < 0;
    if (iVar7 == iVar9) {
      return 0;
    }
  }
  if (bVar3 != bVar2) {
    uVar10 = uVar8 & 0xffffffff;
    do {
      uVar1 = (int)uVar10 + 1;
      uVar10 = (ulong)uVar1;
      *puVar6 = puVar6[uVar8 & 0xffffffff];
      iVar9 = *(int *)(this + 0x20);
      puVar6 = puVar6 + 1;
    } while ((int)uVar1 < iVar9);
  }
  *(int *)(this + 0x20) = iVar9 - (int)uVar8;
  *param_2 = uVar5;
  param_2[1] = uVar4;
  uVar4 = dtNavMesh::getOffMeshConnectionPolyEndPoints
                    (*(dtNavMesh **)param_5,uVar5,uVar4,param_3,param_4);
  if ((uVar4 >> 0x1e & 1) == 0) {
    return 0;
  }
  *(float *)this = *param_4;
  *(float *)(this + 4) = param_4[1];
  *(float *)(this + 8) = param_4[2];
  return 1;
}

