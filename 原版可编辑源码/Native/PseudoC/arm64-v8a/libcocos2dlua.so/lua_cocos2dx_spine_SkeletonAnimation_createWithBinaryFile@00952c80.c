
/* lua_cocos2dx_spine_SkeletonAnimation_createWithBinaryFile(lua_State*) */

void lua_cocos2dx_spine_SkeletonAnimation_createWithBinaryFile(lua_State *param_1)

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
                    /* try { // try from 00952ca0 to 00a52ceb has its CatchHandler @ 00952ca0
                       catch() { ... } // from try @ 00952ca0 with catch @ 00952ca0
                       catch() { ... } // from try @ 00952cf0 with catch @ 00952ca0 */
  iVar2 = lua_gettop();
  if (iVar2 == 4) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* catch() { ... } // from try @ 00952cec with catch @ 00952d4c */
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,
                       "sp.SkeletonAnimation:createWithBinaryFile");
    if ((uVar3 & 1) == 0) {
      iVar6 = 4;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
                    /* try { // try from 00952d60 to 00a52e5f has its CatchHandler @ 00952d60
                       catch() { ... } // from try @ 00952d60 with catch @ 00952d60
                       catch() { ... } // from try @ 00952ee0 with catch @ 00952d60 */
      local_68 = 0;
      uVar3 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_68,
                         "sp.SkeletonAnimation:createWithBinaryFile");
      if (((uVar3 & 1) == 0) ||
         (uVar3 = luaval_to_number(param_1,4,&local_70,"sp.SkeletonAnimation:createWithBinaryFile"),
         (uVar3 & 1) == 0)) {
        iVar6 = 4;
      }
      else {
        pvVar4 = (void *)spine::SkeletonAnimation::createWithBinaryFile
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
      }
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if (iVar6 != 4) {
LAB_00952ec8:
      uVar5 = 1;
      goto LAB_00952ecc;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    luaval_to_std_string
              (param_1,2,(basic_string *)&local_50,"sp.SkeletonAnimation:createWithBinaryFile");
LAB_00952e90:
                    /* try { // try from 00952e94 to 00a52ea7 has its CatchHandler @ 00952f2c */
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,
                       "sp.SkeletonAnimation:createWithBinaryFile");
    if ((uVar3 & 1) == 0) {
      iVar6 = 2;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
                    /* try { // try from 00952cec to 00a52cef has its CatchHandler @ 00952d4c */
                    /* try { // try from 00952cf0 to 00a52d5f has its CatchHandler @ 00952ca0 */
      uVar3 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_68,
                         "sp.SkeletonAnimation:createWithBinaryFile");
      if ((uVar3 & 1) == 0) {
        iVar6 = 2;
      }
      else {
        pvVar4 = (void *)spine::SkeletonAnimation::createWithBinaryFile
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
                    /* try { // try from 00952e60 to 00a52e93 has its CatchHandler @ 00952f60 */
      operator_delete(local_40);
    }
    if (iVar6 != 2) goto LAB_00952ec8;
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    luaval_to_std_string
              (param_1,2,(basic_string *)&local_50,"sp.SkeletonAnimation:createWithBinaryFile");
    goto LAB_00952e90;
  }
                    /* try { // try from 00952eac to 00a52edf has its CatchHandler @ 00952f30 */
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "sp.SkeletonAnimation:createWithBinaryFile",iVar2 + -1,2);
  uVar5 = 0;
LAB_00952ecc:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
                    /* try { // try from 00952ee0 to 00a52f7b has its CatchHandler @ 00952d60 */
  return;
}

