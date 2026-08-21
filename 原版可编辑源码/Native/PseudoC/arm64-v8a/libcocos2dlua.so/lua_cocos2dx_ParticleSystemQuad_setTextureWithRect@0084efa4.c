
/* lua_cocos2dx_ParticleSystemQuad_setTextureWithRect(lua_State*) */

undefined4 lua_cocos2dx_ParticleSystemQuad_setTextureWithRect(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ParticleSystemQuad *this;
  ulong uVar3;
  Texture2D *pTVar4;
  undefined4 uVar5;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ParticleSystemQuad *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    cocos2d::Rect::Rect(aRStack_48);
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Texture2D",0), (uVar3 & 1) == 0)) {
      luaval_to_rect(param_1,3,aRStack_48,"cc.ParticleSystemQuad:setTextureWithRect");
    }
    else {
      pTVar4 = (Texture2D *)tolua_tousertype(param_1,2,0);
      uVar3 = luaval_to_rect(param_1,3,aRStack_48,"cc.ParticleSystemQuad:setTextureWithRect");
      if ((uVar3 & 1) != 0) {
        cocos2d::ParticleSystemQuad::setTextureWithRect(this,pTVar4,aRStack_48);
        uVar5 = 1;
        lua_settop(param_1,1);
        goto LAB_0084f0c8;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ParticleSystemQuad_setTextureWithRect\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ParticleSystemQuad:setTextureWithRect",iVar2 + -1,2);
  }
  uVar5 = 0;
LAB_0084f0c8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

