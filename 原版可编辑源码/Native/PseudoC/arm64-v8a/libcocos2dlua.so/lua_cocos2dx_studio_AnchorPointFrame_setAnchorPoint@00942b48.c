
/* lua_cocos2dx_studio_AnchorPointFrame_setAnchorPoint(lua_State*) */

undefined4 lua_cocos2dx_studio_AnchorPointFrame_setAnchorPoint(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 local_40;
  long local_38;
  
                    /* try { // try from 00942b58 to 00a42b83 has its CatchHandler @ 00942a34 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 00942b84 to 00a42b97 has its CatchHandler @ 00942c20 */
  if (iVar2 + -1 == 1) {
                    /* try { // try from 00942b98 to 00a42c8f has its CatchHandler @ 00942a34 */
    local_40 = 0;
    uVar4 = luaval_to_vec2(param_1,2,(Vec2 *)&local_40,"");
    if ((uVar4 & 1) != 0) {
      *(undefined8 *)(lVar3 + 0x60) = local_40;
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00942c04;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_AnchorPointFrame_setAnchorPoint\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.AnchorPointFrame:setAnchorPoint",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00942c04:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00942b38 with catch @ 00942c1c */
                    /* catch() { ... } // from try @ 00942a94 with catch @ 00942c20
                       catch() { ... } // from try @ 00942b84 with catch @ 00942c20 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

