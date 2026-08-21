
/* luaval_to_terraindata(lua_State*, int, cocos2d::Terrain::TerrainData*, char const*) */

void luaval_to_terraindata(lua_State *param_1,int param_2,TerrainData *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  char *pcVar7;
  size_t sVar8;
  ulong uVar9;
  TerrainData *this;
  ulong uVar10;
  float fVar11;
  double dVar12;
  Size aSStack_80 [8];
  undefined1 auStack_78 [16];
  long local_68;
  
                    /* try { // try from 008fccb8 to 009fccbf has its CatchHandler @ 008fccd4 */
                    /* try { // try from 008fccc0 to 009fcd2b has its CatchHandler @ 008fcb40 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 008fcbe4 with catch @ 008fccd4
                       catch() { ... } // from try @ 008fccb8 with catch @ 008fccd4 */
                    /* catch() { ... } // from try @ 008fcb88 with catch @ 008fccd8
                       catch() { ... } // from try @ 008fcc3c with catch @ 008fccd8 */
  uVar6 = 0;
  if ((param_1 != (lua_State *)0x0) && (param_3 != (TerrainData *)0x0)) {
    tolua_istable(param_1,param_2,0,auStack_78);
    lua_pushstring(param_1,"_chunkSize");
    lua_gettable(param_1,param_2);
    uVar4 = lua_gettop(param_1);
                    /* try { // try from 008fcd2c to 009fd06b has its CatchHandler @ 008fcd2c
                       catch() { ... } // from try @ 008fcd2c with catch @ 008fcd2c
                       catch() { ... } // from try @ 008fd0ec with catch @ 008fcd2c */
    iVar5 = lua_type(param_1,uVar4);
    pcVar1 = "";
    if (iVar5 == 0) {
      cocos2d::Size::Size(aSStack_80,32.0,32.0);
      cocos2d::Size::operator=((Size *)param_3,aSStack_80);
    }
    else {
      iVar5 = lua_gettop(param_1);
      luaval_to_size(param_1,iVar5,(Size *)param_3,"");
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"_heightMapSrc");
    lua_gettable(param_1,param_2);
    pcVar7 = (char *)tolua_tostring(param_1,0xffffffff,&DAT_013c996e);
    pcVar2 = pcVar1;
    if (pcVar7 != (char *)0x0) {
      pcVar2 = pcVar7;
    }
    sVar8 = strlen(pcVar2);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_3 + 8),pcVar2,sVar8);
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"_alphaMapSrc");
    lua_gettable(param_1,param_2);
    pcVar7 = (char *)tolua_tostring(param_1,0xffffffff,&DAT_013c996e);
    pcVar2 = pcVar1;
    if (pcVar7 != (char *)0x0) {
      pcVar2 = pcVar7;
    }
    sVar8 = strlen(pcVar2);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_3 + 0x20),pcVar2,sVar8);
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"_detailMaps");
    lua_gettable(param_1,param_2);
    iVar5 = lua_type(param_1,0xffffffff);
    if ((iVar5 == 5) && (uVar9 = lua_objlen(param_1,0xffffffff), uVar9 != 0)) {
      uVar10 = 0;
      this = param_3 + 0x38;
      do {
        uVar10 = uVar10 + 1;
        lua_pushnumber((double)uVar10,param_1);
        lua_gettable(param_1,0xfffffffe);
        iVar5 = lua_type(param_1,0xffffffff);
        if (iVar5 == 5) {
          lua_pushstring(param_1,"_detailMapSrc");
          lua_gettable(param_1,0xfffffffe);
          pcVar7 = (char *)tolua_tostring(param_1,0xffffffff,&DAT_013c996e);
          pcVar2 = pcVar1;
          if (pcVar7 != (char *)0x0) {
            pcVar2 = pcVar7;
          }
          sVar8 = strlen(pcVar2);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)this,pcVar2,sVar8);
          lua_settop(param_1,0xfffffffe);
          lua_pushstring(param_1,"_detailMapSize");
          lua_gettable(param_1,0xfffffffe);
          iVar5 = lua_type(param_1,0xffffffff);
          if (iVar5 == 0) {
            fVar11 = 0.0;
          }
          else {
            dVar12 = (double)lua_tonumber(param_1,0xffffffff);
            fVar11 = (float)dVar12;
          }
          *(float *)(this + 0x18) = fVar11;
          lua_settop(param_1,0xfffffffe);
        }
        lua_settop(param_1,0xfffffffe);
        this = this + 0x20;
      } while (uVar9 != uVar10);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"_mapHeight");
    lua_gettable(param_1,param_2);
    iVar5 = lua_type(param_1,0xffffffff);
    if (iVar5 == 0) {
      fVar11 = 2.0;
    }
    else {
      dVar12 = (double)lua_tonumber(param_1,0xffffffff);
      fVar11 = (float)dVar12;
    }
    *(float *)(param_3 + 0xb8) = fVar11;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"_mapScale");
    lua_gettable(param_1,param_2);
    iVar5 = lua_type(param_1,0xffffffff);
    if (iVar5 == 0) {
      fVar11 = 0.1;
    }
    else {
      dVar12 = (double)lua_tonumber(param_1,0xffffffff);
      fVar11 = (float)dVar12;
    }
    *(float *)(param_3 + 0xbc) = fVar11;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"_detailMapAmount");
                    /* try { // try from 008fd06c to 009fd09f has its CatchHandler @ 008fd16c */
    lua_gettable(param_1,param_2);
    iVar5 = lua_type(param_1,0xffffffff);
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      dVar12 = (double)lua_tonumber(param_1,0xffffffff);
      iVar5 = (int)dVar12;
    }
                    /* try { // try from 008fd0a0 to 009fd0b3 has its CatchHandler @ 008fd138 */
    *(int *)(param_3 + 0xc0) = iVar5;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"_skirtHeightRatio");
                    /* try { // try from 008fd0b8 to 009fd0eb has its CatchHandler @ 008fd13c */
    lua_gettable(param_1,param_2);
    iVar5 = lua_type(param_1,0xffffffff);
    if (iVar5 == 0) {
      fVar11 = 1.0;
    }
    else {
      dVar12 = (double)lua_tonumber(param_1,0xffffffff);
      fVar11 = (float)dVar12;
    }
                    /* try { // try from 008fd0ec to 009fd187 has its CatchHandler @ 008fcd2c */
    *(float *)(param_3 + 0xc4) = fVar11;
    lua_settop(param_1,0xfffffffe);
    uVar6 = 1;
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

