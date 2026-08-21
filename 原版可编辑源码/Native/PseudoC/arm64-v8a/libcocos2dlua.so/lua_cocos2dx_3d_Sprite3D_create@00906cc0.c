
/* lua_cocos2dx_3d_Sprite3D_create(lua_State*) */

void lua_cocos2dx_3d_Sprite3D_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
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
  if (iVar2 + -1 == 0) {
    pvVar4 = (void *)cocos2d::Sprite3D::create();
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "cc.Sprite3D");
    }
LAB_00906e84:
    uVar5 = 1;
  }
  else {
                    /* try { // try from 00906cf0 to 00a06d8b has its CatchHandler @ 00906ba0 */
    if (iVar2 == 3) {
      local_48 = 0;
      local_40 = (void *)0x0;
      local_50 = 0;
                    /* catch() { ... } // from try @ 00906c70 with catch @ 00906d70 */
      uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.Sprite3D:create");
      if ((uVar3 & 1) == 0) {
        iVar6 = 6;
      }
      else {
        local_60 = 0;
        local_58 = (void *)0x0;
        local_68 = 0;
        uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"cc.Sprite3D:create");
        if ((uVar3 & 1) == 0) {
          iVar6 = 6;
        }
        else {
          pvVar4 = (void *)cocos2d::Sprite3D::create
                                     ((basic_string *)&local_50,(basic_string *)&local_68);
          if (pvVar4 == (void *)0x0) {
            lua_pushnil(param_1);
          }
          else {
            toluafix_pushusertype_ccobject
                      (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                       "cc.Sprite3D");
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
      if (iVar6 != 6) goto LAB_00906e84;
    }
    else if (iVar2 == 2) {
      local_48 = 0;
      local_40 = (void *)0x0;
      local_50 = 0;
      uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.Sprite3D:create");
      if ((uVar3 & 1) != 0) {
        pvVar4 = (void *)cocos2d::Sprite3D::create((basic_string *)&local_50);
        if (pvVar4 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
                    /* catch() { ... } // from try @ 00906ca4 with catch @ 00906d3c */
                    /* catch() { ... } // from try @ 00906cbc with catch @ 00906d40 */
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "cc.Sprite3D");
        }
        if ((local_50 & 1) != 0) {
          operator_delete(local_40);
        }
        goto LAB_00906e84;
      }
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
      }
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d","cc.Sprite3D:create"
               ,iVar2 + -1,2);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

