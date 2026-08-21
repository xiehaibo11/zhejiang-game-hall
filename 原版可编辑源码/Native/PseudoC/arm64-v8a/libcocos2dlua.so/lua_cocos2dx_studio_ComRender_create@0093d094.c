
/* lua_cocos2dx_studio_ComRender_create(lua_State*) */

void lua_cocos2dx_studio_ComRender_create(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  Node *pNVar6;
  void *pvVar7;
  undefined8 uVar8;
  int iVar9;
  ulong local_50;
  undefined8 local_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = lua_gettop();
  if (iVar3 + -1 == 0) {
    pvVar7 = (void *)cocostudio::ComRender::create();
    if (pvVar7 == (void *)0x0) {
      lua_pushnil(param_1);
      uVar8 = 1;
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                 "ccs.ComRender");
      uVar8 = 1;
    }
  }
  else {
    if ((((iVar3 == 3) && (param_1 != (lua_State *)0x0)) && (iVar4 = lua_gettop(param_1), 1 < iVar4)
        ) && (uVar5 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar5 & 1) != 0)) {
      pNVar6 = (Node *)tolua_tousertype(param_1,2,0);
      local_48 = 0;
      local_40 = (char *)0x0;
      local_50 = 0;
      uVar5 = luaval_to_std_string(param_1,3,(basic_string *)&local_50,"ccs.ComRender:create");
      if ((uVar5 & 1) == 0) {
        iVar9 = 2;
        iVar4 = 2;
      }
      else {
        pcVar1 = (char *)((ulong)&local_50 | 1);
        if ((local_50 & 1) != 0) {
          pcVar1 = local_40;
        }
        pvVar7 = (void *)cocostudio::ComRender::create(pNVar6,pcVar1);
        if (pvVar7 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                     "ccs.ComRender");
        }
        iVar9 = 1;
        iVar4 = 1;
      }
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
        iVar4 = iVar9;
      }
      if (iVar4 != 2) {
        uVar8 = 1;
        goto LAB_0093d20c;
      }
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
               "ccs.ComRender:create",iVar3 + -1,0);
    uVar8 = 0;
  }
LAB_0093d20c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

