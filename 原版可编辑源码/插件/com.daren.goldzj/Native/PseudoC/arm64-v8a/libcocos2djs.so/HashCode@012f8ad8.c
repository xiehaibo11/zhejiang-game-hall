
/* v8::internal::compiler::Operator1<v8::internal::compiler::ObjectAccess,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::ObjectAccess>,
   v8::internal::compiler::OpHash<v8::internal::compiler::ObjectAccess> >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::ObjectAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ObjectAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::ObjectAccess>>
::HashCode(Operator1<v8::internal::compiler::ObjectAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ObjectAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::ObjectAccess>>
           *this)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)(this + 0x10);
  uVar2 = base::hash_combine(0,(ulong)(byte)this[0x2e]);
  uVar2 = base::hash_combine(uVar2,((ulong)(*(ushort *)(this + 0x2c) >> 4) & 0xff0) +
                                   (ulong)(byte)*(ushort *)(this + 0x2c));
  base::hash_combine(uVar2,(ulong)uVar1);
  return;
}

