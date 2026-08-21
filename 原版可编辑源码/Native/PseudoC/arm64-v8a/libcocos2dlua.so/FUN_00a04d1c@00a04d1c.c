
undefined8 FUN_00a04d1c(lua_State *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  OStream *pOVar4;
  char *pcVar5;
  int local_44;
  longlong local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00a04c1c with catch @ 00a04d1c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = lua_gettop();
  if ((uVar2 | 1) == 3) {
    uVar3 = universe::is_class(param_1,1,"un.network.OStream");
    if ((uVar3 & 1) != 0) {
      pOVar4 = (OStream *)universe::get_instance(param_1,1);
      uVar3 = universe::get_long_long(param_1,2,&local_40,"lua_universe_network_OStream_seek");
      if ((uVar3 & 1) != 0) {
        if (uVar2 == 3) {
          uVar3 = universe::get_int(param_1,3,&local_44,"lua_universe_network_OStream_seek");
          if ((uVar3 & 1) == 0) goto LAB_00a04dd0;
        }
        else {
          if (uVar2 != 2) goto LAB_00a04dd0;
          local_44 = 1;
        }
        universe::network::OStream::seek(pOVar4,local_40,local_44);
      }
      goto LAB_00a04dd0;
    }
    pcVar5 = "lua_universe_network_OStream_seek: invalid \'cobj\'";
  }
  else {
                    /* try { // try from 00a04db4 to 00b04e2b has its CatchHandler @ 00a04db4
                       catch() { ... } // from try @ 00a04db4 with catch @ 00a04db4
                       catch() { ... } // from try @ 00a04f14 with catch @ 00a04db4
                       catch() { ... } // from try @ 00a04f5c with catch @ 00a04db4 */
    pcVar5 = "lua_universe_network_OStream_seek: expected 2 or 3 argument";
  }
  luaL_error(param_1,pcVar5);
LAB_00a04dd0:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

