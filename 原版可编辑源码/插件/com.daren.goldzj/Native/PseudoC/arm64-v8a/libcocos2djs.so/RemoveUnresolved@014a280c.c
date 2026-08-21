
/* v8::internal::Scope::RemoveUnresolved(v8::internal::VariableProxy*) */

void __thiscall v8::internal::Scope::RemoveUnresolved(Scope *this,VariableProxy *param_1)

{
  base::
  ThreadedListBase<v8::internal::VariableProxy,v8::base::EmptyBase,v8::internal::VariableProxy::UnresolvedNext>
  ::Remove((ThreadedListBase<v8::internal::VariableProxy,v8::base::EmptyBase,v8::internal::VariableProxy::UnresolvedNext>
            *)(this + 0x48),param_1);
  return;
}

