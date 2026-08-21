
/* v8::internal::ModuleScope::ModuleScope(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::ScopeInfo>, v8::internal::AstValueFactory*) */

void __thiscall
v8::internal::ModuleScope::ModuleScope
          (ModuleScope *this,undefined8 param_2,undefined8 param_3,long param_4)

{
  DeclarationScope::DeclarationScope
            ((DeclarationScope *)this,*(undefined8 *)(param_4 + 0x448),3,param_3);
  *(undefined8 *)(this + 0xe0) = 0;
  *(ushort *)(this + 0x81) = *(ushort *)(this + 0x81) | 1;
  return;
}

