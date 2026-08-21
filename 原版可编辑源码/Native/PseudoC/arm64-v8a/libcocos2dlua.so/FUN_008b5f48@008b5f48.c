
undefined8 FUN_008b5f48(lua_State *param_1)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  void *__dest;
  double dVar8;
  double dVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8;
  undefined7 uStack_a7;
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
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar7 = 0;
  if (param_1 == (lua_State *)0x0) goto LAB_008b6128;
  iVar4 = lua_gettop(param_1);
  if ((5 < iVar4) || (iVar4 + -1 < 2)) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.Label:createWithTTF",iVar4 + -1,2);
    uVar7 = 0;
    goto LAB_008b6128;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&local_a8,"");
  pvVar6 = local_98;
  uStack_88 = 0;
  local_80 = (void *)0x0;
  local_90 = 0;
  if (((byte)local_a8 & 1) == 0) {
    local_90 = CONCAT71(uStack_a7,local_a8);
    bVar3 = false;
    uStack_88 = uStack_a0;
    local_80 = local_98;
  }
  else {
    if (0xffffffffffffffef < uStack_a0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_a0 < 0x17) {
      __dest = (void *)((ulong)&local_90 | 1);
      local_90 = (ulong)(byte)((int)uStack_a0 << 1);
      if (uStack_a0 != 0) goto LAB_008b6040;
    }
    else {
      uVar5 = uStack_a0 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar5);
      local_90 = uVar5 | 1;
      uStack_88 = uStack_a0;
      local_80 = __dest;
LAB_008b6040:
      memcpy(__dest,pvVar6,uStack_a0);
    }
    bVar3 = true;
    *(undefined1 *)((long)__dest + uStack_a0) = 0;
  }
  local_68 = 0;
  local_78 = 0x41400000;
  uStack_70 = 0;
  local_64 = 0;
  if (bVar3) {
    operator_delete(local_98);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&local_a8,"");
  uVar5 = luaval_to_ttfconfig(param_1,2,(_ttfConfig *)&local_90,"cc.Label:createWithTTF");
  if (((uVar5 & 1) == 0) ||
     (uVar5 = luaval_to_std_string(param_1,3,(basic_string *)&local_a8,"cc.Label:createWithTTF"),
     (uVar5 & 1) == 0)) {
    uVar7 = 0;
  }
  else {
    dVar8 = (double)tolua_tonumber(0x3ff0000000000000,param_1,4);
    dVar9 = (double)tolua_tonumber(0,param_1,5);
    pvVar6 = (void *)cocos2d::Label::createWithTTF(&local_90,&local_a8,(int)dVar8,(int)dVar9);
    piVar1 = (int *)((long)pvVar6 + 0x10);
    if (pvVar6 == (void *)0x0) {
      iVar4 = -1;
      piVar1 = (int *)0x0;
    }
    else {
      iVar4 = *(int *)((long)pvVar6 + 0xc);
    }
    toluafix_pushusertype_ccobject(param_1,iVar4,piVar1,pvVar6,"cc.Label");
    uVar7 = 1;
  }
  if (((byte)local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
LAB_008b6128:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

