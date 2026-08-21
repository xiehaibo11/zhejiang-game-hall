
/* v8::internal::Heap::ExternalStringTable::PromoteYoung() */

void __thiscall v8::internal::Heap::ExternalStringTable::PromoteYoung(ExternalStringTable *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *__dest;
  vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>> *this_00;
  void *__src;
  undefined8 *puVar3;
  size_t __n;
  
  this_00 = (vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>> *)
            (this + 0x20);
  __src = *(void **)this_00;
  __n = *(long *)(this + 0x28) - (long)__src;
  uVar1 = ((long)__n >> 3) + (*(long *)(this + 0x10) - *(long *)(this + 8) >> 3);
  if ((ulong)(*(long *)(this + 0x30) - (long)__src >> 3) < uVar1) {
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __dest = operator_new(uVar1 * 8);
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
      __src = *(void **)this_00;
    }
    *(void **)(this + 0x20) = __dest;
    *(void **)(this + 0x28) = (void *)((long)__dest + ((long)__n >> 3) * 8);
    *(void **)(this + 0x30) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  puVar3 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)(this + 0x10);
  if (puVar3 != puVar2) {
    do {
      if (*(undefined8 **)(this + 0x28) < *(undefined8 **)(this + 0x30)) {
        **(undefined8 **)(this + 0x28) = *puVar3;
        *(long *)(this + 0x28) = *(long *)(this + 0x28) + 8;
      }
      else {
        std::__ndk1::vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>>::
        __push_back_slow_path<v8::internal::Object>(this_00,(Object *)puVar3);
      }
      puVar3 = puVar3 + 1;
    } while (puVar2 != puVar3);
    puVar3 = *(undefined8 **)(this + 8);
  }
  *(undefined8 **)(this + 0x10) = puVar3;
  return;
}

