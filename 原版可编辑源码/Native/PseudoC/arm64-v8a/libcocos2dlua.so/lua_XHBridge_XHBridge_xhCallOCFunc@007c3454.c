
/* lua_XHBridge_XHBridge_xhCallOCFunc(lua_State*) */

undefined4 lua_XHBridge_XHBridge_xhCallOCFunc(lua_State *param_1)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  void *pvVar9;
  ulong uVar10;
  ulong local_100;
  ulong uStack_f8;
  void *local_f0;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  byte local_a8 [16];
  void *local_98;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar4 = lua_gettop();
  if (iVar4 + -1 != 3) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "xh.XHBridge:xhCallOCFunc",iVar4 + -1,3);
    uVar8 = 0;
    goto LAB_007c3584;
  }
  uStack_58 = 0;
  local_50 = (void *)0x0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  local_80 = (void *)0x0;
  local_90 = 0;
  uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"xh.XHBridge:xhCallOCFunc");
  uVar6 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"xh.XHBridge:xhCallOCFunc");
  uVar7 = luaval_to_std_string(param_1,4,(basic_string *)&local_90,"xh.XHBridge:xhCallOCFunc");
  pvVar1 = local_50;
  uVar3 = uStack_58;
  if ((uVar5 & uVar6 & uVar7 & 1) == 0) {
    tolua_error(param_1,"invalid arguments in function \'lua_XHBridge_XHBridge_xhCallOCFunc\'",0);
    uVar8 = 0;
  }
  else {
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = (void *)0x0;
    if ((local_60 & 1) == 0) {
      uStack_b8 = uStack_58;
      local_c0 = local_60;
      local_b0 = local_50;
    }
    else {
      if (0xffffffffffffffef < uStack_58) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uStack_58 < 0x17) {
        pvVar9 = (void *)((ulong)&local_c0 | 1);
        local_c0 = (ulong)(byte)((int)uStack_58 << 1);
        if (uStack_58 != 0) goto LAB_007c3614;
      }
      else {
        uVar10 = uStack_58 + 0x10 & 0xfffffffffffffff0;
        pvVar9 = operator_new(uVar10);
        local_c0 = uVar10 | 1;
        uStack_b8 = uVar3;
        local_b0 = pvVar9;
LAB_007c3614:
        memcpy(pvVar9,pvVar1,uVar3);
      }
      *(undefined1 *)((long)pvVar9 + uVar3) = 0;
    }
    pvVar1 = local_68;
    uVar3 = uStack_70;
    uStack_d8 = 0;
    local_d0 = (void *)0x0;
    local_e0 = 0;
    if ((local_78 & 1) == 0) {
      uStack_d8 = uStack_70;
      local_e0 = local_78;
      local_d0 = local_68;
    }
    else {
      if (0xffffffffffffffef < uStack_70) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uStack_70 < 0x17) {
        pvVar9 = (void *)((ulong)&local_e0 | 1);
        local_e0 = (ulong)(byte)((int)uStack_70 << 1);
        if (uStack_70 != 0) goto LAB_007c369c;
      }
      else {
        uVar10 = uStack_70 + 0x10 & 0xfffffffffffffff0;
        pvVar9 = operator_new(uVar10);
        local_e0 = uVar10 | 1;
        uStack_d8 = uVar3;
        local_d0 = pvVar9;
LAB_007c369c:
        memcpy(pvVar9,pvVar1,uVar3);
      }
      *(undefined1 *)((long)pvVar9 + uVar3) = 0;
    }
    pvVar1 = local_80;
    uVar3 = uStack_88;
    uStack_f8 = 0;
    local_f0 = (void *)0x0;
    local_100 = 0;
    if ((local_90 & 1) == 0) {
      uStack_f8 = uStack_88;
      local_100 = local_90;
      local_f0 = local_80;
    }
    else {
      if (0xffffffffffffffef < uStack_88) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uStack_88 < 0x17) {
        pvVar9 = (void *)((ulong)&local_100 | 1);
        local_100 = (ulong)(byte)((int)uStack_88 << 1);
        if (uStack_88 != 0) goto LAB_007c3724;
      }
      else {
        uVar10 = uStack_88 + 0x10 & 0xfffffffffffffff0;
        pvVar9 = operator_new(uVar10);
        local_100 = uVar10 | 1;
        uStack_f8 = uVar3;
        local_f0 = pvVar9;
LAB_007c3724:
        memcpy(pvVar9,pvVar1,uVar3);
      }
      *(undefined1 *)((long)pvVar9 + uVar3) = 0;
    }
    xh::XhSdk::xhInvoke(local_a8,&local_c0,&local_e0,&local_100);
    if ((local_100 & 1) != 0) {
      operator_delete(local_f0);
    }
    if ((local_e0 & 1) != 0) {
      operator_delete(local_d0);
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    pvVar1 = (void *)((ulong)local_a8 | 1);
    if ((local_a8[0] & 1) != 0) {
      pvVar1 = local_98;
    }
    tolua_pushstring(param_1,pvVar1);
    if ((local_a8[0] & 1) != 0) {
      operator_delete(local_98);
    }
    uVar8 = 1;
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_007c3584:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

