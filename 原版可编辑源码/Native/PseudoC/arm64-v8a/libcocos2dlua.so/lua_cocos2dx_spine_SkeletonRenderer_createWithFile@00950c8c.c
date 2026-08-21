
/* lua_cocos2dx_spine_SkeletonRenderer_createWithFile(lua_State*) */

void lua_cocos2dx_spine_SkeletonRenderer_createWithFile(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  double local_70;
  ulong local_68;
  undefined8 local_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
                    /* try { // try from 00950c8c to 00a50cbf has its CatchHandler @ 00950d10 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 4) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"sp.SkeletonRenderer:createWithFile");
    if ((uVar3 & 1) == 0) {
      iVar6 = 4;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar3 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_68,"sp.SkeletonRenderer:createWithFile");
      if (((uVar3 & 1) == 0) ||
         (uVar3 = luaval_to_number(param_1,4,&local_70,"sp.SkeletonRenderer:createWithFile"),
         (uVar3 & 1) == 0)) {
        iVar6 = 4;
      }
      else {
        pvVar4 = (void *)spine::SkeletonRenderer::createWithFile
                                   ((basic_string *)&local_50,(basic_string *)&local_68,
                                    (float)local_70);
        if (pvVar4 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "sp.SkeletonRenderer");
        }
        iVar6 = 1;
      }
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if (iVar6 != 4) {
LAB_00950ed4:
      uVar5 = 1;
      goto LAB_00950ed8;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    luaval_to_std_string(param_1,2,(basic_string *)&local_50,"sp.SkeletonRenderer:createWithFile");
LAB_00950e9c:
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
                    /* try { // try from 00950cc0 to 00a50d5b has its CatchHandler @ 00950b40 */
    if (iVar2 == 3) {
      local_48 = 0;
      local_40 = (void *)0x0;
      local_50 = 0;
      uVar3 = luaval_to_std_string
                        (param_1,2,(basic_string *)&local_50,"sp.SkeletonRenderer:createWithFile");
      if ((uVar3 & 1) == 0) {
        iVar6 = 2;
      }
      else {
        local_60 = 0;
        local_58 = (void *)0x0;
        local_68 = 0;
        uVar3 = luaval_to_std_string
                          (param_1,3,(basic_string *)&local_68,"sp.SkeletonRenderer:createWithFile")
        ;
                    /* catch() { ... } // from try @ 00950c74 with catch @ 00950d0c */
        if ((uVar3 & 1) == 0) {
          iVar6 = 2;
        }
        else {
                    /* catch() { ... } // from try @ 00950c8c with catch @ 00950d10 */
          pvVar4 = (void *)spine::SkeletonRenderer::createWithFile
                                     ((basic_string *)&local_50,(basic_string *)&local_68,1.0);
          if (pvVar4 == (void *)0x0) {
            lua_pushnil(param_1);
          }
          else {
            toluafix_pushusertype_ccobject
                      (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                       "sp.SkeletonRenderer");
                    /* catch() { ... } // from try @ 00950c40 with catch @ 00950d40 */
          }
          iVar6 = 1;
        }
        if ((local_68 & 1) != 0) {
          operator_delete(local_58);
        }
      }
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
      }
      if (iVar6 != 2) goto LAB_00950ed4;
      local_48 = 0;
      local_40 = (void *)0x0;
      local_50 = 0;
      luaval_to_std_string(param_1,2,(basic_string *)&local_50,"sp.SkeletonRenderer:createWithFile")
      ;
      goto LAB_00950e9c;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",&DAT_012d19d3,
             iVar2 + -1,2);
  uVar5 = 0;
LAB_00950ed8:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

