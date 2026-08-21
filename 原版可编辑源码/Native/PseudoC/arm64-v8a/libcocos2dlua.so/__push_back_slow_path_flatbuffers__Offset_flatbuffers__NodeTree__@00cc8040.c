
/* void std::__ndk1::vector<flatbuffers::Offset<flatbuffers::NodeTree>,
   std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::NodeTree> >
   >::__push_back_slow_path<flatbuffers::Offset<flatbuffers::NodeTree>
   >(flatbuffers::Offset<flatbuffers::NodeTree>&&) */

void __thiscall
std::__ndk1::
vector<flatbuffers::Offset<flatbuffers::NodeTree>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::NodeTree>>>
::__push_back_slow_path<flatbuffers::Offset<flatbuffers::NodeTree>>
          (vector<flatbuffers::Offset<flatbuffers::NodeTree>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::NodeTree>>>
           *this,Offset *param_1)

{
  undefined4 *puVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar3 = ((long)__n >> 2) + 1;
  if (uVar3 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 2) < 0x1fffffffffffffff) {
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 1;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_00cc80c0;
    }
    if (uVar3 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar3 = 0x3fffffffffffffff;
  }
  __dest = operator_new(uVar3 << 2);
LAB_00cc80c0:
  puVar1 = (undefined4 *)((long)__dest + ((long)__n >> 2) * 4);
  *puVar1 = *(undefined4 *)param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(undefined4 **)(this + 8) = puVar1 + 1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 4);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}

