
/* v8::internal::VariableProxy::BindTo(v8::internal::Variable*) */

void __thiscall v8::internal::VariableProxy::BindTo(VariableProxy *this,Variable *param_1)

{
  *(Variable **)(this + 8) = param_1;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x100;
  *(ushort *)(param_1 + 0x28) = *(ushort *)(param_1 + 0x28) | 0x800;
  if (-1 < (char)this[4]) {
    return;
  }
  Variable::SetMaybeAssigned(param_1);
  return;
}

