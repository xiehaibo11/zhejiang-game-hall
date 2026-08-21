
/* v8::internal::compiler::Operator1<v8::internal::compiler::StoreRepresentation,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::StoreRepresentation>,
   v8::internal::compiler::OpHash<v8::internal::compiler::StoreRepresentation>
   >::Equals(v8::internal::compiler::Operator const*) const */

bool __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::StoreRepresentation,v8::internal::compiler::OpEqualTo<v8::internal::compiler::StoreRepresentation>,v8::internal::compiler::OpHash<v8::internal::compiler::StoreRepresentation>>
::Equals(Operator1<v8::internal::compiler::StoreRepresentation,v8::internal::compiler::OpEqualTo<v8::internal::compiler::StoreRepresentation>,v8::internal::compiler::OpHash<v8::internal::compiler::StoreRepresentation>>
         *this,Operator *param_1)

{
  if (*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) {
    return (*(ushort *)(this + 0x2c) & 0xff) == (*(ushort *)(param_1 + 0x2c) & 0xff) &&
           *(ushort *)(this + 0x2c) >> 8 == *(ushort *)(param_1 + 0x2c) >> 8;
  }
  return false;
}

