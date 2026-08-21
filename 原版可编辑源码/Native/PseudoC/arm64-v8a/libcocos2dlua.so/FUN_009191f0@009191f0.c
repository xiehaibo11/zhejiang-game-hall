
void FUN_009191f0(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  long local_90 [7];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar4 = auxiliar_checkgroup(param_1,"udp{any}",1);
  pcVar5 = (char *)luaL_checklstring(param_1,2,0);
  iVar3 = strcmp(pcVar5,"*");
  if (iVar3 == 0) {
    pcVar6 = "0";
  }
  else {
    pcVar6 = (char *)luaL_checklstring(param_1,3,0);
  }
  local_90[3] = 0;
  local_90[2] = 0;
  local_90[5] = 0;
  local_90[4] = 0;
  local_90[1] = 2;
  uVar1 = *(uint *)(lVar4 + 0x20);
  local_90[0] = (ulong)uVar1 << 0x20;
  if (iVar3 == 0) {
    inet_trydisconnect(lVar4,uVar1,lVar4 + 8,pcVar6);
    pcVar5 = "udp{unconnected}";
  }
  else {
    lVar4 = inet_tryconnect(lVar4,(uint *)(lVar4 + 0x20),pcVar5,pcVar6,lVar4 + 8,local_90);
    if (lVar4 != 0) {
      lua_pushnil(param_1);
      lua_pushstring(param_1,lVar4);
      uVar7 = 2;
      goto LAB_00919318;
    }
    pcVar5 = "udp{connected}";
  }
  auxiliar_setclass(param_1,pcVar5,1);
  lua_pushnumber(0x3ff0000000000000,param_1);
  uVar7 = 1;
LAB_00919318:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

