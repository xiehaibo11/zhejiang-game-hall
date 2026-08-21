
/* v8::debug::ResetBlackboxedStateCache(v8::Isolate*, v8::Local<v8::debug::Script>) */

void v8::debug::ResetBlackboxedStateCache(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  ScriptIterator aSStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  internal::SharedFunctionInfo::ScriptIterator::ScriptIterator(aSStack_48,param_1,*param_2);
  uVar4 = internal::SharedFunctionInfo::ScriptIterator::Next(aSStack_48);
  iVar3 = (int)uVar4;
  while (iVar3 != 0) {
    uVar5 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xf);
    if (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x5b) {
      puVar6 = (uint *)(uVar5 + 7);
      *puVar6 = *puVar6 & 0xffffffee;
    }
    uVar4 = internal::SharedFunctionInfo::ScriptIterator::Next(aSStack_48);
    iVar3 = (int)uVar4;
  }
  *(undefined4 *)(param_1 + 0x2c60) = uVar1;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

