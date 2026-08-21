
/* cocos2d::DrawNode::init() */

undefined8 __thiscall cocos2d::DrawNode::init(DrawNode *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  *(undefined8 *)(this + 0x358) = 0x30300000001;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_40,GLProgram::SHADER_NAME_POSITION_LENGTH_TEXTURE_COLOR);
  uVar4 = GLProgramState::getOrCreateWithGLProgramName((basic_string *)local_40);
  (**(code **)(*(long *)this + 0x310))(this,uVar4);
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  iVar2 = *(int *)(this + 0x310);
  if (iVar2 < *(int *)(this + 0x314) + 0x200) {
    iVar1 = iVar2;
    if (iVar2 < 0x201) {
      iVar1 = 0x200;
    }
    *(int *)(this + 0x310) = iVar1 + iVar2;
    pvVar5 = realloc(*(void **)(this + 0x318),(long)(iVar1 + iVar2) * 0x14);
    *(void **)(this + 0x318) = pvVar5;
  }
  iVar2 = *(int *)(this + 800);
  if (iVar2 < *(int *)(this + 0x324) + 0x40) {
    iVar1 = iVar2;
    if (iVar2 < 0x41) {
      iVar1 = 0x40;
    }
    *(int *)(this + 800) = iVar1 + iVar2;
    pvVar5 = realloc(*(void **)(this + 0x328),(long)(iVar1 + iVar2) * 0x14);
    *(void **)(this + 0x328) = pvVar5;
  }
  iVar2 = *(int *)(this + 0x344);
  if (iVar2 < *(int *)(this + 0x348) + 0x100) {
    iVar1 = iVar2;
    if (iVar2 < 0x101) {
      iVar1 = 0x100;
    }
    *(int *)(this + 0x344) = iVar1 + iVar2;
    pvVar5 = realloc(*(void **)(this + 0x350),(long)(iVar1 + iVar2) * 0x14);
    *(void **)(this + 0x350) = pvVar5;
  }
  setupBuffer(this);
  *(undefined2 *)(this + 0x450) = 0x101;
  this[0x452] = (DrawNode)0x1;
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

