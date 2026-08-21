
/* v8::base::debug::StackTrace::StackTrace() */

void __thiscall v8::base::debug::StackTrace::StackTrace(StackTrace *this)

{
  long lVar1;
  StackTrace *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = 0x3e;
  local_40 = 0;
  local_30 = 0;
  local_48 = this;
  _Unwind_Backtrace(FUN_01477da4,&local_48);
  *(undefined8 *)(this + 0x1f0) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

