
/* lua_cocos2dx_spine_SkeletonAnimation_createWithJsonFile(lua_State*) */

void lua_cocos2dx_spine_SkeletonAnimation_createWithJsonFile(lua_State *param_1)

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
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 4) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"sp.SkeletonAnimation:createWithJsonFile"
                      );
    if ((uVar3 & 1) == 0) {
      iVar6 = 4;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar3 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_68,
                         "sp.SkeletonAnimation:createWithJsonFile");
      if (((uVar3 & 1) == 0) ||
         (uVar3 = luaval_to_number(param_1,4,&local_70,"sp.SkeletonAnimation:createWithJsonFile"),
         (uVar3 & 1) == 0)) {
        iVar6 = 4;
      }
      else {
        pvVar4 = (void *)spine::SkeletonAnimation::createWithJsonFile
                                   ((basic_string *)&local_50,(basic_string *)&local_68,
                                    (float)local_70);
        if (pvVar4 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "sp.SkeletonAnimation");
        }
        iVar6 = 1;
                    /* catch() { ... } // from try @ 0095329c with catch @ 009532fc */
      }
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if (iVar6 != 4) {
LAB_009532ac:
      uVar5 = 1;
      goto LAB_009532b0;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    luaval_to_std_string
              (param_1,2,(basic_string *)&local_50,"sp.SkeletonAnimation:createWithJsonFile");
LAB_00953274:
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"sp.SkeletonAnimation:createWithJsonFile"
                      );
    if ((uVar3 & 1) == 0) {
      iVar6 = 2;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar3 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_68,
                         "sp.SkeletonAnimation:createWithJsonFile");
      if ((uVar3 & 1) == 0) {
        iVar6 = 2;
      }
      else {
        pvVar4 = (void *)spine::SkeletonAnimation::createWithJsonFile
                                   ((basic_string *)&local_50,(basic_string *)&local_68,1.0);
        if (pvVar4 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "sp.SkeletonAnimation");
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
                    /* try { // try from 00953250 to 00a5329b has its CatchHandler @ 00953250
                       catch() { ... } // from try @ 00953250 with catch @ 00953250
                       catch() { ... } // from try @ 009532a0 with catch @ 00953250 */
    if (iVar6 != 2) goto LAB_009532ac;
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    luaval_to_std_string
              (param_1,2,(basic_string *)&local_50,"sp.SkeletonAnimation:createWithJsonFile");
    goto LAB_00953274;
  }
                    /* try { // try from 0095329c to 00a5329f has its CatchHandler @ 009532fc */
                    /* try { // try from 009532a0 to 00a5330f has its CatchHandler @ 00953250 */
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "sp.SkeletonAnimation:createWithJsonFile",iVar2 + -1,2);
  uVar5 = 0;
LAB_009532b0:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

