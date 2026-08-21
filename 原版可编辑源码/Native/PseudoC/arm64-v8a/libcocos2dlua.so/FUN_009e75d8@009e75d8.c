
undefined8 FUN_009e75d8(lua_State *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 != 0) {
    luaL_argerror(param_1,0,&DAT_012f3d99);
  }
  puVar2 = operator_new(0x60);
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  *puVar2 = &PTR__MergeFile_016a0b00;
  puVar2[10] = 0;
  universe::create_instance(param_1,"un.MergeFile",puVar2);
  return 1;
}

