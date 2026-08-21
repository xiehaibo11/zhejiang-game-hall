
void FUN_008da46c(undefined1 param_1 [16],undefined4 param_2,lua_State *param_3)

{
  long lVar1;
  int iVar2;
  GObject *this;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58 [2];
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GObject *)tolua_tousertype(param_3,1,0);
  iVar2 = lua_gettop(param_3);
  if (iVar2 + -1 == 1) {
    cocos2d::Rect::Rect(aRStack_48);
    uVar3 = luaval_to_rect(param_3,2,aRStack_48,"fairygui.GObject:localToGlobal");
    if ((uVar3 & 1) != 0) {
      fairygui::GObject::localToGlobal(this);
      rect_to_luaval(param_3,(Rect *)local_58);
      uVar4 = 1;
      goto LAB_008da51c;
    }
    local_58[0] = 0;
    uVar3 = luaval_to_vec2(param_3,2,(Vec2 *)local_58,"fairygui.GObject:localToGlobal");
    if ((uVar3 & 1) != 0) {
      local_60 = fairygui::GObject::localToGlobal(this,(Vec2 *)local_58);
      uStack_5c = param_2;
      vec2_to_luaval(param_3,(Vec2 *)&local_60);
      uVar4 = 1;
      goto LAB_008da51c;
    }
    tolua_error(param_3,"invalid arguments in function \'lua_fairygui_GObject_localToGlobal\'",0);
  }
  else {
    luaL_error(param_3,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:localToGlobal",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_008da51c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

