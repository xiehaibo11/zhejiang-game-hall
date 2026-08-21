
/* cocos2d::LuaStack::reload(char const*) */

undefined4 __thiscall cocos2d::LuaStack::reload(LuaStack *this,char *param_1)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  size_t sVar5;
  ulong *puVar6;
  basic_string *pbVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((param_1 == (char *)0x0) || (sVar5 = strlen(param_1), sVar5 == 0)) {
    uVar4 = 1;
  }
  else {
    lua_getfield(*(undefined8 *)(this + 0x28),0xffffd8ee,"package");
    pbVar7 = (basic_string *)0x13fc2aa;
    lua_getfield(*(undefined8 *)(this + 0x28),0xffffffff);
    lua_pushstring(*(undefined8 *)(this + 0x28),param_1);
    lua_gettable(*(undefined8 *)(this + 0x28),0xfffffffe);
    iVar3 = lua_type(*(undefined8 *)(this + 0x28),0xffffffff);
    if (iVar3 != 0) {
      lua_pushstring(*(undefined8 *)(this + 0x28),param_1);
      lua_pushnil(*(undefined8 *)(this + 0x28));
      lua_settable(*(undefined8 *)(this + 0x28),0xfffffffc);
    }
    lua_settop(*(undefined8 *)(this + 0x28),0xfffffffc);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,param_1);
    std::__ndk1::operator+((__ndk1 *)"require \'",(char *)local_50,pbVar7);
    puVar6 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append(local_88,"\'",1);
    local_60 = (void *)puVar6[2];
    uStack_68 = puVar6[1];
    local_70 = *puVar6;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    if (((byte)local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    pvVar1 = (void *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      pvVar1 = local_60;
    }
    uVar4 = (**(code **)(*(long *)this + 0x40))(this,pvVar1);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

