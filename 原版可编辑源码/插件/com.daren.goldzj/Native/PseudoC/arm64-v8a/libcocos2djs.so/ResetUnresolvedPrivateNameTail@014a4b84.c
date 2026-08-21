
/* v8::internal::ClassScope::ResetUnresolvedPrivateNameTail(v8::base::ThreadedListBase<v8::internal::VariableProxy,
   v8::base::EmptyBase, v8::internal::VariableProxy::UnresolvedNext>::Iterator) */

void __thiscall
v8::internal::ClassScope::ResetUnresolvedPrivateNameTail(ClassScope *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(ulong *)(this + 0x88) & 0xfffffffffffffff8);
  if ((puVar1 != (undefined8 *)0x0) && ((undefined8 *)puVar1[1] != param_2)) {
    if (param_2 == (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = puVar1;
      return;
    }
    puVar1[1] = param_2;
    *param_2 = 0;
  }
  return;
}

