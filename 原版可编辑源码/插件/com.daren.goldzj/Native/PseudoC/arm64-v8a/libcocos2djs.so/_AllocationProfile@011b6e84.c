
/* v8::internal::AllocationProfile::~AllocationProfile() */

void __thiscall v8::internal::AllocationProfile::~AllocationProfile(AllocationProfile *this)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  pvVar3 = *(void **)(this + 0x38);
  *(undefined ***)this = &PTR_GetRootNode_01cb7828;
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x40) = pvVar3;
    operator_delete(pvVar3);
  }
  std::__ndk1::
  __deque_base<v8::AllocationProfile::Node,std::__ndk1::allocator<v8::AllocationProfile::Node>>::
  clear((__deque_base<v8::AllocationProfile::Node,std::__ndk1::allocator<v8::AllocationProfile::Node>>
         *)(this + 8));
  puVar1 = *(undefined8 **)(this + 0x18);
  puVar4 = *(undefined8 **)(this + 0x10);
  if (*(undefined8 **)(this + 0x10) != puVar1) {
    do {
      puVar5 = puVar4 + 1;
      operator_delete((void *)*puVar4);
      puVar4 = puVar5;
    } while (puVar1 != puVar5);
    lVar2 = *(long *)(this + 0x18) - *(long *)(this + 0x10);
    if (lVar2 != 0) {
      *(ulong *)(this + 0x18) = *(long *)(this + 0x18) + (lVar2 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
    return;
  }
  return;
}

