
/* lua_cocos2dx_FlipX3D_initWithSize(lua_State*) */

void lua_cocos2dx_FlipX3D_initWithSize(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  double local_58;
  Size aSStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    cocos2d::Size::Size(aSStack_50);
    uVar5 = luaval_to_size(param_1,2,aSStack_50,"cc.FlipX3D:initWithSize");
    uVar6 = luaval_to_number(param_1,3,&local_58,"cc.FlipX3D:initWithSize");
    if (((uVar5 & 1) != 0) && ((uVar6 & 1) != 0)) {
      uVar3 = (**(code **)(*plVar4 + 0x58))((float)local_58,plVar4,aSStack_50);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar7 = 1;
      goto LAB_00828e68;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_FlipX3D_initWithSize\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.FlipX3D:initWithSize",iVar2 + -1,2);
  }
  uVar7 = 0;
LAB_00828e68:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

