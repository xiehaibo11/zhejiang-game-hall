
/* lua_cocos2dx_Label_initWithTTF(lua_State*) */

void lua_cocos2dx_Label_initWithTTF(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  Label *pLVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  void *pvVar10;
  ulong uVar11;
  int local_c0;
  int local_bc;
  int local_b8 [2];
  undefined8 local_b0;
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_64;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pLVar6 = (Label *)tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  switch(iVar4) {
  case 3:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_a8,"");
    pvVar3 = local_98;
    uVar7 = uStack_a0;
    uStack_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    if ((local_a8 & 1) == 0) {
      bVar2 = false;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      local_80 = local_98;
    }
    else {
      if (0xffffffffffffffef < uStack_a0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uStack_a0 < 0x17) {
        pvVar10 = (void *)((ulong)&local_90 | 1);
        local_90 = (ulong)(byte)((int)uStack_a0 << 1);
        if (uStack_a0 != 0) goto LAB_008398a0;
      }
      else {
        uVar11 = uStack_a0 + 0x10 & 0xfffffffffffffff0;
        pvVar10 = operator_new(uVar11);
        local_90 = uVar11 | 1;
        uStack_88 = uVar7;
        local_80 = pvVar10;
LAB_008398a0:
        memcpy(pvVar10,pvVar3,uVar7);
      }
      bVar2 = true;
      *(undefined1 *)((long)pvVar10 + uVar7) = 0;
    }
    local_68 = 0;
    local_78 = 0x41400000;
    uStack_70 = 0;
    local_64 = 0;
    if (bVar2) {
      operator_delete(local_98);
    }
    uVar7 = luaval_to_ttfconfig(param_1,2,(_ttfConfig *)&local_90,"cc.Label:initWithTTF");
    if ((uVar7 & 1) == 0) {
      iVar9 = 2;
    }
    else {
      uStack_a0 = 0;
      local_98 = (void *)0x0;
      local_a8 = 0;
      uVar7 = luaval_to_std_string(param_1,3,(basic_string *)&local_a8,"cc.Label:initWithTTF");
      if ((uVar7 & 1) == 0) {
        iVar9 = 2;
      }
      else {
        uVar5 = cocos2d::Label::initWithTTF(pLVar6,&local_90,&local_a8,0,0);
        tolua_pushboolean(param_1,uVar5 & 1);
        iVar9 = 1;
      }
      if ((local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
    }
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if (iVar9 == 2) goto switchD_008392e0_default;
    break;
  case 4:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_a8,"");
    pvVar3 = local_98;
    uVar7 = uStack_a0;
    uStack_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    if ((local_a8 & 1) == 0) {
      bVar2 = false;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      local_80 = local_98;
    }
    else {
      if (0xffffffffffffffef < uStack_a0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uStack_a0 < 0x17) {
        pvVar10 = (void *)((ulong)&local_90 | 1);
        local_90 = (ulong)(byte)((int)uStack_a0 << 1);
        if (uStack_a0 != 0) goto LAB_00839978;
      }
      else {
        uVar11 = uStack_a0 + 0x10 & 0xfffffffffffffff0;
        pvVar10 = operator_new(uVar11);
        local_90 = uVar11 | 1;
        uStack_88 = uVar7;
        local_80 = pvVar10;
LAB_00839978:
        memcpy(pvVar10,pvVar3,uVar7);
      }
      bVar2 = true;
      *(undefined1 *)((long)pvVar10 + uVar7) = 0;
    }
    local_68 = 0;
    local_78 = 0x41400000;
    uStack_70 = 0;
    local_64 = 0;
    if (bVar2) {
      operator_delete(local_98);
    }
    uVar7 = luaval_to_ttfconfig(param_1,2,(_ttfConfig *)&local_90,"cc.Label:initWithTTF");
    if ((uVar7 & 1) == 0) {
      iVar9 = 4;
    }
    else {
      uStack_a0 = 0;
      local_98 = (void *)0x0;
      local_a8 = 0;
      uVar7 = luaval_to_std_string(param_1,3,(basic_string *)&local_a8,"cc.Label:initWithTTF");
      if (((uVar7 & 1) == 0) ||
         (uVar7 = luaval_to_int32(param_1,4,(int *)&local_b0,"cc.Label:initWithTTF"),
         (uVar7 & 1) == 0)) {
        iVar9 = 4;
      }
      else {
        uVar5 = cocos2d::Label::initWithTTF(pLVar6,&local_90,&local_a8,(int)local_b0,0);
        tolua_pushboolean(param_1,uVar5 & 1);
        iVar9 = 1;
      }
      if ((local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
    }
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if (iVar9 == 4) {
      uStack_88 = 0;
      local_80 = (void *)0x0;
      local_90 = 0;
      uVar7 = luaval_to_std_string(param_1,2,(basic_string *)&local_90,"cc.Label:initWithTTF");
      if ((uVar7 & 1) == 0) {
        iVar9 = 8;
      }
      else {
        uStack_a0 = 0;
        local_98 = (void *)0x0;
        local_a8 = 0;
        uVar7 = luaval_to_std_string(param_1,3,(basic_string *)&local_a8,"cc.Label:initWithTTF");
        if (((uVar7 & 1) == 0) ||
           (uVar7 = luaval_to_number(param_1,4,(double *)&local_b0,"cc.Label:initWithTTF"),
           (uVar7 & 1) == 0)) {
          iVar9 = 8;
        }
        else {
          uVar5 = cocos2d::Label::initWithTTF
                            ((float)(double)CONCAT44(local_b0._4_4_,(int)local_b0),pLVar6,&local_90,
                             &local_a8,&cocos2d::Size::ZERO,0,0);
          tolua_pushboolean(param_1,uVar5 & 1);
          iVar9 = 1;
        }
        if ((local_a8 & 1) != 0) {
          operator_delete(local_98);
        }
      }
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if (iVar9 == 8) goto switchD_008392e0_default;
    }
    break;
  case 5:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_a8,"");
    pvVar3 = local_98;
    uVar7 = uStack_a0;
    uStack_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    if ((local_a8 & 1) == 0) {
      bVar2 = false;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      local_80 = local_98;
    }
    else {
      if (0xffffffffffffffef < uStack_a0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uStack_a0 < 0x17) {
        pvVar10 = (void *)((ulong)&local_90 | 1);
        local_90 = (ulong)(byte)((int)uStack_a0 << 1);
        if (uStack_a0 != 0) goto LAB_0083969c;
      }
      else {
        uVar11 = uStack_a0 + 0x10 & 0xfffffffffffffff0;
        pvVar10 = operator_new(uVar11);
        local_90 = uVar11 | 1;
        uStack_88 = uVar7;
        local_80 = pvVar10;
LAB_0083969c:
        memcpy(pvVar10,pvVar3,uVar7);
      }
      bVar2 = true;
      *(undefined1 *)((long)pvVar10 + uVar7) = 0;
    }
    local_68 = 0;
    local_78 = 0x41400000;
    uStack_70 = 0;
    local_64 = 0;
    if (bVar2) {
      operator_delete(local_98);
    }
    uVar7 = luaval_to_ttfconfig(param_1,2,(_ttfConfig *)&local_90,"cc.Label:initWithTTF");
    if ((uVar7 & 1) == 0) {
      iVar9 = 6;
    }
    else {
      uStack_a0 = 0;
      local_98 = (void *)0x0;
      local_a8 = 0;
      uVar7 = luaval_to_std_string(param_1,3,(basic_string *)&local_a8,"cc.Label:initWithTTF");
      if ((((uVar7 & 1) == 0) ||
          (uVar7 = luaval_to_int32(param_1,4,(int *)&local_b0,"cc.Label:initWithTTF"),
          (uVar7 & 1) == 0)) ||
         (uVar7 = luaval_to_int32(param_1,5,local_b8,"cc.Label:initWithTTF"), (uVar7 & 1) == 0)) {
        iVar9 = 6;
      }
      else {
        uVar5 = cocos2d::Label::initWithTTF(pLVar6,&local_90,&local_a8,(int)local_b0,local_b8[0]);
        tolua_pushboolean(param_1,uVar5 & 1);
        iVar9 = 1;
      }
      if ((local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
    }
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if (iVar9 == 6) {
      uStack_88 = 0;
      local_80 = (void *)0x0;
      local_90 = 0;
      uVar7 = luaval_to_std_string(param_1,2,(basic_string *)&local_90,"cc.Label:initWithTTF");
      if ((uVar7 & 1) == 0) {
        iVar9 = 10;
      }
      else {
        uStack_a0 = 0;
        local_98 = (void *)0x0;
        local_a8 = 0;
        uVar7 = luaval_to_std_string(param_1,3,(basic_string *)&local_a8,"cc.Label:initWithTTF");
        if (((uVar7 & 1) == 0) ||
           (uVar7 = luaval_to_number(param_1,4,(double *)&local_b0,"cc.Label:initWithTTF"),
           (uVar7 & 1) == 0)) {
LAB_00839b94:
          iVar9 = 10;
        }
        else {
          cocos2d::Size::Size((Size *)local_b8);
          uVar7 = luaval_to_size(param_1,5,(Size *)local_b8,"cc.Label:initWithTTF");
          if ((uVar7 & 1) == 0) goto LAB_00839b94;
          uVar5 = cocos2d::Label::initWithTTF
                            ((float)(double)CONCAT44(local_b0._4_4_,(int)local_b0),pLVar6,&local_90,
                             &local_a8,local_b8,0,0);
          tolua_pushboolean(param_1,uVar5 & 1);
          iVar9 = 1;
        }
        if ((local_a8 & 1) != 0) {
          operator_delete(local_98);
        }
      }
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if (iVar9 == 10) goto switchD_008392e0_default;
    }
    break;
  case 6:
    uStack_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    uVar7 = luaval_to_std_string(param_1,2,(basic_string *)&local_90,"cc.Label:initWithTTF");
    if ((uVar7 & 1) == 0) {
      iVar9 = 0xc;
    }
    else {
      uStack_a0 = 0;
      local_98 = (void *)0x0;
      local_a8 = 0;
      uVar7 = luaval_to_std_string(param_1,3,(basic_string *)&local_a8,"cc.Label:initWithTTF");
      if (((uVar7 & 1) == 0) ||
         (uVar7 = luaval_to_number(param_1,4,(double *)&local_b0,"cc.Label:initWithTTF"),
         (uVar7 & 1) == 0)) {
LAB_0083964c:
        iVar9 = 0xc;
      }
      else {
        cocos2d::Size::Size((Size *)local_b8);
        uVar7 = luaval_to_size(param_1,5,(Size *)local_b8,"cc.Label:initWithTTF");
        if (((uVar7 & 1) == 0) ||
           (uVar7 = luaval_to_int32(param_1,6,&local_bc,"cc.Label:initWithTTF"), (uVar7 & 1) == 0))
        goto LAB_0083964c;
        uVar5 = cocos2d::Label::initWithTTF
                          ((float)(double)CONCAT44(local_b0._4_4_,(int)local_b0),pLVar6,&local_90,
                           &local_a8,local_b8,local_bc,0);
        tolua_pushboolean(param_1,uVar5 & 1);
        iVar9 = 1;
      }
      if ((local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
    }
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if (iVar9 != 0xc) break;
  default:
switchD_008392e0_default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Label:initWithTTF",iVar4 + -1,3);
    uVar8 = 0;
    goto LAB_00839bf4;
  case 7:
    uStack_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    uVar7 = luaval_to_std_string(param_1,2,(basic_string *)&local_90,"cc.Label:initWithTTF");
    if ((uVar7 & 1) == 0) {
      iVar9 = 0xe;
    }
    else {
      uStack_a0 = 0;
      local_98 = (void *)0x0;
      local_a8 = 0;
      uVar7 = luaval_to_std_string(param_1,3,(basic_string *)&local_a8,"cc.Label:initWithTTF");
      if (((uVar7 & 1) == 0) ||
         (uVar7 = luaval_to_number(param_1,4,(double *)&local_b0,"cc.Label:initWithTTF"),
         (uVar7 & 1) == 0)) {
LAB_0083961c:
        iVar9 = 0xe;
      }
      else {
        cocos2d::Size::Size((Size *)local_b8);
        uVar7 = luaval_to_size(param_1,5,(Size *)local_b8,"cc.Label:initWithTTF");
        if (((uVar7 & 1) == 0) ||
           ((uVar7 = luaval_to_int32(param_1,6,&local_bc,"cc.Label:initWithTTF"), (uVar7 & 1) == 0
            || (uVar7 = luaval_to_int32(param_1,7,&local_c0,"cc.Label:initWithTTF"),
               (uVar7 & 1) == 0)))) goto LAB_0083961c;
        uVar5 = cocos2d::Label::initWithTTF
                          ((float)(double)CONCAT44(local_b0._4_4_,(int)local_b0),pLVar6,&local_90,
                           &local_a8,local_b8,local_bc,local_c0);
        tolua_pushboolean(param_1,uVar5 & 1);
        iVar9 = 1;
      }
      if ((local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
    }
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if (iVar9 != 0xe) break;
    goto switchD_008392e0_default;
  }
  uVar8 = 1;
LAB_00839bf4:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}

