
/* v8::internal::compiler::Operator1<v8::internal::compiler::BigIntOperationHint,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::BigIntOperationHint>,
   v8::internal::compiler::OpHash<v8::internal::compiler::BigIntOperationHint> >::HashCode() const
    */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::BigIntOperationHint,v8::internal::compiler::OpEqualTo<v8::internal::compiler::BigIntOperationHint>,v8::internal::compiler::OpHash<v8::internal::compiler::BigIntOperationHint>>
::HashCode(Operator1<v8::internal::compiler::BigIntOperationHint,v8::internal::compiler::OpEqualTo<v8::internal::compiler::BigIntOperationHint>,v8::internal::compiler::OpHash<v8::internal::compiler::BigIntOperationHint>>
           *this)

{
  base::hash_combine((ulong)(byte)this[0x2c],(ulong)*(ushort *)(this + 0x10));
  return;
}

