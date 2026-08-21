
/* lua_cocos2dx_csloader_CSLoader_createNodeWithVisibleSize(lua_State*) */

void lua_cocos2dx_csloader_CSLoader_createNodeWithVisibleSize(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  code *pcVar6;
  int iVar7;
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  ulong local_70;
  undefined8 local_68;
  void *local_60;
  ulong *local_50;
  long local_38;
  int iVar8;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 2) {
    local_68 = 0;
    local_60 = (void *)0x0;
    local_70 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_70,"cc.CSLoader:createNodeWithVisibleSize");
    if ((uVar3 & 1) == 0) {
      if ((local_70 & 1) != 0) {
        operator_delete(local_60);
      }
      goto LAB_009272b8;
    }
    pvVar4 = (void *)cocos2d::CSLoader::createNodeWithVisibleSize((basic_string *)&local_70);
    if (pvVar4 == (void *)0x0) {
                    /* try { // try from 0092732c to 00a2732f has its CatchHandler @ 0092738c */
      lua_pushnil(param_1);
                    /* try { // try from 00927330 to 00a2739f has its CatchHandler @ 009272e0 */
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,"cc.Node")
      ;
    }
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
LAB_009272a0:
    uVar5 = 1;
  }
  else {
    if (iVar2 == 3) {
      local_80 = 0;
      local_78 = (void *)0x0;
      local_88 = 0;
      uVar3 = luaval_to_std_string
                        (param_1,2,(basic_string *)&local_88,"cc.CSLoader:createNodeWithVisibleSize"
                        );
      if ((uVar3 & 1) == 0) {
        iVar8 = 2;
        iVar7 = 2;
      }
      else {
        local_50 = (ulong *)0x0;
        pvVar4 = (void *)cocos2d::CSLoader::createNodeWithVisibleSize
                                   ((basic_string *)&local_88,(function *)&local_70);
        if (pvVar4 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "cc.Node");
        }
        if (&local_70 == local_50) {
          pcVar6 = *(code **)(*local_50 + 0x20);
LAB_0092733c:
          (*pcVar6)();
        }
        else if (local_50 != (ulong *)0x0) {
          pcVar6 = *(code **)(*local_50 + 0x28);
          goto LAB_0092733c;
        }
        iVar8 = 1;
        iVar7 = 1;
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
        iVar7 = iVar8;
      }
      if (iVar7 != 2) goto LAB_009272a0;
    }
LAB_009272b8:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
               "cc.CSLoader:createNodeWithVisibleSize",iVar2 + -1,1);
    uVar5 = 0;
  }
                    /* try { // try from 009272e0 to 00a2732b has its CatchHandler @ 009272e0
                       catch() { ... } // from try @ 009272e0 with catch @ 009272e0
                       catch() { ... } // from try @ 00927330 with catch @ 009272e0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

