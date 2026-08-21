
/* std::__ndk1::enable_if<__is_forward_iterator<v8::AllocationProfile::Sample*>::value&&is_constructible<v8::AllocationProfile::Sample,
   std::__ndk1::iterator_traits<v8::AllocationProfile::Sample*>::reference>::value, void>::type
   std::__ndk1::vector<v8::AllocationProfile::Sample,
   std::__ndk1::allocator<v8::AllocationProfile::Sample>
   >::assign<v8::AllocationProfile::Sample*>(v8::AllocationProfile::Sample*,
   v8::AllocationProfile::Sample*) */

void __thiscall
std::__ndk1::
vector<v8::AllocationProfile::Sample,std::__ndk1::allocator<v8::AllocationProfile::Sample>>::
assign<v8::AllocationProfile::Sample*>
          (vector<v8::AllocationProfile::Sample,std::__ndk1::allocator<v8::AllocationProfile::Sample>>
           *this,Sample *param_1,Sample *param_2)

{
  Sample *__src;
  long lVar1;
  size_t sVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = *(long *)(this + 0x10);
  pvVar3 = *(void **)this;
  sVar2 = (long)param_2 - (long)param_1;
  uVar4 = (long)sVar2 >> 5;
  if (uVar4 <= (ulong)(lVar1 - (long)pvVar3 >> 5)) {
    uVar5 = *(long *)(this + 8) - (long)pvVar3 >> 5;
    __src = param_1 + (*(long *)(this + 8) - (long)pvVar3);
    if (uVar4 <= uVar5) {
      __src = param_2;
    }
    sVar2 = (long)__src - (long)param_1;
    if (sVar2 != 0) {
      memmove(pvVar3,param_1,sVar2);
    }
    if (uVar5 < uVar4) {
      sVar2 = (long)param_2 - (long)__src;
      if ((long)sVar2 < 1) {
        return;
      }
      memcpy(*(void **)(this + 8),__src,sVar2);
      pvVar3 = (void *)(*(long *)(this + 8) + sVar2);
    }
    else {
      pvVar3 = (void *)((long)pvVar3 + ((long)sVar2 >> 5) * 0x20);
    }
LAB_011b89cc:
    *(void **)(this + 8) = pvVar3;
    return;
  }
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 8) = pvVar3;
    operator_delete(pvVar3);
    lVar1 = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (uVar4 >> 0x3b == 0) {
    if (uVar4 <= (ulong)(lVar1 >> 4)) {
      uVar4 = lVar1 >> 4;
    }
    if (0x3fffffffffffffe < (ulong)(lVar1 >> 5)) {
      uVar4 = 0x7ffffffffffffff;
    }
    if (uVar4 >> 0x3b == 0) {
      pvVar3 = operator_new(uVar4 * 0x20);
      *(void **)this = pvVar3;
      *(void **)(this + 8) = pvVar3;
      *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar4 * 0x20);
      if ((long)sVar2 < 1) {
        return;
      }
      memcpy(pvVar3,param_1,sVar2);
      pvVar3 = (void *)(*(long *)(this + 8) + sVar2);
      goto LAB_011b89cc;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

