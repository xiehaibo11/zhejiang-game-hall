
/* lua_cocos2dx_studio_Armature_create(lua_State*) */

void lua_cocos2dx_studio_Armature_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  Bone *pBVar8;
  int iVar9;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 0) {
    pvVar6 = (void *)cocostudio::Armature::create();
    if (pvVar6 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 00938e80 to 00a38e93 has its CatchHandler @ 00938ed4 */
                    /* try { // try from 00938e94 to 00a38eef has its CatchHandler @ 00938dc0 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                 "ccs.Armature");
    }
LAB_00938ee0:
    uVar7 = 1;
  }
  else {
                    /* catch() { ... } // from try @ 00938ce0 with catch @ 00938da4
                       catch() { ... } // from try @ 00938d50 with catch @ 00938da4 */
    if (iVar2 == 3) {
      local_58 = 0;
      local_50 = (void *)0x0;
      local_60 = 0;
      uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"ccs.Armature:create");
                    /* try { // try from 00938e50 to 00a38e7f has its CatchHandler @ 00938dc0 */
      if ((((param_1 == (lua_State *)0x0) || (((uVar3 ^ 1) & 1) != 0)) ||
          (iVar4 = lua_gettop(param_1), iVar4 < 3)) ||
         ((uVar5 = luaval_is_usertype(param_1,3,"ccs.Bone",0), (uVar5 & 1) == 0 ||
          (pBVar8 = (Bone *)tolua_tousertype(param_1,3,0), (uVar3 & 1) == 0)))) {
        iVar9 = 6;
        iVar4 = 6;
      }
      else {
        pvVar6 = (void *)cocostudio::Armature::create((basic_string *)&local_60,pBVar8);
        if (pvVar6 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                     "ccs.Armature");
        }
        iVar9 = 1;
        iVar4 = 1;
      }
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
        iVar4 = iVar9;
      }
      if (iVar4 != 6) goto LAB_00938ee0;
    }
    else if (iVar2 == 2) {
      local_58 = 0;
      local_50 = (void *)0x0;
      local_60 = 0;
                    /* try { // try from 00938dc0 to 00a38e0f has its CatchHandler @ 00938dc0
                       catch() { ... } // from try @ 00938dc0 with catch @ 00938dc0
                       catch() { ... } // from try @ 00938e50 with catch @ 00938dc0
                       catch() { ... } // from try @ 00938e94 with catch @ 00938dc0 */
      uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"ccs.Armature:create");
      if ((uVar5 & 1) != 0) {
        pvVar6 = (void *)cocostudio::Armature::create((basic_string *)&local_60);
        if (pvVar6 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                     "ccs.Armature");
        }
        if ((local_60 & 1) != 0) {
          operator_delete(local_50);
                    /* try { // try from 00938e10 to 00a38e4f has its CatchHandler @ 00938ed4 */
        }
        goto LAB_00938ee0;
      }
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
               "ccs.Armature:create",iVar2 + -1,2);
    uVar7 = 0;
                    /* catch() { ... } // from try @ 00938e10 with catch @ 00938ed4
                       catch() { ... } // from try @ 00938e80 with catch @ 00938ed4 */
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

