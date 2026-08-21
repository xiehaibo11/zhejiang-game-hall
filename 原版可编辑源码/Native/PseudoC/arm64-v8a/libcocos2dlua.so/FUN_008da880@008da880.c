
void FUN_008da880(undefined1 param_1 [16],undefined4 param_2,lua_State *param_3)

{
  long lVar1;
  int iVar2;
  Rect *pRVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58 [2];
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pRVar3 = (Rect *)tolua_tousertype(param_3,1,0);
  iVar2 = lua_gettop(param_3);
  if (iVar2 + -1 == 1) {
    cocos2d::Rect::Rect(aRStack_48);
    uVar4 = luaval_to_rect(param_3,2,aRStack_48,"fairygui.GObject:globalToLocal");
    if ((uVar4 & 1) != 0) {
      fairygui::GObject::globalToLocal(pRVar3);
      rect_to_luaval(param_3,(Rect *)local_58);
      uVar5 = 1;
      goto LAB_008da930;
    }
    local_58[0] = 0;
    uVar4 = luaval_to_vec2(param_3,2,(Vec2 *)local_58,"fairygui.GObject:globalToLocal");
    if ((uVar4 & 1) != 0) {
      local_60 = fairygui::GObject::globalToLocal(pRVar3);
      uStack_5c = param_2;
      vec2_to_luaval(param_3,(Vec2 *)&local_60);
      uVar5 = 1;
      goto LAB_008da930;
    }
    tolua_error(param_3,"invalid arguments in function \'lua_fairygui_GObject_globalToLocal\'",0);
  }
  else {
    luaL_error(param_3,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:globalToLocal",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_008da930:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

