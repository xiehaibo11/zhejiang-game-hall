
/* lua_cocos2dx_Node_getBoundingBox(lua_State*) */

void lua_cocos2dx_Node_getBoundingBox(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  if (plVar3 == (long *)0x0) {
    tolua_error(param_1,"invalid \'cobj\' in function \'lua_cocos2dx_Node_getBoundingBox\'",0);
  }
  else {
    iVar2 = lua_gettop(param_1);
    if (iVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x370))(auStack_48,plVar3);
      rect_to_luaval(param_1,auStack_48);
      uVar4 = 1;
      goto LAB_007ed0d8;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Node:getBoundingBox",iVar2 + -1,0);
  }
  uVar4 = 0;
LAB_007ed0d8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

