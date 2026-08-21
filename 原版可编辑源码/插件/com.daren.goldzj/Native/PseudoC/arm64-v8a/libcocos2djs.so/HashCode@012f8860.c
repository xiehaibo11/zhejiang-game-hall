
/* v8::internal::compiler::Operator1<v8::internal::compiler::ElementAccess,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::ElementAccess>,
   v8::internal::compiler::OpHash<v8::internal::compiler::ElementAccess> >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::ElementAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ElementAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::ElementAccess>>
::HashCode(Operator1<v8::internal::compiler::ElementAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ElementAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::ElementAccess>>
           *this)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(ushort *)(this + 0x10);
  uVar2 = base::hash_combine(0,((ulong)(*(ushort *)(this + 0x40) >> 4) & 0xff0) +
                               (ulong)(byte)*(ushort *)(this + 0x40));
  uVar3 = base::hash_value(*(uint *)(this + 0x34));
  uVar2 = base::hash_combine(uVar2,uVar3);
  uVar2 = base::hash_combine(uVar2,(ulong)(byte)this[0x30]);
  base::hash_combine(uVar2,(ulong)uVar1);
  return;
}

