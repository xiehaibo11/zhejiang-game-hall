
/* v8::internal::compiler::hash_value(v8::internal::compiler::RelocatablePtrConstantInfo const&) */

void v8::internal::compiler::hash_value(RelocatablePtrConstantInfo *param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)param_1;
  bVar1 = param_1[8];
  uVar2 = base::hash_value(*(uint *)(param_1 + 0xc));
  uVar2 = base::hash_combine(0,uVar2);
  uVar2 = base::hash_combine(uVar2,(ulong)bVar1);
  uVar3 = base::hash_value(uVar3);
  base::hash_combine(uVar2,uVar3);
  return;
}

