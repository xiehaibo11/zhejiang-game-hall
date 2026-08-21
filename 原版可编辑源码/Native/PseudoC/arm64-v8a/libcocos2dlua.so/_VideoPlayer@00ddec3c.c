
/* cocos2d::experimental::ui::VideoPlayer::~VideoPlayer() */

void __thiscall cocos2d::experimental::ui::VideoPlayer::~VideoPlayer(VideoPlayer *this)

{
  long lVar1;
  VideoPlayer *pVVar2;
  code *pcVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00dde3c0 with catch @ 00ddec3c */
                    /* catch() { ... } // from try @ 00dde5b8 with catch @ 00ddec40 */
                    /* catch() { ... } // from try @ 00dde3a0 with catch @ 00ddec44 */
                    /* catch() { ... } // from try @ 00dde598 with catch @ 00ddec48 */
                    /* catch() { ... } // from try @ 00dde180 with catch @ 00ddec4c */
                    /* catch() { ... } // from try @ 00dde684 with catch @ 00ddec50 */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00dde160 with catch @ 00ddec54 */
                    /* catch() { ... } // from try @ 00dde664 with catch @ 00ddec58 */
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00dde094 with catch @ 00ddec5c */
                    /* catch() { ... } // from try @ 00dde4c4 with catch @ 00ddec60 */
                    /* catch() { ... } // from try @ 00dde074 with catch @ 00ddec64 */
                    /* catch() { ... } // from try @ 00dde4a4 with catch @ 00ddec68 */
  *(undefined ***)this = &PTR__VideoPlayer_016e43a0;
  *(undefined ***)(this + 0x318) = &PTR__VideoPlayer_016e4ac8;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::VideoPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::VideoPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::VideoPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::VideoPlayer*>>>
  ::__erase_unique<int>
            ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::VideoPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::VideoPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::VideoPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::VideoPlayer*>>>
              *)&DAT_017889f0,(int *)(this + 0x51c));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"removeVideoWidget");
  JniHelper::callStaticVoidMethod<int>
            ((basic_string *)&DAT_017889d8,(basic_string *)local_50,*(int *)(this + 0x51c));
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  pVVar2 = *(VideoPlayer **)(this + 0x540);
  if (this + 0x520 == pVVar2) {
    pcVar3 = *(code **)(*(long *)pVVar2 + 0x20);
  }
  else {
    if (pVVar2 == (VideoPlayer *)0x0) goto LAB_00ddecec;
    pcVar3 = *(code **)(*(long *)pVVar2 + 0x28);
  }
  (*pcVar3)();
LAB_00ddecec:
  if (((byte)this[0x500] & 1) != 0) {
    operator_delete(*(void **)(this + 0x510));
  }
  cocos2d::ui::Widget::~Widget((Widget *)this);
                    /* try { // try from 00dded0c to 00edeecb has its CatchHandler @ 00dded0c
                       catch() { ... } // from try @ 00dded0c with catch @ 00dded0c
                       catch() { ... } // from try @ 00ddf32c with catch @ 00dded0c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

