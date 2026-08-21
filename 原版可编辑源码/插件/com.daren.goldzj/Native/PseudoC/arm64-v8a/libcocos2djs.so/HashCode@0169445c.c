
/* v8::internal::compiler::Operator1<long, v8::internal::compiler::OpEqualTo<long>,
   v8::internal::compiler::OpHash<long> >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<long,v8::internal::compiler::OpEqualTo<long>,v8::internal::compiler::OpHash<long>>::
HashCode(Operator1<long,v8::internal::compiler::OpEqualTo<long>,v8::internal::compiler::OpHash<long>>
         *this)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)(this + 0x10);
  uVar2 = base::hash_value(*(ulong *)(this + 0x30));
  base::hash_combine(uVar2,(ulong)uVar1);
  return;
}

