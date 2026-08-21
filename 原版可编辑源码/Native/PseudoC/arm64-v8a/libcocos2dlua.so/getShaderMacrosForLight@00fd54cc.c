
/* cocos2d::GLProgramCache::getShaderMacrosForLight() const */

void __thiscall cocos2d::GLProgramCache::getShaderMacrosForLight(GLProgramCache *this)

{
  long lVar1;
  Configuration *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  char acStack_148 [256];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = (Configuration *)Configuration::getInstance();
  Configuration::getMaxSupportDirLightInShader(this_00);
  Configuration::getMaxSupportPointLightInShader(this_00);
  Configuration::getMaxSupportSpotLightInShader(this_00);
  FUN_00fd5674(acStack_148);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(in_x8,acStack_148);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

