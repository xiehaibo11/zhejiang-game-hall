
undefined8 FUN_008f6ea0(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  basic_string *pbVar6;
  ulong uVar7;
  int local_74;
  ulong local_70 [2];
  void *local_60;
  Value aVStack_58 [16];
  long local_48;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008f6e10 with catch @ 008f6eb4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008f6dd0 with catch @ 008f6eb8
                        */
  lVar1 = tpidr_el0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008f6e20 with catch @ 008f6ebc
                        */
  local_48 = *(long *)(lVar1 + 0x28);
  pbVar6 = (basic_string *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
    local_70[1] = 0;
    local_60 = (void *)0x0;
    local_70[0] = 0;
    cocos2d::Value::Value(aVStack_58);
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)local_70,"fairygui.DragDropManager:startDrag");
    uVar4 = luaval_to_ccvalue(param_1,3,aVStack_58,"fairygui.DragDropManager:startDrag");
    uVar5 = luaval_to_int32(param_1,4,&local_74,"fairygui.DragDropManager:startDrag");
    if ((uVar3 & uVar4 & uVar5 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_DragDropManager_startDrag\'"
                  ,0);
    }
    else {
      fairygui::DragDropManager::startDrag(pbVar6,(Value *)local_70,(int)aVStack_58);
    }
LAB_008f7088:
    cocos2d::Value::~Value(aVStack_58);
  }
  else {
    if (iVar2 == 3) {
      local_70[1] = 0;
      local_60 = (void *)0x0;
      local_70[0] = 0;
      cocos2d::Value::Value(aVStack_58);
      uVar3 = luaval_to_std_string
                        (param_1,2,(basic_string *)local_70,"fairygui.DragDropManager:startDrag");
      uVar4 = luaval_to_ccvalue(param_1,3,aVStack_58,"fairygui.DragDropManager:startDrag");
      if ((uVar3 & uVar4 & 1) == 0) {
        tolua_error(param_1,
                    "invalid arguments in function \'lua_fairygui_DragDropManager_startDrag\'",0);
                    /* try { // try from 008f7070 to 009f70df has its CatchHandler @ 008f7070
                       catch() { ... } // from try @ 008f7070 with catch @ 008f7070
                       catch() { ... } // from try @ 008f70f0 with catch @ 008f7070 */
      }
      else {
        fairygui::DragDropManager::startDrag(pbVar6,(Value *)local_70,(int)aVStack_58);
      }
      goto LAB_008f7088;
    }
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "fairygui.DragDropManager:startDrag",iVar2 + -1,1);
      goto LAB_008f70a0;
    }
    local_70[1] = 0;
    local_60 = (void *)0x0;
    local_70[0] = 0;
    uVar7 = luaval_to_std_string
                      (param_1,2,(basic_string *)local_70,"fairygui.DragDropManager:startDrag");
    if ((uVar7 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_DragDropManager_startDrag\'"
                  ,0);
    }
    else {
      fairygui::DragDropManager::startDrag(pbVar6,(Value *)local_70,0x178fe18);
    }
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
LAB_008f70a0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

