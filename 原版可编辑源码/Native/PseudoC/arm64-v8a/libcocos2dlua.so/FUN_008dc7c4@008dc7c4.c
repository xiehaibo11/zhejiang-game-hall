
undefined8 FUN_008dc7c4(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  GObject *pGVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 unaff_x21;
  bool local_60 [4];
  int local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pGVar4 = (GObject *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 == 4) {
                    /* catch() { ... } // from try @ 008dc5f0 with catch @ 008dc8ac */
                    /* catch() { ... } // from try @ 008dc660 with catch @ 008dc8bc */
    if (((param_1 == (lua_State *)0x0) || (iVar3 = lua_gettop(param_1), iVar3 < 2)) ||
       (uVar5 = luaval_is_usertype(param_1,2,"fairygui.GObject",0), (uVar5 & 1) == 0)) {
      bVar2 = false;
    }
    else {
                    /* catch() { ... } // from try @ 008dc5f8 with catch @ 008dc8c0
                       catch() { ... } // from try @ 008dc6a4 with catch @ 008dc8c0 */
      unaff_x21 = tolua_tousertype(param_1,2,0);
      bVar2 = true;
    }
    uVar5 = luaval_to_int32(param_1,3,&local_5c,"fairygui.GObject:addRelation");
    uVar7 = luaval_to_boolean(param_1,4,local_60,"fairygui.GObject:addRelation");
    if (((bVar2) && ((uVar5 & 1) != 0)) && ((uVar7 & 1) != 0)) {
      fairygui::GObject::addRelation(pGVar4,unaff_x21,local_5c,local_60[0]);
      goto LAB_008dc98c;
    }
  }
  else {
    if (iVar3 != 3) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "fairygui.GObject:addRelation",iVar3 + -1,2);
                    /* try { // try from 008dc8fc to 009dc98f has its CatchHandler @ 008dc8fc
                       catch() { ... } // from try @ 008dc8fc with catch @ 008dc8fc
                       catch() { ... } // from try @ 008dcc34 with catch @ 008dc8fc */
      goto LAB_008dc98c;
    }
    if (((param_1 == (lua_State *)0x0) || (iVar3 = lua_gettop(param_1), iVar3 < 2)) ||
       (uVar5 = luaval_is_usertype(param_1,2,"fairygui.GObject",0), (uVar5 & 1) == 0)) {
      luaval_to_int32(param_1,3,&local_5c,"fairygui.GObject:addRelation");
    }
    else {
      uVar6 = tolua_tousertype(param_1,2,0);
                    /* try { // try from 008dc860 to 009dc8fb has its CatchHandler @ 008dc528 */
      uVar5 = luaval_to_int32(param_1,3,&local_5c,"fairygui.GObject:addRelation");
      if ((uVar5 & 1) != 0) {
        fairygui::GObject::addRelation(pGVar4,uVar6,local_5c,0);
        goto LAB_008dc98c;
      }
    }
  }
  tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GObject_addRelation\'",0);
LAB_008dc98c:
                    /* try { // try from 008dc990 to 009dc99b has its CatchHandler @ 008dcc80 */
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 008dc99c to 009dca5b has its CatchHandler @ 008dcc94 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

