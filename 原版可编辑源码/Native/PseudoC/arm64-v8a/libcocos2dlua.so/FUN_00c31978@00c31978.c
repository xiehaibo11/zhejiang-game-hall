
undefined8 FUN_00c31978(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 local_8 [8];
  
  uVar2 = lua_gethookmask();
  pcVar5 = (code *)lua_gethook(param_1);
  if ((pcVar5 == (code *)0x0) || (pcVar5 == FUN_00c320c4)) {
    lua_pushlightuserdata(param_1,&DAT_0141231a);
    lua_rawget(param_1,0xffffd8f0);
  }
  else {
    lua_pushlstring(param_1,"external hook",0xd);
  }
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    puVar6 = local_8;
  }
  else {
    local_8[0] = 99;
    puVar6 = local_8 + 1;
  }
  uVar3 = (uint)!bVar1;
  if ((uVar2 >> 1 & 1) != 0) {
    uVar3 = uVar3 + 1;
    *puVar6 = 0x72;
    puVar6 = local_8 + (int)uVar3;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    *puVar6 = 0x6c;
    puVar6 = local_8 + (int)(uVar3 + 1);
  }
  *puVar6 = 0;
  lua_pushstring(param_1);
  iVar4 = lua_gethookcount(param_1);
  lua_pushinteger(param_1,(long)iVar4);
  return 3;
}

