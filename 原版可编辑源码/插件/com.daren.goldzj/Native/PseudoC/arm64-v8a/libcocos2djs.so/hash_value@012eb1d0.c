
/* v8::internal::compiler::hash_value(v8::internal::compiler::CheckMapsParameters const&) */

void v8::internal::compiler::hash_value(CheckMapsParameters *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  iVar1 = *(int *)param_1;
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar2 = base::hash_combine(0,(long)*(int *)(param_1 + 0x18));
  uVar3 = base::hash_value(uVar3);
  uVar2 = base::hash_combine(uVar2,uVar3);
  uVar2 = base::hash_combine(uVar2,*(ulong *)(param_1 + 8));
  base::hash_combine(uVar2,(long)iVar1);
  return;
}

