
/* lua_dragonbones_CCSlot_setCCDisplay(lua_State*) */

undefined4 lua_dragonbones_CCSlot_setCCDisplay(lua_State *param_1)

{
  int iVar1;
  Slot *pSVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  pSVar2 = (Slot *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
                    /* try { // try from 0095e69c to 00a5e6e7 has its CatchHandler @ 0095e69c
                       catch() { ... } // from try @ 0095e69c with catch @ 0095e69c
                       catch() { ... } // from try @ 0095e6ec with catch @ 0095e69c */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar3 & 1) != 0)) {
      uVar4 = tolua_tousertype(param_1,2,0);
      dragonBones::Slot::setDisplay(pSVar2,uVar4,0);
                    /* try { // try from 0095e6e8 to 00a5e6eb has its CatchHandler @ 0095e720 */
                    /* try { // try from 0095e6ec to 00a5e733 has its CatchHandler @ 0095e69c */
      lua_settop(param_1,1);
      return 1;
    }
                    /* catch() { ... } // from try @ 0095e6e8 with catch @ 0095e720 */
    tolua_error(param_1,"invalid arguments in function \'lua_dragonbones_CCSlot_setCCDisplay\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.CCSlot:setCCDisplay",iVar1 + -1,1);
  }
                    /* try { // try from 0095e734 to 00a5e7eb has its CatchHandler @ 0095e734
                       catch() { ... } // from try @ 0095e734 with catch @ 0095e734
                       catch() { ... } // from try @ 0095e86c with catch @ 0095e734 */
  return 0;
}

