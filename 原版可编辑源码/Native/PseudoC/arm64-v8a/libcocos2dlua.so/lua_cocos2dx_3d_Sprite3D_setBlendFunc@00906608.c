
/* lua_cocos2dx_3d_Sprite3D_setBlendFunc(lua_State*) */

undefined4 lua_cocos2dx_3d_Sprite3D_setBlendFunc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  BlendFunc aBStack_40 [8];
  long local_38;
  
                    /* catch() { ... } // from try @ 009065c8 with catch @ 00906618 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0090662c to 00a066fb has its CatchHandler @ 0090662c
                       catch() { ... } // from try @ 0090662c with catch @ 0090662c
                       catch() { ... } // from try @ 0090677c with catch @ 0090662c */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_blendfunc(param_1,2,aBStack_40,"cc.Sprite3D:setBlendFunc");
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0x530))(plVar3,aBStack_40);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_009066cc;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Sprite3D_setBlendFunc\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Sprite3D:setBlendFunc",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009066cc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

