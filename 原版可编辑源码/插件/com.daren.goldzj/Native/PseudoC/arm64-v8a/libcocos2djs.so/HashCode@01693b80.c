
/* v8::internal::compiler::Operator1<unsigned long, v8::internal::compiler::OpEqualTo<unsigned
   long>, v8::internal::compiler::OpHash<unsigned long> >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<unsigned_long,v8::internal::compiler::OpEqualTo<unsigned_long>,v8::internal::compiler::OpHash<unsigned_long>>
::HashCode(Operator1<unsigned_long,v8::internal::compiler::OpEqualTo<unsigned_long>,v8::internal::compiler::OpHash<unsigned_long>>
           *this)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)(this + 0x10);
  uVar2 = base::hash_value(*(ulong *)(this + 0x30));
  base::hash_combine(uVar2,(ulong)uVar1);
  return;
}

