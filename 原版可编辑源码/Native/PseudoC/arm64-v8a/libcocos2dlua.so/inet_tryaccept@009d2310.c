
void inet_tryaccept(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 local_ac;
  undefined1 auStack_a8 [128];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_ac = 0x1c;
  if (param_2 != 10) {
    local_ac = 0x10;
  }
  socket_accept(param_1,param_3,auStack_a8,&local_ac,param_4);
  socket_strerror();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

