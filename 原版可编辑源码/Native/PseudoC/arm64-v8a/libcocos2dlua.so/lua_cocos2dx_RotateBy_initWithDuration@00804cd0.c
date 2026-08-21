
/* lua_cocos2dx_RotateBy_initWithDuration(lua_State*) */

void lua_cocos2dx_RotateBy_initWithDuration(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  RotateBy *this;
  ulong uVar4;
  undefined8 uVar5;
  double local_58 [2];
  double local_48;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (RotateBy *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    uVar4 = luaval_to_number(param_1,2,local_58,"cc.RotateBy:initWithDuration");
    if (((uVar4 & 1) == 0) ||
       (uVar4 = luaval_to_number(param_1,3,&local_40,"cc.RotateBy:initWithDuration"),
       (uVar4 & 1) == 0)) {
      uVar4 = luaval_to_number(param_1,2,&local_40,"cc.RotateBy:initWithDuration");
      if ((uVar4 & 1) != 0) {
        cocos2d::Vec3::Vec3((Vec3 *)local_58);
        uVar4 = luaval_to_vec3(param_1,3,(Vec3 *)local_58,"cc.RotateBy:initWithDuration");
        if ((uVar4 & 1) != 0) {
          uVar3 = cocos2d::RotateBy::initWithDuration(this,(float)local_40,(Vec3 *)local_58);
          goto LAB_00804e3c;
        }
      }
LAB_00804e50:
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.RotateBy:initWithDuration",iVar2 + -1,2);
      uVar5 = 0;
      goto LAB_00804e74;
    }
    uVar3 = cocos2d::RotateBy::initWithDuration(this,(float)local_58[0],(float)local_40);
  }
  else {
    if ((((iVar2 != 4) ||
         (uVar4 = luaval_to_number(param_1,2,local_58,"cc.RotateBy:initWithDuration"),
         (uVar4 & 1) == 0)) ||
        (uVar4 = luaval_to_number(param_1,3,&local_40,"cc.RotateBy:initWithDuration"),
        (uVar4 & 1) == 0)) ||
       (uVar4 = luaval_to_number(param_1,4,&local_48,"cc.RotateBy:initWithDuration"),
       (uVar4 & 1) == 0)) goto LAB_00804e50;
    uVar3 = cocos2d::RotateBy::initWithDuration
                      (this,(float)local_58[0],(float)local_40,(float)local_48);
  }
LAB_00804e3c:
  tolua_pushboolean(param_1,uVar3 & 1);
  uVar5 = 1;
LAB_00804e74:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

