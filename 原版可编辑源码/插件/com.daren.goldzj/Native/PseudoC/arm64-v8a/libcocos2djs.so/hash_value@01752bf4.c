
/* v8::internal::compiler::hash_value(v8::internal::compiler::CreateFunctionContextParameters
   const&) */

void v8::internal::compiler::hash_value(CreateFunctionContextParameters *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)param_1;
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = base::hash_value((uint)(byte)param_1[0xc]);
  uVar2 = base::hash_combine(0,uVar2);
  uVar3 = base::hash_value(uVar1);
  uVar2 = base::hash_combine(uVar2,uVar3);
  uVar3 = base::hash_value(uVar4);
  base::hash_combine(uVar2,uVar3);
  return;
}

