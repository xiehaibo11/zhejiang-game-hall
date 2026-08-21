
/* cocostudio::SpriteFrameCacheHelper::~SpriteFrameCacheHelper() */

void __thiscall
cocostudio::SpriteFrameCacheHelper::~SpriteFrameCacheHelper(SpriteFrameCacheHelper *this)

{
  SpriteFrameCacheHelper *pSVar1;
  SpriteFrameCache *this_00;
  SpriteFrameCacheHelper *pSVar2;
  undefined8 *puVar3;
  long lVar4;
  SpriteFrameCacheHelper *pSVar5;
  undefined8 *puVar6;
  
  pSVar1 = *(SpriteFrameCacheHelper **)this;
  while (this + 8 != pSVar1) {
    pSVar2 = *(SpriteFrameCacheHelper **)(pSVar1 + 8);
    if (*(SpriteFrameCacheHelper **)(pSVar1 + 8) == (SpriteFrameCacheHelper *)0x0) {
      pSVar2 = pSVar1 + 0x10;
      pSVar5 = *(SpriteFrameCacheHelper **)pSVar2;
      if (*(SpriteFrameCacheHelper **)pSVar5 != pSVar1) {
        do {
          lVar4 = *(long *)pSVar2;
          pSVar2 = (SpriteFrameCacheHelper *)(lVar4 + 0x10);
          pSVar5 = *(SpriteFrameCacheHelper **)pSVar2;
        } while (*(long *)pSVar5 != lVar4);
      }
    }
    else {
      do {
        pSVar5 = pSVar2;
        pSVar2 = *(SpriteFrameCacheHelper **)pSVar5;
      } while (*(SpriteFrameCacheHelper **)pSVar5 != (SpriteFrameCacheHelper *)0x0);
    }
    this_00 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
    cocos2d::SpriteFrameCache::removeSpriteFramesFromFile(this_00,(basic_string *)(pSVar1 + 0x20));
    pSVar2 = (SpriteFrameCacheHelper *)
             std::__ndk1::
             __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>>>
             ::
             find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                       ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>>>
                         *)this,(basic_string *)(pSVar1 + 0x20));
    pSVar1 = pSVar5;
    if (this + 8 != pSVar2) {
      puVar6 = *(undefined8 **)(pSVar2 + 0x38);
      puVar3 = *(undefined8 **)(pSVar2 + 0x40);
      if (puVar6 != puVar3) {
        do {
          if ((Ref *)*puVar6 != (Ref *)0x0) {
            cocos2d::Ref::release((Ref *)*puVar6);
            puVar3 = *(undefined8 **)(pSVar2 + 0x40);
          }
          puVar6 = puVar6 + 1;
        } while (puVar6 != puVar3);
        puVar6 = *(undefined8 **)(pSVar2 + 0x38);
      }
      *(undefined8 **)(pSVar2 + 0x40) = puVar6;
      std::__ndk1::
      __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>>>
      ::erase((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>>>
               *)this,pSVar2);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>>>
             *)this,*(__tree_node **)(this + 8));
  return;
}

