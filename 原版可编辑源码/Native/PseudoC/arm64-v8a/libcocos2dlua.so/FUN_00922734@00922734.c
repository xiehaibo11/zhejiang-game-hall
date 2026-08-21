
undefined8 FUN_00922734(long param_1)

{
  int iVar1;
  long *plVar2;
  
  if (param_1 != 0) {
    plVar2 = (long *)tolua_tousertype(param_1,1,0);
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 1) {
                    /* catch() { ... } // from try @ 009226d4 with catch @ 0092276c */
                    /* catch() { ... } // from try @ 009226ec with catch @ 00922770 */
      iVar1 = tolua_toboolean(param_1,2,0);
      (**(code **)(*plVar2 + 0x590))(plVar2,iVar1 != 0);
    }
    else {
                    /* catch() { ... } // from try @ 009226a0 with catch @ 009227a0 */
      luaL_error(param_1,
                 "\'setIgnoreMovementBoneData\' function of Bone  has wrong number of arguments: %d, was expecting %d\n"
                 ,iVar1 + -1,0);
    }
  }
  return 0;
}

