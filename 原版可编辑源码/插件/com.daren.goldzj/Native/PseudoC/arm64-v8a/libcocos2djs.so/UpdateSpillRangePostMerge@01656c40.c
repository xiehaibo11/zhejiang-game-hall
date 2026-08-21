
/* v8::internal::compiler::TopLevelLiveRange::UpdateSpillRangePostMerge(v8::internal::compiler::TopLevelLiveRange*)
    */

void __thiscall
v8::internal::compiler::TopLevelLiveRange::UpdateSpillRangePostMerge
          (TopLevelLiveRange *this,TopLevelLiveRange *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 4);
  if (((uVar1 & 0x60) == 0) && ((*(uint *)(param_1 + 4) >> 6 & 1) != 0)) {
    *(uint *)(this + 4) = uVar1 & 0xffffff80 | uVar1 & 0x1f | (*(uint *)(param_1 + 4) >> 5 & 3) << 5
    ;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffff9f;
  }
  return;
}

