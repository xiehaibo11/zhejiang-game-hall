
/* lua_cocos2dx_SpriteBatchNode_initWithTexture(lua_State*) */

void lua_cocos2dx_SpriteBatchNode_initWithTexture(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  SpriteBatchNode *this;
  ulong uVar4;
  Texture2D *pTVar5;
  undefined8 uVar6;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (SpriteBatchNode *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Texture2D",0), (uVar4 & 1) == 0)) {
      luaval_to_ssize(param_1,3,&local_40,"cc.SpriteBatchNode:initWithTexture");
    }
    else {
      pTVar5 = (Texture2D *)tolua_tousertype(param_1,2,0);
      uVar4 = luaval_to_ssize(param_1,3,&local_40,"cc.SpriteBatchNode:initWithTexture");
      if ((uVar4 & 1) != 0) goto LAB_0087543c;
    }
LAB_00875490:
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_SpriteBatchNode_initWithTexture\'",0);
  }
  else {
    if (iVar2 == 2) {
      if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
         (uVar4 = luaval_is_usertype(param_1,2,"cc.Texture2D",0), (uVar4 & 1) != 0)) {
        pTVar5 = (Texture2D *)tolua_tousertype(param_1,2,0);
        local_40 = 0x1d;
LAB_0087543c:
        uVar3 = cocos2d::SpriteBatchNode::initWithTexture(this,pTVar5,local_40);
        tolua_pushboolean(param_1,uVar3 & 1);
        uVar6 = 1;
        goto LAB_008754a8;
      }
      goto LAB_00875490;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SpriteBatchNode:initWithTexture",iVar2 + -1,1);
  }
  uVar6 = 0;
LAB_008754a8:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

