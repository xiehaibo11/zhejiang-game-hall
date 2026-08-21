
/* lua_cocos2dx_studio_Bone_setTransformDirty(lua_State*) */

undefined4 lua_cocos2dx_studio_Bone_setTransformDirty(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_boolean(param_1,2,local_3c,"ccs.Bone:setTransformDirty");
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0x538))(plVar3,local_3c[0]);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_009323ac;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_Bone_setTransformDirty\'",0);
  }
  else {
                    /* try { // try from 00932388 to 00a323d3 has its CatchHandler @ 00932388
                       catch() { ... } // from try @ 00932388 with catch @ 00932388
                       catch() { ... } // from try @ 009323fc with catch @ 00932388 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Bone:setTransformDirty",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009323ac:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009323d4 to 00a323d7 has its CatchHandler @ 00932458 */
  __stack_chk_fail();
}

