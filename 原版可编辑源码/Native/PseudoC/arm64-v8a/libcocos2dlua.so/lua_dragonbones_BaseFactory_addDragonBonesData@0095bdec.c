
/* lua_dragonbones_BaseFactory_addDragonBonesData(lua_State*) */

bool lua_dragonbones_BaseFactory_addDragonBonesData(lua_State *param_1)

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
  
                    /* catch() { ... } // from try @ 0095bdbc with catch @ 0095bdf4 */
  lVar1 = tpidr_el0;
                    /* try { // try from 0095be08 to 00a5bebf has its CatchHandler @ 0095be08
                       catch() { ... } // from try @ 0095be08 with catch @ 0095be08
                       catch() { ... } // from try @ 0095bf40 with catch @ 0095be08 */
  local_48 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
                    /* try { // try from 0095bef4 to 00a5bf07 has its CatchHandler @ 0095bf8c */
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar5 = luaval_is_usertype(param_1,2,"db.DragonBonesData",0), (uVar5 & 1) == 0)) {
      uVar8 = 0;
    }
    else {
                    /* try { // try from 0095bf0c to 00a5bf3f has its CatchHandler @ 0095bf90 */
      unaff_x21 = tolua_tousertype(param_1,2,0);
      uVar8 = 1;
    }
    uVar3 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_60,"db.BaseFactory:addDragonBonesData");
    bVar7 = (uVar8 & uVar3) == 0;
    if (bVar7) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_dragonbones_BaseFactory_addDragonBonesData\'"
                  ,0);
    }
    else {
                    /* catch() { ... } // from try @ 0095bef4 with catch @ 0095bf8c */
                    /* catch() { ... } // from try @ 0095bf0c with catch @ 0095bf90 */
      (**(code **)(*plVar4 + 0x70))(plVar4,unaff_x21,&local_60);
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
         (uVar5 = luaval_is_usertype(param_1,2,"db.DragonBonesData",0), (uVar5 & 1) != 0)) {
        uVar6 = tolua_tousertype(param_1,2,0);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_60,"");
        (**(code **)(*plVar4 + 0x70))(plVar4,uVar6,&local_60);
        if ((local_60 & 1) != 0) {
          operator_delete(local_50);
        }
                    /* try { // try from 0095bec0 to 00a5bef3 has its CatchHandler @ 0095bfc0 */
        bVar7 = true;
        lua_settop(param_1,1);
        goto LAB_0095bfbc;
      }
      tolua_error(param_1,
                  "invalid arguments in function \'lua_dragonbones_BaseFactory_addDragonBonesData\'"
                  ,0);
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "db.BaseFactory:addDragonBonesData",iVar2 + -1,1);
                    /* try { // try from 0095bf40 to 00a5bfdb has its CatchHandler @ 0095be08 */
    }
    bVar7 = false;
  }
LAB_0095bfbc:
                    /* catch() { ... } // from try @ 0095bec0 with catch @ 0095bfc0 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

