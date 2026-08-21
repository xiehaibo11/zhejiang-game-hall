
/* lua_dragonbones_CCArmatureDisplay_dispose(lua_State*) */

undefined4 lua_dragonbones_CCArmatureDisplay_dispose(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 0095de1c to 00a5de67 has its CatchHandler @ 0095de1c
                       catch() { ... } // from try @ 0095de1c with catch @ 0095de1c
                       catch() { ... } // from try @ 0095de6c with catch @ 0095de1c */
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    uVar4 = luaval_to_boolean(param_1,2,local_3c,"db.CCArmatureDisplay:dispose");
    if ((uVar4 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_dragonbones_CCArmatureDisplay_dispose\'",0);
      goto LAB_0095dee8;
    }
    (**(code **)(*plVar3 + 0x548))(plVar3,local_3c[0]);
                    /* catch() { ... } // from try @ 0095de68 with catch @ 0095dea0 */
  }
  else {
    if (iVar2 + -1 != 0) {
                    /* try { // try from 0095deb4 to 00a5df6b has its CatchHandler @ 0095deb4
                       catch() { ... } // from try @ 0095deb4 with catch @ 0095deb4
                       catch() { ... } // from try @ 0095dfec with catch @ 0095deb4 */
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "db.CCArmatureDisplay:dispose",iVar2 + -1,0);
LAB_0095dee8:
      uVar5 = 0;
      goto LAB_0095deec;
    }
    (**(code **)(*plVar3 + 0x548))(plVar3,1);
                    /* try { // try from 0095de68 to 00a5de6b has its CatchHandler @ 0095dea0 */
                    /* try { // try from 0095de6c to 00a5deb3 has its CatchHandler @ 0095de1c */
  }
  uVar5 = 1;
  lua_settop(param_1,1);
LAB_0095deec:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

