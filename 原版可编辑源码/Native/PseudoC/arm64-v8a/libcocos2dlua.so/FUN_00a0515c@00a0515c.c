
undefined8 FUN_00a0515c(lua_State *param_1)

{
  int iVar1;
  ulong uVar2;
  OStream *this;
  uchar *__s;
  char *pcVar3;
  undefined8 uVar4;
  
  iVar1 = lua_gettop();
  if (iVar1 != 1) {
    luaL_argerror(param_1,1,&DAT_012f8092);
  }
                    /* try { // try from 00a05194 to 00b051d3 has its CatchHandler @ 00a05194
                       catch() { ... } // from try @ 00a05194 with catch @ 00a05194
                       catch() { ... } // from try @ 00a05300 with catch @ 00a05194
                       catch() { ... } // from try @ 00a0546c with catch @ 00a05194 */
  uVar2 = universe::is_class(param_1,1,"un.network.OStream");
  if ((uVar2 & 1) == 0) {
    luaL_error(param_1,"lua_universe_network_OStream_readByteArray: invalid \'cobj\'");
                    /* try { // try from 00a0521c to 00b05233 has its CatchHandler @ 00a05514 */
    uVar4 = 0;
  }
  else {
    this = (OStream *)universe::get_instance(param_1,1);
    __s = malloc(0x41c2);
    memset(__s,0,0x41c2);
                    /* try { // try from 00a051d4 to 00b051eb has its CatchHandler @ 00a05570 */
    universe::network::OStream::operator>>(this,(char *)__s);
    uVar2 = universe::byte_array_to_table(param_1,__s);
    if ((uVar2 & 1) == 0) {
      pcVar3 = (char *)universe::Translated::getInstance();
                    /* try { // try from 00a051f8 to 00b0520f has its CatchHandler @ 00a05534 */
      universe::Translated::log
                (pcVar3,
                 "lua_universe_network_OStream_readByteArray error: byte_array_to_table failed");
    }
    free(__s);
    uVar4 = 1;
  }
  return uVar4;
}

