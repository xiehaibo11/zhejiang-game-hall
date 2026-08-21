
/* spine::SkeletonRenderer::setTwoColorTint(bool) */

void __thiscall spine::SkeletonRenderer::setTwoColorTint(SkeletonRenderer *this,bool param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1) {
    lVar2 = SkeletonTwoColorBatch::getInstance();
    (**(code **)(*(long *)this + 0x310))(this,*(undefined8 *)(lVar2 + 0x58));
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              (local_40,cocos2d::GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR_NO_MVP);
    uVar3 = cocos2d::GLProgramState::getOrCreateWithGLProgramName((basic_string *)local_40);
    (**(code **)(*(long *)this + 0x310))(this,uVar3);
    if (((byte)local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

