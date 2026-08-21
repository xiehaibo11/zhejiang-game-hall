
/* lua_cocos2dx_ui_Button_getNormalTextureSize(lua_State*) */

void lua_cocos2dx_ui_Button_getNormalTextureSize(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
                    /* try { // try from 0096bdb4 to 00a6bde7 has its CatchHandler @ 0096beb4 */
    (**(code **)(*plVar3 + 0x690))(aSStack_40,plVar3);
    size_to_luaval(param_1,aSStack_40);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Button:getNormalTextureSize",iVar2,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0096bde8 to 00a6bdfb has its CatchHandler @ 0096be80 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

