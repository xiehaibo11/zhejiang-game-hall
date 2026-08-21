
/* dtNavMeshQuery::initSlicedFindPath(unsigned int, unsigned int, float const*, float const*,
   dtQueryFilter const*, unsigned int) */

undefined4 __thiscall
dtNavMeshQuery::initSlicedFindPath
          (dtNavMeshQuery *this,uint param_1,uint param_2,float *param_3,float *param_4,
          dtQueryFilter *param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  dtNode *pdVar5;
  dtNodeQueue *this_00;
  undefined4 uVar6;
  dtNavMeshQuery *pdVar7;
  float fVar8;
  
  pdVar7 = this + 8;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)pdVar7 = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)pdVar7 = 0x80000000;
  *(uint *)(this + 0x1c) = param_1;
  *(uint *)(this + 0x20) = param_2;
  uVar6 = 0x80000008;
  *(float *)(this + 0x24) = *param_3;
  *(float *)(this + 0x28) = param_3[1];
  *(float *)(this + 0x2c) = param_3[2];
  *(float *)(this + 0x30) = *param_4;
  *(float *)(this + 0x34) = param_4[1];
  fVar8 = param_4[2];
  *(dtQueryFilter **)(this + 0x40) = param_5;
  *(uint *)(this + 0x48) = param_6;
  *(undefined4 *)(this + 0x4c) = 0x7f7fffff;
  *(float *)(this + 0x38) = fVar8;
  if ((((param_1 != 0) && (param_2 != 0)) &&
      (uVar3 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,param_1), (uVar3 & 1) != 0)) &&
     (uVar3 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,param_2), uVar6 = 0x80000008,
     (uVar3 & 1) != 0)) {
    if ((param_6 >> 1 & 1) != 0) {
      lVar4 = dtNavMesh::getTileByRef(*(dtNavMesh **)this,param_1);
      fVar8 = *(float *)(*(long *)(lVar4 + 8) + 0x40) * 50.0;
      *(float *)(this + 0x4c) = fVar8 * fVar8;
    }
    if (param_1 == param_2) {
      uVar6 = 0x40000000;
      *(undefined4 *)pdVar7 = 0x40000000;
    }
    else {
      dtNodePool::clear(*(dtNodePool **)(this + 0x58));
      *(undefined4 *)(*(long *)(this + 0x60) + 0xc) = 0;
      pdVar5 = (dtNode *)dtNodePool::getNode(*(dtNodePool **)(this + 0x58),param_1,'\0');
      uVar1 = *(uint *)(pdVar5 + 0x14);
      *(float *)pdVar5 = *param_3;
      *(float *)(pdVar5 + 4) = param_3[1];
      fVar8 = param_3[2];
      *(uint *)(pdVar5 + 0x14) = uVar1 & 0xff000000;
      *(float *)(pdVar5 + 8) = fVar8;
      *(undefined4 *)(pdVar5 + 0xc) = 0;
      *(float *)(pdVar5 + 0x10) =
           SQRT((*param_4 - *param_3) * (*param_4 - *param_3) +
                (param_4[1] - param_3[1]) * (param_4[1] - param_3[1]) +
                (param_4[2] - param_3[2]) * (param_4[2] - param_3[2])) * 0.999;
      *(uint *)(pdVar5 + 0x14) = uVar1 & 0xe3000000 | 0x4000000;
      *(uint *)(pdVar5 + 0x18) = param_1;
      this_00 = *(dtNodeQueue **)(this + 0x60);
      iVar2 = *(int *)(this_00 + 0xc);
      *(int *)(this_00 + 0xc) = iVar2 + 1;
      dtNodeQueue::bubbleUp(this_00,iVar2,pdVar5);
      uVar6 = 0x20000000;
      *(undefined4 *)(this + 8) = 0x20000000;
      *(dtNode **)(this + 0x10) = pdVar5;
      *(undefined4 *)(this + 0x18) = *(undefined4 *)(pdVar5 + 0x10);
    }
  }
  return uVar6;
}

