
/* cocos2d::MeshSkin::getInvBindPose(cocos2d::Bone3D const*) */

undefined1 * __thiscall cocos2d::MeshSkin::getInvBindPose(MeshSkin *this,Bone3D *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(this + 0x30) - *(long *)(this + 0x28);
  if (0 < lVar1) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      if (*(Bone3D **)(*(long *)(this + 0x28) + uVar3 * 8) == param_1) {
        if ((ulong)(*(long *)(this + 0x48) - *(long *)(this + 0x40) >> 6) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
        }
        return (undefined1 *)(*(long *)(this + 0x40) + lVar2);
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x40;
    } while ((long)uVar3 < lVar1 >> 3);
  }
  return Mat4::IDENTITY;
}

