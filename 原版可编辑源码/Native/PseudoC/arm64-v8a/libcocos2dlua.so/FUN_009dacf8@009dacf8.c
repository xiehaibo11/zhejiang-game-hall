
undefined8 FUN_009dacf8(lua_State *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 != 0) {
    luaL_argerror(param_1,0,&DAT_012f27d4);
  }
  puVar2 = operator_new(0x30);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined1 *)(puVar2 + 5) = 0;
  *puVar2 = &PTR__Example_016a01b8;
  puVar2[4] = 0;
  universe::create_instance(param_1,"un.Commander",puVar2);
  return 1;
}

