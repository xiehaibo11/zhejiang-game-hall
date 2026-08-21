
undefined8 FUN_008de5d4(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GComponent *this;
  int local_40;
  int iStack_3c;
  long local_38;
  
                    /* try { // try from 008de5d4 to 009de667 has its CatchHandler @ 008de490 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GComponent *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    luaval_to_int32(param_1,2,&iStack_3c,"fairygui.GComponent:removeChildren");
    luaval_to_int32(param_1,3,&local_40,"fairygui.GComponent:removeChildren");
    fairygui::GComponent::removeChildren(this,iStack_3c,local_40);
  }
  else if (iVar2 + -1 == 0) {
                    /* catch() { ... } // from try @ 008de52c with catch @ 008de62c */
    fairygui::GComponent::removeChildren(this,0,-1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComponent:removeChildren",iVar2 + -1,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

