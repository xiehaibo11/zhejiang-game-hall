
undefined4 FUN_00a05230(lua_State *param_1)

{
  int iVar1;
  ulong uVar2;
  OStream *this;
  undefined4 uVar3;
  
                    /* try { // try from 00a05240 to 00b05257 has its CatchHandler @ 00a054f4 */
  iVar1 = lua_gettop();
  if (iVar1 != 1) {
    luaL_argerror(param_1,1,"lua_universe_network_OStream_release: expected 1 argument");
  }
                    /* try { // try from 00a05264 to 00b0527b has its CatchHandler @ 00a054d4 */
  uVar2 = universe::is_class(param_1,1,"un.network.OStream");
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 00a052a4 to 00b052df has its CatchHandler @ 00a05480 */
    luaL_error(param_1,"lua_universe_network_OStream_release: invalid \'cobj\'");
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    this = (OStream *)universe::get_instance(param_1,1);
                    /* try { // try from 00a05288 to 00b0529f has its CatchHandler @ 00a05484 */
    if (this != (OStream *)0x0) {
      universe::network::OStream::~OStream(this);
      operator_delete(this);
      uVar3 = 1;
    }
  }
  return uVar3;
}

