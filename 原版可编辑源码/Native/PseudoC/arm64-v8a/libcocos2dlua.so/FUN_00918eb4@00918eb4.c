
void FUN_00918eb4(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = auxiliar_checkclass(param_1,"udp{connected}",1);
  local_58 = 0;
  uVar4 = luaL_checklstring(param_1,2,&local_50);
  timeout_markstart(lVar3 + 8);
  iVar2 = socket_send(lVar3,uVar4,local_50,&local_58,lVar3 + 8);
  if (iVar2 == 0) {
    uVar4 = NEON_ucvtf(local_58);
    lua_pushnumber(uVar4,param_1);
    uVar4 = 1;
  }
  else {
    lua_pushnil(param_1);
    if (iVar2 == -2) {
      pcVar5 = "refused";
    }
    else {
      pcVar5 = (char *)socket_strerror(iVar2);
    }
    lua_pushstring(param_1,pcVar5);
    uVar4 = 2;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

