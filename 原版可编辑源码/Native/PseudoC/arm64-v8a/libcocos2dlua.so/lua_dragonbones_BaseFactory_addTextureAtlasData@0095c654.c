
/* lua_dragonbones_BaseFactory_addTextureAtlasData(lua_State*) */

bool lua_dragonbones_BaseFactory_addTextureAtlasData(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 unaff_x21;
  uint uVar8;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
                    /* try { // try from 0095c654 to 00a5c687 has its CatchHandler @ 0095c6d8 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0095c688 to 00a5c723 has its CatchHandler @ 0095c550 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar5 = luaval_is_usertype(param_1,2,"db.TextureAtlasData",0), (uVar5 & 1) == 0)) {
      uVar8 = 0;
    }
    else {
      unaff_x21 = tolua_tousertype(param_1,2,0);
      uVar8 = 1;
    }
    uVar3 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_60,"db.BaseFactory:addTextureAtlasData");
    bVar7 = (uVar8 & uVar3) == 0;
    if (bVar7) {
      tolua_error(param_1,0x12d3b6f,0);
    }
    else {
      (**(code **)(*plVar4 + 0x80))(plVar4,unaff_x21,&local_60);
      lua_settop(param_1,1);
    }
    bVar7 = !bVar7;
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else {
    if (iVar2 == 2) {
      if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
         (uVar5 = luaval_is_usertype(param_1,2,"db.TextureAtlasData",0), (uVar5 & 1) != 0)) {
                    /* catch() { ... } // from try @ 0095c63c with catch @ 0095c6d4 */
                    /* catch() { ... } // from try @ 0095c654 with catch @ 0095c6d8 */
        uVar6 = tolua_tousertype(param_1,2,0);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_60,"");
                    /* catch() { ... } // from try @ 0095c608 with catch @ 0095c708 */
        (**(code **)(*plVar4 + 0x80))(plVar4,uVar6,&local_60);
        if ((local_60 & 1) != 0) {
          operator_delete(local_50);
        }
        bVar7 = true;
        lua_settop(param_1,1);
        goto LAB_0095c824;
      }
      tolua_error(param_1,0x12d3b6f,0);
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d3b4c,
                 iVar2 + -1,1);
    }
    bVar7 = false;
  }
LAB_0095c824:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

