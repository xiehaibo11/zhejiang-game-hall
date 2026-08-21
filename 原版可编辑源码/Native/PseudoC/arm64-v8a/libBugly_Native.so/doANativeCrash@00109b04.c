
undefined8 doANativeCrash(char *param_1)

{
  long lVar1;
  int iVar2;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*param_1 == '\0') {
    log2Console(4,"eup","Test native crash: SIGSEGV");
    log2Console(4,"eup","You can not see this log for native crash will happen %f");
  }
  else {
    log2Console(4,"eup","Test native crash with a Java pending exception: SIGABRT");
    local_40 = (long *)0x0;
    iVar2 = (**(code **)(*jvm + 0x30))(jvm,&local_40,0x10006);
    if (iVar2 != 0) {
      log2Console(5,"eup","Failed to get env.");
      log2Console(4,"eup","Begin to attach current thread...");
      iVar2 = (**(code **)(*jvm + 0x20))(jvm,&local_40,0);
      if (iVar2 != 0) {
        log2Console(6,"eup","Failed to attach current thread!");
      }
    }
    if (local_40 != (long *)0x0) {
      if (DAT_0013f9f8 != '\0') {
        (**(code **)(*local_40 + 0x30))(local_40,"java/lang/FakeClass");
      }
      (**(code **)(*local_40 + 0x568))(local_40,0,0);
      (**(code **)(*local_40 + 0x30))(local_40,"java/lang/FakeClass");
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

