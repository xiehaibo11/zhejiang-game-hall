
/* cocos2d::Map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::SpriteFrame*>::clear() */

void __thiscall
cocos2d::
Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::SpriteFrame*>
::clear(Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::SpriteFrame*>
        *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  for (plVar4 = *(long **)(this + 0x10); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    Ref::release((Ref *)plVar4[5]);
  }
  if (*(long *)(this + 0x18) != 0) {
    puVar1 = *(void **)(this + 0x10);
    while (puVar1 != (void *)0x0) {
      pvVar5 = (void *)*puVar1;
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar5;
    }
    lVar2 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x10) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)this + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0x18) = 0;
  }
  return;
}

