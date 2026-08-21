
/* cocos2d::MeshSkin::getBoneIndex(cocos2d::Bone3D*) const */

long __thiscall cocos2d::MeshSkin::getBoneIndex(MeshSkin *this,Bone3D *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x30) - *(long *)(this + 0x28);
  if (0 < lVar2) {
    lVar1 = 0;
    do {
      if (*(Bone3D **)(*(long *)(this + 0x28) + lVar1 * 8) == param_1) {
        return lVar1;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < lVar2 >> 3);
  }
  return 0xffffffff;
}

