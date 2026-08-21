
/* cocos2d::TextureCache::removeTexture(cocos2d::Texture2D*) */

void __thiscall cocos2d::TextureCache::removeTexture(TextureCache *this,Texture2D *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *local_50 [2];
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != (Texture2D *)0x0) {
    for (plVar3 = *(long **)(this + 0x158); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if ((Ref *)plVar3[5] == (Ref *)param_1) {
        Ref::release((Ref *)plVar3[5]);
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>>>
        ::remove(local_50,this + 0x148,plVar3);
        pvVar2 = local_50[0];
        local_50[0] = (void *)0x0;
        if (pvVar2 != (void *)0x0) {
                    /* try { // try from 00ff0b24 to 010f0b2f has its CatchHandler @ 00ff0ba8 */
                    /* try { // try from 00ff0b30 to 010f0b6b has its CatchHandler @ 00ff0a68 */
          if ((local_40 != '\0') && ((*(byte *)((long)pvVar2 + 0x10) & 1) != 0)) {
            operator_delete(*(void **)((long)pvVar2 + 0x20));
          }
          operator_delete(pvVar2);
        }
        break;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

