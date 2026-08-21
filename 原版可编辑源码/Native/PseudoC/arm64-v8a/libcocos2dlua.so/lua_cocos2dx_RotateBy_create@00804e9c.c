
/* lua_cocos2dx_RotateBy_create(lua_State*) */

void lua_cocos2dx_RotateBy_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  double local_58 [2];
  double local_48;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 3) {
    uVar3 = luaval_to_number(param_1,2,local_58,"cc.RotateBy:create");
    if (((uVar3 & 1) == 0) ||
       (uVar3 = luaval_to_number(param_1,3,&local_40,"cc.RotateBy:create"), (uVar3 & 1) == 0)) {
      uVar3 = luaval_to_number(param_1,2,&local_40,"cc.RotateBy:create");
      if ((uVar3 & 1) != 0) {
        cocos2d::Vec3::Vec3((Vec3 *)local_58);
        uVar3 = luaval_to_vec3(param_1,3,(Vec3 *)local_58,"cc.RotateBy:create");
        if ((uVar3 & 1) != 0) {
          pvVar4 = (void *)cocos2d::RotateBy::create((float)local_40,(Vec3 *)local_58);
          goto joined_r0x00805010;
        }
      }
LAB_00805024:
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
                 "cc.RotateBy:create",iVar2 + -1,2);
      uVar5 = 0;
      goto LAB_00805048;
    }
    pvVar4 = (void *)cocos2d::RotateBy::create((float)local_58[0],(float)local_40);
  }
  else {
    if ((((iVar2 != 4) ||
         (uVar3 = luaval_to_number(param_1,2,local_58,"cc.RotateBy:create"), (uVar3 & 1) == 0)) ||
        (uVar3 = luaval_to_number(param_1,3,&local_40,"cc.RotateBy:create"), (uVar3 & 1) == 0)) ||
       (uVar3 = luaval_to_number(param_1,4,&local_48,"cc.RotateBy:create"), (uVar3 & 1) == 0))
    goto LAB_00805024;
    pvVar4 = (void *)cocos2d::RotateBy::create((float)local_58[0],(float)local_40,(float)local_48);
  }
joined_r0x00805010:
  if (pvVar4 == (void *)0x0) {
    lua_pushnil(param_1);
    uVar5 = 1;
  }
  else {
    toluafix_pushusertype_ccobject
              (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
               "cc.RotateBy");
    uVar5 = 1;
  }
LAB_00805048:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

