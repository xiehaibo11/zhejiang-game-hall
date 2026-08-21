
/* v8::internal::compiler::Operator1<v8::internal::compiler::FieldAccess,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::FieldAccess>,
   v8::internal::compiler::OpHash<v8::internal::compiler::FieldAccess> >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::FieldAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::FieldAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::FieldAccess>>
::HashCode(Operator1<v8::internal::compiler::FieldAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::FieldAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::FieldAccess>>
           *this)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(ushort *)(this + 0x10);
  uVar2 = base::hash_combine(0,(ulong)(byte)this[0x60]);
  uVar2 = base::hash_combine(uVar2,*(ulong *)(this + 0x58));
  uVar2 = base::hash_combine(uVar2,((ulong)(*(ushort *)(this + 0x50) >> 4) & 0xff0) +
                                   (ulong)(byte)*(ushort *)(this + 0x50));
  uVar3 = base::hash_value(*(uint *)(this + 0x34));
  uVar2 = base::hash_combine(uVar2,uVar3);
  uVar2 = base::hash_combine(uVar2,(ulong)(byte)this[0x30]);
  base::hash_combine(uVar2,(ulong)uVar1);
  return;
}

