
/* lua_cocos2dx_SpriteBatchNode_createWithTexture(lua_State*) */

void lua_cocos2dx_SpriteBatchNode_createWithTexture(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  Texture2D *pTVar4;
  void *pvVar5;
  undefined8 uVar6;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 3) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Texture2D",0), (uVar3 & 1) == 0)) {
      luaval_to_ssize(param_1,3,&local_40,"cc.SpriteBatchNode:createWithTexture");
    }
    else {
      pTVar4 = (Texture2D *)tolua_tousertype(param_1,2,0);
      uVar3 = luaval_to_ssize(param_1,3,&local_40,"cc.SpriteBatchNode:createWithTexture");
      if ((uVar3 & 1) != 0) {
        pvVar5 = (void *)cocos2d::SpriteBatchNode::createWithTexture(pTVar4,local_40);
        goto joined_r0x00876144;
      }
    }
LAB_00876194:
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_SpriteBatchNode_createWithTexture\'",0
               );
  }
  else {
    if (iVar2 == 2) {
      if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
         (uVar3 = luaval_is_usertype(param_1,2,"cc.Texture2D",0), (uVar3 & 1) != 0)) {
        pTVar4 = (Texture2D *)tolua_tousertype(param_1,2,0);
        pvVar5 = (void *)cocos2d::SpriteBatchNode::createWithTexture(pTVar4,0x1d);
joined_r0x00876144:
        if (pvVar5 == (void *)0x0) {
          lua_pushnil(param_1);
          uVar6 = 1;
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                     "cc.SpriteBatchNode");
          uVar6 = 1;
        }
        goto LAB_008761ac;
      }
      goto LAB_00876194;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.SpriteBatchNode:createWithTexture",iVar2 + -1,1);
  }
  uVar6 = 0;
LAB_008761ac:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

