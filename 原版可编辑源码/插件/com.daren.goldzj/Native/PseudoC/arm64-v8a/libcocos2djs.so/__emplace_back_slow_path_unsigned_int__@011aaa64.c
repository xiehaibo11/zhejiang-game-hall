
/* void std::__ndk1::vector<v8::internal::HeapObjectsMap::TimeInterval,
   std::__ndk1::allocator<v8::internal::HeapObjectsMap::TimeInterval>
   >::__emplace_back_slow_path<unsigned int&>(unsigned int&) */

void __thiscall
std::__ndk1::
vector<v8::internal::HeapObjectsMap::TimeInterval,std::__ndk1::allocator<v8::internal::HeapObjectsMap::TimeInterval>>
::__emplace_back_slow_path<unsigned_int&>
          (vector<v8::internal::HeapObjectsMap::TimeInterval,std::__ndk1::allocator<v8::internal::HeapObjectsMap::TimeInterval>>
           *this,uint *param_1)

{
  ulong uVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *__src;
  size_t __n;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  
  lVar7 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar7 * -0x5555555555555555 + 1;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    lVar5 = *(long *)(this + 0x10) - *(long *)this >> 3;
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
      if (0xaaaaaaaaaaaaaaa < uVar1) goto LAB_011aab68;
      pvVar3 = operator_new(uVar1 * 0x18);
    }
    uVar2 = *param_1;
    puVar8 = (uint *)((long)pvVar3 + lVar7 * 8);
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = uVar2;
    uVar4 = v8::base::TimeTicks::Now();
    *(undefined8 *)(puVar8 + 4) = uVar4;
    __src = *(void **)this;
    __n = *(long *)(this + 8) - (long)__src;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar8 - __n),__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = (void *)((long)puVar8 - __n);
    *(uint **)(this + 8) = puVar8 + 6;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 0x18);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
    return;
  }
LAB_011aab68:
                    /* WARNING: Subroutine does not return */
  abort();
}

