
undefined8 FUN_008aa4e0(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  code *pcVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  undefined **local_70;
  lua_State *plStack_68;
  ulong local_60;
  undefined ***local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = toluafix_ref_function(param_1,2,0);
  pcVar4 = (char *)tolua_tostring(param_1,3,&DAT_013c996e);
  pcVar1 = "";
  if (pcVar4 != (char *)0x0) {
    pcVar1 = pcVar4;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,pcVar1);
  local_70 = &PTR_FUN_0169a710;
  plStack_68 = param_1;
  local_60 = uVar3 & 0xffffffff;
  local_50 = &local_70;
  cocos2d::utils::captureScreen((function *)&local_70,(basic_string *)local_88);
  if (&local_70 == local_50) {
    pcVar5 = (code *)(*local_50)[4];
  }
  else {
    if (local_50 == (undefined ***)0x0) goto LAB_008aa58c;
    pcVar5 = (code *)(*local_50)[5];
  }
  (*pcVar5)();
LAB_008aa58c:
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

