
/* lua_cocos2dx_OrbitCamera_initWithDuration(lua_State*) */

void lua_cocos2dx_OrbitCamera_initWithDuration(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  OrbitCamera *this;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this = (OrbitCamera *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 7) {
    uVar4 = luaval_to_number(param_1,2,&dStack_70,"cc.OrbitCamera:initWithDuration");
    uVar5 = luaval_to_number(param_1,3,&local_78,"cc.OrbitCamera:initWithDuration");
    uVar6 = luaval_to_number(param_1,4,&dStack_80,"cc.OrbitCamera:initWithDuration");
    uVar7 = luaval_to_number(param_1,5,&local_88,"cc.OrbitCamera:initWithDuration");
    uVar8 = luaval_to_number(param_1,6,&dStack_90,"cc.OrbitCamera:initWithDuration");
    uVar9 = luaval_to_number(param_1,7,&local_98,"cc.OrbitCamera:initWithDuration");
    uVar10 = luaval_to_number(param_1,8,&local_a0,"cc.OrbitCamera:initWithDuration");
    if (((((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) &&
       ((((uVar7 & 1) != 0 && ((uVar8 & 1) != 0)) && (((uVar9 & 1) != 0 && ((uVar10 & 1) != 0))))))
    {
      uVar3 = cocos2d::OrbitCamera::initWithDuration
                        (this,(float)dStack_70,(float)local_78,(float)dStack_80,(float)local_88,
                         (float)dStack_90,(float)local_98,(float)local_a0);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar11 = 1;
      goto LAB_0081b864;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_OrbitCamera_initWithDuration\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.OrbitCamera:initWithDuration",iVar2 + -1,7);
  }
  uVar11 = 0;
LAB_0081b864:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}

