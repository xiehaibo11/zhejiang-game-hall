
/* lua_cocos2dx_MoveTo_create(lua_State*) */

void lua_cocos2dx_MoveTo_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  double local_50 [2];
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 2) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"cc.MoveTo:create");
    if ((uVar3 & 1) != 0) {
      cocos2d::Vec3::Vec3((Vec3 *)local_50);
      uVar3 = luaval_to_vec3(param_1,3,(Vec3 *)local_50,"cc.MoveTo:create");
      if ((uVar3 & 1) == 0) goto LAB_00805a64;
      pvVar4 = (void *)cocos2d::MoveTo::create((float)local_40,(Vec3 *)local_50);
joined_r0x00805ab0:
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar5 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.MoveTo");
        uVar5 = 1;
      }
      goto LAB_00805ae8;
    }
LAB_00805a64:
    uVar3 = luaval_to_number(param_1,2,local_50,"cc.MoveTo:create");
    if ((uVar3 & 1) != 0) {
      local_40 = 0.0;
      uVar3 = luaval_to_vec2(param_1,3,(Vec2 *)&local_40,"cc.MoveTo:create");
      if ((uVar3 & 1) != 0) {
        pvVar4 = (void *)cocos2d::MoveTo::create((float)local_50[0],(Vec2 *)&local_40);
        goto joined_r0x00805ab0;
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d","cc.MoveTo:create",
             iVar2 + -1,2);
  uVar5 = 0;
LAB_00805ae8:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

