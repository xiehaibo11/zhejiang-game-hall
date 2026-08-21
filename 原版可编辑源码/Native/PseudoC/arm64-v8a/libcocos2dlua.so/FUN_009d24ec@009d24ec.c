
undefined8 FUN_009d24ec(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  long local_48;
  in_addr aiStack_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pcVar3 = (char *)luaL_checklstring(param_1,1,0);
  local_48 = 0;
  iVar2 = inet_aton(pcVar3,aiStack_40);
  if (iVar2 == 0) {
                    /* try { // try from 009d2570 to 00ad25db has its CatchHandler @ 009d8130 */
    iVar2 = socket_gethostbyname(pcVar3,&local_48);
  }
  else {
    iVar2 = socket_gethostbyaddr(aiStack_40,4,&local_48);
  }
  if (iVar2 == 0) {
    pcVar3 = inet_ntoa((in_addr)*(in_addr_t *)**(undefined8 **)(local_48 + 0x18));
    lua_pushstring(param_1,pcVar3);
    FUN_009d2b08(param_1,local_48);
  }
  else {
    lua_pushnil(param_1);
    uVar4 = socket_hoststrerror(iVar2);
    lua_pushstring(param_1,uVar4);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 2;
}

