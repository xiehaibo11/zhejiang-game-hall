
undefined8 FUN_009da324(undefined8 param_1)

{
  char *__name;
  undefined4 *puVar1;
  DIR *pDVar2;
  int *piVar3;
  char *pcVar4;
  
  __name = (char *)luaL_checklstring(param_1,1,0);
                    /* catch() { ... } // from try @ 009da304 with catch @ 009da348 */
  lua_pushcclosure(param_1,FUN_009da3d8,0);
                    /* try { // try from 009da364 to 00ada3b3 has its CatchHandler @ 009da364
                       catch() { ... } // from try @ 009da364 with catch @ 009da364
                       catch() { ... } // from try @ 009da3dc with catch @ 009da364
                       catch() { ... } // from try @ 009da448 with catch @ 009da364 */
  puVar1 = (undefined4 *)lua_newuserdata(param_1,0x10);
  lua_getfield(param_1,0xffffd8f0,"directory metatable");
  lua_setmetatable(param_1,0xfffffffe);
  *puVar1 = 0;
  pDVar2 = opendir(__name);
  *(DIR **)(puVar1 + 2) = pDVar2;
  if (pDVar2 == (DIR *)0x0) {
    piVar3 = (int *)__errno();
    pcVar4 = strerror(*piVar3);
                    /* try { // try from 009da3b4 to 00ada3db has its CatchHandler @ 009da450 */
    luaL_error(param_1,"cannot open %s: %s",__name,pcVar4);
  }
  return 2;
}

