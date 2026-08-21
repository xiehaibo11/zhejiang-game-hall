
/* cocos2d::CameraBackgroundDepthBrush::init() */

undefined8 __thiscall cocos2d::CameraBackgroundDepthBrush::init(CameraBackgroundDepthBrush *this)

{
  long lVar1;
  GLProgramCache *this_00;
  GLProgram *pGVar2;
  Ref *this_01;
  undefined8 uVar3;
  uint local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = (GLProgramCache *)GLProgramCache::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_60,GLProgram::SHADER_CAMERA_CLEAR);
  pGVar2 = (GLProgram *)GLProgramCache::getGLProgram(this_00,(basic_string *)&local_60);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  this_01 = (Ref *)GLProgramState::getOrCreateWithGLProgram(pGVar2);
  *(Ref **)(this + 0x28) = this_01;
  Ref::retain(this_01);
  Vec3::Vec3((Vec3 *)&local_60,-1.0,-1.0,0.0);
  *(undefined4 *)(this + 0x60) = local_58;
  *(ulong *)(this + 0x58) = CONCAT44(uStack_5c,local_60);
  Vec3::Vec3((Vec3 *)&local_60,1.0,-1.0,0.0);
  *(undefined4 *)(this + 0x90) = local_58;
  *(ulong *)(this + 0x88) = CONCAT44(uStack_5c,local_60);
  Vec3::Vec3((Vec3 *)&local_60,-1.0,1.0,0.0);
  *(undefined4 *)(this + 0x48) = local_58;
  *(ulong *)(this + 0x40) = CONCAT44(uStack_5c,local_60);
  Vec3::Vec3((Vec3 *)&local_60,1.0,1.0,0.0);
  *(undefined4 *)(this + 0x78) = local_58;
  *(ulong *)(this + 0x70) = CONCAT44(uStack_5c,local_60);
  Color4B::Color4B((Color4B *)&local_60,'\0','\0','\0','\x01');
  *(undefined8 *)(this + 0x98) = 0x3f800000;
  uVar3 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x50) = 0x3f80000000000000;
  *(uint *)(this + 0x7c) = local_60;
  *(uint *)(this + 0x4c) = local_60;
  *(uint *)(this + 0x94) = local_60;
  *(uint *)(this + 100) = local_60;
  *(undefined8 *)(this + 0x80) = uVar3;
  initBuffer(this);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

