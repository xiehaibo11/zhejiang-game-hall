
/* v8::internal::compiler::Operator1<v8::internal::compiler::BranchOperatorInfo,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::BranchOperatorInfo>,
   v8::internal::compiler::OpHash<v8::internal::compiler::BranchOperatorInfo> >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::BranchOperatorInfo,v8::internal::compiler::OpEqualTo<v8::internal::compiler::BranchOperatorInfo>,v8::internal::compiler::OpHash<v8::internal::compiler::BranchOperatorInfo>>
::HashCode(Operator1<v8::internal::compiler::BranchOperatorInfo,v8::internal::compiler::OpEqualTo<v8::internal::compiler::BranchOperatorInfo>,v8::internal::compiler::OpHash<v8::internal::compiler::BranchOperatorInfo>>
           *this)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)(this + 0x10);
  uVar2 = base::hash_combine(0,(ulong)(byte)this[0x2d]);
  uVar2 = base::hash_combine(uVar2,(ulong)(byte)this[0x2c]);
  base::hash_combine(uVar2,(ulong)uVar1);
  return;
}

