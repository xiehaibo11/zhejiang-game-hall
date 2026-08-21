
/* void std::__ndk1::vector<v8::internal::JsonProperty,
   std::__ndk1::allocator<v8::internal::JsonProperty>
   >::__emplace_back_slow_path<v8::internal::JsonString>(v8::internal::JsonString&&) */

void __thiscall
std::__ndk1::vector<v8::internal::JsonProperty,std::__ndk1::allocator<v8::internal::JsonProperty>>::
__emplace_back_slow_path<v8::internal::JsonString>
          (vector<v8::internal::JsonProperty,std::__ndk1::allocator<v8::internal::JsonProperty>>
           *this,JsonString *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *__src;
  size_t __n;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar1 = ((long)__n >> 3) * -0x5555555555555555 + 1;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    lVar5 = *(long *)(this + 0x10) - (long)__src >> 3;
    uVar6 = lVar5 * 0x5555555555555556;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar1 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar1) goto LAB_0104a88c;
      pvVar3 = operator_new(uVar1 * 0x18);
    }
    uVar4 = *(undefined8 *)param_1;
    uVar2 = *(undefined4 *)(param_1 + 8);
    puVar7 = (undefined8 *)((long)pvVar3 + ((long)__n >> 3) * 8);
    puVar7[2] = 0;
    *(undefined4 *)(puVar7 + 1) = uVar2;
    *puVar7 = uVar4;
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
LAB_0104a88c:
                    /* WARNING: Subroutine does not return */
  abort();
}

