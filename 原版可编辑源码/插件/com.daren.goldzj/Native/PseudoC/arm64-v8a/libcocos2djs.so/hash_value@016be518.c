
/* v8::internal::compiler::hash_value(v8::internal::compiler::FrameStateInfo const&) */

void v8::internal::compiler::hash_value(FrameStateInfo *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  if (*(uint **)(param_1 + 0x10) == (uint *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = **(uint **)(param_1 + 0x10);
  }
  uVar1 = *(undefined4 *)param_1;
  uVar2 = base::hash_value(*(ulong *)(param_1 + 8));
  uVar2 = base::hash_combine(0,uVar2);
  uVar3 = internal::hash_value(uVar1);
  uVar2 = base::hash_combine(uVar2,uVar3);
  uVar3 = base::hash_value(uVar4);
  base::hash_combine(uVar2,uVar3);
  return;
}

