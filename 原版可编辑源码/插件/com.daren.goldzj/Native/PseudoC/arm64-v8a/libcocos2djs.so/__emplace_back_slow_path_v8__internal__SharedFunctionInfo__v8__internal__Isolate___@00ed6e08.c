
/* void std::__ndk1::vector<v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   std::__ndk1::allocator<v8::internal::Handle<v8::internal::SharedFunctionInfo> >
   >::__emplace_back_slow_path<v8::internal::SharedFunctionInfo&,
   v8::internal::Isolate*&>(v8::internal::SharedFunctionInfo&, v8::internal::Isolate*&) */

void __thiscall
std::__ndk1::
vector<v8::internal::Handle<v8::internal::SharedFunctionInfo>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::SharedFunctionInfo>>>
::__emplace_back_slow_path<v8::internal::SharedFunctionInfo&,v8::internal::Isolate*&>
          (vector<v8::internal::Handle<v8::internal::SharedFunctionInfo>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::SharedFunctionInfo>>>
           *this,SharedFunctionInfo *param_1,Isolate **param_2)

{
  ulong uVar1;
  long *plVar2;
  void *pvVar3;
  ulong *puVar4;
  void *__src;
  size_t __n;
  long lVar5;
  Isolate *pIVar6;
  ulong uVar7;
  long lVar8;
  
  lVar8 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar8 + 1;
  if (uVar1 >> 0x3d == 0) {
    lVar5 = *(long *)(this + 0x10) - *(long *)this;
    uVar7 = lVar5 >> 2;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0xffffffffffffffe < (ulong)(lVar5 >> 3)) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_00ed6f34;
      pvVar3 = operator_new(uVar1 << 3);
    }
    pIVar6 = *param_2;
    uVar7 = *(ulong *)param_1;
    plVar2 = (long *)((long)pvVar3 + lVar8 * 8);
    if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar6 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar6 + 0x95a8)) {
        puVar4 = (ulong *)v8::internal::HandleScope::Extend(pIVar6);
      }
      *(ulong **)(pIVar6 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar7;
    }
    else {
      puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar7);
    }
    *plVar2 = (long)puVar4;
    __src = *(void **)this;
    __n = *(long *)(this + 8) - (long)__src;
    if (0 < (long)__n) {
      memcpy((void *)((long)plVar2 - __n),__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = (void *)((long)plVar2 - __n);
    *(long **)(this + 8) = plVar2 + 1;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
    return;
  }
LAB_00ed6f34:
                    /* WARNING: Subroutine does not return */
  abort();
}

