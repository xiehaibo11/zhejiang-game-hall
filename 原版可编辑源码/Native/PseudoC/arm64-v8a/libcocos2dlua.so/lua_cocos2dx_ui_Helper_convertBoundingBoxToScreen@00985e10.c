
/* lua_cocos2dx_ui_Helper_convertBoundingBoxToScreen(lua_State*) */

void lua_cocos2dx_ui_Helper_convertBoundingBoxToScreen(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  Node *pNVar4;
  undefined8 uVar5;
  Rect aRStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar3 & 1) != 0)) {
      pNVar4 = (Node *)tolua_tousertype(param_1,2,0);
      cocos2d::ui::Helper::convertBoundingBoxToScreen(pNVar4);
      rect_to_luaval(param_1,aRStack_38);
      uVar5 = 1;
      goto LAB_00985ed4;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_Helper_convertBoundingBoxToScreen\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccui.Helper:convertBoundingBoxToScreen",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00985ed4:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

