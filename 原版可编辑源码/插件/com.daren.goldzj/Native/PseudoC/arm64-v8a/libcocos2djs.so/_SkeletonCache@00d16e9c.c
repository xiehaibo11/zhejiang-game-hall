
/* spine::SkeletonCache::~SkeletonCache() */

void __thiscall spine::SkeletonCache::~SkeletonCache(SkeletonCache *this)

{
  bool bVar1;
  SkeletonCache *pSVar2;
  long lVar3;
  AnimationData *this_00;
  SkeletonCache *pSVar4;
  
  *(undefined ***)this = &PTR__SkeletonCache_01c8fda0;
  *(undefined ***)(this + 0x10) = &PTR__SkeletonCache_01c8fe10;
  pSVar4 = *(SkeletonCache **)(this + 0x1f8);
  while (this + 0x200 != pSVar4) {
    this_00 = *(AnimationData **)(pSVar4 + 0x38);
    if (this_00 != (AnimationData *)0x0) {
      AnimationData::~AnimationData(this_00);
      operator_delete(this_00);
    }
    pSVar2 = *(SkeletonCache **)(pSVar4 + 8);
    if (*(SkeletonCache **)(pSVar4 + 8) == (SkeletonCache *)0x0) {
      pSVar2 = pSVar4 + 0x10;
      bVar1 = *(SkeletonCache **)*(SkeletonCache **)pSVar2 != pSVar4;
      pSVar4 = *(SkeletonCache **)pSVar2;
      if (bVar1) {
        do {
          lVar3 = *(long *)pSVar2;
          pSVar2 = (SkeletonCache *)(lVar3 + 0x10);
          pSVar4 = *(SkeletonCache **)pSVar2;
        } while (*(long *)pSVar4 != lVar3);
      }
    }
    else {
      do {
        pSVar4 = pSVar2;
        pSVar2 = *(SkeletonCache **)pSVar4;
      } while (*(SkeletonCache **)pSVar4 != (SkeletonCache *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache::AnimationData*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache::AnimationData*>>>
             *)(this + 0x1f8),*(__tree_node **)(this + 0x200));
  *(SkeletonCache **)(this + 0x1f8) = this + 0x200;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache::AnimationData*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache::AnimationData*>>>
             *)(this + 0x1f8),(__tree_node *)0x0);
  if (((byte)this[0x1e0] & 1) != 0) {
    operator_delete(*(void **)(this + 0x1f0));
  }
  SkeletonAnimation::~SkeletonAnimation((SkeletonAnimation *)this);
  return;
}

