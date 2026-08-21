
void FUN_00a052c8(lua_State *param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  char *__dest;
  OStream *this;
  size_t local_58;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar3 = lua_gettop();
  if (iVar3 != 1) {
                    /* try { // try from 00a052fc to 00b052ff has its CatchHandler @ 00a05554 */
                    /* try { // try from 00a05300 to 00b05463 has its CatchHandler @ 00a05194 */
    luaL_argerror(param_1,1,&DAT_012f81c9);
  }
  uVar4 = universe::get_cstr(param_1,1,&local_50,&local_58,"lua_universe_network_OStream_new");
  bVar1 = (uVar4 & 1) != 0;
  if (bVar1) {
    __dest = malloc(local_58);
    memcpy(__dest,local_50,local_58);
    this = operator_new(0x18);
    universe::network::OStream::OStream(this,__dest,local_58);
    universe::create_instance(param_1,"un.network.OStream",this);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}

