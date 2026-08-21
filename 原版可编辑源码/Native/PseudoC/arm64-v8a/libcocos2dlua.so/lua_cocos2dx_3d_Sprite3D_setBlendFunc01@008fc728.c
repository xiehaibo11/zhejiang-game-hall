
/* lua_cocos2dx_3d_Sprite3D_setBlendFunc01(lua_State*) */

undefined4 lua_cocos2dx_3d_Sprite3D_setBlendFunc01(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  int local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isusertype(param_1,1,"cc.Sprite3D",0,auStack_48);
  if (iVar2 != 0) {
    plVar4 = (long *)tolua_tousertype(param_1,1,0);
    iVar2 = lua_gettop(param_1);
    if (iVar2 == 3) {
      uVar5 = luaval_to_int32(param_1,2,&iStack_4c,"cc.Sprite3D:setBlendFunc");
      if (((uVar5 & 1) == 0) ||
         (uVar5 = luaval_to_int32(param_1,3,&local_50,"cc.Sprite3D:setBlendFunc"), (uVar5 & 1) == 0)
         ) {
        uVar3 = 0;
      }
      else {
        local_58 = iStack_4c;
        iStack_54 = local_50;
        (**(code **)(*plVar4 + 0x530))(plVar4,&local_58);
        uVar3 = 1;
        lua_settop(param_1,1);
      }
      goto LAB_008fc808;
    }
  }
  uVar3 = lua_cocos2dx_3d_Sprite3D_setBlendFunc(param_1);
LAB_008fc808:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

