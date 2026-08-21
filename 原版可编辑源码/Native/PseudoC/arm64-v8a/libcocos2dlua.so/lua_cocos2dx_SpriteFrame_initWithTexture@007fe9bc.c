
/* lua_cocos2dx_SpriteFrame_initWithTexture(lua_State*) */

void lua_cocos2dx_SpriteFrame_initWithTexture(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  SpriteFrame *this;
  ulong uVar5;
  Texture2D *pTVar6;
  undefined8 uVar7;
  Size aSStack_70 [8];
  undefined8 local_68;
  bool local_5c [4];
  Rect aRStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (SpriteFrame *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar5 = luaval_is_usertype(param_1,2,"cc.Texture2D",0), (uVar5 & 1) != 0)) {
      pTVar6 = (Texture2D *)tolua_tousertype(param_1,2,0);
      cocos2d::Rect::Rect(aRStack_58);
      uVar5 = luaval_to_rect(param_1,3,aRStack_58,"cc.SpriteFrame:initWithTexture");
      if ((uVar5 & 1) != 0) {
        uVar4 = cocos2d::SpriteFrame::initWithTexture(this,pTVar6,aRStack_58);
        tolua_pushboolean(param_1,uVar4 & 1);
        uVar7 = 1;
        goto LAB_007febcc;
      }
    }
  }
  else if (((iVar2 == 6) && (param_1 != (lua_State *)0x0)) &&
          ((iVar3 = lua_gettop(param_1), 1 < iVar3 &&
           (uVar5 = luaval_is_usertype(param_1,2,"cc.Texture2D",0), (uVar5 & 1) != 0)))) {
    pTVar6 = (Texture2D *)tolua_tousertype(param_1,2,0);
    cocos2d::Rect::Rect(aRStack_58);
    uVar5 = luaval_to_rect(param_1,3,aRStack_58,"cc.SpriteFrame:initWithTexture");
    if (((uVar5 & 1) != 0) &&
       (uVar5 = luaval_to_boolean(param_1,4,local_5c,"cc.SpriteFrame:initWithTexture"),
       (uVar5 & 1) != 0)) {
      local_68 = 0;
      uVar5 = luaval_to_vec2(param_1,5,(Vec2 *)&local_68,"cc.SpriteFrame:initWithTexture");
      if ((uVar5 & 1) != 0) {
        cocos2d::Size::Size(aSStack_70);
        uVar5 = luaval_to_size(param_1,6,aSStack_70,"cc.SpriteFrame:initWithTexture");
        if ((uVar5 & 1) != 0) {
          uVar4 = cocos2d::SpriteFrame::initWithTexture
                            (this,pTVar6,aRStack_58,local_5c[0],(Vec2 *)&local_68,aSStack_70);
          tolua_pushboolean(param_1,uVar4 & 1);
          uVar7 = 1;
          goto LAB_007febcc;
        }
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.SpriteFrame:initWithTexture",iVar2 + -1,2);
  uVar7 = 0;
LAB_007febcc:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

