
/* cocostudio::BatchNode::init() */

uint __thiscall cocostudio::BatchNode::init(BatchNode *this)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = cocos2d::Node::init();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,cocos2d::GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR);
  uVar3 = cocos2d::GLProgramState::getOrCreateWithGLProgramName((basic_string *)local_50);
  (**(code **)(*(long *)this + 0x310))(this,uVar3);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

