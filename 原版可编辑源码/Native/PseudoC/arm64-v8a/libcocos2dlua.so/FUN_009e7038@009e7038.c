
undefined8 FUN_009e7038(lua_State *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 != 0) {
    luaL_argerror(param_1,0,"lua_universe_Unzipper_new: expected 0 argument");
  }
  puVar2 = operator_new(0x80);
                    /* try { // try from 009e706c to 00ae706f has its CatchHandler @ 009e70cc */
                    /* try { // try from 009e7070 to 00ae70e7 has its CatchHandler @ 009e7014 */
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[10] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  *puVar2 = &PTR__Unzipper_016a0a18;
  puVar2[0xe] = 0;
  universe::create_instance(param_1,"un.Unzipper",puVar2);
  return 1;
}

