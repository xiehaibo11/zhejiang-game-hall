
/* lua_cocos2dx_studio_ActionFadeFrame_getAction(lua_State*) */

void lua_cocos2dx_studio_ActionFadeFrame_getAction(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 0092960c with catch @ 009296a4 */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 00929624 with catch @ 009296a8 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_number(param_1,2,&local_40,"ccs.ActionFadeFrame:getAction");
                    /* catch() { ... } // from try @ 009295d8 with catch @ 009296d8 */
    if ((uVar4 & 1) != 0) {
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x10))((float)local_40,plVar3);
      if (pvVar5 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar6 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                   "cc.ActionInterval");
        uVar6 = 1;
      }
      goto LAB_00929754;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_ActionFadeFrame_getAction\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionFadeFrame:getAction",iVar2 + -1,1);
  }
  uVar6 = 0;
LAB_00929754:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

