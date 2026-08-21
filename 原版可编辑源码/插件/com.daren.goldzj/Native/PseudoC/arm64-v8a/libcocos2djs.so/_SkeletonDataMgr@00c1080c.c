
/* spine::SkeletonDataMgr::~SkeletonDataMgr() */

void __thiscall spine::SkeletonDataMgr::~SkeletonDataMgr(SkeletonDataMgr *this)

{
  SkeletonDataMgr *pSVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  pSVar1 = *(SkeletonDataMgr **)(this + 0x30);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR__SkeletonDataMgr_01c8cea8;
  if (this + 0x10 == pSVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pSVar1 + 0x20);
  }
  else {
    if (pSVar1 == (SkeletonDataMgr *)0x0) goto LAB_00c1085c;
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pSVar1 + 0x28);
  }
  (*UNRECOVERED_JUMPTABLE)();
LAB_00c1085c:
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>>>
             *)(this + 0x40),*(__tree_node **)(this + 0x48));
  pSVar1 = *(SkeletonDataMgr **)(this + 0x30);
  if (this + 0x10 == pSVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pSVar1 + 0x20);
  }
  else {
    if (pSVar1 == (SkeletonDataMgr *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pSVar1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00c10894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

