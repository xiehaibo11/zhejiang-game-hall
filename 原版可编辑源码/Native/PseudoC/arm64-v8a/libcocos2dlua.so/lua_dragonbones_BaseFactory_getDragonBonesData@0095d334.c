
/* lua_dragonbones_BaseFactory_getDragonBonesData(lua_State*) */

undefined4 lua_dragonbones_BaseFactory_getDragonBonesData(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  undefined4 uVar7;
  DragonBonesData *pDVar8;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
                    /* try { // try from 0095d348 to 00a5d3e3 has its CatchHandler @ 0095d210 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* catch() { ... } // from try @ 0095d2fc with catch @ 0095d394 */
                    /* catch() { ... } // from try @ 0095d314 with catch @ 0095d398 */
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"db.BaseFactory:getDragonBonesData");
    if ((uVar4 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_dragonbones_BaseFactory_getDragonBonesData\'"
                  ,0);
      uVar7 = 0;
    }
    else {
      lVar5 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>>>
                          *)(lVar3 + 0x10),(basic_string *)&local_50);
      if ((lVar3 + 0x18 == lVar5) ||
         (pDVar8 = *(DragonBonesData **)(lVar5 + 0x38), pDVar8 == (DragonBonesData *)0x0)) {
        lua_pushnil(param_1);
      }
      else {
                    /* catch() { ... } // from try @ 0095d2c8 with catch @ 0095d3c8 */
        pcVar6 = getLuaTypeName<dragonBones::DragonBonesData>(pDVar8,"db.DragonBonesData");
        tolua_pushusertype(param_1,pDVar8,pcVar6);
      }
      uVar7 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.BaseFactory:getDragonBonesData",iVar2 + -1,1);
    uVar7 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

