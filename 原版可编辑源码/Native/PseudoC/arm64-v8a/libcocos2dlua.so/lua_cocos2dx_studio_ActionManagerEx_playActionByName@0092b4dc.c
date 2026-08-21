
/* lua_cocos2dx_studio_ActionManagerEx_playActionByName(lua_State*) */

void lua_cocos2dx_studio_ActionManagerEx_playActionByName(lua_State *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ActionManagerEx *this;
  ulong uVar7;
  undefined8 uVar8;
  CallFunc *pCVar9;
  void *pvVar10;
  ulong local_88;
  undefined8 local_80;
  char *local_78;
  ulong local_70;
  undefined8 local_68;
  char *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  this = (ActionManagerEx *)tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 == 3) {
    local_68 = 0;
    local_60 = (char *)0x0;
    local_70 = 0;
    uVar7 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_70,"ccs.ActionManagerEx:playActionByName");
    pcVar1 = (char *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      pcVar1 = local_60;
    }
    if ((uVar7 & 1) == 0) {
      iVar6 = 4;
    }
    else {
      local_80 = 0;
      local_78 = (char *)0x0;
      local_88 = 0;
      uVar7 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_88,"ccs.ActionManagerEx:playActionByName")
      ;
      if ((uVar7 & 1) == 0) {
        iVar6 = 4;
      }
      else {
        pcVar2 = (char *)((ulong)&local_88 | 1);
        if ((local_88 & 1) != 0) {
          pcVar2 = local_78;
        }
        pvVar10 = (void *)cocostudio::ActionManagerEx::playActionByName(this,pcVar1,pcVar2);
        if (pvVar10 == (void *)0x0) {
                    /* try { // try from 0092b7b0 to 00a2b8df has its CatchHandler @ 0092b7b0
                       catch() { ... } // from try @ 0092b7b0 with catch @ 0092b7b0
                       catch() { ... } // from try @ 0092b960 with catch @ 0092b7b0 */
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar10 + 0xc),(int *)((long)pvVar10 + 0x10),pvVar10,
                     "ccs.ActionObject");
        }
        iVar6 = 1;
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
    }
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
                    /* try { // try from 0092b6cc to 00a2b717 has its CatchHandler @ 0092b6cc
                       catch() { ... } // from try @ 0092b6cc with catch @ 0092b6cc
                       catch() { ... } // from try @ 0092b740 with catch @ 0092b6cc */
    if (iVar6 != 4) {
LAB_0092b6b0:
      uVar8 = 1;
      goto LAB_0092b6f8;
    }
  }
  else if (iVar4 == 4) {
    local_68 = 0;
    local_60 = (char *)0x0;
    local_70 = 0;
    uVar7 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_70,"ccs.ActionManagerEx:playActionByName");
    pcVar1 = (char *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      pcVar1 = local_60;
    }
    if ((uVar7 & 1) == 0) {
      iVar6 = 2;
    }
    else {
      local_80 = 0;
      local_78 = (char *)0x0;
      local_88 = 0;
      uVar5 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_88,"ccs.ActionManagerEx:playActionByName")
      ;
      pcVar2 = (char *)((ulong)&local_88 | 1);
      if ((local_88 & 1) != 0) {
        pcVar2 = local_78;
      }
      if ((((param_1 == (lua_State *)0x0) || (((uVar5 ^ 1) & 1) != 0)) ||
          (iVar6 = lua_gettop(param_1), iVar6 < 4)) ||
         (uVar7 = luaval_is_usertype(param_1,4,"cc.CallFunc",0), (uVar7 & 1) == 0)) {
        iVar6 = 2;
      }
      else {
        pCVar9 = (CallFunc *)tolua_tousertype(param_1,4,0);
        pvVar10 = (void *)cocostudio::ActionManagerEx::playActionByName(this,pcVar1,pcVar2,pCVar9);
                    /* catch() { ... } // from try @ 0092b73c with catch @ 0092b78c */
        if (pvVar10 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
                    /* catch() { ... } // from try @ 0092b718 with catch @ 0092b79c */
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar10 + 0xc),(int *)((long)pvVar10 + 0x10),pvVar10,
                     "ccs.ActionObject");
        }
        iVar6 = 1;
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
    }
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if (iVar6 != 2) goto LAB_0092b6b0;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "ccs.ActionManagerEx:playActionByName",iVar4 + -1,2);
  uVar8 = 0;
LAB_0092b6f8:
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0092b718 to 00a2b71b has its CatchHandler @ 0092b79c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

