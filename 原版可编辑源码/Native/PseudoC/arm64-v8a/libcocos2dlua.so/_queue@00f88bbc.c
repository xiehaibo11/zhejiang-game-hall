
/* std::__ndk1::queue<std::__ndk1::function<void ()>, std::__ndk1::deque<std::__ndk1::function<void
   ()>, std::__ndk1::allocator<std::__ndk1::function<void ()> > > >::~queue() */

void __thiscall
std::__ndk1::
queue<std::__ndk1::function<void()>,std::__ndk1::deque<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>>
::~queue(queue<std::__ndk1::function<void()>,std::__ndk1::deque<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>>
         *this)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  __deque_base<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
  ::clear((__deque_base<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
           *)this);
  puVar1 = *(undefined8 **)(this + 0x10);
  puVar3 = *(undefined8 **)(this + 8);
  if (*(undefined8 **)(this + 8) != puVar1) {
    do {
      puVar4 = puVar3 + 1;
      operator_delete((void *)*puVar3);
      puVar3 = puVar4;
    } while (puVar1 != puVar4);
    lVar2 = *(long *)(this + 0x10) - *(long *)(this + 8);
    if (lVar2 != 0) {
      *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + (lVar2 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}

