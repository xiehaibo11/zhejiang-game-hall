
/* lua_dragonbones_CCSlot_constructor(lua_State*) */

bool lua_dragonbones_CCSlot_constructor(lua_State *param_1)

{
  int iVar1;
  undefined4 uVar2;
  CCSlot *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x198);
    dragonBones::CCSlot::CCSlot(this);
    tolua_pushusertype(param_1,this,"db.CCSlot");
                    /* catch() { ... } // from try @ 0095e7ec with catch @ 0095e8ec */
    uVar2 = lua_gettop(param_1);
    tolua_register_gc(param_1,uVar2);
  }
  else {
                    /* catch() { ... } // from try @ 0095e820 with catch @ 0095e8b8 */
                    /* catch() { ... } // from try @ 0095e838 with catch @ 0095e8bc */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d421d,
               iVar1,0);
  }
  return iVar1 == 0;
}

