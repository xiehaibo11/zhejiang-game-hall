
void FUN_00f163b0(undefined8 param_1,Isolate *param_2,ThreadLocalTop *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long local_608;
  undefined8 *local_600;
  undefined8 *local_5f8;
  undefined8 uStack_5f0;
  StackFrameIterator aSStack_5e8 [1416];
  JavaScriptFrame *local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  v8::internal::StackFrameIterator::StackFrameIterator(aSStack_5e8,param_2,param_3);
  if (local_60 != (JavaScriptFrame *)0x0) {
    v8::internal::JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_5e8);
    while (local_60 != (JavaScriptFrame *)0x0) {
      local_5f8 = (undefined8 *)0x0;
      uStack_5f0 = 0;
      local_600 = (undefined8 *)0x0;
      v8::internal::JavaScriptFrame::GetFunctions(local_60,(vector *)&local_600);
      puVar3 = local_5f8;
      for (puVar1 = local_600; puVar1 != puVar3; puVar1 = puVar1 + 1) {
        local_608 = 0;
        uVar4 = FUN_00f128d8(param_1,*(undefined8 *)*puVar1,&local_608);
        if ((uVar4 & 1) != 0) {
          *(undefined4 *)(local_608 + 0x40) = 4;
        }
      }
      if (local_600 != (undefined8 *)0x0) {
        local_5f8 = local_600;
        operator_delete(local_600);
      }
      v8::internal::JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_5e8);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

