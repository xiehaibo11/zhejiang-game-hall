
/* cocos2d::CameraBackgroundSkyBoxBrush::setTexture(cocos2d::TextureCube*) */

void __thiscall
cocos2d::CameraBackgroundSkyBoxBrush::setTexture
          (CameraBackgroundSkyBoxBrush *this,TextureCube *param_1)

{
  long lVar1;
  GLProgramState *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
                    /* try { // try from 00ef1680 to 00ff17a3 has its CatchHandler @ 00ef1680
                       catch() { ... } // from try @ 00ef1680 with catch @ 00ef1680
                       catch() { ... } // from try @ 00ef17b0 with catch @ 00ef1680 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != (TextureCube *)0x0) {
    Ref::retain((Ref *)param_1);
  }
  if (*(Ref **)(this + 0x40) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x40));
  }
  this_00 = *(GLProgramState **)(this + 0x28);
  *(TextureCube **)(this + 0x40) = param_1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"u_Env");
  GLProgramState::setUniformTexture(this_00,(basic_string *)local_50,*(Texture2D **)(this + 0x40));
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

