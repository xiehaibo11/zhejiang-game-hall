
undefined8 opt_get_error(undefined8 param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  socklen_t local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 4;
  local_3c = 0;
  iVar2 = getsockopt(*param_2,1,4,&local_3c,&local_40);
  if (iVar2 < 0) {
    lua_pushnil(param_1);
                    /* try { // try from 009d4430 to 00ad449b has its CatchHandler @ 009d80e8 */
    uVar4 = 2;
    pcVar3 = "getsockopt failed";
  }
  else {
    pcVar3 = (char *)socket_strerror(local_3c);
    uVar4 = 1;
  }
  lua_pushstring(param_1,pcVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

