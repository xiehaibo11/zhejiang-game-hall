
/* cocos2d::ui::Widget::getNormalGLProgramState(cocos2d::Texture2D*) const */

undefined8 __thiscall cocos2d::ui::Widget::getNormalGLProgramState(Widget *this,Texture2D *param_1)

{
  long lVar1;
  undefined8 uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_40,GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR_NO_MVP);
  uVar2 = GLProgramState::getOrCreateWithGLProgramName((basic_string *)local_40,param_1);
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

