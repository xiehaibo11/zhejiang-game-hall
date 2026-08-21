
/* lua_dragonbones_BaseFactory_replaceAnimation(lua_State*) */

undefined4 lua_dragonbones_BaseFactory_replaceAnimation(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 unaff_x21;
  undefined4 uVar9;
  bool local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar6 = (long *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 == 4) {
    if (param_1 != (lua_State *)0x0) {
      iVar3 = lua_gettop(param_1);
      if ((iVar3 < 2) || (uVar7 = luaval_is_usertype(param_1,2,"db.Armature",0), (uVar7 & 1) == 0))
      {
        uVar4 = 0;
      }
      else {
                    /* try { // try from 0095b0fc to 00a5b0ff has its CatchHandler @ 0095b134 */
                    /* try { // try from 0095b100 to 00a5b147 has its CatchHandler @ 0095b0b0 */
        unaff_x21 = tolua_tousertype(param_1,2,0);
        uVar4 = 1;
      }
      iVar3 = lua_gettop(param_1);
      if ((2 < iVar3) &&
         (uVar7 = luaval_is_usertype(param_1,3,"db.ArmatureData",0), (uVar7 & 1) != 0)) {
        uVar8 = tolua_tousertype(param_1,3,0);
                    /* try { // try from 0095b200 to 00a5b233 has its CatchHandler @ 0095b300 */
        uVar5 = luaval_to_boolean(param_1,4,local_4c,"db.BaseFactory:replaceAnimation");
        if ((uVar4 & uVar5) != 0) {
          uVar4 = (**(code **)(*plVar6 + 200))(plVar6,unaff_x21,uVar8,local_4c[0]);
                    /* try { // try from 0095b234 to 00a5b247 has its CatchHandler @ 0095b2cc */
          tolua_pushboolean(param_1,uVar4 & 1);
          uVar9 = 1;
          goto LAB_0095b274;
        }
        goto LAB_0095b25c;
      }
    }
                    /* try { // try from 0095b24c to 00a5b27f has its CatchHandler @ 0095b2d0 */
    luaval_to_boolean(param_1,4,local_4c,"db.BaseFactory:replaceAnimation");
LAB_0095b25c:
    tolua_error(param_1,
                "invalid arguments in function \'lua_dragonbones_BaseFactory_replaceAnimation\'",0);
  }
  else {
    if (iVar3 == 3) {
      if (param_1 != (lua_State *)0x0) {
        iVar3 = lua_gettop(param_1);
        if ((iVar3 < 2) || (uVar7 = luaval_is_usertype(param_1,2,"db.Armature",0), (uVar7 & 1) == 0)
           ) {
          bVar2 = false;
        }
        else {
                    /* try { // try from 0095b0b0 to 00a5b0fb has its CatchHandler @ 0095b0b0
                       catch() { ... } // from try @ 0095b0b0 with catch @ 0095b0b0
                       catch() { ... } // from try @ 0095b100 with catch @ 0095b0b0 */
          unaff_x21 = tolua_tousertype(param_1,2,0);
          bVar2 = true;
        }
        iVar3 = lua_gettop(param_1);
                    /* try { // try from 0095b148 to 00a5b1ff has its CatchHandler @ 0095b148
                       catch() { ... } // from try @ 0095b148 with catch @ 0095b148
                       catch() { ... } // from try @ 0095b280 with catch @ 0095b148 */
        if (((2 < iVar3) &&
            (uVar7 = luaval_is_usertype(param_1,3,"db.ArmatureData",0), (uVar7 & 1) != 0)) &&
           (uVar8 = tolua_tousertype(param_1,3,0), bVar2)) {
          uVar9 = 1;
          uVar4 = (**(code **)(*plVar6 + 200))(plVar6,unaff_x21,uVar8,1);
          tolua_pushboolean(param_1,uVar4 & 1);
          goto LAB_0095b274;
        }
      }
      goto LAB_0095b25c;
    }
                    /* catch() { ... } // from try @ 0095b0fc with catch @ 0095b134 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.BaseFactory:replaceAnimation",iVar3 + -1,2);
  }
  uVar9 = 0;
LAB_0095b274:
                    /* try { // try from 0095b280 to 00a5b31b has its CatchHandler @ 0095b148 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

