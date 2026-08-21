
undefined8 opt_get_ip_multicast_if(undefined8 param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  socklen_t local_44;
  in_addr local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_44 = 4;
  iVar2 = getsockopt(*param_2,0,0x20,local_40,&local_44);
  if (iVar2 < 0) {
    lua_pushnil(param_1);
    uVar4 = 2;
    pcVar3 = "getsockopt failed";
  }
  else {
    pcVar3 = inet_ntoa(local_40[0]);
    uVar4 = 1;
  }
  lua_pushstring(param_1,pcVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

