
undefined8 FUN_009d27e4(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  char *__cp;
  undefined8 uVar3;
  undefined8 *local_48;
  in_addr aiStack_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __cp = (char *)luaL_checklstring(param_1,1,0);
  local_48 = (undefined8 *)0x0;
  iVar2 = inet_aton(__cp,aiStack_40);
  if (iVar2 == 0) {
    iVar2 = socket_gethostbyname(__cp,&local_48);
  }
  else {
                    /* try { // try from 009d282c to 00ad2897 has its CatchHandler @ 009d8128 */
    iVar2 = socket_gethostbyaddr(aiStack_40,4,&local_48);
  }
  if (iVar2 == 0) {
    lua_pushstring(param_1,*local_48);
    FUN_009d2b08(param_1,local_48);
  }
  else {
    lua_pushnil(param_1);
    uVar3 = socket_hoststrerror(iVar2);
    lua_pushstring(param_1,uVar3);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 2;
}

