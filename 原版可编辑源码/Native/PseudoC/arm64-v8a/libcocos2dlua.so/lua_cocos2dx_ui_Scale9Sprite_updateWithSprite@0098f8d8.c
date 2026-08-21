
/* lua_cocos2dx_ui_Scale9Sprite_updateWithSprite(lua_State*) */

void lua_cocos2dx_ui_Scale9Sprite_updateWithSprite(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  Rect aRStack_80 [16];
  Size aSStack_70 [8];
  ulong local_68;
  bool local_5c [4];
  Rect aRStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 5) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar6 = luaval_is_usertype(param_1,2,"cc.Sprite",0), (uVar6 & 1) != 0)) {
      uVar7 = tolua_tousertype(param_1,2,0);
      cocos2d::Rect::Rect(aRStack_58);
      uVar6 = luaval_to_rect(param_1,3,aRStack_58,"ccui.Scale9Sprite:updateWithSprite");
      if (((uVar6 & 1) != 0) &&
         (uVar6 = luaval_to_boolean(param_1,4,(bool *)&local_68,"ccui.Scale9Sprite:updateWithSprite"
                                   ), (uVar6 & 1) != 0)) {
        cocos2d::Rect::Rect(aRStack_80);
        uVar6 = luaval_to_rect(param_1,5,aRStack_80,"ccui.Scale9Sprite:updateWithSprite");
        if ((uVar6 & 1) != 0) {
          uVar4 = (**(code **)(*plVar5 + 0x6b8))(plVar5,uVar7,aRStack_58,local_68 & 0xff,aRStack_80)
          ;
          tolua_pushboolean(param_1,uVar4 & 1);
          uVar7 = 1;
          goto LAB_0098fb68;
        }
      }
    }
  }
  else if (((iVar2 == 7) && (param_1 != (lua_State *)0x0)) &&
          ((iVar3 = lua_gettop(param_1), 1 < iVar3 &&
           (uVar6 = luaval_is_usertype(param_1,2,"cc.Sprite",0), (uVar6 & 1) != 0)))) {
    uVar7 = tolua_tousertype(param_1,2,0);
    cocos2d::Rect::Rect(aRStack_58);
    uVar6 = luaval_to_rect(param_1,3,aRStack_58,"ccui.Scale9Sprite:updateWithSprite");
    if (((uVar6 & 1) != 0) &&
       (uVar6 = luaval_to_boolean(param_1,4,local_5c,"ccui.Scale9Sprite:updateWithSprite"),
       (uVar6 & 1) != 0)) {
      local_68 = 0;
      uVar6 = luaval_to_vec2(param_1,5,(Vec2 *)&local_68,"ccui.Scale9Sprite:updateWithSprite");
      if ((uVar6 & 1) != 0) {
        cocos2d::Size::Size(aSStack_70);
        uVar6 = luaval_to_size(param_1,6,aSStack_70,"ccui.Scale9Sprite:updateWithSprite");
        if ((uVar6 & 1) != 0) {
          cocos2d::Rect::Rect(aRStack_80);
          uVar6 = luaval_to_rect(param_1,7,aRStack_80,"ccui.Scale9Sprite:updateWithSprite");
          if ((uVar6 & 1) != 0) {
            uVar4 = (**(code **)(*plVar5 + 0x6c0))
                              (plVar5,uVar7,aRStack_58,local_5c[0],&local_68,aSStack_70,aRStack_80);
            tolua_pushboolean(param_1,uVar4 & 1);
            uVar7 = 1;
            goto LAB_0098fb68;
          }
        }
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "ccui.Scale9Sprite:updateWithSprite",iVar2 + -1,4);
  uVar7 = 0;
LAB_0098fb68:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

