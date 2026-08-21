
/* cocos2d::AnimationCache::~AnimationCache() */

void __thiscall cocos2d::AnimationCache::~AnimationCache(AnimationCache *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation*>
  *this_00;
  
  this_00 = (Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation*>
             *)(this + 0x28);
  *(undefined ***)this = &PTR__AnimationCache_016fa4f0;
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation*>
  ::clear(this_00);
                    /* try { // try from 00eec9bc to 00feca07 has its CatchHandler @ 00eec9bc
                       catch() { ... } // from try @ 00eec9bc with catch @ 00eec9bc
                       catch() { ... } // from try @ 00eeca18 with catch @ 00eec9bc */
  puVar1 = *(void **)(this + 0x38);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)this_00;
  *(undefined8 *)this_00 = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
                    /* try { // try from 00eeca08 to 00feca17 has its CatchHandler @ 00eeca50 */
  Ref::~Ref((Ref *)this);
  return;
}

