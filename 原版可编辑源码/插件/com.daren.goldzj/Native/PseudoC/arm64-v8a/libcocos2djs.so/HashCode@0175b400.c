
/* v8::internal::compiler::Operator1<v8::internal::compiler::CreateBoundFunctionParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateBoundFunctionParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::CreateBoundFunctionParameters>
   >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::CreateBoundFunctionParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateBoundFunctionParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CreateBoundFunctionParameters>>
::HashCode(Operator1<v8::internal::compiler::CreateBoundFunctionParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateBoundFunctionParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CreateBoundFunctionParameters>>
           *this)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(ushort *)(this + 0x10);
  uVar3 = *(ulong *)(this + 0x30);
  uVar2 = base::hash_value(*(ulong *)(this + 0x38));
  uVar2 = base::hash_combine(0,uVar2);
  uVar3 = base::hash_value(uVar3);
  uVar3 = base::hash_combine(uVar2,uVar3);
  base::hash_combine(uVar3,(ulong)uVar1);
  return;
}

