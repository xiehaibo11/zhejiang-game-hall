
/* lua_cocos2dx_Camera_project(lua_State*) */

void lua_cocos2dx_Camera_project(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Camera *this;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_50 [2];
  Vec3 aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Camera *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Vec3::Vec3(aVStack_48);
    uVar3 = luaval_to_vec3(param_1,2,aVStack_48,"cc.Camera:project");
    if ((uVar3 & 1) != 0) {
      local_50[0] = cocos2d::Camera::project(this,aVStack_48);
      vec2_to_luaval(param_1,(Vec2 *)local_50);
      uVar4 = 1;
      goto LAB_008651b8;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Camera_project\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Camera:project",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_008651b8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

