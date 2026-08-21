
/* v8::internal::compiler::LiveRange::UpdateParentForAllChildren(v8::internal::compiler::TopLevelLiveRange*)
    */

void __thiscall
v8::internal::compiler::LiveRange::UpdateParentForAllChildren
          (LiveRange *this,TopLevelLiveRange *param_1)

{
  for (; this != (LiveRange *)0x0; this = *(LiveRange **)(this + 0x28)) {
    *(TopLevelLiveRange **)(this + 0x20) = param_1;
  }
  return;
}

