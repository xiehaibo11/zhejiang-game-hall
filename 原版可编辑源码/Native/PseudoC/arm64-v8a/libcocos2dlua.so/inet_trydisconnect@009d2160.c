
void inet_trydisconnect(undefined8 param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009d2178 to 00ad218b has its CatchHandler @ 009d8030 */
  if (param_2 == 10) {
    uVar2 = 0x1c;
    uStack_38 = 0;
    local_30 = 0;
  }
  else {
    if (param_2 != 2) {
      uVar2 = 0;
      goto LAB_009d21c4;
    }
    uVar2 = 0x10;
  }
  local_40 = 0;
  local_48 = 0;
  socket_connect(param_1,&local_48,uVar2,param_3);
  uVar2 = socket_strerror();
LAB_009d21c4:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

