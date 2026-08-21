
/* lua_dragonbones_BaseFactory_changeSkin(lua_State*) */

undefined8 lua_dragonbones_BaseFactory_changeSkin(lua_State *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  byte bVar8;
  byte bVar9;
  
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0095cf58 to 00a5cf6b has its CatchHandler @ 0095cff0 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
    if (param_1 != (lua_State *)0x0) {
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 2) || (uVar5 = luaval_is_usertype(param_1,2,"db.Armature",0), (uVar5 & 1) == 0))
      {
        bVar8 = 0;
      }
      else {
                    /* catch() { ... } // from try @ 0095cf58 with catch @ 0095cff0 */
                    /* catch() { ... } // from try @ 0095cf70 with catch @ 0095cff4 */
        unaff_x21 = tolua_tousertype(param_1,2,0);
        bVar8 = 1;
      }
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 3) || (uVar5 = luaval_is_usertype(param_1,3,"db.SkinData",0), (uVar5 & 1) == 0))
      {
        bVar9 = 0;
      }
      else {
        unaff_x22 = tolua_tousertype(param_1,3,0);
        bVar9 = 1;
      }
      iVar2 = lua_gettop(param_1);
      if (((3 < iVar2) &&
          (uVar5 = luaval_is_usertype(param_1,4,
                                      "std::vector<std::basic_string<char>, std::allocator<std::basic_string<char> > >*"
                                      ,0), (uVar5 & 1) != 0)) &&
         (uVar6 = tolua_tousertype(param_1,4,0), (bool)(bVar8 & bVar9))) {
        pcVar7 = *(code **)(*plVar4 + 0xc0);
        goto LAB_0095d144;
      }
    }
  }
  else {
                    /* try { // try from 0095cf70 to 00a5cfa3 has its CatchHandler @ 0095cff4 */
    if (iVar2 != 3) {
                    /* catch() { ... } // from try @ 0095cf24 with catch @ 0095d024 */
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",0x12d3c9b,
                 iVar2 + -1,2);
      return 0;
    }
    if (param_1 != (lua_State *)0x0) {
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 2) || (uVar5 = luaval_is_usertype(param_1,2,"db.Armature",0), (uVar5 & 1) == 0))
      {
        bVar1 = false;
      }
      else {
                    /* try { // try from 0095cfa4 to 00a5d03f has its CatchHandler @ 0095ce6c */
        unaff_x21 = tolua_tousertype(param_1,2,0);
        bVar1 = true;
      }
      iVar2 = lua_gettop(param_1);
      if (((2 < iVar2) && (uVar5 = luaval_is_usertype(param_1,3,"db.SkinData",0), (uVar5 & 1) != 0))
         && (unaff_x22 = tolua_tousertype(param_1,3,0), bVar1)) {
        pcVar7 = *(code **)(*plVar4 + 0xc0);
        uVar6 = 0;
LAB_0095d144:
        uVar3 = (*pcVar7)(plVar4,unaff_x21,unaff_x22,0,uVar6);
        tolua_pushboolean(param_1,uVar3 & 1);
        return 1;
      }
    }
  }
  tolua_error(param_1,"invalid arguments in function \'lua_dragonbones_BaseFactory_changeSkin\'",0);
                    /* try { // try from 0095d178 to 00a5d1c3 has its CatchHandler @ 0095d178
                       catch() { ... } // from try @ 0095d178 with catch @ 0095d178
                       catch() { ... } // from try @ 0095d1c8 with catch @ 0095d178 */
  return 0;
}

