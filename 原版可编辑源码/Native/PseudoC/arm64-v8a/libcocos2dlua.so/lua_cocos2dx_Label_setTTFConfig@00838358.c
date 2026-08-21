
/* lua_cocos2dx_Label_setTTFConfig(lua_State*) */

bool lua_cocos2dx_Label_setTTFConfig(lua_State *param_1)

{
  long lVar1;
  void *__src;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  bool bVar6;
  void *__dest;
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
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 1) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Label:setTTFConfig",iVar2 + -1,1);
    bVar6 = false;
    goto LAB_008384fc;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&local_a8,"");
  __src = local_98;
  uStack_88 = 0;
  local_80 = (void *)0x0;
  local_90 = 0;
  if (((byte)local_a8 & 1) == 0) {
    local_90 = CONCAT71(uStack_a7,local_a8);
    bVar6 = false;
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
      if (uStack_a0 != 0) goto LAB_00838454;
    }
    else {
      uVar5 = uStack_a0 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar5);
      local_90 = uVar5 | 1;
      uStack_88 = uStack_a0;
      local_80 = __dest;
LAB_00838454:
      memcpy(__dest,__src,uStack_a0);
    }
    bVar6 = true;
    *(undefined1 *)((long)__dest + uStack_a0) = 0;
  }
  local_68 = 0;
  local_78 = 0x41400000;
  uStack_70 = 0;
  local_64 = 0;
  if (bVar6) {
    operator_delete(local_98);
  }
  uVar5 = luaval_to_ttfconfig(param_1,2,(_ttfConfig *)&local_90,"cc.Label:setTTFConfig");
  bVar6 = (uVar5 & 1) == 0;
  if (bVar6) {
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Label_setTTFConfig\'",0);
  }
  else {
    uVar3 = (**(code **)(*plVar4 + 0x530))(plVar4,&local_90);
    tolua_pushboolean(param_1,uVar3 & 1);
  }
  bVar6 = !bVar6;
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
LAB_008384fc:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

