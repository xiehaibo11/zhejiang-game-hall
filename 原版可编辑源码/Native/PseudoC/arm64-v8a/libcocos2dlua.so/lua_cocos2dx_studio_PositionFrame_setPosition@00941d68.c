
/* lua_cocos2dx_studio_PositionFrame_setPosition(lua_State*) */

undefined4 lua_cocos2dx_studio_PositionFrame_setPosition(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 local_40;
  long local_38;
  
                    /* try { // try from 00941d78 to 00a41dc3 has its CatchHandler @ 00941d78
                       catch() { ... } // from try @ 00941d78 with catch @ 00941d78
                       catch() { ... } // from try @ 00941dc8 with catch @ 00941d78 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 00941dc4 to 00a41dc7 has its CatchHandler @ 00941e14 */
    local_40 = 0;
                    /* try { // try from 00941dc8 to 00a41e27 has its CatchHandler @ 00941d78 */
    uVar4 = luaval_to_vec2(param_1,2,(Vec2 *)&local_40,"");
    if ((uVar4 & 1) != 0) {
      *(undefined8 *)(lVar3 + 0x58) = local_40;
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00941e24;
    }
                    /* catch() { ... } // from try @ 00941dc4 with catch @ 00941e14 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_PositionFrame_setPosition\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.PositionFrame:setPosition",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00941e24:
                    /* try { // try from 00941e28 to 00a41f6f has its CatchHandler @ 00941e28
                       catch() { ... } // from try @ 00941e28 with catch @ 00941e28
                       catch() { ... } // from try @ 00941ff0 with catch @ 00941e28 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

