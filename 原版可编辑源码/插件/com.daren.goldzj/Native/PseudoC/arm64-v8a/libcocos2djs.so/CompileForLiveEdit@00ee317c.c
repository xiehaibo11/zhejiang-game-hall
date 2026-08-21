
/* v8::internal::Compiler::CompileForLiveEdit(v8::internal::ParseInfo*, v8::internal::Isolate*) */

void v8::internal::Compiler::CompileForLiveEdit(ParseInfo *param_1,Isolate *param_2)

{
  long lVar1;
  undefined8 local_38;
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  local_38 = 0;
  FUN_00ee31cc(param_1,param_2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

