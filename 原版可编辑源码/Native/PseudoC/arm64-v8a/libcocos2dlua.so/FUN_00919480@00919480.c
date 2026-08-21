
void FUN_00919480(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 local_40;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = inet_trycreate(&local_3c,param_2,2);
  if (lVar2 == 0) {
    piVar4 = (int *)lua_newuserdata(param_1,0x28);
    auxiliar_setclass(param_1,"udp{unconnected}",0xffffffff);
    socket_setnonblocking(&local_3c);
    if ((int)param_2 == 10) {
      local_40 = 1;
      setsockopt(local_3c,0x29,0x1a,&local_40,4);
    }
    *piVar4 = local_3c;
    timeout_init(0xbff0000000000000,0xbff0000000000000,piVar4 + 2);
    piVar4[8] = (int)param_2;
    uVar3 = 1;
  }
  else {
    lua_pushnil(param_1);
    lua_pushstring(param_1,lVar2);
    uVar3 = 2;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

