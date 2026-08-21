
/* lua_cocos2dx_Scene_render(lua_State*) */

undefined4 lua_cocos2dx_Scene_render(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  uint local_98 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar5 = luaval_is_usertype(param_1,2,"cc.Renderer",0), (uVar5 & 1) != 0)) {
      uVar6 = tolua_tousertype(param_1,2,0);
      cocos2d::Mat4::Mat4((Mat4 *)local_98);
      uVar5 = luaval_to_mat4(param_1,3,(Mat4 *)local_98,"cc.Scene:render");
      if ((uVar5 & 1) != 0) {
        (**(code **)(*plVar4 + 0x530))(plVar4,uVar6,local_98,0);
        lua_settop(param_1,1);
        goto LAB_007ef448;
      }
LAB_007ef458:
      cocos2d::Mat4::~Mat4((Mat4 *)local_98);
    }
  }
  else if (iVar2 == 4) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar5 = luaval_is_usertype(param_1,2,"cc.Renderer",0), (uVar5 & 1) != 0)) {
      uVar6 = tolua_tousertype(param_1,2,0);
      cocos2d::Mat4::Mat4((Mat4 *)local_98);
      uVar5 = luaval_to_mat4(param_1,3,(Mat4 *)local_98,"cc.Scene:render");
      if ((((uVar5 & 1) == 0) || (iVar3 = lua_gettop(param_1), iVar3 < 4)) ||
         (uVar5 = luaval_is_usertype(param_1,4,"cc.Mat4",0), (uVar5 & 1) == 0)) goto LAB_007ef458;
      uVar7 = tolua_tousertype(param_1,4,0);
      (**(code **)(*plVar4 + 0x530))(plVar4,uVar6,local_98,uVar7);
      lua_settop(param_1,1);
LAB_007ef448:
      cocos2d::Mat4::~Mat4((Mat4 *)local_98);
      uVar9 = 1;
      goto LAB_007ef484;
    }
  }
  else if ((((iVar2 == 5) && (param_1 != (lua_State *)0x0)) &&
           (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
          (uVar5 = luaval_is_usertype(param_1,2,"cc.Renderer",0), (uVar5 & 1) != 0)) {
    uVar6 = tolua_tousertype(param_1,2,0);
    iVar3 = lua_gettop(param_1);
    if ((2 < iVar3) && (uVar5 = luaval_is_usertype(param_1,3,"cc.Mat4",0), (uVar5 & 1) != 0)) {
      uVar7 = tolua_tousertype(param_1,3,0);
      iVar3 = lua_gettop(param_1);
      if ((3 < iVar3) && (uVar5 = luaval_is_usertype(param_1,4,"cc.Mat4",0), (uVar5 & 1) != 0)) {
        uVar8 = tolua_tousertype(param_1,4,0);
        uVar5 = luaval_to_uint32(param_1,5,local_98,"cc.Scene:render");
        if ((uVar5 & 1) != 0) {
          (**(code **)(*plVar4 + 0x538))(plVar4,uVar6,uVar7,uVar8,local_98[0]);
          uVar9 = 1;
          lua_settop(param_1,1);
          goto LAB_007ef484;
        }
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","cc.Scene:render",
             iVar2 + -1,2);
  uVar9 = 0;
LAB_007ef484:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

