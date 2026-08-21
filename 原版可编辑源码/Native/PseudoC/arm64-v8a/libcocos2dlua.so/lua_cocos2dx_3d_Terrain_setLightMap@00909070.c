
/* lua_cocos2dx_3d_Terrain_setLightMap(lua_State*) */

bool lua_cocos2dx_3d_Terrain_setLightMap(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Terrain *this;
  ulong uVar3;
  bool bVar4;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Terrain *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.Terrain:setLightMap");
    bVar4 = (uVar3 & 1) == 0;
    if (bVar4) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Terrain_setLightMap\'",0)
      ;
    }
    else {
      cocos2d::Terrain::setLightMap(this,(basic_string *)&local_50);
      lua_settop(param_1,1);
    }
    bVar4 = !bVar4;
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
                    /* try { // try from 00909110 to 00a0915b has its CatchHandler @ 00909110
                       catch() { ... } // from try @ 00909110 with catch @ 00909110
                       catch() { ... } // from try @ 00909160 with catch @ 00909110 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Terrain:setLightMap",iVar2 + -1,1);
    bVar4 = false;
  }
                    /* try { // try from 0090915c to 00a0915f has its CatchHandler @ 009091b4 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00909160 to 00a091c7 has its CatchHandler @ 00909110 */
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

