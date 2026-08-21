
/* v8::internal::compiler::Operator1<double, v8::internal::compiler::OpEqualTo<double>,
   v8::internal::compiler::OpHash<double> >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<double,v8::internal::compiler::OpEqualTo<double>,v8::internal::compiler::OpHash<double>>::
HashCode(Operator1<double,v8::internal::compiler::OpEqualTo<double>,v8::internal::compiler::OpHash<double>>
         *this)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)(this + 0x10);
  uVar2 = base::hash_value(*(ulong *)(this + 0x30));
  base::hash_combine(uVar2,(ulong)uVar1);
  return;
}

