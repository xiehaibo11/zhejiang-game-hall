
/* v8::internal::compiler::hash_value(v8::internal::compiler::CreateClosureParameters const&) */

void v8::internal::compiler::hash_value(CreateClosureParameters *param_1)

{
  CreateClosureParameters CVar1;
  ulong uVar2;
  ulong uVar3;
  
  CVar1 = param_1[0x18];
  uVar3 = *(ulong *)param_1;
  uVar2 = base::hash_value(*(ulong *)(param_1 + 8));
  uVar2 = base::hash_combine(0,uVar2);
  uVar3 = base::hash_value(uVar3);
  uVar3 = base::hash_combine(uVar2,uVar3);
  base::hash_combine(uVar3,(ulong)(byte)CVar1);
  return;
}

