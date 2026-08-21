
/* v8::internal::Isolate::RequestInterrupt(void (*)(v8::Isolate*, void*), void*) */

void __thiscall
v8::internal::Isolate::RequestInterrupt
          (Isolate *this,_func_void_Isolate_ptr_void_ptr *param_1,void *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  base::RecursiveMutex::Lock((RecursiveMutex *)(this + 0x9530));
  lVar2 = *(long *)(this + 0xb710);
  lVar4 = *(long *)(this + 0xb718);
  uVar1 = 0;
  if (lVar4 - lVar2 != 0) {
    uVar1 = (lVar4 - lVar2) * 0x20 - 1;
  }
  uVar5 = *(long *)(this + 0xb730) + *(long *)(this + 0xb728);
  if (uVar1 == uVar5) {
    std::__ndk1::
    deque<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>,std::__ndk1::allocator<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>>>
    ::__add_back_capacity
              ((deque<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>,std::__ndk1::allocator<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>>>
                *)(this + 0xb708));
    lVar2 = *(long *)(this + 0xb710);
    lVar4 = *(long *)(this + 0xb718);
    uVar5 = *(long *)(this + 0xb728) + *(long *)(this + 0xb730);
  }
  if (lVar4 == lVar2) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)
             (*(long *)(lVar2 + (uVar5 >> 5 & 0x7fffffffffffff8)) + (uVar5 & 0xff) * 0x10);
  }
  *puVar3 = param_1;
  puVar3[1] = param_2;
  *(long *)(this + 0xb730) = *(long *)(this + 0xb730) + 1;
  StackGuard::RequestInterrupt((StackGuard *)(this + 0x48),8);
  base::RecursiveMutex::Unlock((RecursiveMutex *)(this + 0x9530));
  return;
}

