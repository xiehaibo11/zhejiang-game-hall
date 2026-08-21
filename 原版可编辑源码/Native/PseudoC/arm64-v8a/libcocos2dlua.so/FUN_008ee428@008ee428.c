
void FUN_008ee428(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  PackageItem *pPVar6;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_2c,"fairygui.UIObjectFactory:newObject");
    if ((uVar3 & 1) == 0) {
      if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
         (uVar3 = luaval_is_usertype(param_1,2,"fairygui.PackageItem",0), (uVar3 & 1) == 0)) {
        tolua_error(param_1,
                    "invalid arguments in function \'lua_fairygui_UIObjectFactory_newObject\'",0);
        goto LAB_008ee530;
      }
      pPVar6 = (PackageItem *)tolua_tousertype(param_1,2,0);
      pvVar4 = (void *)fairygui::UIObjectFactory::newObject(pPVar6);
    }
    else {
      pvVar4 = (void *)fairygui::UIObjectFactory::newObject(local_2c);
    }
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
      uVar5 = 1;
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "fairygui.GObject");
      uVar5 = 1;
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
               "fairygui.UIObjectFactory:newObject",iVar2 + -1,1);
LAB_008ee530:
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

