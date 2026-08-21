
/* lua_dragonbones_BaseFactory_replaceSkin(lua_State*) */

void lua_dragonbones_BaseFactory_replaceSkin(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  lua_State *plVar9;
  bool *pbVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  bool local_60 [4];
  bool local_5c [4];
  long local_58;
  
  pbVar10 = local_60;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar7 = (long *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 == 5) {
    if (param_1 == (lua_State *)0x0) {
      plVar9 = (lua_State *)0x0;
      goto LAB_0095afe4;
    }
    iVar3 = lua_gettop(param_1);
                    /* try { // try from 0095ad8c to 00a5ae5b has its CatchHandler @ 0095ad8c
                       catch() { ... } // from try @ 0095ad8c with catch @ 0095ad8c
                       catch() { ... } // from try @ 0095aedc with catch @ 0095ad8c */
    if ((iVar3 < 2) || (uVar8 = luaval_is_usertype(param_1,2,"db.Armature",0), (uVar8 & 1) == 0)) {
      uVar6 = 0;
    }
    else {
      unaff_x21 = tolua_tousertype(param_1,2,0);
      uVar6 = 1;
    }
    iVar3 = lua_gettop(param_1);
                    /* try { // try from 0095ae90 to 00a5aea3 has its CatchHandler @ 0095af28 */
                    /* try { // try from 0095aea8 to 00a5aedb has its CatchHandler @ 0095af2c */
    if ((iVar3 < 3) || (uVar8 = luaval_is_usertype(param_1,3,"db.SkinData",0), (uVar8 & 1) == 0)) {
      uVar4 = 0;
    }
    else {
      unaff_x22 = tolua_tousertype(param_1,3,0);
      uVar4 = 1;
    }
                    /* try { // try from 0095aedc to 00a5af77 has its CatchHandler @ 0095ad8c */
    uVar5 = luaval_to_boolean(param_1,4,local_60,"db.BaseFactory:replaceSkin");
    iVar3 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 0095ae90 with catch @ 0095af28 */
                    /* catch() { ... } // from try @ 0095aea8 with catch @ 0095af2c */
    if (((4 < iVar3) &&
        (uVar8 = luaval_is_usertype(param_1,5,
                                    "std::vector<std::basic_string<char>, std::allocator<std::basic_string<char> > >*"
                                    ,0), (uVar8 & 1) != 0)) &&
       (uVar11 = tolua_tousertype(param_1,5,0), (uVar6 & uVar4 & uVar5) != 0)) {
      pcVar12 = *(code **)(*plVar7 + 0xc0);
      local_5c[0] = local_60[0];
LAB_0095afb8:
      uVar6 = (*pcVar12)(plVar7,unaff_x21,unaff_x22,local_5c[0],uVar11);
      tolua_pushboolean(param_1,uVar6 & 1);
      uVar11 = 1;
      goto LAB_0095b000;
    }
LAB_0095afe8:
    tolua_error(param_1,0x12d36fa,0);
  }
  else {
    if (iVar3 == 4) {
      if (param_1 != (lua_State *)0x0) {
        iVar3 = lua_gettop(param_1);
                    /* try { // try from 0095ad40 to 00a5ad43 has its CatchHandler @ 0095ad78 */
                    /* try { // try from 0095ad44 to 00a5ad8b has its CatchHandler @ 0095acf4 */
        if ((iVar3 < 2) || (uVar8 = luaval_is_usertype(param_1,2,"db.Armature",0), (uVar8 & 1) == 0)
           ) {
          uVar6 = 0;
        }
        else {
          unaff_x21 = tolua_tousertype(param_1,2,0);
          uVar6 = 1;
                    /* catch() { ... } // from try @ 0095ad40 with catch @ 0095ad78 */
        }
        iVar3 = lua_gettop(param_1);
        if ((2 < iVar3) && (uVar8 = luaval_is_usertype(param_1,3,"db.SkinData",0), (uVar8 & 1) != 0)
           ) {
          unaff_x22 = tolua_tousertype(param_1,3,0);
          uVar4 = luaval_to_boolean(param_1,4,local_5c,"db.BaseFactory:replaceSkin");
          if ((uVar6 & uVar4) != 0) {
                    /* try { // try from 0095ae5c to 00a5ae8f has its CatchHandler @ 0095af5c */
            pcVar12 = *(code **)(*plVar7 + 0xc0);
            goto LAB_0095afb4;
          }
          goto LAB_0095afe8;
        }
      }
      pbVar10 = local_5c;
      plVar9 = param_1;
LAB_0095afe4:
      luaval_to_boolean(plVar9,4,pbVar10,"db.BaseFactory:replaceSkin");
      goto LAB_0095afe8;
    }
    if (iVar3 == 3) {
      if (param_1 != (lua_State *)0x0) {
        iVar3 = lua_gettop(param_1);
                    /* try { // try from 0095acf4 to 00a5ad3f has its CatchHandler @ 0095acf4
                       catch() { ... } // from try @ 0095acf4 with catch @ 0095acf4
                       catch() { ... } // from try @ 0095ad44 with catch @ 0095acf4 */
        if ((iVar3 < 2) || (uVar8 = luaval_is_usertype(param_1,2,"db.Armature",0), (uVar8 & 1) == 0)
           ) {
          bVar2 = false;
        }
        else {
          unaff_x21 = tolua_tousertype(param_1,2,0);
          bVar2 = true;
        }
                    /* catch() { ... } // from try @ 0095ae5c with catch @ 0095af5c */
        iVar3 = lua_gettop(param_1);
        if (((2 < iVar3) &&
            (uVar8 = luaval_is_usertype(param_1,3,"db.SkinData",0), (uVar8 & 1) != 0)) &&
           (unaff_x22 = tolua_tousertype(param_1,3,0), bVar2)) {
          pcVar12 = *(code **)(*plVar7 + 0xc0);
          local_5c[0] = false;
LAB_0095afb4:
          uVar11 = 0;
          goto LAB_0095afb8;
        }
      }
      goto LAB_0095afe8;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.BaseFactory:replaceSkin",iVar3 + -1,2);
  }
  uVar11 = 0;
LAB_0095b000:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}

