
/* dragonBones::CCArmatureDisplay::~CCArmatureDisplay() */

void __thiscall dragonBones::CCArmatureDisplay::~CCArmatureDisplay(CCArmatureDisplay *this)

{
  CCArmatureDisplay *pCVar1;
  long *in_x1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = *in_x1;
  *(long *)this = lVar2;
  *(long *)(this + *(long *)(lVar2 + -0x18)) = in_x1[1];
  (**(code **)(*(long *)this + 0x30))(this,1);
  if (*(long **)(this + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x30) + 8))();
    *(undefined8 *)(this + 0x30) = 0;
  }
  if (*(Ref **)(this + 0xb8) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0xb8));
  }
  if (*(Ref **)(this + 0xa0) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0xa0));
  }
  if (*(Ref **)(this + 0xa8) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0xa8));
  }
  pCVar1 = *(CCArmatureDisplay **)(this + 0x90);
  if (this + 0x70 == pCVar1) {
    pcVar3 = *(code **)(*(long *)pCVar1 + 0x20);
  }
  else {
    if (pCVar1 == (CCArmatureDisplay *)0x0) goto LAB_00d4fb74;
    pcVar3 = *(code **)(*(long *)pCVar1 + 0x28);
  }
  (*pcVar3)();
LAB_00d4fb74:
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>>>
             *)(this + 0x18),*(__tree_node **)(this + 0x20));
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

