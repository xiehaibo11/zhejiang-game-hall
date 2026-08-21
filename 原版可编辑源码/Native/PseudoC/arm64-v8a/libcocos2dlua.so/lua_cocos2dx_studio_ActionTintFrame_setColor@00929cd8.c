
/* lua_cocos2dx_studio_ActionTintFrame_setColor(lua_State*) */

undefined4 lua_cocos2dx_studio_ActionTintFrame_setColor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ActionTintFrame *pAVar3;
  ulong uVar4;
  undefined4 uVar5;
  uint3 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pAVar3 = (ActionTintFrame *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Color3B::Color3B((Color3B *)local_40);
    uVar4 = luaval_to_color3b(param_1,2,(Color3B *)local_40,"ccs.ActionTintFrame:setColor");
    if ((uVar4 & 1) != 0) {
      cocostudio::ActionTintFrame::setColor(pAVar3,(ulong)local_40[0]);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00929da4;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_ActionTintFrame_setColor\'",0);
  }
  else {
                    /* try { // try from 00929d6c to 00a29db7 has its CatchHandler @ 00929d6c
                       catch() { ... } // from try @ 00929d6c with catch @ 00929d6c
                       catch() { ... } // from try @ 00929de0 with catch @ 00929d6c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012c96b5,
               iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00929da4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00929db8 to 00a29dbb has its CatchHandler @ 00929e40 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

