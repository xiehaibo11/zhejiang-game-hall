
/* v8::internal::compiler::Operator1<v8::internal::Handle<v8::internal::ScopeInfo>,
   v8::internal::compiler::OpEqualTo<v8::internal::Handle<v8::internal::ScopeInfo> >,
   v8::internal::compiler::OpHash<v8::internal::Handle<v8::internal::ScopeInfo> > >::HashCode()
   const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::Handle<v8::internal::ScopeInfo>,v8::internal::compiler::OpEqualTo<v8::internal::Handle<v8::internal::ScopeInfo>>,v8::internal::compiler::OpHash<v8::internal::Handle<v8::internal::ScopeInfo>>>
::HashCode(Operator1<v8::internal::Handle<v8::internal::ScopeInfo>,v8::internal::compiler::OpEqualTo<v8::internal::Handle<v8::internal::ScopeInfo>>,v8::internal::compiler::OpHash<v8::internal::Handle<v8::internal::ScopeInfo>>>
           *this)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)(this + 0x10);
  uVar2 = base::hash_value(*(ulong *)(this + 0x30));
  base::hash_combine(uVar2,(ulong)uVar1);
  return;
}

