
/* lua_cocos2dx_3d_Terrain_getNormal(lua_State*) */

void lua_cocos2dx_3d_Terrain_getNormal(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Terrain *this;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 local_60 [4];
  int local_50;
  int iStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Terrain *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
                    /* try { // try from 00908e2c to 00a08e5f has its CatchHandler @ 00908f2c */
    uVar3 = luaval_to_int32(param_1,2,&iStack_4c,"cc.Terrain:getNormal");
    uVar4 = luaval_to_int32(param_1,3,&local_50,"cc.Terrain:getNormal");
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
                    /* try { // try from 00908e60 to 00a08e73 has its CatchHandler @ 00908ef8 */
      local_60[0] = cocos2d::Terrain::getNormal(this,iStack_4c,local_50);
                    /* try { // try from 00908e78 to 00a08eab has its CatchHandler @ 00908efc */
      vec3_to_luaval(param_1,(Vec3 *)local_60);
      uVar5 = 1;
      goto LAB_00908ebc;
    }
                    /* try { // try from 00908eac to 00a08f47 has its CatchHandler @ 00908d5c */
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Terrain_getNormal\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Terrain:getNormal",iVar2 + -1,2);
  }
  uVar5 = 0;
LAB_00908ebc:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

