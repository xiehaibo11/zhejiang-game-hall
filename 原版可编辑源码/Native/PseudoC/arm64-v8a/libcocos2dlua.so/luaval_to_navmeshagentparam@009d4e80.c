
/* luaval_to_navmeshagentparam(lua_State*, int, cocos2d::NavMeshAgentParam*, char const*) */

void luaval_to_navmeshagentparam
               (lua_State *param_1,int param_2,NavMeshAgentParam *param_3,char *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  NavMeshAgentParam NVar4;
  float fVar5;
  double dVar6;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = 0;
                    /* try { // try from 009d4eb0 to 00ad51bf has its CatchHandler @ 009cee70 */
  if (((param_1 != (lua_State *)0x0) && (param_3 != (NavMeshAgentParam *)0x0)) &&
     (uVar3 = tolua_istable(param_1,param_2,0,auStack_48), (int)uVar3 != 0)) {
    lua_pushstring(param_1,"radius");
    lua_gettable(param_1,param_2);
    iVar2 = lua_isnumber(param_1,0xffffffff);
    if (iVar2 == 0) {
      fVar5 = 0.6;
    }
    else {
      dVar6 = (double)lua_tonumber(param_1,0xffffffff);
      fVar5 = (float)dVar6;
    }
    *(float *)param_3 = fVar5;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"height");
    lua_gettable(param_1,param_2);
    iVar2 = lua_isnumber(param_1,0xffffffff);
    if (iVar2 == 0) {
      fVar5 = 2.0;
    }
    else {
      dVar6 = (double)lua_tonumber(param_1,0xffffffff);
      fVar5 = (float)dVar6;
    }
    *(float *)(param_3 + 4) = fVar5;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"maxAcceleration");
    lua_gettable(param_1,param_2);
    iVar2 = lua_isnumber(param_1,0xffffffff);
    if (iVar2 == 0) {
      fVar5 = 8.0;
    }
    else {
      dVar6 = (double)lua_tonumber(param_1,0xffffffff);
      fVar5 = (float)dVar6;
    }
    *(float *)(param_3 + 8) = fVar5;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"maxSpeed");
    lua_gettable(param_1,param_2);
    iVar2 = lua_isnumber(param_1,0xffffffff);
    if (iVar2 == 0) {
      fVar5 = 3.5;
    }
    else {
      dVar6 = (double)lua_tonumber(param_1,0xffffffff);
      fVar5 = (float)dVar6;
    }
    *(float *)(param_3 + 0xc) = fVar5;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"collisionQueryRange");
    lua_gettable(param_1,param_2);
    iVar2 = lua_isnumber(param_1,0xffffffff);
    if (iVar2 == 0) {
      fVar5 = *(float *)param_3 * 12.0;
    }
    else {
      dVar6 = (double)lua_tonumber(param_1,0xffffffff);
      fVar5 = (float)dVar6;
    }
    *(float *)(param_3 + 0x10) = fVar5;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"pathOptimizationRange");
    lua_gettable(param_1,param_2);
    iVar2 = lua_isnumber(param_1,0xffffffff);
    if (iVar2 == 0) {
      fVar5 = *(float *)param_3 * 30.0;
    }
    else {
      dVar6 = (double)lua_tonumber(param_1,0xffffffff);
      fVar5 = (float)dVar6;
    }
    *(float *)(param_3 + 0x14) = fVar5;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"separationWeight");
    lua_gettable(param_1,param_2);
    iVar2 = lua_isnumber(param_1,0xffffffff);
    if (iVar2 == 0) {
      fVar5 = 2.0;
    }
    else {
      dVar6 = (double)lua_tonumber(param_1,0xffffffff);
      fVar5 = (float)dVar6;
    }
    *(float *)(param_3 + 0x18) = fVar5;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"updateFlags");
    lua_gettable(param_1,param_2);
    iVar2 = lua_isnumber(param_1,0xffffffff);
    if (iVar2 == 0) {
      NVar4 = (NavMeshAgentParam)0x1b;
    }
    else {
      dVar6 = (double)lua_tonumber(param_1,0xffffffff);
      NVar4 = SUB41((int)dVar6,0);
    }
    param_3[0x1c] = NVar4;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,&DAT_012f1385);
    lua_gettable(param_1,param_2);
                    /* try { // try from 009d51c0 to 00ad522b has its CatchHandler @ 009d80d0 */
    iVar2 = lua_isnumber(param_1,0xffffffff);
    if (iVar2 == 0) {
      NVar4 = (NavMeshAgentParam)0x3;
    }
    else {
      dVar6 = (double)lua_tonumber(param_1,0xffffffff);
      NVar4 = SUB41((int)dVar6,0);
    }
    param_3[0x1d] = NVar4;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,0x12f139b);
    lua_gettable(param_1,param_2);
    iVar2 = lua_isnumber(param_1,0xffffffff);
    if (iVar2 == 0) {
      NVar4 = (NavMeshAgentParam)0x0;
    }
    else {
      dVar6 = (double)lua_tonumber(param_1,0xffffffff);
      NVar4 = SUB41((int)dVar6,0);
    }
    param_3[0x1e] = NVar4;
    lua_settop(param_1,0xfffffffe);
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

