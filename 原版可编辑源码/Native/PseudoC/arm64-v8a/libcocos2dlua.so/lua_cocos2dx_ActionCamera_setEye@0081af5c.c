
/* lua_cocos2dx_ActionCamera_setEye(lua_State*) */

undefined4 lua_cocos2dx_ActionCamera_setEye(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ActionCamera *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_58 [2];
  double local_48;
  double dStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ActionCamera *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    cocos2d::Vec3::Vec3((Vec3 *)local_58);
    uVar3 = luaval_to_vec3(param_1,2,(Vec3 *)local_58,"cc.ActionCamera:setEye");
    if ((uVar3 & 1) == 0) goto LAB_0081b064;
    cocos2d::ActionCamera::setEye(this,(Vec3 *)local_58);
  }
  else {
    if ((((iVar2 != 4) ||
         (uVar3 = luaval_to_number(param_1,2,local_58,"cc.ActionCamera:setEye"), (uVar3 & 1) == 0))
        || (uVar3 = luaval_to_number(param_1,3,&dStack_40,"cc.ActionCamera:setEye"),
           (uVar3 & 1) == 0)) ||
       (uVar3 = luaval_to_number(param_1,4,&local_48,"cc.ActionCamera:setEye"), (uVar3 & 1) == 0)) {
LAB_0081b064:
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.ActionCamera:setEye",iVar2 + -1,1);
      uVar4 = 0;
      goto LAB_0081b088;
    }
    cocos2d::ActionCamera::setEye(this,(float)local_58[0],(float)dStack_40,(float)local_48);
  }
  uVar4 = 1;
  lua_settop(param_1,1);
LAB_0081b088:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

