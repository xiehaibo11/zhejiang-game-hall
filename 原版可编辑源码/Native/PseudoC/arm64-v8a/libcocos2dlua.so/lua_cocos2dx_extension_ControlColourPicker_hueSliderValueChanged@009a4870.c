
/* lua_cocos2dx_extension_ControlColourPicker_hueSliderValueChanged(lua_State*) */

undefined4 lua_cocos2dx_extension_ControlColourPicker_hueSliderValueChanged(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int local_3c;
  long local_38;
  
                    /* try { // try from 009a4874 to 00aa48bb has its CatchHandler @ 009a4874
                       catch(type#1 @ 00000000) { ... } // from try @ 009a4874 with catch @ 009a4874
                       catch(type#1 @ 00000000) { ... } // from try @ 009a4950 with catch @ 009a4874
                       catch(type#1 @ 00000000) { ... } // from try @ 009a49bc with catch @ 009a4874
                       catch(type#1 @ 00000000) { ... } // from try @ 009a4a34 with catch @ 009a4874
                        */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
                    /* try { // try from 009a48bc to 00aa48eb has its CatchHandler @ 009a4a0c */
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Ref",0), (uVar4 & 1) == 0)) {
      luaval_to_int32(param_1,3,&local_3c,"cc.ControlColourPicker:hueSliderValueChanged");
    }
    else {
      uVar5 = tolua_tousertype(param_1,2,0);
                    /* try { // try from 009a4904 to 00aa4943 has its CatchHandler @ 009a4a1c */
      uVar4 = luaval_to_int32(param_1,3,&local_3c,"cc.ControlColourPicker:hueSliderValueChanged");
      if ((uVar4 & 1) != 0) {
        cocos2d::extension::ControlColourPicker::hueSliderValueChanged(uVar3,uVar5,local_3c);
        uVar6 = 1;
        lua_settop(param_1,1);
        goto LAB_009a498c;
      }
    }
    tolua_error(param_1,&DAT_012e4f08,0);
  }
  else {
                    /* try { // try from 009a4948 to 00aa494f has its CatchHandler @ 009a4a14 */
                    /* try { // try from 009a4950 to 00aa4997 has its CatchHandler @ 009a4874 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlColourPicker:hueSliderValueChanged",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_009a498c:
                    /* try { // try from 009a4998 to 00aa49a7 has its CatchHandler @ 009a4a10 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

