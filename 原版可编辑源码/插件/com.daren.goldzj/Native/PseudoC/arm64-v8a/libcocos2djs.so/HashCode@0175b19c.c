
/* v8::internal::compiler::Operator1<v8::internal::compiler::CreateArrayIteratorParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateArrayIteratorParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::CreateArrayIteratorParameters>
   >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::CreateArrayIteratorParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateArrayIteratorParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CreateArrayIteratorParameters>>
::HashCode(Operator1<v8::internal::compiler::CreateArrayIteratorParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateArrayIteratorParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CreateArrayIteratorParameters>>
           *this)

{
  base::hash_combine((long)*(int *)(this + 0x2c),(ulong)*(ushort *)(this + 0x10));
  return;
}

