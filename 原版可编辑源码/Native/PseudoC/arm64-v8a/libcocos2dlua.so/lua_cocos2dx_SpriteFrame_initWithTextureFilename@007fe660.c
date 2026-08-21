
/* lua_cocos2dx_SpriteFrame_initWithTextureFilename(lua_State*) */

void lua_cocos2dx_SpriteFrame_initWithTextureFilename(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  SpriteFrame *this;
  ulong uVar4;
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
  this = (SpriteFrame *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"cc.SpriteFrame:initWithTextureFilename")
    ;
    if ((uVar4 & 1) == 0) {
LAB_007fe828:
      iVar7 = 4;
      iVar6 = 4;
    }
    else {
      cocos2d::Rect::Rect(aRStack_60);
      uVar4 = luaval_to_rect(param_1,3,aRStack_60,"cc.SpriteFrame:initWithTextureFilename");
      if ((uVar4 & 1) == 0) goto LAB_007fe828;
      uVar3 = cocos2d::SpriteFrame::initWithTextureFilename
                        (this,(basic_string *)&local_50,aRStack_60);
      tolua_pushboolean(param_1,uVar3 & 1);
      iVar7 = 1;
      iVar6 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
      iVar6 = iVar7;
    }
    if (iVar6 != 4) {
LAB_007fe820:
      uVar5 = 1;
      goto LAB_007fe868;
    }
  }
  else if (iVar2 == 6) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"cc.SpriteFrame:initWithTextureFilename")
    ;
    if ((uVar4 & 1) == 0) {
LAB_007fe804:
      iVar7 = 2;
      iVar6 = 2;
    }
    else {
      cocos2d::Rect::Rect(aRStack_60);
      uVar4 = luaval_to_rect(param_1,3,aRStack_60,"cc.SpriteFrame:initWithTextureFilename");
      if (((uVar4 & 1) == 0) ||
         (uVar4 = luaval_to_boolean(param_1,4,local_64,"cc.SpriteFrame:initWithTextureFilename"),
         (uVar4 & 1) == 0)) goto LAB_007fe804;
      local_70 = 0;
      uVar4 = luaval_to_vec2(param_1,5,(Vec2 *)&local_70,"cc.SpriteFrame:initWithTextureFilename");
      if ((uVar4 & 1) == 0) goto LAB_007fe804;
      cocos2d::Size::Size(aSStack_78);
      uVar4 = luaval_to_size(param_1,6,aSStack_78,"cc.SpriteFrame:initWithTextureFilename");
      if ((uVar4 & 1) == 0) goto LAB_007fe804;
      uVar3 = cocos2d::SpriteFrame::initWithTextureFilename
                        (this,(basic_string *)&local_50,aRStack_60,local_64[0],(Vec2 *)&local_70,
                         aSStack_78);
      tolua_pushboolean(param_1,uVar3 & 1);
      iVar7 = 1;
      iVar6 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
      iVar6 = iVar7;
    }
    if (iVar6 != 2) goto LAB_007fe820;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.SpriteFrame:initWithTextureFilename",iVar2 + -1,2);
  uVar5 = 0;
LAB_007fe868:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

