
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* lua_dragonbones_Armature_getTypeIndex(lua_State*) */

undefined8 lua_dragonbones_Armature_getTypeIndex(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
                    /* try { // try from 009551c4 to 00a55297 has its CatchHandler @ 009551c4
                       catch() { ... } // from try @ 009551c4 with catch @ 009551c4
                       catch() { ... } // from try @ 009552d4 with catch @ 009551c4 */
    if ((dragonBones::Armature::getTypeIndex()::typeIndex & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&dragonBones::Armature::getTypeIndex()::typeIndex);
      if (iVar1 != 0) {
        _typeIndex = "N11dragonBones8ArmatureE";
        __cxa_guard_release(&dragonBones::Armature::getTypeIndex()::typeIndex);
      }
    }
    uVar2 = NEON_ucvtf((ulong)_typeIndex & 0xffffffff);
    tolua_pushnumber(uVar2,param_1);
    uVar2 = 1;
  }
  else {
                    /* catch() { ... } // from try @ 009550a8 with catch @ 009551a8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "db.Armature:getTypeIndex",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

