
/* v8::internal::Scope::DeleteUnresolved(v8::internal::VariableProxy*) */

void __thiscall v8::internal::Scope::DeleteUnresolved(Scope *this,VariableProxy *param_1)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x200;
  return;
}

