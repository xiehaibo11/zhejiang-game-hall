
/* cocos2d::Mesh::resetLightUniformValues() */

void __thiscall cocos2d::Mesh::resetLightUniformValues(Mesh *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Configuration *this_00;
  ulong uVar5;
  float local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = (Configuration *)Configuration::getInstance();
  iVar2 = Configuration::getMaxSupportDirLightInShader(this_00);
  iVar3 = Configuration::getMaxSupportPointLightInShader(this_00);
  iVar4 = Configuration::getMaxSupportSpotLightInShader(this_00);
  std::__ndk1::vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>>::assign
            ((vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>> *)(this + 0x1a0),
             (long)iVar2,(Vec3 *)&Vec3::ZERO);
  std::__ndk1::vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>>::assign
            ((vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>> *)(this + 0x1b8),
             (long)iVar2,(Vec3 *)&Vec3::ZERO);
  uVar5 = (ulong)iVar3;
  std::__ndk1::vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>>::assign
            ((vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>> *)(this + 0x1d0),uVar5,
             (Vec3 *)&Vec3::ZERO);
  std::__ndk1::vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>>::assign
            ((vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>> *)(this + 0x1e8),uVar5,
             (Vec3 *)&Vec3::ZERO);
  local_4c = 0.0;
  std::__ndk1::vector<float,std::__ndk1::allocator<float>>::assign
            ((vector<float,std::__ndk1::allocator<float>> *)(this + 0x200),uVar5,&local_4c);
  uVar5 = (ulong)iVar4;
  std::__ndk1::vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>>::assign
            ((vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>> *)(this + 0x218),uVar5,
             (Vec3 *)&Vec3::ZERO);
  std::__ndk1::vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>>::assign
            ((vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>> *)(this + 0x230),uVar5,
             (Vec3 *)&Vec3::ZERO);
  std::__ndk1::vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>>::assign
            ((vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>> *)(this + 0x248),uVar5,
             (Vec3 *)&Vec3::ZERO);
  local_4c = 1.0;
  std::__ndk1::vector<float,std::__ndk1::allocator<float>>::assign
            ((vector<float,std::__ndk1::allocator<float>> *)(this + 0x260),uVar5,&local_4c);
  local_4c = 0.0;
  std::__ndk1::vector<float,std::__ndk1::allocator<float>>::assign
            ((vector<float,std::__ndk1::allocator<float>> *)(this + 0x278),uVar5,&local_4c);
  local_4c = 0.0;
  std::__ndk1::vector<float,std::__ndk1::allocator<float>>::assign
            ((vector<float,std::__ndk1::allocator<float>> *)(this + 0x290),uVar5,&local_4c);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

