
/* lua_cocos2dx_ParticleBatchNode_disableParticle(lua_State*) */

undefined4 lua_cocos2dx_ParticleBatchNode_disableParticle(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ParticleBatchNode *this;
  ulong uVar3;
  undefined4 uVar4;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ParticleBatchNode *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"cc.ParticleBatchNode:disableParticle");
    if ((uVar3 & 1) != 0) {
      cocos2d::ParticleBatchNode::disableParticle(this,local_3c);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00847d1c;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ParticleBatchNode_disableParticle\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ParticleBatchNode:disableParticle",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00847d1c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

