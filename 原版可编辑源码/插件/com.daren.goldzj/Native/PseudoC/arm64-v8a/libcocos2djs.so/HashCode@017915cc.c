
/* v8::internal::compiler::Operator1<v8::internal::compiler::S8x16ShuffleParameter,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::S8x16ShuffleParameter>,
   v8::internal::compiler::OpHash<v8::internal::compiler::S8x16ShuffleParameter> >::HashCode() const
    */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::S8x16ShuffleParameter,v8::internal::compiler::OpEqualTo<v8::internal::compiler::S8x16ShuffleParameter>,v8::internal::compiler::OpHash<v8::internal::compiler::S8x16ShuffleParameter>>
::HashCode(Operator1<v8::internal::compiler::S8x16ShuffleParameter,v8::internal::compiler::OpEqualTo<v8::internal::compiler::S8x16ShuffleParameter>,v8::internal::compiler::OpHash<v8::internal::compiler::S8x16ShuffleParameter>>
           *this)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)(this + 0x10);
  uVar2 = compiler::hash_value((S8x16ShuffleParameter *)(this + 0x2c));
  base::hash_combine(uVar2,(ulong)uVar1);
  return;
}

