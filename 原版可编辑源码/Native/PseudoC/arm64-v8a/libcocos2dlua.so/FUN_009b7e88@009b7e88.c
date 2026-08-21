
void FUN_009b7e88(long param_1,undefined8 *param_2)

{
  CollisionPoint *pCVar1;
  long lVar2;
  void *pvVar3;
  CollisionPoint *pCVar4;
  int iVar5;
  
                    /* try { // try from 009b7e9c to 00ab7ef3 has its CatchHandler @ 009b7e9c
                       catch() { ... } // from try @ 009b7e9c with catch @ 009b7e9c
                       catch() { ... } // from try @ 009b7f04 with catch @ 009b7e9c
                       catch() { ... } // from try @ 009b8024 with catch @ 009b7e9c
                       catch() { ... } // from try @ 009b8068 with catch @ 009b7e9c */
  lua_createtable(*(undefined8 *)(param_1 + 8),0,0);
  lua_pushstring(*(undefined8 *)(param_1 + 8),&DAT_012e9a88);
  pvVar3 = (void *)*param_2;
  if (pvVar3 == (void *)0x0) {
    lua_pushnil();
  }
  else {
    toluafix_pushusertype_ccobject
              (*(lua_State **)(param_1 + 8),*(int *)((long)pvVar3 + 0xc),
               (int *)((long)pvVar3 + 0x10),pvVar3,"cc.Physics3DObject");
  }
  lua_rawset(*(undefined8 *)(param_1 + 8),0xfffffffd);
                    /* try { // try from 009b7ef4 to 00ab7f03 has its CatchHandler @ 009b80f8 */
  lua_pushstring(*(undefined8 *)(param_1 + 8),&DAT_012e9a8d);
                    /* try { // try from 009b7f04 to 00ab7f7b has its CatchHandler @ 009b7e9c */
  pvVar3 = (void *)param_2[1];
  if (pvVar3 == (void *)0x0) {
    lua_pushnil();
  }
  else {
    toluafix_pushusertype_ccobject
              (*(lua_State **)(param_1 + 8),*(int *)((long)pvVar3 + 0xc),
               (int *)((long)pvVar3 + 0x10),pvVar3,"cc.Physics3DObject");
  }
  lua_rawset(*(undefined8 *)(param_1 + 8),0xfffffffd);
  lua_pushstring(*(undefined8 *)(param_1 + 8),"collisionPointList");
  if (param_2[2] == param_2[3]) {
    lua_pushnil(*(undefined8 *)(param_1 + 8));
  }
  else {
    lua_createtable(*(undefined8 *)(param_1 + 8),0,0);
    pCVar4 = (CollisionPoint *)param_2[2];
    pCVar1 = (CollisionPoint *)param_2[3];
    if (pCVar4 != pCVar1) {
      iVar5 = 1;
      do {
                    /* try { // try from 009b7f7c to 00ab8007 has its CatchHandler @ 009b80f8 */
        lua_pushnumber((double)iVar5,*(undefined8 *)(param_1 + 8));
        CollisionPoint_to_luaval(*(lua_State **)(param_1 + 8),pCVar4);
        lua_rawset(*(undefined8 *)(param_1 + 8),0xfffffffd);
        pCVar4 = pCVar4 + 0x3c;
        iVar5 = iVar5 + 1;
      } while (pCVar1 != pCVar4);
    }
  }
  lua_rawset(*(undefined8 *)(param_1 + 8),0xfffffffd);
  lVar2 = cocos2d::LuaEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x009b7fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar2 + 8) + 200))
            (*(long **)(lVar2 + 8),*(undefined4 *)(param_1 + 0x10),1);
  return;
}

