
/* v8::internal::compiler::Operator1<v8::internal::compiler::StoreNamedOwnParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::StoreNamedOwnParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::StoreNamedOwnParameters> >::HashCode()
   const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::StoreNamedOwnParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::StoreNamedOwnParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::StoreNamedOwnParameters>>
::HashCode(Operator1<v8::internal::compiler::StoreNamedOwnParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::StoreNamedOwnParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::StoreNamedOwnParameters>>
           *this)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(ushort *)(this + 0x10);
  uVar4 = *(ulong *)(this + 0x30);
  uVar3 = *(ulong *)(this + 0x38);
  uVar2 = base::hash_combine(0,(long)*(int *)(this + 0x40));
  uVar3 = base::hash_value(uVar3);
  uVar3 = base::hash_combine(uVar2,uVar3);
  uVar4 = base::hash_value(uVar4);
  uVar4 = base::hash_combine(uVar3,uVar4);
  base::hash_combine(uVar4,(ulong)uVar1);
  return;
}

