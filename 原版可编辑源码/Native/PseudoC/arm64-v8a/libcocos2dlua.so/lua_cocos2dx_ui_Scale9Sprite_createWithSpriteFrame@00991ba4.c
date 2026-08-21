
/* lua_cocos2dx_ui_Scale9Sprite_createWithSpriteFrame(lua_State*) */

void lua_cocos2dx_ui_Scale9Sprite_createWithSpriteFrame(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  SpriteFrame *pSVar5;
  void *pvVar6;
  undefined8 uVar7;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 2) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"cc.SpriteFrame",0), (uVar4 & 1) != 0)) {
      pSVar5 = (SpriteFrame *)tolua_tousertype(param_1,2,0);
      pvVar6 = (void *)cocos2d::ui::Scale9Sprite::createWithSpriteFrame(pSVar5);
joined_r0x00991cac:
      if (pvVar6 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar7 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                   "ccui.Scale9Sprite");
        uVar7 = 1;
      }
      goto LAB_00991cf8;
    }
  }
  else if (((iVar2 == 3) && (param_1 != (lua_State *)0x0)) &&
          ((iVar3 = lua_gettop(param_1), 1 < iVar3 &&
           (uVar4 = luaval_is_usertype(param_1,2,"cc.SpriteFrame",0), (uVar4 & 1) != 0)))) {
    pSVar5 = (SpriteFrame *)tolua_tousertype(param_1,2,0);
    cocos2d::Rect::Rect(aRStack_48);
    uVar4 = luaval_to_rect(param_1,3,aRStack_48,"ccui.Scale9Sprite:createWithSpriteFrame");
    if ((uVar4 & 1) != 0) {
      pvVar6 = (void *)cocos2d::ui::Scale9Sprite::createWithSpriteFrame(pSVar5,aRStack_48);
      goto joined_r0x00991cac;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "ccui.Scale9Sprite:createWithSpriteFrame",iVar2 + -1,1);
  uVar7 = 0;
LAB_00991cf8:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

