
/* lua_cocos2dx_Camera_unproject(lua_State*) */

void lua_cocos2dx_Camera_unproject(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Camera *this;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  Size aSStack_70 [8];
  undefined4 local_68 [4];
  Vec3 aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Camera *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
    cocos2d::Size::Size(aSStack_70);
    cocos2d::Vec3::Vec3(aVStack_58);
    cocos2d::Vec3::Vec3((Vec3 *)local_68);
    uVar3 = luaval_to_size(param_1,2,aSStack_70,"cc.Camera:unproject");
    uVar4 = luaval_to_vec3(param_1,3,aVStack_58,"cc.Camera:unproject");
    uVar5 = luaval_to_vec3(param_1,4,(Vec3 *)local_68,"cc.Camera:unproject");
    uVar6 = 0;
    if ((((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) || ((uVar5 & 1) == 0)) goto LAB_008a7c48;
    cocos2d::Camera::unproject(this,aSStack_70,aVStack_58,(Vec3 *)local_68);
LAB_008a7bf8:
    vec3_to_luaval(param_1,(Vec3 *)local_68);
    uVar6 = 1;
  }
  else {
    if (iVar2 == 2) {
      cocos2d::Vec3::Vec3(aVStack_58);
      uVar3 = luaval_to_vec3(param_1,2,aVStack_58,"cc.Camera:project");
      if ((uVar3 & 1) != 0) {
        local_68[0] = cocos2d::Camera::unproject(this,aVStack_58);
        goto LAB_008a7bf8;
      }
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Camera_project\'",0);
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.Camera:unproject",iVar2 + -1,3);
    }
    uVar6 = 0;
  }
LAB_008a7c48:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

