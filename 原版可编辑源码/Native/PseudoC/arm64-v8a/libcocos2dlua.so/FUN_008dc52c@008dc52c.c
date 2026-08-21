
void FUN_008dc52c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_40 = 0;
    uVar4 = luaval_to_vec2(param_1,2,(Vec2 *)&local_40,"fairygui.GObject:hitTest");
    if ((((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 2 < iVar2)) &&
        (uVar5 = luaval_is_usertype(param_1,3,"cc.Camera",0), (uVar5 & 1) != 0)) &&
       (uVar6 = tolua_tousertype(param_1,3,0), (uVar4 & 1) != 0)) {
      pvVar7 = (void *)(**(code **)(*plVar3 + 0x48))(plVar3,&local_40,uVar6);
                    /* try { // try from 008dc5f0 to 009dc5f7 has its CatchHandler @ 008dc8ac */
      if (pvVar7 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar6 = 1;
      }
      else {
                    /* try { // try from 008dc5f8 to 009dc647 has its CatchHandler @ 008dc8c0 */
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                   "fairygui.GObject");
        uVar6 = 1;
      }
      goto LAB_008dc650;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GObject_hitTest\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:hitTest",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_008dc650:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 008dc660 to 009dc67f has its CatchHandler @ 008dc8bc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

