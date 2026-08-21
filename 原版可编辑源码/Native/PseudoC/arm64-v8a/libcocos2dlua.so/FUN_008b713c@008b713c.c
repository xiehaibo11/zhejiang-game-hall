
undefined4 FUN_008b713c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  OrbitCamera *this;
  undefined4 uVar3;
  double dVar4;
  float local_44;
  float local_40;
  float local_3c;
  long local_38;
  
                    /* try { // try from 008b7150 to 009b71ab has its CatchHandler @ 008b7150
                       catch() { ... } // from try @ 008b7150 with catch @ 008b7150
                       catch() { ... } // from try @ 008b71c4 with catch @ 008b7150 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (OrbitCamera *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    dVar4 = (double)tolua_tonumber(0,param_1,2);
    local_3c = (float)dVar4;
    uVar3 = 3;
                    /* try { // try from 008b71ac to 009b71c3 has its CatchHandler @ 008b7248 */
    dVar4 = (double)tolua_tonumber(0,param_1,3);
    local_40 = (float)dVar4;
                    /* try { // try from 008b71c4 to 009b7263 has its CatchHandler @ 008b7150 */
    dVar4 = (double)tolua_tonumber(0,param_1,4);
    local_44 = (float)dVar4;
    cocos2d::OrbitCamera::sphericalRadius(this,&local_3c,&local_40,&local_44);
    tolua_pushnumber((double)local_3c,param_1);
    tolua_pushnumber((double)local_40,param_1);
    tolua_pushnumber((double)local_44,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.OrbitCamera:sphericalRadius",iVar2 + -1,3);
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 008b71ac with catch @ 008b7248 */
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

