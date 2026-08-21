
/* lua_cocos2dx_3d_Terrain_convertToTerrainSpace(lua_State*) */

void lua_cocos2dx_3d_Terrain_convertToTerrainSpace(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Terrain *this;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_48 [2];
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00908828 to 00a0882b has its CatchHandler @ 0090887c */
                    /* try { // try from 0090882c to 00a0888f has its CatchHandler @ 009087dc */
  this = (Terrain *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_40 = 0;
    uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)&local_40,"cc.Terrain:convertToTerrainSpace");
    if ((uVar3 & 1) != 0) {
                    /* catch() { ... } // from try @ 00908828 with catch @ 0090887c */
      local_48[0] = cocos2d::Terrain::convertToTerrainSpace(this,(Vec2 *)&local_40);
      vec2_to_luaval(param_1,(Vec2 *)local_48);
                    /* try { // try from 00908890 to 00a0895f has its CatchHandler @ 00908890
                       catch() { ... } // from try @ 00908890 with catch @ 00908890
                       catch() { ... } // from try @ 009089e0 with catch @ 00908890 */
      uVar4 = 1;
      goto LAB_009088d0;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_3d_Terrain_convertToTerrainSpace\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Terrain:convertToTerrainSpace",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009088d0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

