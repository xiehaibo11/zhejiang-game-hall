
void FUN_008da774(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GObject *this;
  ulong uVar3;
  GearBase *pGVar4;
  char *pcVar5;
  undefined8 uVar6;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GObject *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"fairygui.GObject:getGear");
    if ((uVar3 & 1) != 0) {
      pGVar4 = (GearBase *)fairygui::GObject::getGear(this,local_3c);
      if (pGVar4 == (GearBase *)0x0) {
        lua_pushnil(param_1);
        uVar6 = 1;
      }
      else {
        pcVar5 = getLuaTypeName<fairygui::GearBase>(pGVar4,"fairygui.GearBase");
        tolua_pushusertype(param_1,pGVar4,pcVar5);
        uVar6 = 1;
      }
      goto LAB_008da848;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GObject_getGear\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:getGear",iVar2 + -1,1);
  }
  uVar6 = 0;
LAB_008da848:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

