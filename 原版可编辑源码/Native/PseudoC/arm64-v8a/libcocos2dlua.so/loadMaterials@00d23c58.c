
/* cocos2d::Bundle3D::loadMaterials(cocos2d::MaterialDatas&) */

void __thiscall cocos2d::Bundle3D::loadMaterials(Bundle3D *this,MaterialDatas *param_1)

{
  ulong uVar1;
  long lVar2;
  Bundle3D BVar3;
  int iVar4;
  Bundle3D *pBVar5;
  long lVar6;
  
  lVar2 = *(long *)param_1;
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 != lVar2) {
    do {
      lVar6 = lVar6 + -0x30;
      FUN_0090b07c(param_1 + 0x10,lVar6);
    } while (lVar2 != lVar6);
  }
  *(long *)(param_1 + 8) = lVar2;
  BVar3 = this[0x38];
  uVar1 = (ulong)((byte)BVar3 >> 1);
  if (((byte)BVar3 & 1) != 0) {
    uVar1 = *(ulong *)(this + 0x40);
  }
  if (this[0x130] != (Bundle3D)0x0) {
    if (uVar1 == 3) {
      pBVar5 = *(Bundle3D **)(this + 0x48);
      if (((byte)BVar3 & 1) == 0) {
        pBVar5 = this + 0x39;
      }
      iVar4 = memcmp(pBVar5,&DAT_0149b808,3);
      if (iVar4 == 0) {
        loadMaterialsBinary_0_1(this,param_1);
        return;
      }
      pBVar5 = *(Bundle3D **)(this + 0x48);
      if (((byte)BVar3 & 1) == 0) {
        pBVar5 = this + 0x39;
      }
      iVar4 = memcmp(pBVar5,&DAT_012f2699,3);
      if (iVar4 == 0) {
        loadMaterialsBinary_0_2(this,param_1);
        return;
      }
    }
    loadMaterialsBinary(this,param_1);
    return;
  }
  if (uVar1 == 3) {
    pBVar5 = *(Bundle3D **)(this + 0x48);
    if (((byte)BVar3 & 1) == 0) {
      pBVar5 = this + 0x39;
    }
    iVar4 = memcmp(pBVar5,&DAT_013d2af7,3);
    if (iVar4 == 0) {
      loadMaterialDataJson_0_1((MaterialDatas *)this);
      return;
    }
    pBVar5 = *(Bundle3D **)(this + 0x48);
    if (((byte)BVar3 & 1) == 0) {
      pBVar5 = this + 0x39;
    }
    iVar4 = memcmp(pBVar5,&DAT_012f2699,3);
    if (iVar4 == 0) {
      loadMaterialDataJson_0_2(this,param_1);
      return;
    }
  }
  loadMaterialsJson(this,param_1);
  return;
}

