
undefined4 FUN_0094e8b8(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  SkeletonAnimation *this;
  undefined4 uVar8;
  undefined8 local_98;
  bool local_90 [4];
  int local_8c;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  ulong local_70;
  undefined8 local_68;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  this = (SkeletonAnimation *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 == 5) {
    uVar4 = luaval_to_int32(param_1,2,&local_8c,"sp.SkeletonAnimation:addAnimation");
    local_68 = 0;
    local_60 = (char *)0x0;
    local_70 = 0;
    uVar5 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_70,"sp.SkeletonAnimation:addAnimation");
    pcVar1 = (char *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      pcVar1 = local_60;
    }
    uVar6 = luaval_to_boolean(param_1,4,local_90,"sp.SkeletonAnimation:addAnimation");
    uVar7 = luaval_to_number(param_1,5,(double *)&local_98,"sp.SkeletonAnimation:addAnimation");
    if ((uVar4 & uVar5 & uVar6 & uVar7 & 1) != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_88,pcVar1);
      spine::SkeletonAnimation::addAnimation
                (this,local_8c,(basic_string *)local_88,local_90[0],
                 (float)(double)CONCAT44(local_98._4_4_,(int)local_98));
      if (((byte)local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      lua_settop(param_1,1);
      goto LAB_0094eabc;
    }
LAB_0094eaf0:
    uVar8 = 0;
  }
  else {
    if (iVar3 != 4) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","addAnimation",
                 iVar3 + -1,3);
      uVar8 = 0;
      goto LAB_0094eb04;
    }
    uVar4 = luaval_to_int32(param_1,2,(int *)&local_98,"sp.SkeletonAnimation:addAnimation");
    local_68 = 0;
    local_60 = (char *)0x0;
    local_70 = 0;
    uVar5 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_70,"sp.SkeletonAnimation:addAnimation");
    pcVar1 = (char *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      pcVar1 = local_60;
    }
    uVar6 = luaval_to_boolean(param_1,4,(bool *)&local_8c,"sp.SkeletonAnimation:addAnimation");
    if ((uVar4 & uVar5 & uVar6 & 1) == 0) goto LAB_0094eaf0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_88,pcVar1);
    spine::SkeletonAnimation::addAnimation
              (this,(int)local_98,(basic_string *)local_88,local_8c._0_1_,0.0);
    if (((byte)local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    lua_settop(param_1,1);
LAB_0094eabc:
    uVar8 = 1;
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_0094eb04:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

