
/* dragonBones::ArmatureCache::~ArmatureCache() */

void __thiscall dragonBones::ArmatureCache::~ArmatureCache(ArmatureCache *this)

{
  bool bVar1;
  ArmatureCache *pAVar2;
  long lVar3;
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>>>
  *this_00;
  AnimationData *this_01;
  ArmatureCache *pAVar4;
  
  *(undefined ***)this = &PTR__ArmatureCache_01c91b10;
  if (*(Ref **)(this + 0x38) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x38));
    *(undefined8 *)(this + 0x38) = 0;
  }
  this_00 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>>>
             *)(this + 0x78);
  pAVar4 = *(ArmatureCache **)this_00;
  while (this + 0x80 != pAVar4) {
    this_01 = *(AnimationData **)(pAVar4 + 0x38);
    if (this_01 != (AnimationData *)0x0) {
      AnimationData::~AnimationData(this_01);
      operator_delete(this_01);
    }
    pAVar2 = *(ArmatureCache **)(pAVar4 + 8);
    if (*(ArmatureCache **)(pAVar4 + 8) == (ArmatureCache *)0x0) {
      pAVar2 = pAVar4 + 0x10;
      bVar1 = *(ArmatureCache **)*(ArmatureCache **)pAVar2 != pAVar4;
      pAVar4 = *(ArmatureCache **)pAVar2;
      if (bVar1) {
        do {
          lVar3 = *(long *)pAVar2;
          pAVar2 = (ArmatureCache *)(lVar3 + 0x10);
          pAVar4 = *(ArmatureCache **)pAVar2;
        } while (*(long *)pAVar4 != lVar3);
      }
    }
    else {
      do {
        pAVar4 = pAVar2;
        pAVar2 = *(ArmatureCache **)pAVar4;
      } while (*(ArmatureCache **)pAVar4 != (ArmatureCache *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>>>
  ::destroy(this_00,*(__tree_node **)(this + 0x80));
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(ArmatureCache **)(this + 0x78) = this + 0x80;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>>>
  ::destroy(this_00,(__tree_node *)0x0);
  if (((byte)this[0x60] & 1) != 0) {
    operator_delete(*(void **)(this + 0x70));
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

