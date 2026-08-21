
/* lua_dragonbones_CCSlot_getTypeIndex(lua_State*) */

undefined8 lua_dragonbones_CCSlot_getTypeIndex(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
                    /* try { // try from 0095e820 to 00a5e833 has its CatchHandler @ 0095e8b8 */
    if ((dragonBones::CCSlot::getTypeIndex()::typeIndex & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&dragonBones::CCSlot::getTypeIndex()::typeIndex);
      if (iVar1 != 0) {
                    /* try { // try from 0095e86c to 00a5e907 has its CatchHandler @ 0095e734 */
        dragonBones::CCSlot::getTypeIndex()::typeIndex = "N11dragonBones6CCSlotE";
        __cxa_guard_release(&dragonBones::CCSlot::getTypeIndex()::typeIndex);
      }
    }
    uVar2 = NEON_ucvtf((ulong)dragonBones::CCSlot::getTypeIndex()::typeIndex & 0xffffffff);
    tolua_pushnumber(uVar2,param_1);
                    /* try { // try from 0095e838 to 00a5e86b has its CatchHandler @ 0095e8bc */
    uVar2 = 1;
  }
  else {
                    /* try { // try from 0095e7ec to 00a5e81f has its CatchHandler @ 0095e8ec */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "db.CCSlot:getTypeIndex",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

