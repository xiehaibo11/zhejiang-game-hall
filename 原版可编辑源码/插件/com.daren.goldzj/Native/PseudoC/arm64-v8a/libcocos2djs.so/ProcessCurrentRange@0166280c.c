
/* v8::internal::compiler::LinearScanAllocator::ProcessCurrentRange(v8::internal::compiler::LiveRange*,
   v8::internal::compiler::RegisterAllocationData::SpillMode) */

void __thiscall
v8::internal::compiler::LinearScanAllocator::ProcessCurrentRange
          (LinearScanAllocator *this,LiveRange *param_1,undefined4 param_3)

{
  ulong uVar1;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_c0 = &local_b0;
  uStack_a8 = 0xffffffffffffffff;
  local_b0 = 0xffffffffffffffff;
  uStack_98 = 0xffffffffffffffff;
  uStack_a0 = 0xffffffffffffffff;
  uStack_88 = 0xffffffffffffffff;
  local_90 = 0xffffffffffffffff;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0xffffffffffffffff;
  uStack_68 = 0xffffffffffffffff;
  local_70 = 0xffffffffffffffff;
  uStack_58 = 0xffffffffffffffff;
  uStack_60 = 0xffffffffffffffff;
  uStack_b8 = 0x20;
  uStack_48 = 0xffffffffffffffff;
  local_50 = 0xffffffffffffffff;
  uStack_38 = 0xffffffffffffffff;
  uStack_40 = 0xffffffffffffffff;
  FindFreeRegistersForRange();
  uVar1 = TryAllocatePreferredReg(this,param_1,(Vector *)&local_c0);
  if ((uVar1 & 1) == 0) {
    if ((*(long *)(*(long *)(param_1 + 0x20) + 0x68) != 0) &&
       (uVar1 = TrySplitAndSpillSplinter(this,param_1), (uVar1 & 1) != 0)) {
      return;
    }
    uVar1 = TryAllocateFreeReg(this,param_1,(Vector *)&local_c0);
    if ((uVar1 & 1) == 0) {
      AllocateBlockedReg(this,param_1,param_3);
    }
  }
  if ((*(uint *)(param_1 + 4) & 0x1f80) != 0x1000) {
    AddToActive(this,param_1);
  }
  return;
}

