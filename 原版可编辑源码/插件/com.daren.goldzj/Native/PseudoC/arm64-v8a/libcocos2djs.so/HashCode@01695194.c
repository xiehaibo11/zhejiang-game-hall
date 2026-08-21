
/* v8::internal::compiler::Operator1<v8::internal::compiler::TypedObjectStateInfo,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::TypedObjectStateInfo>,
   v8::internal::compiler::OpHash<v8::internal::compiler::TypedObjectStateInfo> >::HashCode() const
    */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::TypedObjectStateInfo,v8::internal::compiler::OpEqualTo<v8::internal::compiler::TypedObjectStateInfo>,v8::internal::compiler::OpHash<v8::internal::compiler::TypedObjectStateInfo>>
::HashCode(Operator1<v8::internal::compiler::TypedObjectStateInfo,v8::internal::compiler::OpEqualTo<v8::internal::compiler::TypedObjectStateInfo>,v8::internal::compiler::OpHash<v8::internal::compiler::TypedObjectStateInfo>>
           *this)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *(ushort *)(this + 0x10);
  uVar1 = *(uint *)(this + 0x30);
  uVar3 = base::hash_value(*(ulong *)(this + 0x38));
  uVar3 = base::hash_combine(0,uVar3);
  uVar4 = base::hash_value(uVar1);
  uVar3 = base::hash_combine(uVar3,uVar4);
  base::hash_combine(uVar3,(ulong)uVar2);
  return;
}

