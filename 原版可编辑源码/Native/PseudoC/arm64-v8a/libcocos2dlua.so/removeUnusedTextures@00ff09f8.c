
/* cocos2d::TextureCache::removeUnusedTextures() */

void __thiscall cocos2d::TextureCache::removeUnusedTextures(TextureCache *this)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  long *plVar4;
  Ref *this_00;
  long *plVar5;
  void *local_50 [2];
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long **)(this + 0x158) != (long *)0x0) {
    plVar4 = *(long **)(this + 0x158);
    do {
      while( true ) {
        this_00 = (Ref *)plVar4[5];
        iVar3 = Ref::getReferenceCount(this_00);
        if (iVar3 != 1) break;
        Ref::release(this_00);
                    /* catch() { ... } // from try @ 00ff09b8 with catch @ 00ff0a4c */
        plVar5 = (long *)*plVar4;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>>>
        ::remove(local_50,this + 0x148,plVar4);
        pvVar2 = local_50[0];
        local_50[0] = (void *)0x0;
                    /* try { // try from 00ff0a68 to 010f0aaf has its CatchHandler @ 00ff0a68
                       catch(type#1 @ 00000000) { ... } // from try @ 00ff0a68 with catch @ 00ff0a68
                       catch(type#1 @ 00000000) { ... } // from try @ 00ff0b30 with catch @ 00ff0a68
                       catch(type#1 @ 00000000) { ... } // from try @ 00ff0b80 with catch @ 00ff0a68
                       catch(type#1 @ 00000000) { ... } // from try @ 00ff0c10 with catch @ 00ff0a68
                        */
        if (pvVar2 != (void *)0x0) {
          if ((local_40 != '\0') && ((*(byte *)((long)pvVar2 + 0x10) & 1) != 0)) {
            operator_delete(*(void **)((long)pvVar2 + 0x20));
          }
          operator_delete(pvVar2);
        }
        plVar4 = plVar5;
        if (plVar5 == (long *)0x0) goto LAB_00ff0a94;
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_00ff0a94:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00ff0ab0 to 010f0af7 has its CatchHandler @ 00ff0bf0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

