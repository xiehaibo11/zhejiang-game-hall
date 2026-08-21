
/* lua_cocos2dx_ParticleBatchNode_initWithTexture(lua_State*) */

void lua_cocos2dx_ParticleBatchNode_initWithTexture(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ParticleBatchNode *this;
  ulong uVar4;
  Texture2D *pTVar5;
  undefined8 uVar6;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ParticleBatchNode *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Texture2D",0), (uVar4 & 1) == 0)) {
      luaval_to_int32(param_1,3,&local_3c,"cc.ParticleBatchNode:initWithTexture");
    }
    else {
      pTVar5 = (Texture2D *)tolua_tousertype(param_1,2,0);
      uVar4 = luaval_to_int32(param_1,3,&local_3c,"cc.ParticleBatchNode:initWithTexture");
      if ((uVar4 & 1) != 0) {
        uVar3 = cocos2d::ParticleBatchNode::initWithTexture(this,pTVar5,local_3c);
        tolua_pushboolean(param_1,uVar3 & 1);
        uVar6 = 1;
        goto LAB_00847c38;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ParticleBatchNode_initWithTexture\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ParticleBatchNode:initWithTexture",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_00847c38:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

