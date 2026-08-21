
/* lua_dragonbones_BaseFactory_getArmatureData(lua_State*) */

undefined4 lua_dragonbones_BaseFactory_getArmatureData(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  ArmatureData *pAVar7;
  char *pcVar8;
  undefined4 uVar9;
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"db.BaseFactory:getArmatureData");
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_68,"db.BaseFactory:getArmatureData");
    if ((uVar3 & uVar4 & 1) == 0) {
                    /* try { // try from 0095ca4c to 00a5ca4f has its CatchHandler @ 0095ca84 */
                    /* try { // try from 0095ca50 to 00a5ca97 has its CatchHandler @ 0095ca00 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_dragonbones_BaseFactory_getArmatureData\'",0)
      ;
      uVar9 = 0;
    }
    else {
      pAVar7 = (ArmatureData *)(**(code **)(*plVar5 + 0x90))(plVar5,&local_50,&local_68);
      if (pAVar7 == (ArmatureData *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        pcVar8 = getLuaTypeName<dragonBones::ArmatureData>(pAVar7,"db.ArmatureData");
        tolua_pushusertype(param_1,pAVar7,pcVar8);
      }
      uVar9 = 1;
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
  }
  else {
    if (iVar2 != 2) {
                    /* try { // try from 0095ca00 to 00a5ca4b has its CatchHandler @ 0095ca00
                       catch() { ... } // from try @ 0095ca00 with catch @ 0095ca00
                       catch() { ... } // from try @ 0095ca50 with catch @ 0095ca00 */
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "db.BaseFactory:getArmatureData",iVar2 + -1,1);
      uVar9 = 0;
      goto LAB_0095ca7c;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar6 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"db.BaseFactory:getArmatureData");
    if ((uVar6 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_dragonbones_BaseFactory_getArmatureData\'",0)
      ;
      uVar9 = 0;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_68,"");
      pAVar7 = (ArmatureData *)(**(code **)(*plVar5 + 0x90))(plVar5,&local_50,&local_68);
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
      if (pAVar7 == (ArmatureData *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        pcVar8 = getLuaTypeName<dragonBones::ArmatureData>(pAVar7,"db.ArmatureData");
        tolua_pushusertype(param_1,pAVar7,pcVar8);
      }
      uVar9 = 1;
    }
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_0095ca7c:
                    /* catch() { ... } // from try @ 0095ca4c with catch @ 0095ca84 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0095ca98 to 00a5cb7f has its CatchHandler @ 0095ca98
                       catch() { ... } // from try @ 0095ca98 with catch @ 0095ca98
                       catch() { ... } // from try @ 0095cc00 with catch @ 0095ca98 */
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

