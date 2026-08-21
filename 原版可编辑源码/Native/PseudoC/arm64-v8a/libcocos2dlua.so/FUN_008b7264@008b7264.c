
undefined8 FUN_008b7264(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  char *pcVar4;
  ulong uVar5;
  code *pcVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  undefined **local_80;
  lua_State *plStack_78;
  ulong local_70;
  undefined ***local_60;
  long local_48;
  
                    /* try { // try from 008b7264 to 009b72bf has its CatchHandler @ 008b7264
                       catch() { ... } // from try @ 008b7264 with catch @ 008b7264
                       catch() { ... } // from try @ 008b72d8 with catch @ 008b7264 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 == (lua_State *)0x0) goto LAB_008b7378;
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 2) {
    luaL_error(param_1,
               "%s function of TextureCache has wrong number of arguments: %d, was expecting %d\n",
               "cc.TextureCache:addImageAsync",iVar2 + -1,1);
    goto LAB_008b7378;
  }
                    /* try { // try from 008b72c0 to 009b72d7 has its CatchHandler @ 008b735c */
  pcVar4 = (char *)tolua_tostring(param_1,2,&DAT_013c996e);
                    /* try { // try from 008b72d8 to 009b7377 has its CatchHandler @ 008b7264 */
  uVar5 = toluafix_ref_function(param_1,3,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_98,pcVar4);
  local_80 = &PTR_FUN_0169a680;
  plStack_78 = param_1;
  local_70 = uVar5 & 0xffffffff;
  local_60 = &local_80;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_98,&local_80);
  if (&local_80 == local_60) {
                    /* catch() { ... } // from try @ 008b72c0 with catch @ 008b735c */
    pcVar6 = (code *)(*local_60)[4];
LAB_008b7364:
    (*pcVar6)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar6 = (code *)(*local_60)[5];
    goto LAB_008b7364;
  }
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
LAB_008b7378:
                    /* try { // try from 008b7378 to 009b73d3 has its CatchHandler @ 008b7378
                       catch() { ... } // from try @ 008b7378 with catch @ 008b7378
                       catch() { ... } // from try @ 008b73ec with catch @ 008b7378 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

