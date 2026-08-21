
/* lua_cocos2dx_3d_Terrain_initHeightMap(lua_State*) */

bool lua_cocos2dx_3d_Terrain_initHeightMap(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  Terrain *this;
  ulong uVar4;
  bool bVar5;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Terrain *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 00907fb4 to 00a07fe7 has its CatchHandler @ 009080b4 */
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.Terrain:initHeightMap");
    bVar5 = (uVar4 & 1) == 0;
    if (bVar5) {
                    /* try { // try from 00908034 to 00a080cf has its CatchHandler @ 00907ee4 */
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Terrain_initHeightMap\'",
                  0);
    }
    else {
      uVar3 = cocos2d::Terrain::initHeightMap(this,(basic_string *)&local_50);
                    /* try { // try from 00907fe8 to 00a07ffb has its CatchHandler @ 00908080 */
      tolua_pushboolean(param_1,uVar3 & 1);
    }
    bVar5 = !bVar5;
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
                    /* try { // try from 00908000 to 00a08033 has its CatchHandler @ 00908084 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Terrain:initHeightMap",iVar2 + -1,1);
    bVar5 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

