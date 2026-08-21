
/* v8::internal::VariableProxy::VariableProxy(v8::internal::Variable*, int) */

void __thiscall
v8::internal::VariableProxy::VariableProxy(VariableProxy *this,Variable *param_1,int param_2)

{
  *(Variable **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(int *)this = param_2;
  *(undefined4 *)(this + 4) = 0x935;
  *(ushort *)(param_1 + 0x28) = *(ushort *)(param_1 + 0x28) | 0x800;
  if (-1 < (char)this[4]) {
    return;
  }
  Variable::SetMaybeAssigned(param_1);
  return;
}

