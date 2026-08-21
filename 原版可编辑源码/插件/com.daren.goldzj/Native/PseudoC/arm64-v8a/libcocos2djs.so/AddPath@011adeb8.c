
/* v8::internal::CpuProfile::AddPath(v8::base::TimeTicks,
   std::__ndk1::vector<v8::internal::ProfileStackFrame,
   std::__ndk1::allocator<v8::internal::ProfileStackFrame> > const&, int, bool, v8::base::TimeDelta)
    */

void __thiscall
v8::internal::CpuProfile::AddPath
          (CpuProfile *this,long param_2,undefined8 param_3,undefined4 param_4,uint param_5,
          long param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_6 != 0) {
    lVar3 = *(long *)(this + 0xb0);
    *(long *)(this + 0xb0) = lVar3 - param_6;
    if (0 < lVar3 - param_6) {
      return;
    }
    *(long *)(this + 0xb0) = (long)*(int *)(this + 0x10);
  }
  uVar2 = ProfileTree::AddPathFromEnd
                    ((ProfileTree *)(this + 0x68),param_3,param_4,param_5 & 1,
                     *(undefined4 *)(this + 8),*(undefined8 *)(this + 0x20));
  if ((param_2 != 0) && (*(long *)(this + 0x28) <= param_2)) {
    if ((*(uint *)(this + 0xc) == 0xffffffff) ||
       (*(ulong *)(this + 0x60) < (ulong)*(uint *)(this + 0xc))) {
      lVar3 = *(long *)(this + 0x40);
      lVar5 = *(long *)(this + 0x48);
      uVar1 = 0;
      if (lVar5 - lVar3 != 0) {
        uVar1 = (lVar5 - lVar3 >> 3) * 0xaa - 1;
      }
      uVar6 = *(ulong *)(this + 0x60) + *(long *)(this + 0x58);
      if (uVar1 == uVar6) {
        std::__ndk1::
        deque<v8::internal::CpuProfile::SampleInfo,std::__ndk1::allocator<v8::internal::CpuProfile::SampleInfo>>
        ::__add_back_capacity
                  ((deque<v8::internal::CpuProfile::SampleInfo,std::__ndk1::allocator<v8::internal::CpuProfile::SampleInfo>>
                    *)(this + 0x38));
        lVar3 = *(long *)(this + 0x40);
        lVar5 = *(long *)(this + 0x48);
        uVar6 = *(long *)(this + 0x58) + *(long *)(this + 0x60);
      }
      if (lVar5 == lVar3) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        puVar4 = (undefined8 *)(*(long *)(lVar3 + (uVar6 / 0xaa) * 8) + (uVar6 % 0xaa) * 0x18);
      }
      *puVar4 = uVar2;
      puVar4[1] = param_2;
      *(undefined4 *)(puVar4 + 2) = param_4;
      *(long *)(this + 0x60) = *(long *)(this + 0x60) + 1;
    }
  }
  if (((ulong)(*(long *)(this + 0x60) - *(long *)(this + 0xa0)) < 100) &&
     ((ulong)(*(long *)(this + 0x70) - *(long *)(this + 0x68) >> 3) < 10)) {
    return;
  }
  StreamPendingTraceEvents(this);
  return;
}

