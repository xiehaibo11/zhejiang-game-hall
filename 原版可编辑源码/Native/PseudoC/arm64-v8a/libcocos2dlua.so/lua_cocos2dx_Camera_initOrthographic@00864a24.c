
/* lua_cocos2dx_Camera_initOrthographic(lua_State*) */

void lua_cocos2dx_Camera_initOrthographic(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  Camera *this;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (Camera *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 4) {
    uVar4 = luaval_to_number(param_1,2,&dStack_60,"cc.Camera:initOrthographic");
    uVar5 = luaval_to_number(param_1,3,&local_68,"cc.Camera:initOrthographic");
    uVar6 = luaval_to_number(param_1,4,&dStack_70,"cc.Camera:initOrthographic");
    uVar7 = luaval_to_number(param_1,5,&local_78,"cc.Camera:initOrthographic");
    if (((((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) && ((uVar7 & 1) != 0)) {
      uVar3 = cocos2d::Camera::initOrthographic
                        (this,(float)dStack_60,(float)local_68,(float)dStack_70,(float)local_78);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar8 = 1;
      goto LAB_00864b54;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Camera_initOrthographic\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Camera:initOrthographic",iVar2 + -1,4);
  }
  uVar8 = 0;
LAB_00864b54:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

