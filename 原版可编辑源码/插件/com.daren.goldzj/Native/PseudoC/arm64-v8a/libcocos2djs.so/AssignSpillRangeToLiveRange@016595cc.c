
/* v8::internal::compiler::RegisterAllocationData::AssignSpillRangeToLiveRange(v8::internal::compiler::TopLevelLiveRange*,
   v8::internal::compiler::RegisterAllocationData::SpillMode) */

SpillRange * __thiscall
v8::internal::compiler::RegisterAllocationData::AssignSpillRangeToLiveRange
          (RegisterAllocationData *this,TopLevelLiveRange *param_1,int param_3)

{
  uint uVar1;
  uint uVar2;
  Zone *this_00;
  SpillRange *this_01;
  
  this_01 = *(SpillRange **)(param_1 + 0x70);
  if (this_01 == (SpillRange *)0x0) {
    this_00 = *(Zone **)this;
    this_01 = *(SpillRange **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x38) {
      this_01 = (SpillRange *)Zone::NewExpand(this_00,0x38);
    }
    else {
      *(SpillRange **)(this_00 + 0x10) = this_01 + 0x38;
    }
    SpillRange::SpillRange(this_01,param_1,*(Zone **)this);
  }
  uVar2 = *(uint *)(param_1 + 4);
  uVar1 = uVar2 & 0xffffff9f | 0x40;
  if ((uVar2 & 0x60) != 0x40 && param_3 == 1) {
    uVar1 = uVar2 | 0x60;
  }
  *(uint *)(param_1 + 4) = uVar1;
  if (*(TopLevelLiveRange **)(param_1 + 0x68) != (TopLevelLiveRange *)0x0) {
    param_1 = *(TopLevelLiveRange **)(param_1 + 0x68);
  }
  *(SpillRange **)(*(long *)(this + 0x128) + (long)*(int *)(param_1 + 0x5c) * 8) = this_01;
  return this_01;
}

