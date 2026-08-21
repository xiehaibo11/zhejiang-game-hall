
void opt_set_tcp_nodelay(undefined8 param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = auxiliar_checkboolean(param_1,3);
  iVar2 = setsockopt(*param_2,6,1,&local_3c,4);
  if (iVar2 < 0) {
    lua_pushnil(param_1);
                    /* try { // try from 009d31b8 to 00ad3223 has its CatchHandler @ 009d8110 */
    lua_pushstring(param_1,"setsockopt failed");
    uVar3 = 2;
  }
  else {
    lua_pushnumber(0x3ff0000000000000,param_1);
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

