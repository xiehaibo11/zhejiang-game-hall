
/* void std::__ndk1::vector<v8::internal::Heap::GCCallbackTuple,
   std::__ndk1::allocator<v8::internal::Heap::GCCallbackTuple> >::__emplace_back_slow_path<void
   (*&)(v8::Isolate*, v8::GCType, v8::GCCallbackFlags, void*), v8::GCType&, void*&>(void
   (*&)(v8::Isolate*, v8::GCType, v8::GCCallbackFlags, void*), v8::GCType&, void*&) */

void __thiscall
std::__ndk1::
vector<v8::internal::Heap::GCCallbackTuple,std::__ndk1::allocator<v8::internal::Heap::GCCallbackTuple>>
::
__emplace_back_slow_path<void(*&)(v8::Isolate*,v8::GCType,v8::GCCallbackFlags,void*),v8::GCType&,void*&>
          (vector<v8::internal::Heap::GCCallbackTuple,std::__ndk1::allocator<v8::internal::Heap::GCCallbackTuple>>
           *this,_func_void_Isolate_ptr_GCType_GCCallbackFlags_void_ptr *param_1,GCType *param_2,
          void **param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  void *__src;
  size_t __n;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar1 = ((long)__n >> 3) * -0x5555555555555555 + 1;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    lVar4 = *(long *)(this + 0x10) - (long)__src >> 3;
    uVar5 = lVar4 * 0x5555555555555556;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar1 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar1) goto LAB_00fa49e4;
      pvVar3 = operator_new(uVar1 * 0x18);
    }
    uVar2 = *(undefined4 *)param_2;
    pvVar6 = *param_3;
    puVar7 = (undefined8 *)((long)pvVar3 + ((long)__n >> 3) * 8);
    *puVar7 = *(undefined8 *)param_1;
    *(undefined4 *)(puVar7 + 1) = uVar2;
    puVar7[2] = pvVar6;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar7 - __n),__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = (void *)((long)puVar7 - __n);
    *(undefined8 **)(this + 8) = puVar7 + 3;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 0x18);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
    return;
  }
LAB_00fa49e4:
                    /* WARNING: Subroutine does not return */
  abort();
}

