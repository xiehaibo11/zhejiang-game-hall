
/* v8::internal::compiler::Operator1<v8::internal::compiler::CreateArrayParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateArrayParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::CreateArrayParameters> >::HashCode() const
    */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::CreateArrayParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateArrayParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CreateArrayParameters>>
::HashCode(Operator1<v8::internal::compiler::CreateArrayParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateArrayParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CreateArrayParameters>>
           *this)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)(this + 0x10);
  uVar2 = base::hash_combine(*(ulong *)(this + 0x30),*(ulong *)(this + 0x38));
  base::hash_combine(uVar2,(ulong)uVar1);
  return;
}

