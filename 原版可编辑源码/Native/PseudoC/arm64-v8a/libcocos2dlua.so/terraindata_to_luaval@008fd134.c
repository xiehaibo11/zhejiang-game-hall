
/* terraindata_to_luaval(lua_State*, cocos2d::Terrain::TerrainData const&) */

void terraindata_to_luaval(lua_State *param_1,TerrainData *param_2)

{
  ulong uVar1;
  TerrainData *pTVar2;
  TerrainData *pTVar3;
  long lVar4;
  
  if (param_1 != (lua_State *)0x0) {
                    /* catch() { ... } // from try @ 008fd0a0 with catch @ 008fd138 */
                    /* catch() { ... } // from try @ 008fd0b8 with catch @ 008fd13c */
    lua_createtable(param_1,0,0);
                    /* catch() { ... } // from try @ 008fd06c with catch @ 008fd16c */
    lua_pushstring(param_1,"_chunkSize");
    size_to_luaval(param_1,(Size *)param_2);
    lua_rawset(param_1,0xfffffffd);
    uVar1 = (ulong)((byte)param_2[8] >> 1);
    if (((byte)param_2[8] & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 0x10);
    }
    if (uVar1 != 0) {
      lua_pushstring(param_1,"_heightMapSrc");
      pTVar3 = *(TerrainData **)(param_2 + 0x18);
      if (((byte)param_2[8] & 1) == 0) {
        pTVar3 = param_2 + 9;
      }
      lua_pushstring(param_1,pTVar3);
      lua_rawset(param_1,0xfffffffd);
    }
    uVar1 = (ulong)((byte)param_2[0x20] >> 1);
    if (((byte)param_2[0x20] & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 0x28);
    }
    if (uVar1 != 0) {
      lua_pushstring(param_1,"_alphaMapSrc");
      pTVar3 = *(TerrainData **)(param_2 + 0x30);
      if (((byte)param_2[0x20] & 1) == 0) {
        pTVar3 = param_2 + 0x21;
      }
      lua_pushstring(param_1,pTVar3);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_pushstring(param_1,"_detailMaps");
    lua_createtable(param_1,0,0);
    lVar4 = 0;
    pTVar3 = param_2 + 0x50;
    do {
      lua_pushnumber((double)(int)lVar4 + 1.0,param_1);
      lua_createtable(param_1,0,0);
      lua_pushstring(param_1,"_detailMapSrc");
                    /* try { // try from 008fd2f4 to 009fd343 has its CatchHandler @ 008fd2f4
                       catch() { ... } // from try @ 008fd2f4 with catch @ 008fd2f4
                       catch() { ... } // from try @ 008fd3a0 with catch @ 008fd2f4
                       catch() { ... } // from try @ 008fd3e4 with catch @ 008fd2f4 */
      if (((byte)pTVar3[-0x18] & 1) == 0) {
        pTVar2 = pTVar3 + -0x17;
      }
      else {
        pTVar2 = *(TerrainData **)(pTVar3 + -8);
      }
      lua_pushstring(param_1,pTVar2);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"_detailMapSize");
      lua_pushnumber((double)*(float *)pTVar3,param_1);
      lua_rawset(param_1,0xfffffffd);
      lua_rawset(param_1,0xfffffffd);
      lVar4 = lVar4 + 1;
      pTVar3 = pTVar3 + 0x20;
    } while (lVar4 != 4);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"_mapHeight");
    lua_pushnumber((double)*(float *)(param_2 + 0xb8),param_1);
    lua_rawset(param_1,0xfffffffd);
                    /* try { // try from 008fd344 to 009fd39f has its CatchHandler @ 008fd424 */
    lua_pushstring(param_1,"_mapScale");
    lua_pushnumber((double)*(float *)(param_2 + 0xbc),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"_detailMapAmount");
    lua_pushnumber((double)(long)*(int *)(param_2 + 0xc0),param_1);
    lua_rawset(param_1,0xfffffffd);
                    /* try { // try from 008fd3a0 to 009fd3cf has its CatchHandler @ 008fd2f4 */
    lua_pushstring(param_1,"_skirtHeightRatio");
    lua_pushnumber((double)*(float *)(param_2 + 0xc4),param_1);
                    /* try { // try from 008fd3d0 to 009fd3e3 has its CatchHandler @ 008fd424 */
    lua_rawset(param_1,0xfffffffd);
    return;
  }
  return;
}

