
/* lua_cocos2dx_studio_ActionFrame_setEasingType(lua_State*) */

undefined4 lua_cocos2dx_studio_ActionFrame_setEasingType(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ActionFrame *this;
  ulong uVar3;
  undefined4 uVar4;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ActionFrame *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 00927c24 to 00a27c57 has its CatchHandler @ 00927d24 */
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"ccs.ActionFrame:setEasingType");
    if ((uVar3 & 1) != 0) {
      cocostudio::ActionFrame::setEasingType(this,local_3c);
                    /* try { // try from 00927c58 to 00a27c6b has its CatchHandler @ 00927cf0 */
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00927ca0;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_ActionFrame_setEasingType\'",0)
    ;
  }
  else {
                    /* try { // try from 00927c70 to 00a27ca3 has its CatchHandler @ 00927cf4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionFrame:setEasingType",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00927ca0:
                    /* try { // try from 00927ca4 to 00a27d3f has its CatchHandler @ 00927b9c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

