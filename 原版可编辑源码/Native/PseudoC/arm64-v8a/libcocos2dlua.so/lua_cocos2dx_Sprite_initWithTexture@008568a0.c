
/* lua_cocos2dx_Sprite_initWithTexture(lua_State*) */

void lua_cocos2dx_Sprite_initWithTexture(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  bool local_5c [4];
  Rect aRStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar6 = luaval_is_usertype(param_1,2,"cc.Texture2D",0), (uVar6 & 1) != 0)) {
      uVar7 = tolua_tousertype(param_1,2,0);
      uVar4 = (**(code **)(*plVar5 + 0x5f0))(plVar5,uVar7);
LAB_00856a78:
      tolua_pushboolean(param_1,uVar4 & 1);
      uVar7 = 1;
      goto LAB_00856ab0;
    }
  }
  else if (iVar2 == 4) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar6 = luaval_is_usertype(param_1,2,"cc.Texture2D",0), (uVar6 & 1) != 0)) {
      uVar7 = tolua_tousertype(param_1,2,0);
      cocos2d::Rect::Rect(aRStack_58);
      uVar6 = luaval_to_rect(param_1,3,aRStack_58,"cc.Sprite:initWithTexture");
      if (((uVar6 & 1) != 0) &&
         (uVar6 = luaval_to_boolean(param_1,4,local_5c,"cc.Sprite:initWithTexture"),
         (uVar6 & 1) != 0)) {
        uVar4 = (**(code **)(*plVar5 + 0x608))(plVar5,uVar7,aRStack_58,local_5c[0]);
        goto LAB_00856a78;
      }
    }
  }
  else if ((((iVar2 == 3) && (param_1 != (lua_State *)0x0)) &&
           (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
          (uVar6 = luaval_is_usertype(param_1,2,"cc.Texture2D",0), (uVar6 & 1) != 0)) {
    uVar7 = tolua_tousertype(param_1,2,0);
    cocos2d::Rect::Rect(aRStack_58);
    uVar6 = luaval_to_rect(param_1,3,aRStack_58,"cc.Sprite:initWithTexture");
    if ((uVar6 & 1) != 0) {
      uVar4 = (**(code **)(*plVar5 + 0x600))(plVar5,uVar7,aRStack_58);
      goto LAB_00856a78;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.Sprite:initWithTexture",iVar2 + -1,3);
  uVar7 = 0;
LAB_00856ab0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

