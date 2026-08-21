
undefined8 timeout_meth_settimeout(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  uVar3 = luaL_optnumber(0xbff0000000000000,param_1,2);
                    /* catch() { ... } // from try @ 00918814 with catch @ 0091884c */
                    /* try { // try from 00918860 to 00a18917 has its CatchHandler @ 00918860
                       catch() { ... } // from try @ 00918860 with catch @ 00918860
                       catch() { ... } // from try @ 00918998 with catch @ 00918860 */
  pcVar2 = (char *)luaL_optlstring(param_1,3,&DAT_014a2468,0);
  cVar1 = *pcVar2;
  if ((cVar1 == 't') || (cVar1 == 'r')) {
    param_2[1] = uVar3;
  }
  else if (cVar1 == 'b') {
    *param_2 = uVar3;
  }
  else {
    luaL_argerror(param_1,3,"invalid timeout mode");
  }
  lua_pushnumber(0x3ff0000000000000,param_1);
  return 1;
}

