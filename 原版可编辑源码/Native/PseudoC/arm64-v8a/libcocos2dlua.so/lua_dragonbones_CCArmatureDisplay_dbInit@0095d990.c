
/* lua_dragonbones_CCArmatureDisplay_dbInit(lua_State*) */

undefined4 lua_dragonbones_CCArmatureDisplay_dbInit(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
                    /* try { // try from 0095d9c4 to 00a5da0f has its CatchHandler @ 0095d9c4
                       catch() { ... } // from try @ 0095d9c4 with catch @ 0095d9c4
                       catch() { ... } // from try @ 0095da14 with catch @ 0095d9c4 */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"db.Armature",0), (uVar3 & 1) != 0)) {
      uVar4 = tolua_tousertype(param_1,2,0);
                    /* try { // try from 0095da10 to 00a5da13 has its CatchHandler @ 0095da48 */
                    /* try { // try from 0095da14 to 00a5da5b has its CatchHandler @ 0095d9c4 */
      (**(code **)(*plVar2 + 0x530))(plVar2,uVar4);
      lua_settop(param_1,1);
      return 1;
    }
                    /* try { // try from 0095da5c to 00a5db2b has its CatchHandler @ 0095da5c
                       catch() { ... } // from try @ 0095da5c with catch @ 0095da5c
                       catch() { ... } // from try @ 0095dbac with catch @ 0095da5c */
    tolua_error(param_1,&DAT_012d3ea0,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.CCArmatureDisplay:dbInit",iVar1 + -1,1);
                    /* catch() { ... } // from try @ 0095da10 with catch @ 0095da48 */
  }
  return 0;
}

