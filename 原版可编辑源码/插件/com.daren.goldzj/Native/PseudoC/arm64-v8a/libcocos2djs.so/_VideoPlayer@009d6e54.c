
/* cocos2d::VideoPlayer::~VideoPlayer() */

void __thiscall cocos2d::VideoPlayer::~VideoPlayer(VideoPlayer *this)

{
  long lVar1;
  basic_string local_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined2 uStack_3f;
  undefined5 uStack_3d;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__VideoPlayer_01c6bcb0;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::VideoPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::VideoPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::VideoPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::VideoPlayer*>>>
  ::__erase_unique<int>
            ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::VideoPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::VideoPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::VideoPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::VideoPlayer*>>>
              *)&DAT_01d38728,(int *)(this + 0x2c));
  uStack_3d = 0;
  local_50 = (basic_string)0x22;
  uStack_47 = 0x676469576f6564;
  uStack_40 = 0x65;
  uStack_4f = 0x5665766f6d6572;
  uStack_48 = 0x69;
  uStack_3f = 0x74;
  JniHelper::callStaticVoidMethod<int>
            ((basic_string *)&DAT_01d38710,&local_50,*(int *)(this + 0x2c));
  if (((byte)local_50 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_3d,CONCAT21(uStack_3f,uStack_40)));
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>>>
             *)(this + 0x30),*(__tree_node **)(this + 0x38));
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
                    /* catch() { ... } // from try @ 009d6c08 with catch @ 009d6f04 */
  Ref::~Ref((Ref *)this);
                    /* catch() { ... } // from try @ 009d6c00 with catch @ 009d6f0c */
                    /* catch() { ... } // from try @ 009d6bf4 with catch @ 009d6f10 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 009d6c98 with catch @ 009d6f20 */
                    /* catch() { ... } // from try @ 009d6c40 with catch @ 009d6f24
                       catch() { ... } // from try @ 009d6cc0 with catch @ 009d6f24 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

