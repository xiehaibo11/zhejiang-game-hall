
/* lua_cocos2dx_studio_Frame_setEasingParams(lua_State*) */

bool lua_cocos2dx_studio_Frame_setEasingParams(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  bool bVar5;
  void *local_50;
  void *local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 0093fab8 with catch @ 0093fb50 */
  iVar2 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 0093fad0 with catch @ 0093fb54 */
  if (iVar2 + -1 == 1) {
    local_48 = (void *)0x0;
    uStack_40 = 0;
    local_50 = (void *)0x0;
    uVar4 = luaval_to_std_vector_float(param_1,2,(vector *)&local_50,"ccs.Frame:setEasingParams");
    bVar5 = (uVar4 & 1) == 0;
    if (bVar5) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_Frame_setEasingParams\'",0);
    }
    else {
                    /* catch() { ... } // from try @ 0093fa84 with catch @ 0093fb84 */
      (**(code **)(*plVar3 + 0x60))(plVar3,&local_50);
      lua_settop(param_1,1);
    }
    bVar5 = !bVar5;
    if (local_50 != (void *)0x0) {
      local_48 = local_50;
      operator_delete(local_50);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Frame:setEasingParams",iVar2 + -1,1);
    bVar5 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

