
/* cocos2d::CameraBackgroundSkyBoxBrush::init() */

undefined8 __thiscall cocos2d::CameraBackgroundSkyBoxBrush::init(CameraBackgroundSkyBoxBrush *this)

{
  long lVar1;
  GLProgramCache *this_00;
  GLProgram *pGVar2;
  GLProgramState *this_01;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = (GLProgramCache *)GLProgramCache::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,GLProgram::SHADER_3D_SKYBOX);
  pGVar2 = (GLProgram *)GLProgramCache::getGLProgram(this_00,(basic_string *)local_50);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  this_01 = (GLProgramState *)GLProgramState::create(pGVar2);
  *(GLProgramState **)(this + 0x28) = this_01;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,GLProgram::ATTRIBUTE_NAME_POSITION);
  GLProgramState::setVertexAttribPointer
            (this_01,(basic_string *)local_50,3,0x1406,'\0',0xc,(void *)0x0);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  Ref::retain(*(Ref **)(this + 0x28));
  initBuffer(this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

