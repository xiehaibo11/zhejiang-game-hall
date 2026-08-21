
/* v8::internal::compiler::LiveRangeBuilder::LiveRangeFor(v8::internal::compiler::InstructionOperand*,
   v8::internal::compiler::RegisterAllocationData::SpillMode) */

undefined8 __thiscall
v8::internal::compiler::LiveRangeBuilder::LiveRangeFor
          (LiveRangeBuilder *this,ulong *param_1,undefined4 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  if (((uVar3 & 7) == 2) || ((uVar3 & 7) == 1)) {
    uVar1 = RegisterAllocationData::GetOrCreateLiveRangeFor
                      (*(RegisterAllocationData **)this,(int)(uVar3 >> 3));
    return uVar1;
  }
  uVar2 = (uint)(uVar3 >> 5);
  if (((uVar3 & 0x1c) == 4) && ((uVar2 & 0xff) < 0xb)) {
    uVar1 = FixedLiveRangeFor(this,(long)uVar3 >> 0x23,param_3);
    return uVar1;
  }
  if (((uVar3 & 0x1c) == 4) && (10 < (uVar2 & 0xff))) {
    uVar1 = FixedFPLiveRangeFor(this,(long)uVar3 >> 0x23,uVar3 >> 5,param_3);
    return uVar1;
  }
  return 0;
}

