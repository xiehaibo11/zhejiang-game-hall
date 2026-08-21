
/* v8::internal::compiler::RegisterAllocationData::CreateSpillRangeForLiveRange(v8::internal::compiler::TopLevelLiveRange*)
    */

SpillRange * __thiscall
v8::internal::compiler::RegisterAllocationData::CreateSpillRangeForLiveRange
          (RegisterAllocationData *this,TopLevelLiveRange *param_1)

{
  Zone *this_00;
  SpillRange *this_01;
  
  this_00 = *(Zone **)this;
  this_01 = *(SpillRange **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x38) {
    this_01 = (SpillRange *)Zone::NewExpand(this_00,0x38);
  }
  else {
    *(SpillRange **)(this_00 + 0x10) = this_01 + 0x38;
  }
  SpillRange::SpillRange(this_01,param_1,*(Zone **)this);
  return this_01;
}

