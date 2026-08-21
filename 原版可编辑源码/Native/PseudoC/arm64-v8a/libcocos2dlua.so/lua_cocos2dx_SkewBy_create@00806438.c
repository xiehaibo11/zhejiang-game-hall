
/* lua_cocos2dx_SkewBy_create(lua_State*) */

void lua_cocos2dx_SkewBy_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  double local_60;
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 3) {
    uVar3 = luaval_to_number(param_1,2,&dStack_50,"cc.SkewBy:create");
    uVar4 = luaval_to_number(param_1,3,&local_58,"cc.SkewBy:create");
    uVar5 = luaval_to_number(param_1,4,&local_60,"cc.SkewBy:create");
    if ((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) {
      pvVar6 = (void *)cocos2d::SkewBy::create((float)dStack_50,(float)local_58,(float)local_60);
      if (pvVar6 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar7 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                   "cc.SkewBy");
        uVar7 = 1;
      }
      goto LAB_00806540;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_SkewBy_create\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.SkewBy:create",iVar2 + -1,3);
  }
  uVar7 = 0;
LAB_00806540:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

