
/* v8::internal::compiler::Operator1<v8::internal::compiler::SelectParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::SelectParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::SelectParameters> >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::SelectParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::SelectParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::SelectParameters>>
::HashCode(Operator1<v8::internal::compiler::SelectParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::SelectParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::SelectParameters>>
           *this)

{
  Operator1<v8::internal::compiler::SelectParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::SelectParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::SelectParameters>>
  OVar1;
  ushort uVar2;
  ulong uVar3;
  
  uVar2 = *(ushort *)(this + 0x10);
  OVar1 = this[0x2c];
  uVar3 = base::hash_combine(0,(ulong)(byte)this[0x2d]);
  uVar3 = base::hash_combine(uVar3,(ulong)(byte)OVar1);
  base::hash_combine(uVar3,(ulong)uVar2);
  return;
}

