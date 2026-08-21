
/* lua_dragonbones_Armature_invalidUpdate(lua_State*) */

undefined4 lua_dragonbones_Armature_invalidUpdate(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  Armature *this;
  ulong uVar5;
  undefined4 uVar6;
  bool local_54 [4];
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Armature *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"db.Armature:invalidUpdate");
                    /* try { // try from 00954220 to 00a54253 has its CatchHandler @ 00954320 */
    uVar4 = luaval_to_boolean(param_1,3,local_54,"db.Armature:invalidUpdate");
    if ((uVar3 & uVar4 & 1) != 0) {
      dragonBones::Armature::invalidUpdate(this,(basic_string *)&local_50,local_54[0]);
      lua_settop(param_1,1);
      goto LAB_0095424c;
    }
                    /* try { // try from 009542a0 to 00a5433b has its CatchHandler @ 00954030 */
    tolua_error(param_1,&DAT_012d243a,0);
LAB_009542a8:
    uVar6 = 0;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 + -1 == 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_50,"");
        dragonBones::Armature::invalidUpdate(this,(basic_string *)&local_50,false);
        if ((local_50 & 1) != 0) {
          operator_delete(local_40);
        }
        uVar6 = 1;
        lua_settop(param_1,1);
      }
      else {
                    /* try { // try from 0095426c to 00a5429f has its CatchHandler @ 009542f0 */
        luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",0x12d2481,
                   iVar2 + -1,0);
        uVar6 = 0;
      }
      goto LAB_009542bc;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"db.Armature:invalidUpdate");
    if ((uVar5 & 1) == 0) {
      tolua_error(param_1,&DAT_012d243a,0);
      goto LAB_009542a8;
    }
    dragonBones::Armature::invalidUpdate(this,(basic_string *)&local_50,false);
    lua_settop(param_1,1);
LAB_0095424c:
    uVar6 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_009542bc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

