
/* lua_cocos2dx_studio_ComAttribute_getString(lua_State*) */

undefined4 lua_cocos2dx_studio_ComAttribute_getString(lua_State *param_1)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  basic_string *pbVar6;
  ulong uVar7;
  undefined4 uVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong local_78;
  void *local_70;
  ulong local_68;
  ulong local_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar6 = (basic_string *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_68 = 0;
    local_60 = 0;
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccs.ComAttribute:getString");
    uVar5 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"ccs.ComAttribute:getString");
    if ((uVar4 & uVar5 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_ComAttribute_getString\'",0);
      uVar8 = 0;
    }
    else {
      cocostudio::ComAttribute::getString(pbVar6,(basic_string *)&local_50);
      uVar7 = (ulong)((byte)local_80[0] >> 1);
      pvVar2 = (void *)((ulong)local_80 | 1);
      if (((byte)local_80[0] & 1) != 0) {
        uVar7 = local_78;
        pvVar2 = local_70;
      }
      lua_pushlstring(param_1,pvVar2,uVar7);
      if (((byte)local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
      uVar8 = 1;
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
  }
  else {
    if (iVar3 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccs.ComAttribute:getString",iVar3 + -1,1);
      uVar8 = 0;
      goto LAB_0093a0fc;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar7 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccs.ComAttribute:getString");
    if ((uVar7 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_ComAttribute_getString\'",0);
      uVar8 = 0;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_80,"");
      cocostudio::ComAttribute::getString(pbVar6,(basic_string *)&local_50);
      if (((byte)local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
      uVar7 = local_68 >> 1 & 0x7f;
      pvVar2 = (void *)((ulong)&local_68 | 1);
      if ((local_68 & 1) != 0) {
        uVar7 = local_60;
        pvVar2 = local_58;
      }
      lua_pushlstring(param_1,pvVar2,uVar7);
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
      uVar8 = 1;
    }
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_0093a0fc:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

