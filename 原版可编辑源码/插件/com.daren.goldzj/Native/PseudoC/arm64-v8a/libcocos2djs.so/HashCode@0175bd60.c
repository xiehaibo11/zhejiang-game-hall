
/* v8::internal::compiler::Operator1<v8::internal::compiler::CreateFunctionContextParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateFunctionContextParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::CreateFunctionContextParameters>
   >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::CreateFunctionContextParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateFunctionContextParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CreateFunctionContextParameters>>
::HashCode(Operator1<v8::internal::compiler::CreateFunctionContextParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateFunctionContextParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CreateFunctionContextParameters>>
           *this)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = *(ushort *)(this + 0x10);
  uVar5 = *(ulong *)(this + 0x30);
  uVar1 = *(uint *)(this + 0x38);
  uVar3 = base::hash_value((uint)(byte)this[0x3c]);
  uVar3 = base::hash_combine(0,uVar3);
  uVar4 = base::hash_value(uVar1);
  uVar3 = base::hash_combine(uVar3,uVar4);
  uVar4 = base::hash_value(uVar5);
  uVar3 = base::hash_combine(uVar3,uVar4);
  base::hash_combine(uVar3,(ulong)uVar2);
  return;
}

