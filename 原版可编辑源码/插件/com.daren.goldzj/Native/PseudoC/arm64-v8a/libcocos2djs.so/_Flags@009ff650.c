
/* universe::core::Flags::~Flags() */

void __thiscall universe::core::Flags::~Flags(Flags *this)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x68));
  std::__ndk1::
  __deque_base<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
  ::clear((__deque_base<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
           *)(this + 0x30));
  puVar1 = *(undefined8 **)(this + 0x40);
                    /* try { // try from 009ff67c to 00aff7a3 has its CatchHandler @ 009ff67c
                       catch() { ... } // from try @ 009ff67c with catch @ 009ff67c
                       catch() { ... } // from try @ 009ff7ac with catch @ 009ff67c */
  puVar4 = *(undefined8 **)(this + 0x38);
  if (*(undefined8 **)(this + 0x38) != puVar1) {
    do {
      puVar5 = puVar4 + 1;
      operator_delete((void *)*puVar4);
      puVar4 = puVar5;
    } while (puVar1 != puVar5);
    lVar2 = *(long *)(this + 0x40);
    if (lVar2 != *(long *)(this + 0x38)) {
      *(ulong *)(this + 0x40) =
           lVar2 + (~((lVar2 + -8) - *(long *)(this + 0x38)) & 0xfffffffffffffff8U);
    }
  }
  pvVar3 = *(void **)(this + 0x30);
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
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
    lVar2 = *(long *)(this + 0x10);
    if (lVar2 != *(long *)(this + 8)) {
      *(ulong *)(this + 0x10) =
           lVar2 + (~((lVar2 + -8) - *(long *)(this + 8)) & 0xfffffffffffffff8U);
    }
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}

