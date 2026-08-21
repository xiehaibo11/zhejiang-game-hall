
undefined4 FUN_009da568(lua_State *param_1)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  void *__dest;
  ulong uVar6;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  byte local_78 [8];
  ulong local_70;
  void *local_68;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar3 = lua_gettop();
  if (iVar3 != 1) {
    luaL_argerror(param_1,1,"lua_universe_sign: expected 1 argument");
  }
  uStack_58 = 0;
  local_50 = (void *)0x0;
  local_60 = 0;
  uVar4 = universe::get_string(param_1,1,(basic_string *)&local_60,"lua_universe_sign");
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    goto joined_r0x009da614;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_60
         ,"&avxfFAEdxxnmyzDKmPQpzllTgO3utUv8",0x21);
  pvVar2 = local_50;
  uVar4 = uStack_58;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (void *)0x0;
  if ((local_60 & 1) == 0) {
    uStack_88 = uStack_58;
    local_90 = local_60;
    local_80 = local_50;
  }
  else {
    if (0xffffffffffffffef < uStack_58) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_58 < 0x17) {
      __dest = (void *)((ulong)&local_90 | 1);
      local_90 = (ulong)(byte)((int)uStack_58 << 1);
      if (uStack_58 != 0) goto LAB_009da69c;
    }
    else {
      uVar6 = uStack_58 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar6);
      local_90 = uVar6 | 1;
      uStack_88 = uVar4;
      local_80 = __dest;
LAB_009da69c:
      memcpy(__dest,pvVar2,uVar4);
    }
    *(undefined1 *)((long)__dest + uVar4) = 0;
  }
  universe::utils::CMD5Checksum::GetMD5OfString(local_78,&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  uVar4 = (ulong)(local_78[0] >> 1);
  pvVar2 = (void *)((ulong)local_78 | 1);
  if ((local_78[0] & 1) != 0) {
    uVar4 = local_70;
    pvVar2 = local_68;
  }
  lua_pushlstring(param_1,pvVar2,uVar4);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  uVar5 = 1;
joined_r0x009da614:
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}

