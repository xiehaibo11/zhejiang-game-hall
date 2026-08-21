
void opt_get_linger(undefined8 param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_38;
  int local_34;
  socklen_t local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = 8;
                    /* try { // try from 009d3bec to 00ad3e0b has its CatchHandler @ 009cee70 */
  iVar2 = getsockopt(*param_2,1,0xd,&local_38,&local_2c);
  if (iVar2 < 0) {
    lua_pushnil(param_1);
    lua_pushstring(param_1,"getsockopt failed");
    uVar3 = 2;
  }
  else {
    lua_createtable(param_1,0,0);
    lua_pushboolean(param_1,local_38);
    lua_setfield(param_1,0xfffffffe,"on");
    lua_pushinteger(param_1,(long)local_34);
    lua_setfield(param_1,0xfffffffe,"timeout");
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

