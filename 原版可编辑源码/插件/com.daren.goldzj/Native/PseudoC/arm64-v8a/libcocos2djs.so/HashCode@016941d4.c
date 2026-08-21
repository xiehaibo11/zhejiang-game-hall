
/* v8::internal::compiler::Operator1<v8::internal::compiler::IfValueParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::IfValueParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::IfValueParameters> >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::IfValueParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::IfValueParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::IfValueParameters>>
::HashCode(Operator1<v8::internal::compiler::IfValueParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::IfValueParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::IfValueParameters>>
           *this)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = *(ushort *)(this + 0x10);
  uVar1 = *(uint *)(this + 0x2c);
  uVar2 = *(uint *)(this + 0x30);
  uVar4 = base::hash_combine(0,(ulong)(byte)this[0x34]);
  uVar5 = base::hash_value(uVar2);
  uVar4 = base::hash_combine(uVar4,uVar5);
  uVar5 = base::hash_value(uVar1);
  uVar4 = base::hash_combine(uVar4,uVar5);
  base::hash_combine(uVar4,(ulong)uVar3);
  return;
}

