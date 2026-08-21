
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_spine_SkeletonRenderer_initWithBinaryFile(lua_State*) */

void lua_cocos2dx_spine_SkeletonRenderer_initWithBinaryFile(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  SkeletonRenderer *this;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
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
  this = (SkeletonRenderer *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 00950114 to 00a50127 has its CatchHandler @ 009501ac */
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"sp.SkeletonRenderer:initWithBinaryFile")
    ;
    if ((uVar3 & 1) == 0) {
      iVar5 = 4;
    }
    else {
                    /* try { // try from 0095012c to 00a5015f has its CatchHandler @ 009501b0 */
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar3 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_68,
                         "sp.SkeletonRenderer:initWithBinaryFile");
      if ((uVar3 & 1) == 0) {
        iVar5 = 4;
      }
      else {
                    /* try { // try from 00950160 to 00a501fb has its CatchHandler @ 0094ffe0 */
        uVar3 = luaval_to_number(param_1,4,&local_70,"sp.SkeletonRenderer:initWithBinaryFile");
        if ((uVar3 & 1) == 0) {
          iVar5 = 4;
        }
        else {
          spine::SkeletonRenderer::initWithBinaryFile
                    (this,(basic_string *)&local_50,(basic_string *)&local_68,(float)local_70);
          iVar5 = 1;
          lua_settop(param_1,1);
        }
      }
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
    }
                    /* catch() { ... } // from try @ 009500e0 with catch @ 009501e0 */
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if (iVar5 != 4) {
LAB_0095028c:
      uVar4 = 1;
      goto LAB_00950290;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    luaval_to_std_string
              (param_1,2,(basic_string *)&local_50,"sp.SkeletonRenderer:initWithBinaryFile");
LAB_00950254:
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"sp.SkeletonRenderer:initWithBinaryFile")
    ;
    if ((uVar3 & 1) == 0) {
      iVar5 = 2;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar3 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_68,
                         "sp.SkeletonRenderer:initWithBinaryFile");
      if ((uVar3 & 1) == 0) {
        iVar5 = 2;
      }
      else {
        spine::SkeletonRenderer::initWithBinaryFile
                  (this,(basic_string *)&local_50,(basic_string *)&local_68,1.0);
        iVar5 = 1;
                    /* try { // try from 009500e0 to 00a50113 has its CatchHandler @ 009501e0 */
        lua_settop(param_1,1);
      }
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
                    /* catch() { ... } // from try @ 00950114 with catch @ 009501ac */
                    /* catch() { ... } // from try @ 0095012c with catch @ 009501b0 */
    }
    if (iVar5 != 2) goto LAB_0095028c;
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    luaval_to_std_string
              (param_1,2,(basic_string *)&local_50,"sp.SkeletonRenderer:initWithBinaryFile");
    goto LAB_00950254;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d160e,
             iVar2 + -1,2);
  uVar4 = 0;
LAB_00950290:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

