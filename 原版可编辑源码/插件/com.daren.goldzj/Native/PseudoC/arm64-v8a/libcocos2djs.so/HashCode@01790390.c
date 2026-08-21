
/* v8::internal::compiler::Operator1<v8::internal::compiler::StoreRepresentation,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::StoreRepresentation>,
   v8::internal::compiler::OpHash<v8::internal::compiler::StoreRepresentation> >::HashCode() const
    */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::StoreRepresentation,v8::internal::compiler::OpEqualTo<v8::internal::compiler::StoreRepresentation>,v8::internal::compiler::OpHash<v8::internal::compiler::StoreRepresentation>>
::HashCode(Operator1<v8::internal::compiler::StoreRepresentation,v8::internal::compiler::OpEqualTo<v8::internal::compiler::StoreRepresentation>,v8::internal::compiler::OpHash<v8::internal::compiler::StoreRepresentation>>
           *this)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  
  uVar1 = *(ushort *)(this + 0x2c);
  uVar2 = *(ushort *)(this + 0x10);
  uVar3 = base::hash_combine(0,(ulong)(uVar1 >> 8));
  uVar3 = base::hash_combine(uVar3,(ulong)uVar1 & 0xff);
  base::hash_combine(uVar3,(ulong)uVar2);
  return;
}

