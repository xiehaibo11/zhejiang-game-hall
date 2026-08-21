
/* non-virtual thunk to dragonBones::CCArmatureCacheDisplay::~CCArmatureCacheDisplay() */

void __thiscall
dragonBones::CCArmatureCacheDisplay::~CCArmatureCacheDisplay(CCArmatureCacheDisplay *this)

{
  CCArmatureCacheDisplay *pCVar1;
  code *pcVar2;
  CCArmatureCacheDisplay *this_00;
  
  this_00 = this + -0x10;
  *(undefined ***)this_00 = &PTR__CCArmatureCacheDisplay_01c91b48;
  *(undefined ***)this = &PTR__CCArmatureCacheDisplay_01c91b80;
  dispose(this_00);
  pCVar1 = *(CCArmatureCacheDisplay **)(this + 0xa0);
  if (this + 0x80 == pCVar1) {
    pcVar2 = *(code **)(*(long *)pCVar1 + 0x20);
  }
  else {
    if (pCVar1 == (CCArmatureCacheDisplay *)0x0) goto LAB_00d566f4;
    pcVar2 = *(code **)(*(long *)pCVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00d566f4:
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>>>
             *)(this + 0x48),*(__tree_node **)(this + 0x50));
  if (((byte)this[0x20] & 1) != 0) {
    operator_delete(*(void **)(this + 0x30));
  }
  cocos2d::Ref::~Ref((Ref *)this_00);
  return;
}

