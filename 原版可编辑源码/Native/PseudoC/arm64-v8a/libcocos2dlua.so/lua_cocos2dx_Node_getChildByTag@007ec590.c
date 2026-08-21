
/* lua_cocos2dx_Node_getChildByTag(lua_State*) */

void lua_cocos2dx_Node_getChildByTag(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  char *pcVar7;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  if (plVar3 == (long *)0x0) {
    pcVar7 = "invalid \'cobj\' in function \'lua_cocos2dx_Node_getChildByTag\'";
LAB_007ec668:
    tolua_error(param_1,pcVar7,0);
  }
  else {
    iVar2 = lua_gettop(param_1);
    if (iVar2 + -1 == 1) {
      uVar4 = luaval_to_int32(param_1,2,&local_3c,"cc.Node:getChildByTag");
      if ((uVar4 & 1) != 0) {
        pvVar5 = (void *)(**(code **)(*plVar3 + 0x228))(plVar3,local_3c);
        if (pvVar5 == (void *)0x0) {
          lua_pushnil(param_1);
          uVar6 = 1;
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                     "cc.Node");
          uVar6 = 1;
        }
        goto LAB_007ec678;
      }
      pcVar7 = "invalid arguments in function \'lua_cocos2dx_Node_getChildByTag\'";
      goto LAB_007ec668;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Node:getChildByTag",iVar2 + -1,1);
  }
  uVar6 = 0;
LAB_007ec678:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

