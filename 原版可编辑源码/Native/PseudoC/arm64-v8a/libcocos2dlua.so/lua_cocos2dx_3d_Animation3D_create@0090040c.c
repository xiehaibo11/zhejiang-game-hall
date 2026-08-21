
/* lua_cocos2dx_3d_Animation3D_create(lua_State*) */

undefined4 lua_cocos2dx_3d_Animation3D_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  undefined4 uVar7;
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
                    /* try { // try from 00900438 to 00a00473 has its CatchHandler @ 009005d0 */
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.Animation3D:create");
                    /* try { // try from 009004f0 to 00a0051b has its CatchHandler @ 009005cc */
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"cc.Animation3D:create");
    if ((uVar3 & uVar4 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Animation3D_create\'",0);
      uVar7 = 0;
    }
    else {
      pvVar6 = (void *)cocos2d::Animation3D::create
                                 ((basic_string *)&local_50,(basic_string *)&local_68);
      if (pvVar6 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
                    /* try { // try from 00900520 to 00a00533 has its CatchHandler @ 009005d0 */
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                   "cc.Animation3D");
      }
      uVar7 = 1;
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
  }
  else {
    if (iVar2 != 2) {
                    /* try { // try from 00900544 to 00a0054b has its CatchHandler @ 009005cc */
                    /* try { // try from 0090054c to 00a00627 has its CatchHandler @ 009003ec */
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
                 "cc.Animation3D:create",iVar2 + -1,1);
      uVar7 = 0;
      goto LAB_009005b8;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.Animation3D:create");
    if ((uVar5 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Animation3D_create\'",0);
      uVar7 = 0;
    }
    else {
                    /* try { // try from 00900474 to 00a004a7 has its CatchHandler @ 009003ec */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_68,"");
      pvVar6 = (void *)cocos2d::Animation3D::create
                                 ((basic_string *)&local_50,(basic_string *)&local_68);
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
      if (pvVar6 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
                    /* try { // try from 009004a8 to 00a004db has its CatchHandler @ 009005d0 */
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                   "cc.Animation3D");
      }
      uVar7 = 1;
    }
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_009005b8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 009004f0 with catch @ 009005cc
                       catch() { ... } // from try @ 00900544 with catch @ 009005cc */
                    /* catch() { ... } // from try @ 00900438 with catch @ 009005d0
                       catch() { ... } // from try @ 009004a8 with catch @ 009005d0
                       catch() { ... } // from try @ 00900520 with catch @ 009005d0 */
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

