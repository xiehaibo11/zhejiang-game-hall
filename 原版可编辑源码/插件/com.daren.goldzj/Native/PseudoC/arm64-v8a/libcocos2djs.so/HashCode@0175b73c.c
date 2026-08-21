
/* v8::internal::compiler::Operator1<v8::internal::compiler::CreateLiteralParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateLiteralParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::CreateLiteralParameters> >::HashCode()
   const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::CreateLiteralParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateLiteralParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CreateLiteralParameters>>
::HashCode(Operator1<v8::internal::compiler::CreateLiteralParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateLiteralParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CreateLiteralParameters>>
           *this)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)(this + 0x10);
  uVar2 = compiler::hash_value((CreateLiteralParameters *)(this + 0x30));
  base::hash_combine(uVar2,(ulong)uVar1);
  return;
}

