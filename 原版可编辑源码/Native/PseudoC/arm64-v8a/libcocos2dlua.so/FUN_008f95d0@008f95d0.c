
void FUN_008f95d0(lua_State *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  GTree *this;
  undefined8 uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (GTree *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 0) {
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    local_70 = (undefined8 *)0x0;
    fairygui::GTree::getSelectedNodes(this,(vector *)&local_70);
    lua_createtable(param_1,0,0);
    puVar2 = local_68;
    if (local_70 != local_68) {
      iVar3 = 1;
      puVar5 = local_70;
      do {
        pvVar6 = (void *)*puVar5;
        lua_pushnumber((double)iVar3,param_1);
        if (pvVar6 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
                    /* try { // try from 008f96a4 to 009f96ef has its CatchHandler @ 008f96a4
                       catch() { ... } // from try @ 008f96a4 with catch @ 008f96a4
                       catch() { ... } // from try @ 008f9734 with catch @ 008f96a4 */
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                     "fairygui.GTreeNode");
        }
        lua_rawset(param_1,0xfffffffd);
        puVar5 = puVar5 + 1;
        iVar3 = iVar3 + 1;
      } while (puVar2 != puVar5);
    }
    if (local_70 != (undefined8 *)0x0) {
      local_68 = local_70;
      operator_delete(local_70);
    }
    uVar4 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTree:getSelectedNodes",iVar3 + -1,0);
    uVar4 = 0;
  }
                    /* try { // try from 008f96f0 to 009f96f3 has its CatchHandler @ 008f9778 */
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

