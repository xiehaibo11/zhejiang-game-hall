
undefined8 FUN_009e5164(lua_State *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 != 0) {
    luaL_argerror(param_1,0,"lua_universe_Copy_new: expected 0 argument");
  }
  puVar2 = operator_new(0x60);
                    /* try { // try from 009e51b0 to 00ae51c3 has its CatchHandler @ 009e51cc */
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
  *puVar2 = &PTR__Copy_016a0540;
  puVar2[10] = 0;
                    /* try { // try from 009e51c4 to 00ae51e7 has its CatchHandler @ 009e50e0 */
                    /* catch() { ... } // from try @ 009e5130 with catch @ 009e51cc
                       catch() { ... } // from try @ 009e51b0 with catch @ 009e51cc */
  universe::create_instance(param_1,"un.Copy",puVar2);
  return 1;
}

