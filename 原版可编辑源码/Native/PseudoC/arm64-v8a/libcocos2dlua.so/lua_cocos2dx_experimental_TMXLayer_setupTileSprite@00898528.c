
/* lua_cocos2dx_experimental_TMXLayer_setupTileSprite(lua_State*) */

undefined4 lua_cocos2dx_experimental_TMXLayer_setupTileSprite(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  Sprite *pSVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  Vec2 *unaff_x21;
  uint local_64;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pSVar4 = (Sprite *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 3) {
    local_60 = 0;
    if (((param_1 == (lua_State *)0x0) || (iVar3 = lua_gettop(param_1), iVar3 < 2)) ||
       (uVar5 = luaval_is_usertype(param_1,2,"cc.Sprite",0), (uVar5 & 1) == 0)) {
      bVar2 = false;
    }
    else {
      unaff_x21 = (Vec2 *)tolua_tousertype(param_1,2,0);
      bVar2 = true;
    }
    uVar5 = luaval_to_vec2(param_1,3,(Vec2 *)&local_60,"ccexp.TMXLayer:setupTileSprite");
    uVar6 = luaval_to_uint32(param_1,4,&local_64,"ccexp.TMXLayer:setupTileSprite");
    if (((bVar2) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) {
      cocos2d::experimental::TMXLayer::setupTileSprite(pSVar4,unaff_x21,(uint)&local_60);
      uVar7 = 1;
      lua_settop(param_1,1);
      goto LAB_0089866c;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_experimental_TMXLayer_setupTileSprite\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccexp.TMXLayer:setupTileSprite",iVar3 + -1,3);
  }
  uVar7 = 0;
LAB_0089866c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

