
/* void std::__ndk1::vector<v8::internal::Handle<v8::internal::PrototypeInfo>,
   std::__ndk1::allocator<v8::internal::Handle<v8::internal::PrototypeInfo> >
   >::__emplace_back_slow_path<v8::internal::Handle<v8::internal::PrototypeInfo>
   >(v8::internal::Handle<v8::internal::PrototypeInfo>&&) */

void __thiscall
std::__ndk1::
vector<v8::internal::Handle<v8::internal::PrototypeInfo>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::PrototypeInfo>>>
::__emplace_back_slow_path<v8::internal::Handle<v8::internal::PrototypeInfo>>
          (vector<v8::internal::Handle<v8::internal::PrototypeInfo>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::PrototypeInfo>>>
           *this,Handle *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *__dest;
  ulong uVar3;
  void *__src;
  size_t __n;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar1 = ((long)__n >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar3 = *(long *)(this + 0x10) - (long)__src >> 2;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    if (0xffffffffffffffe < (ulong)(*(long *)(this + 0x10) - (long)__src >> 3)) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_00fa4ad0;
      __dest = operator_new(uVar1 << 3);
    }
    puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
    *puVar2 = *(undefined8 *)param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = __dest;
    *(undefined8 **)(this + 8) = puVar2 + 1;
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
    return;
  }
LAB_00fa4ad0:
                    /* WARNING: Subroutine does not return */
  abort();
}

