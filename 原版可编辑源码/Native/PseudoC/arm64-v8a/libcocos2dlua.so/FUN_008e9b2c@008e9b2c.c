
void FUN_008e9b2c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  Scene *pSVar4;
  void *pvVar5;
  undefined8 uVar6;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 3) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Scene",0), (uVar3 & 1) == 0)) {
      luaval_to_int32(param_1,3,&local_3c,"fairygui.GRoot:create");
    }
    else {
      pSVar4 = (Scene *)tolua_tousertype(param_1,2,0);
      uVar3 = luaval_to_int32(param_1,3,&local_3c,"fairygui.GRoot:create");
      if ((uVar3 & 1) != 0) {
        pvVar5 = (void *)fairygui::GRoot::create(pSVar4,local_3c);
        goto joined_r0x008e9c40;
      }
    }
LAB_008e9c90:
    tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GRoot_create\'",0);
  }
  else {
    if (iVar2 == 2) {
      if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
         (uVar3 = luaval_is_usertype(param_1,2,"cc.Scene",0), (uVar3 & 1) != 0)) {
        pSVar4 = (Scene *)tolua_tousertype(param_1,2,0);
        pvVar5 = (void *)fairygui::GRoot::create(pSVar4,1000);
joined_r0x008e9c40:
        if (pvVar5 == (void *)0x0) {
          lua_pushnil(param_1);
          uVar6 = 1;
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                     "fairygui.GRoot");
          uVar6 = 1;
        }
        goto LAB_008e9ca8;
      }
      goto LAB_008e9c90;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "fairygui.GRoot:create",iVar2 + -1,1);
  }
  uVar6 = 0;
LAB_008e9ca8:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

