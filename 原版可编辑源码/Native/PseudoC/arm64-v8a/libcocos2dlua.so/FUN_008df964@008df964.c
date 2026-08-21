
undefined4 FUN_008df964(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  GComponent *this;
  ulong uVar4;
  void *pvVar5;
  undefined4 uVar6;
  GGroup *unaff_x21;
  uint uVar7;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 008df98c to 009df993 has its CatchHandler @ 008dfb0c */
  this = (GComponent *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 008df998 to 009df99f has its CatchHandler @ 008dfaf4 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"fairygui.GGroup",0), (uVar4 & 1) == 0)) {
      uVar7 = 0;
    }
    else {
                    /* try { // try from 008df9f4 to 009df9fb has its CatchHandler @ 008dfadc */
      unaff_x21 = (GGroup *)tolua_tousertype(param_1,2,0);
                    /* try { // try from 008df9fc to 009dfb23 has its CatchHandler @ 008df7dc */
      uVar7 = 1;
    }
    uVar3 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_60,"fairygui.GComponent:getChildInGroup");
    if ((uVar7 & uVar3) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_fairygui_GComponent_getChildInGroup\'",0);
      uVar6 = 0;
    }
    else {
      pvVar5 = (void *)fairygui::GComponent::getChildInGroup
                                 (this,unaff_x21,(basic_string *)&local_60);
      if (pvVar5 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                   "fairygui.GObject");
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008df9f4 with catch @ 008dfadc
                        */
      uVar6 = 1;
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComponent:getChildInGroup",iVar2 + -1,2);
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

