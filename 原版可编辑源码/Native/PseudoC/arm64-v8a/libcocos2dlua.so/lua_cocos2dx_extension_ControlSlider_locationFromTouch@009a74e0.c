
/* lua_cocos2dx_extension_ControlSlider_locationFromTouch(lua_State*) */

void lua_cocos2dx_extension_ControlSlider_locationFromTouch(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Touch *pTVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 local_40 [2];
  long local_38;
  
                    /* try { // try from 009a74e4 to 00aa74eb has its CatchHandler @ 009a75c4 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009a7500 to 00aa750f has its CatchHandler @ 009a758c */
  pTVar3 = (Touch *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009a7510 to 00aa75df has its CatchHandler @ 009a74a8 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Touch",0), (uVar4 & 1) != 0)) {
      tolua_tousertype(param_1,2,0);
      local_40[0] = cocos2d::extension::ControlSlider::locationFromTouch(pTVar3);
      vec2_to_luaval(param_1,(Vec2 *)local_40);
      uVar5 = 1;
      goto LAB_009a75c4;
    }
    tolua_error(param_1,&DAT_012e5e8c,0);
  }
  else {
                    /* catch() { ... } // from try @ 009a7500 with catch @ 009a758c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlSlider:locationFromTouch",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009a75c4:
                    /* catch() { ... } // from try @ 009a74e4 with catch @ 009a75c4 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

