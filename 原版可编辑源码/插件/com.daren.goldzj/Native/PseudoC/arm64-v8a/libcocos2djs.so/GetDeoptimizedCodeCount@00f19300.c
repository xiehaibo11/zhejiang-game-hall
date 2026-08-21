
/* v8::internal::Deoptimizer::GetDeoptimizedCodeCount(v8::internal::Isolate*) */

int v8::internal::Deoptimizer::GetDeoptimizedCodeCount(Isolate *param_1)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong local_18;
  
  uVar6 = *(ulong *)(param_1 + 0x8e38);
  iVar5 = 0;
  if ((uVar6 & 1) == 0) goto LAB_00f19330;
  while ((int)uVar6 != *(int *)(param_1 + 0xa0)) {
LAB_00f19330:
    do {
      local_18 = uVar6;
      uVar3 = NativeContext::DeoptimizedCodeListHead((NativeContext *)&local_18);
      if ((uVar3 & 1) != 0) goto LAB_00f19374;
      do {
        do {
          uVar4 = uVar3 & 0xffffffff00000000;
          uVar2 = *(uint *)((uVar4 | *(uint *)(uVar3 + 0xf)) + 3);
          iVar5 = (~*(uint *)((uVar4 | *(uint *)(uVar3 + 0xf)) + 7) & 1) + iVar5;
          uVar3 = uVar4 | uVar2;
        } while ((uVar2 & 1) == 0);
LAB_00f19374:
      } while ((int)uVar3 != *(int *)(param_1 + 0xa0));
      puVar1 = (uint *)(uVar6 + 0x41f);
      uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*puVar1;
    } while ((*puVar1 & 1) == 0);
  }
  return iVar5;
}

