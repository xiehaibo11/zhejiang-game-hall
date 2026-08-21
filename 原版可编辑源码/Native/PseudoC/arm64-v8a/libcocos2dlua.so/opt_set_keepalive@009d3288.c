
void opt_set_keepalive(undefined8 param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009d32a8 to 00ad32bb has its CatchHandler @ 009d801c */
  local_3c = auxiliar_checkboolean(param_1,3);
                    /* try { // try from 009d32c0 to 00ad332b has its CatchHandler @ 009d810c */
  iVar2 = setsockopt(*param_2,1,9,&local_3c,4);
  if (iVar2 < 0) {
    lua_pushnil(param_1);
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
                    /* try { // try from 009d332c to 00ad34ff has its CatchHandler @ 009cee70 */
  __stack_chk_fail(uVar3);
}

