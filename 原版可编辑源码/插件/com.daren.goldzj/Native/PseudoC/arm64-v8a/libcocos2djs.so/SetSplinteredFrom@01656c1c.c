
/* v8::internal::compiler::TopLevelLiveRange::SetSplinteredFrom(v8::internal::compiler::TopLevelLiveRange*)
    */

void __thiscall
v8::internal::compiler::TopLevelLiveRange::SetSplinteredFrom
          (TopLevelLiveRange *this,TopLevelLiveRange *param_1)

{
  *(TopLevelLiveRange **)(this + 0x68) = param_1;
  if (((*(uint *)(this + 4) & 0x60) != 0x20) && (*(long *)(param_1 + 0x70) != 0)) {
    *(long *)(this + 0x70) = *(long *)(param_1 + 0x70);
  }
  return;
}

