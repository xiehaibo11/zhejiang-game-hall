
/* cocos2d::Skybox::setTexture(cocos2d::TextureCube*) */

void __thiscall cocos2d::Skybox::setTexture(Skybox *this,TextureCube *param_1)

{
  long lVar1;
  GLProgramState *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Ref::retain((Ref *)param_1);
  if (*(Ref **)(this + 0x360) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x360));
  }
  *(TextureCube **)(this + 0x360) = param_1;
  this_00 = (GLProgramState *)Node::getGLProgramState((Node *)this);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"u_Env");
  GLProgramState::setUniformTexture(this_00,(basic_string *)local_50,*(Texture2D **)(this + 0x360));
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

