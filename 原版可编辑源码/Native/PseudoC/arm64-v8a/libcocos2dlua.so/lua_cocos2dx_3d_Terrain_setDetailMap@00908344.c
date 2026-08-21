
/* lua_cocos2dx_3d_Terrain_setDetailMap(lua_State*) */

undefined8 lua_cocos2dx_3d_Terrain_setDetailMap(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uStack_4c;
  DetailMap local_48 [16];
  void *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
                    /* try { // try from 00908374 to 00a08377 has its CatchHandler @ 009083c8 */
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 00908378 to 00a083db has its CatchHandler @ 00908328 */
  if (iVar2 + -1 == 2) {
    cocos2d::Terrain::DetailMap::DetailMap(local_48);
    luaval_to_uint32(param_1,2,&uStack_4c,"cc.Terrain:setDetailMap");
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Terrain_setDetailMap\'",0);
    if (((byte)local_48[0] & 1) != 0) {
      operator_delete(local_38);
                    /* catch() { ... } // from try @ 00908374 with catch @ 009083c8 */
    }
  }
  else {
                    /* try { // try from 009083dc to 00a08493 has its CatchHandler @ 009083dc
                       catch() { ... } // from try @ 009083dc with catch @ 009083dc
                       catch() { ... } // from try @ 00908514 with catch @ 009083dc */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Terrain:setDetailMap",iVar2 + -1,2);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

