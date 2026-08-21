
/* v8::internal::compiler::Operator1<v8::internal::compiler::NumberOperationParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::NumberOperationParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::NumberOperationParameters> >::HashCode()
   const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::NumberOperationParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::NumberOperationParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::NumberOperationParameters>>
::HashCode(Operator1<v8::internal::compiler::NumberOperationParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::NumberOperationParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::NumberOperationParameters>>
           *this)

{
  Operator1<v8::internal::compiler::NumberOperationParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::NumberOperationParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::NumberOperationParameters>>
  OVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *(ushort *)(this + 0x10);
  OVar1 = this[0x30];
  uVar4 = *(ulong *)(this + 0x38);
  uVar3 = base::hash_combine(0,(long)*(int *)(this + 0x40));
  uVar4 = base::hash_value(uVar4);
  uVar3 = base::hash_combine(uVar3,uVar4);
  uVar3 = base::hash_combine(uVar3,(ulong)(byte)OVar1);
  base::hash_combine(uVar3,(ulong)uVar2);
  return;
}

