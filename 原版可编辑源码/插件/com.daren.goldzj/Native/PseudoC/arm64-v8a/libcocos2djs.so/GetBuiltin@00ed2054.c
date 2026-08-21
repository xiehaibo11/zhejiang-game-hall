
/* v8::debug::GetBuiltin(v8::Isolate*, v8::debug::Builtin) */

void v8::debug::GetBuiltin(Factory *param_1,int param_2)

{
  Factory *pFVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  NewFunctionArgs aNStack_98 [64];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  pFVar1 = param_1 + 0x95a0;
  uVar4 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  lVar2 = *(long *)pFVar1;
  lVar3 = *(long *)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  internal::NewFunctionArgs::ForBuiltinWithoutPrototype(aNStack_98,param_1 + 200,0x3d5,1);
  puVar6 = (ulong *)internal::Factory::NewFunction(param_1,aNStack_98);
  *(undefined2 *)((*puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar6 + 0xb)) + 0x15) = 0;
  *(undefined2 *)((*puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar6 + 0xb)) + 0x13) = 0;
  uVar7 = *puVar6;
  *(long *)pFVar1 = lVar2;
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
  if (*(long *)(param_1 + 0x95a8) != lVar3) {
    *(long *)(param_1 + 0x95a8) = lVar3;
    internal::HandleScope::DeleteExtensions((Isolate *)param_1);
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pFVar1;
    if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
      puVar6 = (ulong *)internal::HandleScope::Extend((Isolate *)param_1);
    }
    *(ulong **)pFVar1 = puVar6 + 1;
    *puVar6 = uVar7;
  }
  else {
    internal::CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
  }
  *(undefined4 *)(param_1 + 0x95b0) = *(undefined4 *)(param_1 + 0x95b0);
  *(undefined4 *)(param_1 + 0x2c60) = uVar4;
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

