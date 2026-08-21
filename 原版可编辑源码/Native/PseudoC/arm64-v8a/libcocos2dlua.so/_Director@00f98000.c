
/* cocos2d::Director::~Director() */

void __thiscall cocos2d::Director::~Director(Director *this)

{
  long lVar1;
  void *pvVar2;
  Renderer *this_00;
  undefined8 *puVar3;
  __deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *p_Var4;
  undefined8 *puVar5;
  __deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *p_Var6;
  undefined8 *puVar7;
  __deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *p_Var8;
  
  *(undefined ***)this = &PTR__Director_01722cf8;
  if (*(Ref **)(this + 0x130) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x130));
  }
  if (*(Ref **)(this + 0x140) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x140));
  }
  if (*(Ref **)(this + 0x138) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x138));
  }
  if (*(Ref **)(this + 0x158) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x158));
  }
  if (*(Ref **)(this + 0x1a8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x1a8));
  }
  if (*(Ref **)(this + 0xa0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xa0));
  }
  if (*(Ref **)(this + 0xa8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xa8));
  }
                    /* try { // try from 00f98080 to 010980c7 has its CatchHandler @ 00f98080
                       catch() { ... } // from try @ 00f98080 with catch @ 00f98080
                       catch() { ... } // from try @ 00f984bc with catch @ 00f98080 */
  if (*(Ref **)(this + 0xf0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xf0));
  }
  if (*(Ref **)(this + 0xf8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xf8));
  }
  if (*(Ref **)(this + 0xd8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xd8));
  }
  if (*(Ref **)(this + 0xe0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xe0));
  }
  if (*(Ref **)(this + 200) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 200));
  }
  if (*(Ref **)(this + 0xc0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xc0));
  }
                    /* try { // try from 00f980c8 to 0109817f has its CatchHandler @ 00f984dc */
  if (*(Ref **)(this + 0xd0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xd0));
  }
  if (*(Ref **)(this + 0xb8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xb8));
  }
  if (*(Ref **)(this + 0xe8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xe8));
  }
  this_00 = *(Renderer **)(this + 0x1b0);
  if (this_00 != (Renderer *)0x0) {
    Renderer::~Renderer(this_00);
    operator_delete(this_00);
  }
  if (*(long **)(this + 0x1b8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1b8) + 8))();
  }
  if (*(Ref **)(this + 0xb0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xb0));
  }
  Configuration::destroyInstance();
  ObjectFactory::destroyInstance();
  DAT_0178fc40 = 0;
  ScriptEngineManager::destroyInstance();
  puVar3 = *(undefined8 **)(this + 0x170);
  puVar7 = *(undefined8 **)(this + 0x178);
  if (puVar3 != puVar7) {
    do {
      Ref::release((Ref *)*puVar3);
      puVar3 = puVar3 + 1;
    } while (puVar7 != puVar3);
    puVar3 = *(undefined8 **)(this + 0x170);
  }
  *(undefined8 **)(this + 0x178) = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x178) = puVar3;
    operator_delete(puVar3);
  }
  std::__ndk1::__deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::clear
            ((__deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)(this + 0x70));
                    /* try { // try from 00f98180 to 01098243 has its CatchHandler @ 00f984e0 */
  puVar3 = *(undefined8 **)(this + 0x80);
  puVar7 = *(undefined8 **)(this + 0x78);
  if (*(undefined8 **)(this + 0x78) != puVar3) {
    do {
      puVar5 = puVar7 + 1;
      operator_delete((void *)*puVar7);
      puVar7 = puVar5;
    } while (puVar3 != puVar5);
    lVar1 = *(long *)(this + 0x80) - *(long *)(this + 0x78);
    if (lVar1 != 0) {
      *(ulong *)(this + 0x80) = *(long *)(this + 0x80) + (lVar1 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  pvVar2 = *(void **)(this + 0x70);
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  p_Var6 = *(__deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> **)(this + 0x58);
  if (p_Var6 != (__deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)0x0) {
    p_Var8 = *(__deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> **)(this + 0x60);
    p_Var4 = p_Var6;
    if (p_Var8 != p_Var6) {
      do {
        p_Var4 = p_Var8 + -0x30;
        std::__ndk1::__deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::clear
                  (p_Var4);
        puVar3 = *(undefined8 **)(p_Var8 + -0x20);
        puVar7 = *(undefined8 **)(p_Var8 + -0x28);
        if (*(undefined8 **)(p_Var8 + -0x28) != puVar3) {
          do {
            puVar5 = puVar7 + 1;
            operator_delete((void *)*puVar7);
            puVar7 = puVar5;
          } while (puVar3 != puVar5);
          lVar1 = *(long *)(p_Var8 + -0x20) - *(long *)(p_Var8 + -0x28);
          if (lVar1 != 0) {
            *(ulong *)(p_Var8 + -0x20) =
                 *(long *)(p_Var8 + -0x20) + (lVar1 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
          }
        }
        if (*(void **)p_Var4 != (void *)0x0) {
          operator_delete(*(void **)p_Var4);
        }
        p_Var8 = p_Var4;
      } while (p_Var4 != p_Var6);
      p_Var4 = *(__deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> **)(this + 0x58);
                    /* try { // try from 00f98248 to 0109827b has its CatchHandler @ 00f984d0 */
    }
    *(__deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> **)(this + 0x60) = p_Var6;
    operator_delete(p_Var4);
  }
  std::__ndk1::__deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::clear
            ((__deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)(this + 0x28));
  puVar3 = *(undefined8 **)(this + 0x38);
  puVar7 = *(undefined8 **)(this + 0x30);
  if (*(undefined8 **)(this + 0x30) != puVar3) {
    do {
      puVar5 = puVar7 + 1;
      operator_delete((void *)*puVar7);
      puVar7 = puVar5;
    } while (puVar3 != puVar5);
                    /* try { // try from 00f98284 to 010982b3 has its CatchHandler @ 00f984cc */
    lVar1 = *(long *)(this + 0x38) - *(long *)(this + 0x30);
    if (lVar1 != 0) {
      *(ulong *)(this + 0x38) = *(long *)(this + 0x38) + (lVar1 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  pvVar2 = *(void **)(this + 0x28);
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
                    /* try { // try from 00f982bc to 01098333 has its CatchHandler @ 00f984d4 */
  Ref::~Ref((Ref *)this);
  return;
}

