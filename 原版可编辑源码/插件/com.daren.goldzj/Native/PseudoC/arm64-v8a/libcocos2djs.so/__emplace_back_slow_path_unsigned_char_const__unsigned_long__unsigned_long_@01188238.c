
/* void std::__ndk1::vector<v8::internal::ChunkedStream<unsigned char>::Chunk,
   std::__ndk1::allocator<v8::internal::ChunkedStream<unsigned char>::Chunk>
   >::__emplace_back_slow_path<unsigned char const*, unsigned long&, unsigned long>(unsigned char
   const*&&, unsigned long&, unsigned long&&) */

void __thiscall
std::__ndk1::
vector<v8::internal::ChunkedStream<unsigned_char>::Chunk,std::__ndk1::allocator<v8::internal::ChunkedStream<unsigned_char>::Chunk>>
::__emplace_back_slow_path<unsigned_char_const*,unsigned_long&,unsigned_long>
          (vector<v8::internal::ChunkedStream<unsigned_char>::Chunk,std::__ndk1::allocator<v8::internal::ChunkedStream<unsigned_char>::Chunk>>
           *this,uchar **param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__src;
  size_t __n;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar1 = ((long)__n >> 3) * -0x5555555555555555 + 1;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    lVar3 = *(long *)(this + 0x10) - (long)__src >> 3;
    uVar4 = lVar3 * 0x5555555555555556;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    if (0x555555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar1 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar1) goto LAB_0118835c;
      pvVar2 = operator_new(uVar1 * 0x18);
    }
    uVar4 = *param_2;
    uVar5 = *param_3;
    puVar6 = (undefined8 *)((long)pvVar2 + ((long)__n >> 3) * 8);
    *puVar6 = *param_1;
    puVar6[1] = uVar4;
    puVar6[2] = uVar5;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar6 - __n),__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = (void *)((long)puVar6 - __n);
    *(undefined8 **)(this + 8) = puVar6 + 3;
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar1 * 0x18);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
    return;
  }
LAB_0118835c:
                    /* WARNING: Subroutine does not return */
  abort();
}

