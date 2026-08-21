
bool FUN_00a04a28(lua_State *param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  OStream *this;
  
  iVar2 = lua_gettop();
  if (iVar2 != 1) {
    luaL_argerror(param_1,1,&DAT_012f7c5c);
  }
                    /* try { // try from 00a04a58 to 00b04a5b has its CatchHandler @ 00a04a90 */
                    /* try { // try from 00a04a5c to 00b04aa3 has its CatchHandler @ 00a04a0c */
  uVar3 = universe::is_class(param_1,1,"un.network.OStream");
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    luaL_error(param_1,&DAT_012f7c9f);
                    /* try { // try from 00a04aa4 to 00b04c1b has its CatchHandler @ 00a04aa4
                       catch() { ... } // from try @ 00a04aa4 with catch @ 00a04aa4
                       catch() { ... } // from try @ 00a04c9c with catch @ 00a04aa4 */
  }
  else {
    this = (OStream *)universe::get_instance(param_1,1);
    uVar3 = universe::network::OStream::getAvailableSize(this);
    lua_pushnumber((double)uVar3,param_1);
                    /* catch() { ... } // from try @ 00a04a58 with catch @ 00a04a90 */
  }
  return !bVar1;
}

