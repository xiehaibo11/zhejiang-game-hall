
/* lua_cocos2dx_Sprite_createWithTexture(lua_State*) */

void lua_cocos2dx_Sprite_createWithTexture(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  Texture2D *pTVar5;
  void *pvVar6;
  undefined8 uVar7;
  bool local_4c [4];
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 2) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Texture2D",0), (uVar4 & 1) != 0)) {
      pTVar5 = (Texture2D *)tolua_tousertype(param_1,2,0);
      pvVar6 = (void *)cocos2d::Sprite::createWithTexture(pTVar5);
joined_r0x00857428:
      if (pvVar6 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar7 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                   "cc.Sprite");
        uVar7 = 1;
      }
      goto LAB_008574c0;
    }
  }
  else if (iVar2 == 4) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Texture2D",0), (uVar4 & 1) != 0)) {
      pTVar5 = (Texture2D *)tolua_tousertype(param_1,2,0);
      cocos2d::Rect::Rect(aRStack_48);
      uVar4 = luaval_to_rect(param_1,3,aRStack_48,"cc.Sprite:createWithTexture");
      if (((uVar4 & 1) != 0) &&
         (uVar4 = luaval_to_boolean(param_1,4,local_4c,"cc.Sprite:createWithTexture"),
         (uVar4 & 1) != 0)) {
        pvVar6 = (void *)cocos2d::Sprite::createWithTexture(pTVar5,aRStack_48,local_4c[0]);
        goto joined_r0x00857428;
      }
    }
  }
  else if ((((iVar2 == 3) && (param_1 != (lua_State *)0x0)) &&
           (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
          (uVar4 = luaval_is_usertype(param_1,2,"cc.Texture2D",0), (uVar4 & 1) != 0)) {
    pTVar5 = (Texture2D *)tolua_tousertype(param_1,2,0);
    cocos2d::Rect::Rect(aRStack_48);
    uVar4 = luaval_to_rect(param_1,3,aRStack_48,"cc.Sprite:createWithTexture");
    if ((uVar4 & 1) != 0) {
      pvVar6 = (void *)cocos2d::Sprite::createWithTexture(pTVar5,aRStack_48,false);
      goto joined_r0x00857428;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "cc.Sprite:createWithTexture",iVar2 + -1,1);
  uVar7 = 0;
LAB_008574c0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

