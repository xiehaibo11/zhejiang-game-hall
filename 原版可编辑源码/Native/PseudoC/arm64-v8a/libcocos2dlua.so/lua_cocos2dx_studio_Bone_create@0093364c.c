
/* lua_cocos2dx_studio_Bone_create(lua_State*) */

void lua_cocos2dx_studio_Bone_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 0) {
    pvVar4 = (void *)cocostudio::Bone::create();
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 009336f4 to 00a336f7 has its CatchHandler @ 00933784 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,"ccs.Bone"
                );
    }
LAB_0093374c:
    uVar5 = 1;
  }
  else {
    if (iVar2 == 2) {
      local_50[1] = 0;
      local_40 = (void *)0x0;
      local_50[0] = 0;
      uVar3 = luaval_to_std_string(param_1,2,(basic_string *)local_50,"ccs.Bone:create");
      if ((uVar3 & 1) != 0) {
                    /* try { // try from 009336a8 to 00a336f3 has its CatchHandler @ 009336a8
                       catch() { ... } // from try @ 009336a8 with catch @ 009336a8
                       catch() { ... } // from try @ 0093373c with catch @ 009336a8 */
        pvVar4 = (void *)cocostudio::Bone::create((basic_string *)local_50);
        if (pvVar4 == (void *)0x0) {
                    /* catch() { ... } // from try @ 00933718 with catch @ 00933774 */
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "ccs.Bone");
        }
        if ((local_50[0] & 1) != 0) {
          operator_delete(local_40);
        }
        goto LAB_0093374c;
      }
      if ((local_50[0] & 1) != 0) {
                    /* try { // try from 00933718 to 00a3371b has its CatchHandler @ 00933774 */
        operator_delete(local_40);
      }
    }
                    /* try { // try from 00933738 to 00a3373b has its CatchHandler @ 00933770 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d","ccs.Bone:create",
               iVar2 + -1,0);
                    /* try { // try from 0093373c to 00a33797 has its CatchHandler @ 009336a8 */
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00933738 with catch @ 00933770 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

