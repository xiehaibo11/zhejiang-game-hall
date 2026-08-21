
undefined8 FUN_00c31a64(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  char cVar8;
  code *pcVar9;
  
  if (*(undefined8 **)(param_1 + 0x20) < *(undefined8 **)(param_1 + 0x28)) {
    bVar2 = (int)((long)**(undefined8 **)(param_1 + 0x20) >> 0x2f) == -7;
    cVar8 = bVar2 + '\x01';
    iVar3 = lua_type(param_1,cVar8);
  }
  else {
    cVar8 = '\x01';
    bVar2 = false;
    iVar3 = lua_type(param_1,1);
  }
  if (iVar3 < 1) {
    pcVar9 = (code *)0x0;
    iVar3 = 0;
    lua_settop(param_1,cVar8);
    bVar7 = 0;
  }
  else {
    pcVar4 = (char *)luaL_checklstring(param_1,bVar2 + '\x02',0);
    luaL_checktype(param_1,cVar8,6);
    iVar3 = luaL_optinteger(param_1,bVar2 + '\x03',0);
    pcVar5 = strchr(pcVar4,99);
    pcVar6 = strchr(pcVar4,0x72);
    bVar1 = pcVar5 != (char *)0x0 | 2;
    if (pcVar6 == (char *)0x0) {
      bVar1 = pcVar5 != (char *)0x0;
    }
    pcVar4 = strchr(pcVar4,0x6c);
    bVar7 = bVar1 | 4;
    if (pcVar4 == (char *)0x0) {
      bVar7 = bVar1;
    }
    if (iVar3 < 1) {
      pcVar9 = FUN_00c320c4;
    }
    else {
      bVar7 = bVar7 | 8;
      pcVar9 = FUN_00c320c4;
    }
  }
  lua_pushlightuserdata(param_1,&DAT_0141231a);
  lua_pushvalue(param_1,cVar8);
  lua_rawset(param_1,0xffffd8f0);
  lua_sethook(param_1,pcVar9,bVar7,iVar3);
  return 0;
}

