
/* lua_dragonbones_CCFactory_loadDragonBonesData(lua_State*) */

undefined4 lua_dragonbones_CCFactory_loadDragonBonesData(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  DragonBonesData *pDVar8;
  char *pcVar9;
  undefined4 uVar10;
  double local_80;
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar6 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"db.CCFactory:loadDragonBonesData");
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_78,"db.CCFactory:loadDragonBonesData");
    uVar5 = luaval_to_number(param_1,4,&local_80,"db.CCFactory:loadDragonBonesData");
                    /* try { // try from 0095fae4 to 00a5fb17 has its CatchHandler @ 0095fbe4 */
    if ((uVar3 & uVar4 & uVar5 & 1) != 0) {
      pDVar8 = (DragonBonesData *)
               (**(code **)(*plVar6 + 0xd0))((float)local_80,plVar6,&local_60,&local_78);
      if (pDVar8 == (DragonBonesData *)0x0) {
        lua_pushnil(param_1);
      }
      else {
                    /* try { // try from 0095fb18 to 00a5fb2b has its CatchHandler @ 0095fbb0 */
        pcVar9 = getLuaTypeName<dragonBones::DragonBonesData>(pDVar8,"db.DragonBonesData");
        tolua_pushusertype(param_1,pDVar8,pcVar9);
                    /* try { // try from 0095fb30 to 00a5fb63 has its CatchHandler @ 0095fbb4 */
      }
      goto LAB_0095fc28;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_dragonbones_CCFactory_loadDragonBonesData\'",0)
    ;
LAB_0095fbac:
    uVar10 = 0;
                    /* catch() { ... } // from try @ 0095fb18 with catch @ 0095fbb0 */
joined_r0x0095fbb4:
                    /* catch() { ... } // from try @ 0095fb30 with catch @ 0095fbb4 */
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
  }
  else {
    if (iVar2 == 3) {
      local_58 = 0;
      local_50 = (void *)0x0;
      local_68 = (void *)0x0;
      local_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
                    /* catch() { ... } // from try @ 0095f9c8 with catch @ 0095fa00 */
      uVar3 = luaval_to_std_string
                        (param_1,2,(basic_string *)&local_60,"db.CCFactory:loadDragonBonesData");
                    /* try { // try from 0095fa14 to 00a5fae3 has its CatchHandler @ 0095fa14
                       catch() { ... } // from try @ 0095fa14 with catch @ 0095fa14
                       catch() { ... } // from try @ 0095fb64 with catch @ 0095fa14 */
      uVar4 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_78,"db.CCFactory:loadDragonBonesData");
      if ((uVar3 & uVar4 & 1) == 0) {
        tolua_error(param_1,
                    "invalid arguments in function \'lua_dragonbones_CCFactory_loadDragonBonesData\'"
                    ,0);
        goto LAB_0095fbac;
      }
      pDVar8 = (DragonBonesData *)
               (**(code **)(*plVar6 + 0xd0))(0x3f800000,plVar6,&local_60,&local_78);
      if (pDVar8 == (DragonBonesData *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        pcVar9 = getLuaTypeName<dragonBones::DragonBonesData>(pDVar8,"db.DragonBonesData");
        tolua_pushusertype(param_1,pDVar8,pcVar9);
      }
LAB_0095fc28:
      uVar10 = 1;
      goto joined_r0x0095fbb4;
    }
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "db.CCFactory:loadDragonBonesData",iVar2 + -1,1);
      uVar10 = 0;
      goto LAB_0095fbd0;
    }
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
                    /* try { // try from 0095f97c to 00a5f9c7 has its CatchHandler @ 0095f97c
                       catch() { ... } // from try @ 0095f97c with catch @ 0095f97c
                       catch() { ... } // from try @ 0095f9cc with catch @ 0095f97c */
    uVar7 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"db.CCFactory:loadDragonBonesData");
    if ((uVar7 & 1) == 0) {
                    /* try { // try from 0095fb64 to 00a5fbff has its CatchHandler @ 0095fa14 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_dragonbones_CCFactory_loadDragonBonesData\'",
                  0);
      uVar10 = 0;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_78,"");
      pDVar8 = (DragonBonesData *)
               (**(code **)(*plVar6 + 0xd0))(0x3f800000,plVar6,&local_60,&local_78);
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
                    /* try { // try from 0095f9c8 to 00a5f9cb has its CatchHandler @ 0095fa00 */
      if (pDVar8 == (DragonBonesData *)0x0) {
        lua_pushnil(param_1);
      }
      else {
                    /* try { // try from 0095f9cc to 00a5fa13 has its CatchHandler @ 0095f97c */
        pcVar9 = getLuaTypeName<dragonBones::DragonBonesData>(pDVar8,"db.DragonBonesData");
        tolua_pushusertype(param_1,pDVar8,pcVar9);
      }
      uVar10 = 1;
    }
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_0095fbd0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 0095fae4 with catch @ 0095fbe4 */
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

