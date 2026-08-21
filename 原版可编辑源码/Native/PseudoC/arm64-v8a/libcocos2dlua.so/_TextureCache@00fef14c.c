
/* cocos2d::TextureCache::~TextureCache() */

void __thiscall cocos2d::TextureCache::~TextureCache(TextureCache *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  long *plVar3;
  thread *this_00;
  
                    /* try { // try from 00fef150 to 010ef1c3 has its CatchHandler @ 00fef10c */
  plVar3 = *(long **)(this + 0x158);
  *(undefined ***)this = &PTR__TextureCache_01724560;
  for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    Ref::release((Ref *)plVar3[5]);
  }
  this_00 = *(thread **)(this + 0x28);
  if (this_00 != (thread *)0x0) {
    std::__ndk1::thread::~thread(this_00);
    operator_delete(this_00);
  }
                    /* catch() { ... } // from try @ 00fef148 with catch @ 00fef1a8 */
  *(undefined8 *)(this + 0x28) = 0;
  puVar1 = *(void **)(this + 0x158);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x148);
  *(undefined8 *)(this + 0x148) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)(this + 0x110));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xe8));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xc0));
  std::__ndk1::
  __deque_base<cocos2d::TextureCache::AsyncStruct*,std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct*>>
  ::~__deque_base((__deque_base<cocos2d::TextureCache::AsyncStruct*,std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct*>>
                   *)(this + 0x90));
                    /* catch() { ... } // from try @ 00fef250 with catch @ 00fef20c */
  std::__ndk1::
  __deque_base<cocos2d::TextureCache::AsyncStruct*,std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct*>>
  ::~__deque_base((__deque_base<cocos2d::TextureCache::AsyncStruct*,std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct*>>
                   *)(this + 0x60));
  std::__ndk1::
  __deque_base<cocos2d::TextureCache::AsyncStruct*,std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct*>>
  ::~__deque_base((__deque_base<cocos2d::TextureCache::AsyncStruct*,std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct*>>
                   *)(this + 0x30));
  Ref::~Ref((Ref *)this);
  return;
}

