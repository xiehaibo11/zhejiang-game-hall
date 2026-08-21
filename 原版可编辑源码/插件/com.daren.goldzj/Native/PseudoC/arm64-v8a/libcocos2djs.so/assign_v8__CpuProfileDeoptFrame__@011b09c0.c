
/* std::__ndk1::enable_if<__is_forward_iterator<v8::CpuProfileDeoptFrame*>::value&&is_constructible<v8::CpuProfileDeoptFrame,
   std::__ndk1::iterator_traits<v8::CpuProfileDeoptFrame*>::reference>::value, void>::type
   std::__ndk1::vector<v8::CpuProfileDeoptFrame, std::__ndk1::allocator<v8::CpuProfileDeoptFrame>
   >::assign<v8::CpuProfileDeoptFrame*>(v8::CpuProfileDeoptFrame*, v8::CpuProfileDeoptFrame*) */

void __thiscall
std::__ndk1::vector<v8::CpuProfileDeoptFrame,std::__ndk1::allocator<v8::CpuProfileDeoptFrame>>::
assign<v8::CpuProfileDeoptFrame*>
          (vector<v8::CpuProfileDeoptFrame,std::__ndk1::allocator<v8::CpuProfileDeoptFrame>> *this,
          CpuProfileDeoptFrame *param_1,CpuProfileDeoptFrame *param_2)

{
  CpuProfileDeoptFrame *__src;
  long lVar1;
  size_t sVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = *(long *)(this + 0x10);
  pvVar3 = *(void **)this;
  sVar2 = (long)param_2 - (long)param_1;
  uVar4 = (long)sVar2 >> 4;
  if (uVar4 <= (ulong)(lVar1 - (long)pvVar3 >> 4)) {
    uVar5 = *(long *)(this + 8) - (long)pvVar3 >> 4;
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
      pvVar3 = (void *)((long)pvVar3 + ((long)sVar2 >> 4) * 0x10);
    }
LAB_011b0ae8:
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
  if (uVar4 >> 0x3c == 0) {
    if (uVar4 <= (ulong)(lVar1 >> 3)) {
      uVar4 = lVar1 >> 3;
    }
    if (0x7fffffffffffffe < (ulong)(lVar1 >> 4)) {
      uVar4 = 0xfffffffffffffff;
    }
    if (uVar4 >> 0x3c == 0) {
      pvVar3 = operator_new(uVar4 * 0x10);
      *(void **)this = pvVar3;
      *(void **)(this + 8) = pvVar3;
      *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar4 * 0x10);
      if ((long)sVar2 < 1) {
        return;
      }
      memcpy(pvVar3,param_1,sVar2);
      pvVar3 = (void *)(*(long *)(this + 8) + sVar2);
      goto LAB_011b0ae8;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

