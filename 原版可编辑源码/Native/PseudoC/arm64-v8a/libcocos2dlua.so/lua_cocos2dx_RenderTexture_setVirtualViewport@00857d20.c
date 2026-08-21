
/* lua_cocos2dx_RenderTexture_setVirtualViewport(lua_State*) */

undefined4 lua_cocos2dx_RenderTexture_setVirtualViewport(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  RenderTexture *this;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  Rect aRStack_70 [16];
  Rect aRStack_60 [16];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (RenderTexture *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    local_50 = 0;
    cocos2d::Rect::Rect(aRStack_60);
    cocos2d::Rect::Rect(aRStack_70);
    uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)&local_50,"cc.RenderTexture:setVirtualViewport");
    uVar4 = luaval_to_rect(param_1,3,aRStack_60,"cc.RenderTexture:setVirtualViewport");
    uVar5 = luaval_to_rect(param_1,4,aRStack_70,"cc.RenderTexture:setVirtualViewport");
    if ((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) {
      cocos2d::RenderTexture::setVirtualViewport(this,(Vec2 *)&local_50,aRStack_60,aRStack_70);
      uVar6 = 1;
      lua_settop(param_1,1);
      goto LAB_00857e38;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_RenderTexture_setVirtualViewport\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.RenderTexture:setVirtualViewport",iVar2 + -1,3);
  }
  uVar6 = 0;
LAB_00857e38:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

