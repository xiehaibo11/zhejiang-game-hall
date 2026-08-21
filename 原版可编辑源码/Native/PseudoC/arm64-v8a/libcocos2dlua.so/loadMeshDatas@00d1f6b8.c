
/* cocos2d::Bundle3D::loadMeshDatas(cocos2d::MeshDatas&) */

undefined8 __thiscall cocos2d::Bundle3D::loadMeshDatas(Bundle3D *this,MeshDatas *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  Bundle3D BVar3;
  int iVar4;
  undefined8 uVar5;
  Bundle3D *pBVar6;
  MeshData *this_00;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)param_1;
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar7 != puVar2) {
    do {
      this_00 = (MeshData *)*puVar7;
      if (this_00 != (MeshData *)0x0) {
        MeshData::~MeshData(this_00);
        operator_delete(this_00);
      }
      puVar7 = puVar7 + 1;
    } while (puVar2 != puVar7);
    puVar7 = *(undefined8 **)param_1;
  }
  *(undefined8 **)(param_1 + 8) = puVar7;
  BVar3 = this[0x38];
  uVar1 = (ulong)((byte)BVar3 >> 1);
  if (((byte)BVar3 & 1) != 0) {
    uVar1 = *(ulong *)(this + 0x40);
  }
  if (this[0x130] != (Bundle3D)0x0) {
    if (uVar1 != 3) {
LAB_00d1f77c:
      uVar5 = loadMeshDatasBinary(this,param_1);
      return uVar5;
    }
    pBVar6 = *(Bundle3D **)(this + 0x48);
    if (((byte)BVar3 & 1) == 0) {
      pBVar6 = this + 0x39;
    }
    iVar4 = memcmp(pBVar6,&DAT_0149b808,3);
    if (iVar4 != 0) {
      pBVar6 = *(Bundle3D **)(this + 0x48);
      if (((byte)BVar3 & 1) == 0) {
        pBVar6 = this + 0x39;
      }
      iVar4 = memcmp(pBVar6,&DAT_012f2699,3);
      if (iVar4 != 0) goto LAB_00d1f77c;
    }
    uVar5 = loadMeshDatasBinary_0_1(this,param_1);
    return uVar5;
  }
  if (uVar1 != 3) {
LAB_00d1f7dc:
    loadMeshDatasJson(this,param_1);
  }
  else {
    pBVar6 = *(Bundle3D **)(this + 0x48);
    if (((byte)BVar3 & 1) == 0) {
      pBVar6 = this + 0x39;
    }
    iVar4 = memcmp(pBVar6,&DAT_013d2af7,3);
    if (iVar4 != 0) {
      pBVar6 = *(Bundle3D **)(this + 0x48);
      if (((byte)BVar3 & 1) == 0) {
        pBVar6 = this + 0x39;
      }
      iVar4 = memcmp(pBVar6,&DAT_012f2699,3);
      if (iVar4 != 0) goto LAB_00d1f7dc;
    }
    loadMeshDataJson_0_1(this,param_1);
  }
  return 1;
}

