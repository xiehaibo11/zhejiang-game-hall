
/* lua_cocos2dx_SpriteFrame_create(lua_State*) */

void lua_cocos2dx_SpriteFrame_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  Size aSStack_78 [8];
  undefined8 local_70;
  bool local_64 [4];
  Rect aRStack_60 [16];
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  int iVar7;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.SpriteFrame:create");
    if ((uVar3 & 1) == 0) {
LAB_007ff3d8:
      iVar7 = 4;
      iVar6 = 4;
    }
    else {
      cocos2d::Rect::Rect(aRStack_60);
      uVar3 = luaval_to_rect(param_1,3,aRStack_60,"cc.SpriteFrame:create");
      if ((uVar3 & 1) == 0) goto LAB_007ff3d8;
      pvVar4 = (void *)cocos2d::SpriteFrame::create((basic_string *)&local_50,aRStack_60);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.SpriteFrame");
      }
      iVar7 = 1;
      iVar6 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
      iVar6 = iVar7;
    }
    if (iVar6 != 4) {
LAB_007ff3d0:
      uVar5 = 1;
      goto LAB_007ff418;
    }
  }
  else if (iVar2 == 6) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.SpriteFrame:create");
    if ((uVar3 & 1) == 0) {
LAB_007ff3b4:
      iVar7 = 2;
      iVar6 = 2;
    }
    else {
      cocos2d::Rect::Rect(aRStack_60);
      uVar3 = luaval_to_rect(param_1,3,aRStack_60,"cc.SpriteFrame:create");
      if (((uVar3 & 1) == 0) ||
         (uVar3 = luaval_to_boolean(param_1,4,local_64,"cc.SpriteFrame:create"), (uVar3 & 1) == 0))
      goto LAB_007ff3b4;
      local_70 = 0;
      uVar3 = luaval_to_vec2(param_1,5,(Vec2 *)&local_70,"cc.SpriteFrame:create");
      if ((uVar3 & 1) == 0) goto LAB_007ff3b4;
      cocos2d::Size::Size(aSStack_78);
      uVar3 = luaval_to_size(param_1,6,aSStack_78,"cc.SpriteFrame:create");
      if ((uVar3 & 1) == 0) goto LAB_007ff3b4;
      pvVar4 = (void *)cocos2d::SpriteFrame::create
                                 ((basic_string *)&local_50,aRStack_60,local_64[0],(Vec2 *)&local_70
                                  ,aSStack_78);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.SpriteFrame");
      }
      iVar7 = 1;
      iVar6 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
      iVar6 = iVar7;
    }
    if (iVar6 != 2) goto LAB_007ff3d0;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "cc.SpriteFrame:create",iVar2 + -1,2);
  uVar5 = 0;
LAB_007ff418:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

