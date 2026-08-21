
/* lua_cocos2dx_3d_Terrain_setLODDistance(lua_State*) */

undefined4 lua_cocos2dx_3d_Terrain_setLODDistance(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Terrain *this;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  double local_60;
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Terrain *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    uVar3 = luaval_to_number(param_1,2,&dStack_50,"cc.Terrain:setLODDistance");
    uVar4 = luaval_to_number(param_1,3,&local_58,"cc.Terrain:setLODDistance");
    uVar5 = luaval_to_number(param_1,4,&local_60,"cc.Terrain:setLODDistance");
    if ((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) {
      cocos2d::Terrain::setLODDistance(this,(float)dStack_50,(float)local_58,(float)local_60);
      uVar6 = 1;
      lua_settop(param_1,1);
                    /* try { // try from 00908ca8 to 00a08cf3 has its CatchHandler @ 00908ca8
                       catch() { ... } // from try @ 00908ca8 with catch @ 00908ca8
                       catch() { ... } // from try @ 00908cf8 with catch @ 00908ca8 */
      goto LAB_00908ce4;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Terrain_setLODDistance\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Terrain:setLODDistance",iVar2 + -1,3);
  }
  uVar6 = 0;
LAB_00908ce4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00908cf4 to 00a08cf7 has its CatchHandler @ 00908d48 */
                    /* try { // try from 00908cf8 to 00a08d5b has its CatchHandler @ 00908ca8 */
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

