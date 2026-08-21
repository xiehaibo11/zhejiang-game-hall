
/* v8::internal::PagedSpace::SlowRefillLinearAllocationArea(int, v8::internal::AllocationOrigin) */

uint __thiscall
v8::internal::PagedSpace::SlowRefillLinearAllocationArea
          (PagedSpace *this,undefined4 param_1,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  RuntimeCallStats *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  lVar3 = *(long *)(this + 0x40);
  uVar1 = *(undefined4 *)(lVar3 + -0x5bf0);
  *(undefined4 *)(lVar3 + -0x5bf0) = 1;
  local_50 = 0;
  uStack_68 = 0;
  local_70 = (RuntimeCallStats *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_70 = (RuntimeCallStats *)(*(long *)(*(long *)(this + 0x40) + 0xcd0) + 0x58a0);
    RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,0x88);
  }
  uVar2 = RawSlowRefillLinearAllocationArea(this,param_1,param_3);
  if (local_70 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_70,(RuntimeCallTimer *)((ulong)&local_70 | 8));
  }
  *(undefined4 *)(lVar3 + -0x5bf0) = uVar1;
  return uVar2 & 1;
}

