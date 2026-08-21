
undefined4 FUN_0094eb94(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  SkeletonAnimation *this;
  undefined4 uVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [16];
  void *local_80;
  ulong local_78;
  undefined8 local_70;
  char *local_68;
  bool local_60 [4];
  int local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  this = (SkeletonAnimation *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 3) {
    uVar4 = luaval_to_int32(param_1,2,&local_5c,"sp.SkeletonAnimation:setAnimation");
    local_70 = 0;
    local_68 = (char *)0x0;
    local_78 = 0;
    uVar5 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_78,"sp.SkeletonAnimation:setAnimation");
    pcVar1 = (char *)((ulong)&local_78 | 1);
    if ((local_78 & 1) != 0) {
      pcVar1 = local_68;
    }
    uVar6 = luaval_to_boolean(param_1,4,local_60,"sp.SkeletonAnimation:setAnimation");
    if ((uVar4 & uVar5 & uVar6 & 1) == 0) {
      uVar7 = 0;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_90,pcVar1);
      spine::SkeletonAnimation::setAnimation(this,local_5c,(basic_string *)local_90,local_60[0]);
      if (((byte)local_90[0] & 1) != 0) {
        operator_delete(local_80);
      }
      uVar7 = 1;
      lua_settop(param_1,1);
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","setAnimation",
               iVar3 + -1,3);
    uVar7 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

