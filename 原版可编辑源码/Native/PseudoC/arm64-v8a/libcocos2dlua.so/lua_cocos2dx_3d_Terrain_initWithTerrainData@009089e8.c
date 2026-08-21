
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_3d_Terrain_initWithTerrainData(lua_State*) */

undefined8 lua_cocos2dx_3d_Terrain_initWithTerrainData(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iStack_104;
  TerrainData aTStack_100 [8];
  byte local_f8;
  void *local_e8;
  byte local_e0;
  void *local_d0;
  byte local_c8;
  void *local_b8;
  byte local_a8;
  void *local_98;
  byte local_88;
  void *local_78;
  byte local_68;
  void *local_58;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
                    /* catch() { ... } // from try @ 00908994 with catch @ 00908a2c */
                    /* catch() { ... } // from try @ 009089ac with catch @ 00908a30 */
    cocos2d::Terrain::TerrainData::TerrainData(aTStack_100);
    luaval_to_int32(param_1,3,&iStack_104,"cc.Terrain:initWithTerrainData");
                    /* catch() { ... } // from try @ 00908960 with catch @ 00908a60 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_3d_Terrain_initWithTerrainData\'",0);
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if ((local_c8 & 1) != 0) {
      operator_delete(local_b8);
    }
    if ((local_e0 & 1) != 0) {
      operator_delete(local_d0);
    }
    if ((local_f8 & 1) != 0) {
      operator_delete(local_e8);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Terrain:initWithTerrainData",iVar2 + -1,2);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

