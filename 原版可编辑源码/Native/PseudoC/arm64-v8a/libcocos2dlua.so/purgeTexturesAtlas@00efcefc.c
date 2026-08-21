
/* cocos2d::FontAtlas::purgeTexturesAtlas() */

void __thiscall cocos2d::FontAtlas::purgeTexturesAtlas(FontAtlas *this)

{
  long lVar1;
  long lVar2;
  EventDispatcher *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x88) != 0) {
    reset(this);
    lVar2 = Director::getInstance();
                    /* catch() { ... } // from try @ 00efcd6c with catch @ 00efcf34
                       catch() { ... } // from try @ 00efce9c with catch @ 00efcf34 */
    this_00 = *(EventDispatcher **)(lVar2 + 0xb0);
                    /* catch() { ... } // from try @ 00efcdc8 with catch @ 00efcf38 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,CMD_PURGE_FONTATLAS);
                    /* catch() { ... } // from try @ 00efce14 with catch @ 00efcf48 */
                    /* catch() { ... } // from try @ 00efce04 with catch @ 00efcf4c
                       catch() { ... } // from try @ 00efce68 with catch @ 00efcf4c */
    EventDispatcher::dispatchCustomEvent(this_00,(basic_string *)local_50,this);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,CMD_RESET_FONTATLAS);
    EventDispatcher::dispatchCustomEvent(this_00,(basic_string *)local_50,this);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

