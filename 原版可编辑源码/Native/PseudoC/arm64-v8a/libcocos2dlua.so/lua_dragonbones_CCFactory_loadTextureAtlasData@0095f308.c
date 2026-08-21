
/* lua_dragonbones_CCFactory_loadTextureAtlasData(lua_State*) */

undefined4 lua_dragonbones_CCFactory_loadTextureAtlasData(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  TextureAtlasData *pTVar8;
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
                      (param_1,2,(basic_string *)&local_60,"db.CCFactory:loadTextureAtlasData");
                    /* try { // try from 0095f4ac to 00a5f4df has its CatchHandler @ 0095f5ac */
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_78,"db.CCFactory:loadTextureAtlasData");
    uVar5 = luaval_to_number(param_1,4,&local_80,"db.CCFactory:loadTextureAtlasData");
                    /* try { // try from 0095f4e0 to 00a5f4f3 has its CatchHandler @ 0095f578 */
    if ((uVar3 & uVar4 & uVar5 & 1) != 0) {
                    /* try { // try from 0095f4f8 to 00a5f52b has its CatchHandler @ 0095f57c */
      pTVar8 = (TextureAtlasData *)
               (**(code **)(*plVar6 + 0xd8))((float)local_80,plVar6,&local_60,&local_78);
      if (pTVar8 == (TextureAtlasData *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        pcVar9 = getLuaTypeName<dragonBones::TextureAtlasData>(pTVar8,"db.TextureAtlasData");
        tolua_pushusertype(param_1,pTVar8,pcVar9);
                    /* try { // try from 0095f52c to 00a5f5c7 has its CatchHandler @ 0095f3f4 */
      }
      goto LAB_0095f624;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_dragonbones_CCFactory_loadTextureAtlasData\'",0
               );
LAB_0095f5a8:
    uVar10 = 0;
                    /* catch() { ... } // from try @ 0095f4ac with catch @ 0095f5ac */
joined_r0x0095f5b0:
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
                    /* try { // try from 0095f3f4 to 00a5f4ab has its CatchHandler @ 0095f3f4
                       catch() { ... } // from try @ 0095f3f4 with catch @ 0095f3f4
                       catch() { ... } // from try @ 0095f52c with catch @ 0095f3f4 */
      local_78 = 0;
      uStack_70 = 0;
      uVar3 = luaval_to_std_string
                        (param_1,2,(basic_string *)&local_60,"db.CCFactory:loadTextureAtlasData");
      uVar4 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_78,"db.CCFactory:loadTextureAtlasData");
      if ((uVar3 & uVar4 & 1) == 0) {
                    /* catch() { ... } // from try @ 0095f4f8 with catch @ 0095f57c */
        tolua_error(param_1,
                    "invalid arguments in function \'lua_dragonbones_CCFactory_loadTextureAtlasData\'"
                    ,0);
        goto LAB_0095f5a8;
      }
      pTVar8 = (TextureAtlasData *)
               (**(code **)(*plVar6 + 0xd8))(0x3f800000,plVar6,&local_60,&local_78);
      if (pTVar8 == (TextureAtlasData *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        pcVar9 = getLuaTypeName<dragonBones::TextureAtlasData>(pTVar8,"db.TextureAtlasData");
        tolua_pushusertype(param_1,pTVar8,pcVar9);
      }
LAB_0095f624:
      uVar10 = 1;
      goto joined_r0x0095f5b0;
    }
                    /* try { // try from 0095f35c to 00a5f3a7 has its CatchHandler @ 0095f35c
                       catch() { ... } // from try @ 0095f35c with catch @ 0095f35c
                       catch() { ... } // from try @ 0095f3ac with catch @ 0095f35c */
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "db.CCFactory:loadTextureAtlasData",iVar2 + -1,1);
      uVar10 = 0;
      goto LAB_0095f5cc;
    }
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar7 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"db.CCFactory:loadTextureAtlasData");
    if ((uVar7 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_dragonbones_CCFactory_loadTextureAtlasData\'"
                  ,0);
      uVar10 = 0;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_78,"");
                    /* try { // try from 0095f3a8 to 00a5f3ab has its CatchHandler @ 0095f3e0 */
                    /* try { // try from 0095f3ac to 00a5f3f3 has its CatchHandler @ 0095f35c */
      pTVar8 = (TextureAtlasData *)
               (**(code **)(*plVar6 + 0xd8))(0x3f800000,plVar6,&local_60,&local_78);
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
      if (pTVar8 == (TextureAtlasData *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        pcVar9 = getLuaTypeName<dragonBones::TextureAtlasData>(pTVar8,"db.TextureAtlasData");
                    /* catch() { ... } // from try @ 0095f3a8 with catch @ 0095f3e0 */
        tolua_pushusertype(param_1,pTVar8,pcVar9);
      }
      uVar10 = 1;
    }
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_0095f5cc:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

