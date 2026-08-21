
/* lua_cocos2dx_RenderTexture_initWithWidthAndHeight(lua_State*) */

void lua_cocos2dx_RenderTexture_initWithWidthAndHeight(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  RenderTexture *pRVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pRVar4 = (RenderTexture *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
    uVar5 = luaval_to_int32(param_1,2,&iStack_3c,"cc.RenderTexture:initWithWidthAndHeight");
    if ((((uVar5 & 1) != 0) &&
        (uVar5 = luaval_to_int32(param_1,3,&local_40,"cc.RenderTexture:initWithWidthAndHeight"),
        (uVar5 & 1) != 0)) &&
       (uVar5 = luaval_to_int32(param_1,4,&local_44,"cc.RenderTexture:initWithWidthAndHeight"),
       (uVar5 & 1) != 0)) {
      uVar3 = cocos2d::RenderTexture::initWithWidthAndHeight(pRVar4,iStack_3c,local_40,local_44);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar6 = 1;
      goto LAB_00859908;
    }
  }
  else if (((iVar2 == 5) &&
           (uVar5 = luaval_to_int32(param_1,2,&iStack_3c,"cc.RenderTexture:initWithWidthAndHeight"),
           (uVar5 & 1) != 0)) &&
          ((uVar5 = luaval_to_int32(param_1,3,&local_40,"cc.RenderTexture:initWithWidthAndHeight"),
           (uVar5 & 1) != 0 &&
           ((uVar5 = luaval_to_int32(param_1,4,&local_44,"cc.RenderTexture:initWithWidthAndHeight"),
            (uVar5 & 1) != 0 &&
            (uVar5 = luaval_to_uint32(param_1,5,&local_48,"cc.RenderTexture:initWithWidthAndHeight")
            , (uVar5 & 1) != 0)))))) {
    uVar3 = cocos2d::RenderTexture::initWithWidthAndHeight
                      (pRVar4,iStack_3c,local_40,local_44,local_48);
    tolua_pushboolean(param_1,uVar3 & 1);
    uVar6 = 1;
    goto LAB_00859908;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.RenderTexture:initWithWidthAndHeight",iVar2 + -1,3);
  uVar6 = 0;
LAB_00859908:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

