
/* std::__ndk1::deque<v8::internal::CpuProfile::SampleInfo,
   std::__ndk1::allocator<v8::internal::CpuProfile::SampleInfo> >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<v8::internal::CpuProfile::SampleInfo,std::__ndk1::allocator<v8::internal::CpuProfile::SampleInfo>>
::__add_back_capacity
          (deque<v8::internal::CpuProfile::SampleInfo,std::__ndk1::allocator<v8::internal::CpuProfile::SampleInfo>>
           *this)

{
  SampleInfo *pSVar1;
  ulong uVar2;
  SampleInfo **ppSVar3;
  undefined8 uVar4;
  long lVar5;
  SampleInfo **ppSVar6;
  ulong uVar7;
  SampleInfo *local_60;
  SampleInfo *pSStack_58;
  SampleInfo *local_50;
  SampleInfo *pSStack_48;
  deque<v8::internal::CpuProfile::SampleInfo,std::__ndk1::allocator<v8::internal::CpuProfile::SampleInfo>>
  *pdStack_40;
  SampleInfo *local_18;
  
  if (*(ulong *)(this + 0x20) < 0xaa) {
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar5 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar5 >> 3) <= uVar7) {
      uVar2 = lVar5 >> 2;
      if (lVar5 == 0) {
        uVar2 = 1;
      }
      pdStack_40 = this + 0x18;
      pSStack_48 = (SampleInfo *)0x0;
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_60 = operator_new(uVar2 * 8);
      pSStack_58 = local_60 + uVar7 * 8;
      pSStack_48 = local_60 + uVar2 * 8;
      local_50 = pSStack_58;
      local_18 = operator_new(0xff0);
      __split_buffer<v8::internal::CpuProfile::SampleInfo*,std::__ndk1::allocator<v8::internal::CpuProfile::SampleInfo*>&>
      ::push_back((__split_buffer<v8::internal::CpuProfile::SampleInfo*,std::__ndk1::allocator<v8::internal::CpuProfile::SampleInfo*>&>
                   *)&local_60,&local_18);
      ppSVar3 = *(SampleInfo ***)(this + 8);
      ppSVar6 = *(SampleInfo ***)(this + 0x10);
      if (ppSVar6 != ppSVar3) {
        do {
          ppSVar6 = ppSVar6 + -1;
          __split_buffer<v8::internal::CpuProfile::SampleInfo*,std::__ndk1::allocator<v8::internal::CpuProfile::SampleInfo*>&>
          ::push_front((__split_buffer<v8::internal::CpuProfile::SampleInfo*,std::__ndk1::allocator<v8::internal::CpuProfile::SampleInfo*>&>
                        *)&local_60,ppSVar6);
          ppSVar3 = *(SampleInfo ***)(this + 8);
        } while (ppSVar6 != ppSVar3);
        ppSVar6 = *(SampleInfo ***)(this + 0x10);
      }
      pSVar1 = *(SampleInfo **)this;
      *(SampleInfo **)(this + 8) = pSStack_58;
      *(SampleInfo **)this = local_60;
      uVar4 = *(undefined8 *)(this + 0x18);
      *(SampleInfo **)(this + 0x18) = pSStack_48;
      *(SampleInfo **)(this + 0x10) = local_50;
      local_50 = (SampleInfo *)ppSVar6;
      if (ppSVar3 != ppSVar6) {
        local_50 = (SampleInfo *)
                   (ppSVar6 +
                   ((ulong)((long)ppSVar6 + (-8 - (long)ppSVar3)) >> 3 ^ 0xffffffffffffffff));
      }
      if (pSVar1 == (SampleInfo *)0x0) {
        return;
      }
      local_60 = pSVar1;
      pSStack_58 = (SampleInfo *)ppSVar3;
      pSStack_48 = (SampleInfo *)uVar4;
      operator_delete(pSVar1);
      return;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0xff0);
      __split_buffer<v8::internal::CpuProfile::SampleInfo*,std::__ndk1::allocator<v8::internal::CpuProfile::SampleInfo*>>
      ::push_back((__split_buffer<v8::internal::CpuProfile::SampleInfo*,std::__ndk1::allocator<v8::internal::CpuProfile::SampleInfo*>>
                   *)this,&local_60);
      return;
    }
    local_60 = operator_new(0xff0);
    __split_buffer<v8::internal::CpuProfile::SampleInfo*,std::__ndk1::allocator<v8::internal::CpuProfile::SampleInfo*>>
    ::push_front((__split_buffer<v8::internal::CpuProfile::SampleInfo*,std::__ndk1::allocator<v8::internal::CpuProfile::SampleInfo*>>
                  *)this,&local_60);
    local_60 = (SampleInfo *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0xaa;
    local_60 = (SampleInfo *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_011b19ec(this,&local_60);
  return;
}

