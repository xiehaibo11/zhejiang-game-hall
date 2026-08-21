
/* lua_cocos2dx_ParticleBatchNode_insertChild(lua_State*) */

undefined4 lua_cocos2dx_ParticleBatchNode_insertChild(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ParticleBatchNode *this;
  ulong uVar3;
  ParticleSystem *pPVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ParticleBatchNode *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"cc.ParticleSystem",0), (uVar3 & 1) == 0)) {
      luaval_to_int32(param_1,3,&local_3c,"cc.ParticleBatchNode:insertChild");
    }
    else {
      pPVar4 = (ParticleSystem *)tolua_tousertype(param_1,2,0);
      uVar3 = luaval_to_int32(param_1,3,&local_3c,"cc.ParticleBatchNode:insertChild");
      if ((uVar3 & 1) != 0) {
        cocos2d::ParticleBatchNode::insertChild(this,pPVar4,local_3c);
        uVar5 = 1;
        lua_settop(param_1,1);
        goto LAB_00848418;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ParticleBatchNode_insertChild\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ParticleBatchNode:insertChild",iVar2 + -1,2);
  }
  uVar5 = 0;
LAB_00848418:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

