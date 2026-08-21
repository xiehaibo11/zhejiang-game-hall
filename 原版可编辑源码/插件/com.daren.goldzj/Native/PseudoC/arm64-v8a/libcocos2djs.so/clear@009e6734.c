
/* cocos2d::Map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::network::SIOClient*>::clear() */

void __thiscall
cocos2d::
Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>
::clear(Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>
        *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  for (plVar4 = *(long **)(this + 0x10); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    Ref::release((Ref *)plVar4[5]);
                    /* try { // try from 009e6758 to 00ae675f has its CatchHandler @ 009e69c8 */
  }
                    /* try { // try from 009e6764 to 00ae676b has its CatchHandler @ 009e69c0 */
  if (*(long *)(this + 0x18) != 0) {
    puVar1 = *(void **)(this + 0x10);
                    /* try { // try from 009e676c to 00ae677b has its CatchHandler @ 009e69b8 */
    while (puVar1 != (void *)0x0) {
      pvVar5 = (void *)*puVar1;
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
                    /* try { // try from 009e6784 to 00ae67bf has its CatchHandler @ 009e69d0 */
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
                    /* try { // try from 009e67c0 to 00ae67cf has its CatchHandler @ 009e69b4 */
  return;
}

