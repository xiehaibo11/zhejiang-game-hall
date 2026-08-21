
/* cocostudio::SpriteFrameCacheHelper::releaseSpriteFrames(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocostudio::SpriteFrameCacheHelper::releaseSpriteFrames
          (SpriteFrameCacheHelper *this,basic_string *param_1)

{
  SpriteFrameCacheHelper *pSVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  pSVar1 = (SpriteFrameCacheHelper *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>>>
                       *)this,param_1);
  if (this + 8 == pSVar1) {
    return;
  }
  puVar3 = *(undefined8 **)(pSVar1 + 0x38);
  puVar2 = *(undefined8 **)(pSVar1 + 0x40);
  if (puVar3 != puVar2) {
    do {
      if ((Ref *)*puVar3 != (Ref *)0x0) {
        cocos2d::Ref::release((Ref *)*puVar3);
        puVar2 = *(undefined8 **)(pSVar1 + 0x40);
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar2);
    puVar3 = *(undefined8 **)(pSVar1 + 0x38);
  }
  *(undefined8 **)(pSVar1 + 0x40) = puVar3;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>>>
  ::erase((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>>>
           *)this,pSVar1);
  return;
}

