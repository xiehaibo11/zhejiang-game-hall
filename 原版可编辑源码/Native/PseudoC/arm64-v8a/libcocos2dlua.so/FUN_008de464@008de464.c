
void FUN_008de464(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  void *pvVar6;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 008de490 to 009de52b has its CatchHandler @ 008de490
                       catch() { ... } // from try @ 008de490 with catch @ 008de490
                       catch() { ... } // from try @ 008de5d4 with catch @ 008de490 */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"fairygui.GObject",0), (uVar4 & 1) == 0)) {
      luaval_to_int32(param_1,3,&local_3c,"fairygui.GComponent:addChildAt");
    }
    else {
      uVar5 = tolua_tousertype(param_1,2,0);
      uVar4 = luaval_to_int32(param_1,3,&local_3c,"fairygui.GComponent:addChildAt");
      if ((uVar4 & 1) != 0) {
        pvVar6 = (void *)(**(code **)(*plVar3 + 0xb0))(plVar3,uVar5,local_3c);
        if (pvVar6 == (void *)0x0) {
          lua_pushnil(param_1);
          uVar5 = 1;
        }
        else {
                    /* try { // try from 008de52c to 009de5d3 has its CatchHandler @ 008de62c */
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                     "fairygui.GObject");
          uVar5 = 1;
        }
        goto LAB_008de59c;
      }
    }
    tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GComponent_addChildAt\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012a8110,
               iVar2 + -1,2);
  }
  uVar5 = 0;
LAB_008de59c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

