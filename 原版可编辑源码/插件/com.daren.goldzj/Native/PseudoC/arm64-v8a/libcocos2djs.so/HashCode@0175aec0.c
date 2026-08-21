
/* v8::internal::compiler::Operator1<v8::internal::compiler::ContextAccess,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::ContextAccess>,
   v8::internal::compiler::OpHash<v8::internal::compiler::ContextAccess> >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::ContextAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ContextAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::ContextAccess>>
::HashCode(Operator1<v8::internal::compiler::ContextAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ContextAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::ContextAccess>>
           *this)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = *(ushort *)(this + 0x10);
  uVar3 = *(ushort *)(this + 0x2e);
  uVar1 = *(uint *)(this + 0x30);
  uVar4 = base::hash_combine(0,(ulong)(byte)this[0x2c]);
  uVar5 = base::hash_value((ulong)uVar1);
  uVar4 = base::hash_combine(uVar4,uVar5);
  uVar5 = base::hash_value((ulong)uVar3);
  uVar4 = base::hash_combine(uVar4,uVar5);
  base::hash_combine(uVar4,(ulong)uVar2);
  return;
}

