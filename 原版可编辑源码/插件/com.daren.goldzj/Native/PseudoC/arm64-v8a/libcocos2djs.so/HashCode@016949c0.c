
/* v8::internal::compiler::Operator1<v8::internal::compiler::RelocatablePtrConstantInfo,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::RelocatablePtrConstantInfo>,
   v8::internal::compiler::OpHash<v8::internal::compiler::RelocatablePtrConstantInfo> >::HashCode()
   const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::RelocatablePtrConstantInfo,v8::internal::compiler::OpEqualTo<v8::internal::compiler::RelocatablePtrConstantInfo>,v8::internal::compiler::OpHash<v8::internal::compiler::RelocatablePtrConstantInfo>>
::HashCode(Operator1<v8::internal::compiler::RelocatablePtrConstantInfo,v8::internal::compiler::OpEqualTo<v8::internal::compiler::RelocatablePtrConstantInfo>,v8::internal::compiler::OpHash<v8::internal::compiler::RelocatablePtrConstantInfo>>
           *this)

{
  Operator1<v8::internal::compiler::RelocatablePtrConstantInfo,v8::internal::compiler::OpEqualTo<v8::internal::compiler::RelocatablePtrConstantInfo>,v8::internal::compiler::OpHash<v8::internal::compiler::RelocatablePtrConstantInfo>>
  OVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *(ushort *)(this + 0x10);
  uVar4 = *(ulong *)(this + 0x30);
  OVar1 = this[0x38];
  uVar3 = base::hash_value(*(uint *)(this + 0x3c));
  uVar3 = base::hash_combine(0,uVar3);
  uVar3 = base::hash_combine(uVar3,(ulong)(byte)OVar1);
  uVar4 = base::hash_value(uVar4);
  uVar3 = base::hash_combine(uVar3,uVar4);
  base::hash_combine(uVar3,(ulong)uVar2);
  return;
}

