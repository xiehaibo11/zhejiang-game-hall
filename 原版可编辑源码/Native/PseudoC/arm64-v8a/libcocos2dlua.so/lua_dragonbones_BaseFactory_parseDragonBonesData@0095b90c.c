
/* lua_dragonbones_BaseFactory_parseDragonBonesData(lua_State*) */

undefined4 lua_dragonbones_BaseFactory_parseDragonBonesData(lua_State *param_1)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  DragonBonesData *pDVar9;
  char *pcVar10;
  undefined4 uVar11;
  double local_80;
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar7 = (long *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 == 4) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_78,"db.BaseFactory:parseDragonBonesData");
    pvVar1 = (void *)((ulong)&local_78 | 1);
    if ((local_78 & 1) != 0) {
      pvVar1 = local_68;
    }
    uVar5 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_60,"db.BaseFactory:parseDragonBonesData");
                    /* try { // try from 0095bb1c to 00a5bb4f has its CatchHandler @ 0095bc1c */
    uVar6 = luaval_to_number(param_1,4,&local_80,"db.BaseFactory:parseDragonBonesData");
    if ((uVar4 & uVar5 & uVar6 & 1) != 0) {
      pDVar9 = (DragonBonesData *)
               (**(code **)(*plVar7 + 0x60))((float)local_80,plVar7,pvVar1,&local_60);
                    /* try { // try from 0095bb50 to 00a5bb63 has its CatchHandler @ 0095bbe8 */
      if (pDVar9 == (DragonBonesData *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        pcVar10 = getLuaTypeName<dragonBones::DragonBonesData>(pDVar9,"db.DragonBonesData");
                    /* try { // try from 0095bb68 to 00a5bb9b has its CatchHandler @ 0095bbec */
        tolua_pushusertype(param_1,pDVar9,pcVar10);
      }
      goto LAB_0095bc70;
    }
                    /* catch() { ... } // from try @ 0095bb50 with catch @ 0095bbe8 */
                    /* catch() { ... } // from try @ 0095bb68 with catch @ 0095bbec */
    tolua_error(param_1,&DAT_012d39a5,0);
LAB_0095bbf4:
    uVar11 = 0;
joined_r0x0095bbfc:
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
  }
  else {
    if (iVar3 == 3) {
      local_58 = 0;
      local_50 = (void *)0x0;
      local_68 = (void *)0x0;
      local_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
                    /* catch() { ... } // from try @ 0095b9e8 with catch @ 0095ba20 */
      uVar4 = luaval_to_std_string
                        (param_1,2,(basic_string *)&local_78,"db.BaseFactory:parseDragonBonesData");
                    /* try { // try from 0095ba34 to 00a5bb1b has its CatchHandler @ 0095ba34
                       catch() { ... } // from try @ 0095ba34 with catch @ 0095ba34
                       catch() { ... } // from try @ 0095bb9c with catch @ 0095ba34 */
      pvVar1 = (void *)((ulong)&local_78 | 1);
      if ((local_78 & 1) != 0) {
        pvVar1 = local_68;
      }
      uVar5 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_60,"db.BaseFactory:parseDragonBonesData");
      if ((uVar4 & uVar5 & 1) == 0) {
        tolua_error(param_1,&DAT_012d39a5,0);
        goto LAB_0095bbf4;
      }
      pDVar9 = (DragonBonesData *)(**(code **)(*plVar7 + 0x60))(0x3f800000,plVar7,pvVar1,&local_60);
      if (pDVar9 == (DragonBonesData *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        pcVar10 = getLuaTypeName<dragonBones::DragonBonesData>(pDVar9,"db.DragonBonesData");
        tolua_pushusertype(param_1,pDVar9,pcVar10);
      }
LAB_0095bc70:
      uVar11 = 1;
      goto joined_r0x0095bbfc;
    }
    if (iVar3 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "db.BaseFactory:parseDragonBonesData",iVar3 + -1,1);
                    /* try { // try from 0095bb9c to 00a5bc37 has its CatchHandler @ 0095ba34 */
      uVar11 = 0;
      goto LAB_0095bc18;
    }
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar8 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"db.BaseFactory:parseDragonBonesData");
    pvVar1 = (void *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pvVar1 = local_50;
    }
                    /* try { // try from 0095b99c to 00a5b9e7 has its CatchHandler @ 0095b99c
                       catch() { ... } // from try @ 0095b99c with catch @ 0095b99c
                       catch() { ... } // from try @ 0095b9ec with catch @ 0095b99c */
    if ((uVar8 & 1) == 0) {
      tolua_error(param_1,&DAT_012d39a5,0);
      uVar11 = 0;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_78,"");
      pDVar9 = (DragonBonesData *)(**(code **)(*plVar7 + 0x60))(0x3f800000,plVar7,pvVar1,&local_78);
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
      if (pDVar9 == (DragonBonesData *)0x0) {
        lua_pushnil(param_1);
      }
      else {
                    /* try { // try from 0095b9e8 to 00a5b9eb has its CatchHandler @ 0095ba20 */
                    /* try { // try from 0095b9ec to 00a5ba33 has its CatchHandler @ 0095b99c */
        pcVar10 = getLuaTypeName<dragonBones::DragonBonesData>(pDVar9,"db.DragonBonesData");
        tolua_pushusertype(param_1,pDVar9,pcVar10);
      }
      uVar11 = 1;
    }
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_0095bc18:
                    /* catch() { ... } // from try @ 0095bb1c with catch @ 0095bc1c */
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

