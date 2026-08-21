
/* lua_cocos2dx_ui_Scale9Sprite_init(lua_State*) */

void lua_cocos2dx_ui_Scale9Sprite_init(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  Size aSStack_80 [8];
  ulong local_78;
  bool local_6c [4];
  Rect aRStack_68 [16];
  Rect aRStack_58 [16];
  long local_48;
  
                    /* catch() { ... } // from try @ 009901f8 with catch @ 009902f8 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 7) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar6 = luaval_is_usertype(param_1,2,"cc.Sprite",0), (uVar6 & 1) != 0)) {
      uVar7 = tolua_tousertype(param_1,2,0);
      cocos2d::Rect::Rect(aRStack_58);
      uVar6 = luaval_to_rect(param_1,3,aRStack_58,"ccui.Scale9Sprite:init");
      if (((uVar6 & 1) != 0) &&
         (uVar6 = luaval_to_boolean(param_1,4,local_6c,"ccui.Scale9Sprite:init"), (uVar6 & 1) != 0))
      {
        local_78 = 0;
        uVar6 = luaval_to_vec2(param_1,5,(Vec2 *)&local_78,"ccui.Scale9Sprite:init");
        if ((uVar6 & 1) != 0) {
          cocos2d::Size::Size(aSStack_80);
          uVar6 = luaval_to_size(param_1,6,aSStack_80,"ccui.Scale9Sprite:init");
          if ((uVar6 & 1) != 0) {
            cocos2d::Rect::Rect(aRStack_68);
            uVar6 = luaval_to_rect(param_1,7,aRStack_68,"ccui.Scale9Sprite:init");
            if ((uVar6 & 1) != 0) {
              uVar4 = (**(code **)(*plVar5 + 0x6a0))
                                (plVar5,uVar7,aRStack_58,local_6c[0],&local_78,aSStack_80,aRStack_68
                                );
              tolua_pushboolean(param_1,uVar4 & 1);
              uVar7 = 1;
              goto LAB_00990640;
            }
          }
        }
      }
    }
  }
  else if (iVar2 == 5) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar6 = luaval_is_usertype(param_1,2,"cc.Sprite",0), (uVar6 & 1) != 0)) {
      uVar7 = tolua_tousertype(param_1,2,0);
      cocos2d::Rect::Rect(aRStack_58);
      uVar6 = luaval_to_rect(param_1,3,aRStack_58,"ccui.Scale9Sprite:init");
      if (((uVar6 & 1) != 0) &&
         (uVar6 = luaval_to_boolean(param_1,4,(bool *)&local_78,"ccui.Scale9Sprite:init"),
         (uVar6 & 1) != 0)) {
        cocos2d::Rect::Rect(aRStack_68);
        uVar6 = luaval_to_rect(param_1,5,aRStack_68,"ccui.Scale9Sprite:init");
        if ((uVar6 & 1) != 0) {
          uVar4 = (**(code **)(*plVar5 + 0x690))(plVar5,uVar7,aRStack_58,local_78 & 0xff,aRStack_68)
          ;
          goto LAB_009904c8;
        }
      }
    }
  }
  else if ((((iVar2 == 4) && (param_1 != (lua_State *)0x0)) &&
           (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
          (uVar6 = luaval_is_usertype(param_1,2,"cc.Sprite",0), (uVar6 & 1) != 0)) {
    uVar7 = tolua_tousertype(param_1,2,0);
    cocos2d::Rect::Rect(aRStack_58);
    uVar6 = luaval_to_rect(param_1,3,aRStack_58,"ccui.Scale9Sprite:init");
    if ((uVar6 & 1) != 0) {
      cocos2d::Rect::Rect(aRStack_68);
      uVar6 = luaval_to_rect(param_1,4,aRStack_68,"ccui.Scale9Sprite:init");
      if ((uVar6 & 1) != 0) {
        uVar4 = (**(code **)(*plVar5 + 0x698))(plVar5,uVar7,aRStack_58,aRStack_68);
LAB_009904c8:
        tolua_pushboolean(param_1,uVar4 & 1);
        uVar7 = 1;
        goto LAB_00990640;
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "ccui.Scale9Sprite:init",iVar2 + -1,6);
  uVar7 = 0;
LAB_00990640:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

