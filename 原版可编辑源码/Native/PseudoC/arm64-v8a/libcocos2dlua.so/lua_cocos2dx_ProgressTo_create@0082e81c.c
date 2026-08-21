
/* lua_cocos2dx_ProgressTo_create(lua_State*) */

void lua_cocos2dx_ProgressTo_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  double local_48;
  double dStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 2) {
    uVar3 = luaval_to_number(param_1,2,&dStack_40,"cc.ProgressTo:create");
    uVar4 = luaval_to_number(param_1,3,&local_48,"cc.ProgressTo:create");
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
      pvVar5 = (void *)cocos2d::ProgressTo::create((float)dStack_40,(float)local_48);
      if (pvVar5 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar6 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                   "cc.ProgressTo");
        uVar6 = 1;
      }
      goto LAB_0082e8fc;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ProgressTo_create\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.ProgressTo:create",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_0082e8fc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

