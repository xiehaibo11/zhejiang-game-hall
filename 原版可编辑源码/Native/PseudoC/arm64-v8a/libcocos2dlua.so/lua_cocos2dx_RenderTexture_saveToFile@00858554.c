
/* lua_cocos2dx_RenderTexture_saveToFile(lua_State*) */

void lua_cocos2dx_RenderTexture_saveToFile(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  RenderTexture *pRVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  int iVar8;
  bool local_1d0 [4];
  int local_1cc;
  ulong local_1c8;
  undefined8 local_1c0;
  void *local_1b8;
  long alStack_1b0 [4];
  long *local_190;
  long alStack_180 [4];
  long *local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  ulong local_f0;
  undefined8 local_e8;
  void *local_e0;
  ulong *local_d0;
  long alStack_c0 [4];
  long *local_a0;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  int iVar9;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pRVar4 = (RenderTexture *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  switch(iVar2) {
  case 2:
    local_e8 = 0;
    local_e0 = (void *)0x0;
    local_f0 = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_f0,"cc.RenderTexture:saveToFile");
    if ((uVar5 & 1) == 0) {
      if ((local_f0 & 1) != 0) {
        operator_delete(local_e0);
      }
      goto switchD_008585bc_default;
    }
    local_130 = (long *)0x0;
    uVar3 = cocos2d::RenderTexture::saveToFile(pRVar4,&local_f0,1,alStack_150);
    if (alStack_150 == local_130) {
      pcVar7 = *(code **)(*local_130 + 0x20);
LAB_008589b0:
      (*pcVar7)();
    }
    else if (local_130 != (long *)0x0) {
      pcVar7 = *(code **)(*local_130 + 0x28);
      goto LAB_008589b0;
    }
    tolua_pushboolean(param_1,uVar3 & 1);
    if ((local_f0 & 1) != 0) {
      operator_delete(local_e0);
    }
    break;
  case 3:
    local_e8 = 0;
    local_e0 = (void *)0x0;
    local_f0 = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_f0,"cc.RenderTexture:saveToFile");
    if (((uVar5 & 1) == 0) ||
       (uVar5 = luaval_to_int32(param_1,3,(int *)&local_1c8,"cc.RenderTexture:saveToFile"),
       (uVar5 & 1) == 0)) {
      iVar9 = 2;
      iVar8 = 2;
    }
    else {
      local_70 = (long *)0x0;
      uVar3 = cocos2d::RenderTexture::saveToFile
                        (pRVar4,&local_f0,local_1c8 & 0xffffffff,1,alStack_90);
      if (alStack_90 == local_70) {
        pcVar7 = *(code **)(*local_70 + 0x20);
LAB_00858a08:
        (*pcVar7)();
      }
      else if (local_70 != (long *)0x0) {
        pcVar7 = *(code **)(*local_70 + 0x28);
        goto LAB_00858a08;
      }
      tolua_pushboolean(param_1,uVar3 & 1);
      iVar9 = 1;
      iVar8 = 1;
    }
    if ((local_f0 & 1) != 0) {
      operator_delete(local_e0);
      iVar8 = iVar9;
    }
    if (iVar8 == 2) {
      local_e8 = 0;
      local_e0 = (void *)0x0;
      local_f0 = 0;
      uVar5 = luaval_to_std_string
                        (param_1,2,(basic_string *)&local_f0,"cc.RenderTexture:saveToFile");
      if (((uVar5 & 1) == 0) ||
         (uVar5 = luaval_to_boolean(param_1,3,(bool *)&local_1c8,"cc.RenderTexture:saveToFile"),
         (uVar5 & 1) == 0)) {
        iVar9 = 0xc;
        iVar8 = 0xc;
      }
      else {
        local_160 = (long *)0x0;
        uVar3 = cocos2d::RenderTexture::saveToFile(pRVar4,&local_f0,local_1c8 & 0xff,alStack_180);
        if (alStack_180 == local_160) {
          pcVar7 = *(code **)(*local_160 + 0x20);
LAB_00858ac8:
          (*pcVar7)();
        }
        else if (local_160 != (long *)0x0) {
          pcVar7 = *(code **)(*local_160 + 0x28);
          goto LAB_00858ac8;
        }
        tolua_pushboolean(param_1,uVar3 & 1);
        iVar9 = 1;
        iVar8 = 1;
      }
      if ((local_f0 & 1) != 0) {
        operator_delete(local_e0);
        iVar8 = iVar9;
      }
      if (iVar8 == 0xc) goto switchD_008585bc_default;
    }
    break;
  case 4:
    local_e8 = 0;
    local_e0 = (void *)0x0;
    local_f0 = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_f0,"cc.RenderTexture:saveToFile");
    if ((((uVar5 & 1) == 0) ||
        (uVar5 = luaval_to_int32(param_1,3,(int *)&local_1c8,"cc.RenderTexture:saveToFile"),
        (uVar5 & 1) == 0)) ||
       (uVar5 = luaval_to_boolean(param_1,4,(bool *)&local_1cc,"cc.RenderTexture:saveToFile"),
       (uVar5 & 1) == 0)) {
      iVar9 = 4;
      iVar8 = 4;
    }
    else {
      local_a0 = (long *)0x0;
      uVar3 = cocos2d::RenderTexture::saveToFile
                        (pRVar4,&local_f0,local_1c8 & 0xffffffff,(undefined1)local_1cc,alStack_c0);
      if (alStack_c0 == local_a0) {
        pcVar7 = *(code **)(*local_a0 + 0x20);
LAB_00858a30:
        (*pcVar7)();
      }
      else if (local_a0 != (long *)0x0) {
        pcVar7 = *(code **)(*local_a0 + 0x28);
        goto LAB_00858a30;
      }
      tolua_pushboolean(param_1,uVar3 & 1);
      iVar9 = 1;
      iVar8 = 1;
    }
    if ((local_f0 & 1) != 0) {
      operator_delete(local_e0);
      iVar8 = iVar9;
    }
    if (iVar8 == 4) {
      local_1c0 = 0;
      local_1b8 = (void *)0x0;
      local_1c8 = 0;
      uVar5 = luaval_to_std_string
                        (param_1,2,(basic_string *)&local_1c8,"cc.RenderTexture:saveToFile");
      if (((uVar5 & 1) == 0) ||
         (uVar5 = luaval_to_boolean(param_1,3,(bool *)&local_1cc,"cc.RenderTexture:saveToFile"),
         (uVar5 & 1) == 0)) {
        iVar9 = 0xe;
        iVar8 = 0xe;
      }
      else {
        local_d0 = (ulong *)0x0;
        local_190 = (long *)0x0;
        uVar3 = cocos2d::RenderTexture::saveToFile
                          (pRVar4,&local_1c8,(undefined1)local_1cc,alStack_1b0);
        if (alStack_1b0 == local_190) {
          pcVar7 = *(code **)(*local_190 + 0x20);
LAB_00858a90:
          (*pcVar7)();
        }
        else if (local_190 != (long *)0x0) {
          pcVar7 = *(code **)(*local_190 + 0x28);
          goto LAB_00858a90;
        }
        tolua_pushboolean(param_1,uVar3 & 1);
        if (&local_f0 == local_d0) {
          pcVar7 = *(code **)(*local_d0 + 0x20);
LAB_00858b0c:
          (*pcVar7)();
        }
        else if (local_d0 != (ulong *)0x0) {
          pcVar7 = *(code **)(*local_d0 + 0x28);
          goto LAB_00858b0c;
        }
        iVar9 = 1;
        iVar8 = 1;
      }
      if ((local_1c8 & 1) != 0) {
        operator_delete(local_1b8);
        iVar8 = iVar9;
      }
      if (iVar8 == 0xe) goto switchD_008585bc_default;
    }
    break;
  case 5:
    local_1c0 = 0;
    local_1b8 = (void *)0x0;
    local_1c8 = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_1c8,"cc.RenderTexture:saveToFile")
    ;
    if ((((uVar5 & 1) == 0) ||
        (uVar5 = luaval_to_int32(param_1,3,&local_1cc,"cc.RenderTexture:saveToFile"),
        (uVar5 & 1) == 0)) ||
       (uVar5 = luaval_to_boolean(param_1,4,local_1d0,"cc.RenderTexture:saveToFile"),
       (uVar5 & 1) == 0)) {
      iVar9 = 6;
      iVar8 = 6;
    }
    else {
      local_d0 = (ulong *)0x0;
      local_100 = (long *)0x0;
      uVar3 = cocos2d::RenderTexture::saveToFile
                        (pRVar4,&local_1c8,local_1cc,local_1d0[0],alStack_120);
      if (alStack_120 == local_100) {
        pcVar7 = *(code **)(*local_100 + 0x20);
LAB_00858a58:
        (*pcVar7)();
      }
      else if (local_100 != (long *)0x0) {
        pcVar7 = *(code **)(*local_100 + 0x28);
        goto LAB_00858a58;
      }
      tolua_pushboolean(param_1,uVar3 & 1);
      if (&local_f0 == local_d0) {
        pcVar7 = *(code **)(*local_d0 + 0x20);
LAB_00858af0:
        (*pcVar7)();
      }
      else if (local_d0 != (ulong *)0x0) {
        pcVar7 = *(code **)(*local_d0 + 0x28);
        goto LAB_00858af0;
      }
      iVar9 = 1;
      iVar8 = 1;
    }
    if ((local_1c8 & 1) != 0) {
      operator_delete(local_1b8);
      iVar8 = iVar9;
    }
    if (iVar8 != 6) break;
  default:
switchD_008585bc_default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.RenderTexture:saveToFile",iVar2 + -1,1);
    uVar6 = 0;
    goto LAB_008589d4;
  }
  uVar6 = 1;
LAB_008589d4:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

