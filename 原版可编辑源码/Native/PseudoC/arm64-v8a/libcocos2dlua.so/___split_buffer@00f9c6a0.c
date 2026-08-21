
/* std::__ndk1::__split_buffer<std::__ndk1::stack<cocos2d::Mat4, std::__ndk1::deque<cocos2d::Mat4,
   std::__ndk1::allocator<cocos2d::Mat4> > >,
   std::__ndk1::allocator<std::__ndk1::stack<cocos2d::Mat4, std::__ndk1::deque<cocos2d::Mat4,
   std::__ndk1::allocator<cocos2d::Mat4> > > >&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<std::__ndk1::stack<cocos2d::Mat4,std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>>,std::__ndk1::allocator<std::__ndk1::stack<cocos2d::Mat4,std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>>>&>
::~__split_buffer(__split_buffer<std::__ndk1::stack<cocos2d::Mat4,std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>>,std::__ndk1::allocator<std::__ndk1::stack<cocos2d::Mat4,std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>>>&>
                  *this)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  __deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *this_00;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar1 = *(long *)(this + 8);
  lVar4 = *(long *)(this + 0x10);
  while (lVar4 != lVar1) {
    this_00 = (__deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)(lVar4 + -0x30);
                    /* try { // try from 00f9c6e4 to 0109c777 has its CatchHandler @ 00f9c6e4
                       catch() { ... } // from try @ 00f9c6e4 with catch @ 00f9c6e4
                       catch() { ... } // from try @ 00f9c784 with catch @ 00f9c6e4 */
    *(__deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> **)(this + 0x10) = this_00;
    __deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::clear(this_00);
    puVar2 = *(undefined8 **)(lVar4 + -0x20);
    puVar5 = *(undefined8 **)(lVar4 + -0x28);
    if (*(undefined8 **)(lVar4 + -0x28) != puVar2) {
      do {
        puVar6 = puVar5 + 1;
        operator_delete((void *)*puVar5);
        puVar5 = puVar6;
      } while (puVar2 != puVar6);
      lVar3 = *(long *)(lVar4 + -0x20) - *(long *)(lVar4 + -0x28);
      if (lVar3 != 0) {
        *(ulong *)(lVar4 + -0x20) =
             *(long *)(lVar4 + -0x20) + (lVar3 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
      }
    }
    if (*(void **)this_00 != (void *)0x0) {
      operator_delete(*(void **)this_00);
    }
    lVar4 = *(long *)(this + 0x10);
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}

