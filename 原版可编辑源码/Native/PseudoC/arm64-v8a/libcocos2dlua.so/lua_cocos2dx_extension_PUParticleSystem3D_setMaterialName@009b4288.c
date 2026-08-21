
/* lua_cocos2dx_extension_PUParticleSystem3D_setMaterialName(lua_State*) */

undefined4 lua_cocos2dx_extension_PUParticleSystem3D_setMaterialName(lua_State *param_1)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong local_50;
  ulong local_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    local_48 = 0;
    local_40 = (char *)0x0;
    local_50 = 0;
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"cc.PUParticleSystem3D:setMaterialName");
    if ((uVar5 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_extension_PUParticleSystem3D_setMaterialName\'"
                  ,0);
      uVar6 = 0;
    }
    else {
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          &local_50 !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (lVar4 + 0x478)) {
        uVar5 = local_50 >> 1 & 0x7f;
        pcVar2 = (char *)((ulong)&local_50 | 1);
        if ((local_50 & 1) != 0) {
          uVar5 = local_48;
          pcVar2 = local_40;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (lVar4 + 0x478),pcVar2,uVar5);
      }
      uVar6 = 1;
      lua_settop(param_1,1);
    }
    if ((local_50 & 1) != 0) {
                    /* try { // try from 009b4388 to 00ab4393 has its CatchHandler @ 009b4404 */
      operator_delete(local_40);
    }
  }
  else {
                    /* try { // try from 009b4358 to 00ab4387 has its CatchHandler @ 009b4358
                       catch() { ... } // from try @ 009b4358 with catch @ 009b4358
                       catch() { ... } // from try @ 009b43cc with catch @ 009b4358 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PUParticleSystem3D:setMaterialName",iVar3 + -1,1);
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009b43b4 to 00ab43cb has its CatchHandler @ 009b4418 */
    __stack_chk_fail();
  }
  return uVar6;
}

