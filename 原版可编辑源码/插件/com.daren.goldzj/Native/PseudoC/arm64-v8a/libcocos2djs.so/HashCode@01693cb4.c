
/* v8::internal::compiler::Operator1<v8::internal::compiler::SparseInputMask,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::SparseInputMask>,
   v8::internal::compiler::OpHash<v8::internal::compiler::SparseInputMask> >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::SparseInputMask,v8::internal::compiler::OpEqualTo<v8::internal::compiler::SparseInputMask>,v8::internal::compiler::OpHash<v8::internal::compiler::SparseInputMask>>
::HashCode(Operator1<v8::internal::compiler::SparseInputMask,v8::internal::compiler::OpEqualTo<v8::internal::compiler::SparseInputMask>,v8::internal::compiler::OpHash<v8::internal::compiler::SparseInputMask>>
           *this)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)(this + 0x10);
  uVar2 = base::hash_value(*(uint *)(this + 0x2c));
  base::hash_combine(uVar2,(ulong)uVar1);
  return;
}

