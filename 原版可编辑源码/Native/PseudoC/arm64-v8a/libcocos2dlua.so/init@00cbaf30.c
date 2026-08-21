
/* cocostudio::timeline::SkeletonNode::init() */

undefined8 __thiscall cocostudio::timeline::SkeletonNode::init(SkeletonNode *this)

{
  long lVar1;
  undefined8 uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x36c) = 0x1400000014;
  (**(code **)(*(long *)this + 0x608))();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_40,cocos2d::GLProgram::SHADER_NAME_POSITION_COLOR_NO_MVP);
  uVar2 = cocos2d::GLProgramState::getOrCreateWithGLProgramName((basic_string *)local_40);
  (**(code **)(*(long *)this + 0x310))(this,uVar2);
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  *(SkeletonNode **)(this + 0x3a8) = this;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

