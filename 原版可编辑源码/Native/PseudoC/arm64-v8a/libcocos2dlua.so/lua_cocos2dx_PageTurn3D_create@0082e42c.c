
/* lua_cocos2dx_PageTurn3D_create(lua_State*) */

void lua_cocos2dx_PageTurn3D_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  Size aSStack_48 [8];
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 2) {
    cocos2d::Size::Size(aSStack_48);
    uVar3 = luaval_to_number(param_1,2,&local_40,"cc.PageTurn3D:create");
    uVar4 = luaval_to_size(param_1,3,aSStack_48,"cc.PageTurn3D:create");
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
      pvVar5 = (void *)cocos2d::PageTurn3D::create((float)local_40,aSStack_48);
      if (pvVar5 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar6 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                   "cc.PageTurn3D");
        uVar6 = 1;
      }
      goto LAB_0082e514;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_PageTurn3D_create\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.PageTurn3D:create",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_0082e514:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

