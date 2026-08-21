
/* v8::internal::compiler::Operator1<v8::internal::compiler::NamedAccess,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::NamedAccess>,
   v8::internal::compiler::OpHash<v8::internal::compiler::NamedAccess> >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::NamedAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::NamedAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::NamedAccess>>
::HashCode(Operator1<v8::internal::compiler::NamedAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::NamedAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::NamedAccess>>
           *this)

{
  Operator1<v8::internal::compiler::NamedAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::NamedAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::NamedAccess>>
  OVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = *(ushort *)(this + 0x10);
  OVar1 = this[0x48];
  uVar5 = *(ulong *)(this + 0x30);
  uVar4 = *(ulong *)(this + 0x38);
  uVar3 = base::hash_combine(0,(long)*(int *)(this + 0x40));
  uVar4 = base::hash_value(uVar4);
  uVar4 = base::hash_combine(uVar3,uVar4);
  uVar4 = base::hash_combine(uVar4,(ulong)(byte)OVar1);
  uVar5 = base::hash_value(uVar5);
  uVar5 = base::hash_combine(uVar4,uVar5);
  base::hash_combine(uVar5,(ulong)uVar2);
  return;
}

