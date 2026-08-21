
/* lua_cocos2dx_TMXLayer_setTileGID(lua_State*) */

undefined4 lua_cocos2dx_TMXLayer_setTileGID(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TMXLayer *pTVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_4c;
  undefined8 local_48;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pTVar3 = (TMXLayer *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    uVar4 = luaval_to_uint32(param_1,2,&local_3c,"cc.TMXLayer:setTileGID");
    if ((uVar4 & 1) != 0) {
      local_48 = 0;
      uVar4 = luaval_to_vec2(param_1,3,(Vec2 *)&local_48,"cc.TMXLayer:setTileGID");
      if ((uVar4 & 1) != 0) {
        cocos2d::TMXLayer::setTileGID((uint)pTVar3,(Vec2 *)(ulong)local_3c);
        goto LAB_0087d398;
      }
    }
  }
  else if ((iVar2 == 4) &&
          (uVar4 = luaval_to_uint32(param_1,2,&local_3c,"cc.TMXLayer:setTileGID"), (uVar4 & 1) != 0)
          ) {
    local_48 = 0;
    uVar4 = luaval_to_vec2(param_1,3,(Vec2 *)&local_48,"cc.TMXLayer:setTileGID");
    if (((uVar4 & 1) != 0) &&
       (uVar4 = luaval_to_int32(param_1,4,&local_4c,"cc.TMXLayer:setTileGID"), (uVar4 & 1) != 0)) {
      cocos2d::TMXLayer::setTileGID(pTVar3,local_3c,&local_48,local_4c);
LAB_0087d398:
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0087d3d0;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.TMXLayer:setTileGID",iVar2 + -1,2);
  uVar5 = 0;
LAB_0087d3d0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

