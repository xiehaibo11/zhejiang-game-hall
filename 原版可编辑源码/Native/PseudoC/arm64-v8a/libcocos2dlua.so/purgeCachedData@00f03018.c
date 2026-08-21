
/* cocos2d::FontFNT::purgeCachedData() */

void cocos2d::FontFNT::purgeCachedData(void)

{
  undefined8 *puVar1;
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>
  *pMVar2;
  void *pvVar3;
  
  if (DAT_0178f7c8 !=
      (Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>
       *)0x0) {
    Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>
    ::clear(DAT_0178f7c8);
    pMVar2 = DAT_0178f7c8;
    if (DAT_0178f7c8 !=
        (Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>
         *)0x0) {
      Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>
      ::clear(DAT_0178f7c8);
      puVar1 = *(void **)(pMVar2 + 0x10);
      while (puVar1 != (void *)0x0) {
        pvVar3 = (void *)*puVar1;
        if ((*(byte *)(puVar1 + 2) & 1) != 0) {
          operator_delete((void *)puVar1[4]);
        }
        operator_delete(puVar1);
        puVar1 = pvVar3;
      }
      pvVar3 = *(void **)pMVar2;
      *(undefined8 *)pMVar2 = 0;
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
      }
      operator_delete(pMVar2);
    }
    DAT_0178f7c8 = (Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>
                    *)0x0;
  }
  return;
}

