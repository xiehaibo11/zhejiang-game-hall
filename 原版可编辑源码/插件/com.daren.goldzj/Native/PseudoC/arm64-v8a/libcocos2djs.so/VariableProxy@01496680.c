
/* v8::internal::VariableProxy::VariableProxy(v8::internal::VariableProxy const*) */

void __thiscall
v8::internal::VariableProxy::VariableProxy(VariableProxy *this,VariableProxy *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = 0x35;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  return;
}

