
/* void std::__ndk1::vector<v8::internal::Utf8ExternalStreamingStream::Chunk,
   std::__ndk1::allocator<v8::internal::Utf8ExternalStreamingStream::Chunk>
   >::__push_back_slow_path<v8::internal::Utf8ExternalStreamingStream::Chunk>(v8::internal::Utf8ExternalStreamingStream::Chunk&&)
    */

void __thiscall
std::__ndk1::
vector<v8::internal::Utf8ExternalStreamingStream::Chunk,std::__ndk1::allocator<v8::internal::Utf8ExternalStreamingStream::Chunk>>
::__push_back_slow_path<v8::internal::Utf8ExternalStreamingStream::Chunk>
          (vector<v8::internal::Utf8ExternalStreamingStream::Chunk,std::__ndk1::allocator<v8::internal::Utf8ExternalStreamingStream::Chunk>>
           *this,Chunk *param_1)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  void *__src;
  size_t __n;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar1 = ((long)__n >> 3) * -0x3333333333333333 + 1;
  if (uVar1 < 0x666666666666667) {
    lVar4 = *(long *)(this + 0x10) - (long)__src >> 3;
    uVar5 = lVar4 * -0x6666666666666666;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x333333333333332 < (ulong)(lVar4 * -0x3333333333333333)) {
      uVar1 = 0x666666666666666;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x666666666666666 < uVar1) goto LAB_01187508;
      pvVar2 = operator_new(uVar1 * 0x28);
    }
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)param_1;
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    puVar3 = (undefined8 *)((long)pvVar2 + ((long)__n >> 3) * 8);
    puVar3[4] = *(undefined8 *)(param_1 + 0x20);
    puVar3[1] = uVar7;
    *puVar3 = uVar6;
    puVar3[3] = uVar9;
    puVar3[2] = uVar8;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar3 - __n),__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = (void *)((long)puVar3 - __n);
    *(undefined8 **)(this + 8) = puVar3 + 5;
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar1 * 0x28);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
    return;
  }
LAB_01187508:
                    /* WARNING: Subroutine does not return */
  abort();
}

