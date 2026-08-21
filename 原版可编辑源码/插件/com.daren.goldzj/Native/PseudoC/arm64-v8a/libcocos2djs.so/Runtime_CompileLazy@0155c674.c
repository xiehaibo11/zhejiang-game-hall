
/* v8::internal::Runtime_CompileLazy(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_CompileLazy(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  Isolate *local_60;
  undefined8 local_58;
  undefined1 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (TracingFlags::runtime_stats == 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x95a0);
    lVar2 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    uVar4 = *param_2;
    if (((uVar4 & 1) == 0) ||
       (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x439)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
    }
    local_60 = param_3;
    uVar4 = StackLimitCheck::JsHasOverflowed((StackLimitCheck *)&local_60,0xa000);
    if ((uVar4 & 1) == 0) {
      local_50 = 0;
      local_58 = 0;
      uVar4 = Compiler::Compile(param_2,0,&local_58);
      if ((uVar4 & 1) == 0) {
        uVar4 = *(ulong *)(param_3 + 0x180);
      }
      else {
        uVar4 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17);
      }
    }
    else {
      uVar4 = Isolate::StackOverflow(param_3);
    }
    *(undefined8 *)(param_3 + 0x95a0) = uVar1;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    if (*(long *)(lVar3 + 0x28) != local_48) {
LAB_0155c7b0:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    uVar4 = FUN_0155c7c8(param_1,param_2,param_3);
    if (*(long *)(lVar3 + 0x28) != local_48) goto LAB_0155c7b0;
  }
  return uVar4;
}

