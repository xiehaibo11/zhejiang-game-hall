
/* spine::SkeletonDataMgr::~SkeletonDataMgr() */

void __thiscall spine::SkeletonDataMgr::~SkeletonDataMgr(SkeletonDataMgr *this)

{
  SkeletonDataMgr *pSVar1;
  code *pcVar2;
  
  pSVar1 = *(SkeletonDataMgr **)(this + 0x30);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR__SkeletonDataMgr_01c8cea8;
  if (this + 0x10 == pSVar1) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x20);
LAB_00c108f0:
    (*pcVar2)();
  }
  else if (pSVar1 != (SkeletonDataMgr *)0x0) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x28);
    goto LAB_00c108f0;
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>>>
             *)(this + 0x40),*(__tree_node **)(this + 0x48));
  pSVar1 = *(SkeletonDataMgr **)(this + 0x30);
  if (this + 0x10 == pSVar1) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x20);
  }
  else {
    if (pSVar1 == (SkeletonDataMgr *)0x0) goto LAB_00c10928;
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00c10928:
  operator_delete(this);
  return;
}

