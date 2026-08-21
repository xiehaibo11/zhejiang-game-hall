
/* cocos2d::EventDispatcher::~EventDispatcher() */

void __thiscall cocos2d::EventDispatcher::~EventDispatcher(EventDispatcher *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__EventDispatcher_01722e20;
  std::__ndk1::
  __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::destroy((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)(this + 0x148),*(__tree_node **)(this + 0x150));
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(EventDispatcher **)(this + 0x148) = this + 0x150;
  removeAllEventListeners(this);
  std::__ndk1::
  __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::destroy((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)(this + 0x148),*(__tree_node **)(this + 0x150));
  std::__ndk1::
  __tree<cocos2d::Node*,std::__ndk1::less<cocos2d::Node*>,std::__ndk1::allocator<cocos2d::Node*>>::
  destroy((__tree<cocos2d::Node*,std::__ndk1::less<cocos2d::Node*>,std::__ndk1::allocator<cocos2d::Node*>>
           *)(this + 0x120),*(__tree_node **)(this + 0x128));
  pvVar2 = *(void **)(this + 0x108);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x110) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0xf0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xf8) = pvVar2;
    operator_delete(pvVar2);
  }
  puVar1 = *(void **)(this + 0xd8);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)puVar1[3];
    pvVar3 = (void *)*puVar1;
    if (pvVar2 != (void *)0x0) {
      puVar1[4] = pvVar2;
      operator_delete(pvVar2);
    }
    operator_delete(puVar1);
    puVar1 = pvVar3;
  }
  pvVar2 = *(void **)(this + 200);
  *(undefined8 *)(this + 200) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar1 = *(void **)(this + 0xb0);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0xa0);
  *(undefined8 *)(this + 0xa0) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar1 = *(void **)(this + 0x88);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x78);
  *(undefined8 *)(this + 0x78) = 0;
                    /* try { // try from 00f9d5d0 to 0109d63f has its CatchHandler @ 00f9d5d0
                       catch() { ... } // from try @ 00f9d5d0 with catch @ 00f9d5d0
                       catch() { ... } // from try @ 00f9d64c with catch @ 00f9d5d0
                       catch() { ... } // from try @ 00f9d714 with catch @ 00f9d5d0
                       catch() { ... } // from try @ 00f9d864 with catch @ 00f9d5d0
                       catch() { ... } // from try @ 00f9d8b8 with catch @ 00f9d5d0 */
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar1 = *(void **)(this + 0x60);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x50);
  *(undefined8 *)(this + 0x50) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar1 = *(void **)(this + 0x38);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
                    /* try { // try from 00f9d640 to 0109d64b has its CatchHandler @ 00f9d8c4 */
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
                    /* try { // try from 00f9d64c to 0109d66b has its CatchHandler @ 00f9d5d0 */
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
                    /* try { // try from 00f9d66c to 0109d67f has its CatchHandler @ 00f9d8c4 */
  Ref::~Ref((Ref *)this);
  return;
}

