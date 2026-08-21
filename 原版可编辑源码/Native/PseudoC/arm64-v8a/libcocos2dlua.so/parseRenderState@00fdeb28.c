
/* cocos2d::Material::parseRenderState(cocos2d::RenderState*, cocos2d::Properties*) */

undefined8 __thiscall
cocos2d::Material::parseRenderState(Material *this,RenderState *param_1,Properties *param_2)

{
  long lVar1;
  StateBlock *this_00;
  char *pcVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00fdea78 with catch @ 00fdeb44 */
                    /* catch() { ... } // from try @ 00fdeaa4 with catch @ 00fdeb4c */
  this_00 = (StateBlock *)RenderState::getStateBlock(param_1);
  pcVar2 = (char *)Properties::getNextProperty(param_2);
  while (pcVar2 != (char *)0x0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,pcVar2);
    pcVar2 = (char *)Properties::getString(param_2,pcVar2,(char *)0x0);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_68,pcVar2);
    RenderState::StateBlock::setState(this_00,(basic_string *)local_50,(basic_string *)local_68);
    if (((byte)local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    pcVar2 = (char *)Properties::getNextProperty(param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

