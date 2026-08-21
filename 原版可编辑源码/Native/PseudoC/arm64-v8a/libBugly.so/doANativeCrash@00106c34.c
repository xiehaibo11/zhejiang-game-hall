
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void doANativeCrash(char *param_1)

{
  code *pcVar1;
  int iVar2;
  long *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 == '\0') {
    log2Console(4,"CrashReport-Native","Test native crash: SIGSEGV");
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1000,0x106d3c);
    (*pcVar1)();
  }
  log2Console(4,"CrashReport-Native","Test native crash with a Java pending exception: SIGABRT");
  local_10 = (long *)0x0;
  iVar2 = (**(code **)(*jvm + 0x30))(jvm,&local_10,0x10006);
  if (iVar2 != 0) {
    log2Console(5,"CrashReport-Native","Failed to get env.");
    log2Console(4,"CrashReport-Native","Begin to attach current thread...");
    iVar2 = (**(code **)(*jvm + 0x20))(jvm,&local_10,0);
    if (iVar2 != 0) {
      log2Console(6,"CrashReport-Native","Failed to attach current thread!");
    }
  }
  if (local_10 != (long *)0x0) {
    if (DAT_0013e991 != '\0') {
      (**(code **)(*local_10 + 0x30))(local_10,"java/lang/FakeClass");
    }
    (**(code **)(*local_10 + 0x568))(local_10,0,0);
    (**(code **)(*local_10 + 0x30))(local_10,"java/lang/FakeClass");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}

