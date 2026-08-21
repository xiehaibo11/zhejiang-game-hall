
/* universe::core::Flags::~Flags() */

void __thiscall universe::core::Flags::~Flags(Flags *this)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
                    /* try { // try from 009e2028 to 00ae2047 has its CatchHandler @ 009e1f18 */
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x68));
  std::__ndk1::
  __deque_base<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
  ::clear((__deque_base<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
           *)(this + 0x30));
                    /* try { // try from 009e2048 to 00ae204f has its CatchHandler @ 009e2090 */
  puVar1 = *(undefined8 **)(this + 0x40);
  puVar4 = *(undefined8 **)(this + 0x38);
                    /* try { // try from 009e2050 to 00ae20af has its CatchHandler @ 009e1f18 */
  if (*(undefined8 **)(this + 0x38) != puVar1) {
    do {
      puVar5 = puVar4 + 1;
      operator_delete((void *)*puVar4);
      puVar4 = puVar5;
    } while (puVar1 != puVar5);
    lVar2 = *(long *)(this + 0x40) - *(long *)(this + 0x38);
    if (lVar2 != 0) {
      *(ulong *)(this + 0x40) = *(long *)(this + 0x40) + (lVar2 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  pvVar3 = *(void **)(this + 0x30);
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
                    /* catch() { ... } // from try @ 009e1fc0 with catch @ 009e2090
                       catch() { ... } // from try @ 009e2048 with catch @ 009e2090 */
                    /* catch() { ... } // from try @ 009e1fa4 with catch @ 009e2094
                       catch() { ... } // from try @ 009e2014 with catch @ 009e2094 */
  std::__ndk1::
  __deque_base<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
  ::clear((__deque_base<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
           *)this);
  puVar1 = *(undefined8 **)(this + 0x10);
  puVar4 = *(undefined8 **)(this + 8);
  if (*(undefined8 **)(this + 8) != puVar1) {
    do {
      puVar5 = puVar4 + 1;
      operator_delete((void *)*puVar4);
      puVar4 = puVar5;
    } while (puVar1 != puVar5);
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

