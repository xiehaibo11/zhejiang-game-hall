
/* lua_cocos2dx_physics3d_Physics3DConstraint_getbtContraint(lua_State*) */

undefined8 lua_cocos2dx_physics3d_Physics3DConstraint_getbtContraint(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  btTypedConstraint *pbVar5;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pbVar5 = *(btTypedConstraint **)(lVar2 + 0x28);
    if (pbVar5 == (btTypedConstraint *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      pcVar4 = getLuaTypeName<btTypedConstraint>(pbVar5,"btTypedConstraint");
                    /* catch() { ... } // from try @ 009be5bc with catch @ 009be6cc */
                    /* catch() { ... } // from try @ 009be574 with catch @ 009be6d0 */
                    /* catch() { ... } // from try @ 009be56c with catch @ 009be6d8 */
      tolua_pushusertype(param_1,pbVar5,pcVar4);
                    /* catch() { ... } // from try @ 009be584 with catch @ 009be6dc */
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DConstraint:getbtContraint",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

