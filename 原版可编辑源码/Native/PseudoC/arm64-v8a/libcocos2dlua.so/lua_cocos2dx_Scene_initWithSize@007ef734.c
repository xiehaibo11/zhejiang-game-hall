
/* lua_cocos2dx_Scene_initWithSize(lua_State*) */

void lua_cocos2dx_Scene_initWithSize(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  Size *pSVar4;
  ulong uVar5;
  undefined8 uVar6;
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pSVar4 = (Size *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Size::Size(aSStack_40);
    uVar5 = luaval_to_size(param_1,2,aSStack_40,"cc.Scene:initWithSize");
    if ((uVar5 & 1) != 0) {
      uVar3 = cocos2d::Scene::initWithSize(pSVar4);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar6 = 1;
      goto LAB_007ef7f8;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Scene_initWithSize\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Scene:initWithSize",iVar2 + -1,1);
  }
  uVar6 = 0;
LAB_007ef7f8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

