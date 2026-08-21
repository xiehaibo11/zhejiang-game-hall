
/* lua_cocos2dx_extension_ControlColourPicker_colourSliderValueChanged(lua_State*) */

undefined4 lua_cocos2dx_extension_ControlColourPicker_colourSliderValueChanged(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 009a4cf0 to 00aa4d7b has its CatchHandler @ 009a4cf0
                       catch() { ... } // from try @ 009a4cf0 with catch @ 009a4cf0
                       catch() { ... } // from try @ 009a4db0 with catch @ 009a4cf0 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Ref",0), (uVar4 & 1) == 0)) {
                    /* try { // try from 009a4db0 to 00aa4e2b has its CatchHandler @ 009a4cf0 */
      luaval_to_int32(param_1,3,&local_3c,"cc.ControlColourPicker:colourSliderValueChanged");
    }
    else {
      uVar5 = tolua_tousertype(param_1,2,0);
      uVar4 = luaval_to_int32(param_1,3,&local_3c,"cc.ControlColourPicker:colourSliderValueChanged")
      ;
      if ((uVar4 & 1) != 0) {
        cocos2d::extension::ControlColourPicker::colourSliderValueChanged(uVar3,uVar5,local_3c);
                    /* try { // try from 009a4d7c to 00aa4daf has its CatchHandler @ 009a4e18 */
        uVar6 = 1;
        lua_settop(param_1,1);
        goto LAB_009a4ddc;
      }
    }
    tolua_error(param_1,&DAT_012e50e4,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e50b4,
               iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_009a4ddc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

