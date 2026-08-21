
/* lua_cocos2dx_SpriteBatchNode_atlasIndexForChild(lua_State*) */

void lua_cocos2dx_SpriteBatchNode_atlasIndexForChild(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  SpriteBatchNode *this;
  ulong uVar3;
  Sprite *pSVar4;
  long lVar5;
  undefined8 uVar6;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (SpriteBatchNode *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Sprite",0), (uVar3 & 1) == 0)) {
      luaval_to_int32(param_1,3,&local_3c,"cc.SpriteBatchNode:atlasIndexForChild");
    }
    else {
      pSVar4 = (Sprite *)tolua_tousertype(param_1,2,0);
      uVar3 = luaval_to_int32(param_1,3,&local_3c,"cc.SpriteBatchNode:atlasIndexForChild");
      if ((uVar3 & 1) != 0) {
        lVar5 = cocos2d::SpriteBatchNode::atlasIndexForChild(this,pSVar4,local_3c);
        tolua_pushnumber((double)lVar5,param_1);
        uVar6 = 1;
        goto LAB_00875138;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_SpriteBatchNode_atlasIndexForChild\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SpriteBatchNode:atlasIndexForChild",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_00875138:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

