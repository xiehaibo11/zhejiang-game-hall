
void FUN_009c78d4(long param_1,undefined8 *param_2,float *param_3)

{
  long lVar1;
  void *pvVar2;
  float fVar3;
  
  pvVar2 = (void *)*param_2;
  fVar3 = *param_3;
  if (pvVar2 == (void *)0x0) {
    lua_pushnil();
  }
  else {
                    /* catch() { ... } // from try @ 009c7924 with catch @ 009c78f8 */
    toluafix_pushusertype_ccobject
              (*(lua_State **)(param_1 + 8),*(int *)((long)pvVar2 + 0xc),
               (int *)((long)pvVar2 + 0x10),pvVar2,"cc.NavMeshAgent");
  }
                    /* try { // try from 009c791c to 00ac7923 has its CatchHandler @ 009c7950 */
  tolua_pushnumber((double)fVar3,*(undefined8 *)(param_1 + 8));
  lVar1 = cocos2d::LuaEngine::getInstance();
                    /* try { // try from 009c7924 to 00ac796b has its CatchHandler @ 009c78f8 */
                    /* WARNING: Could not recover jumptable at 0x009c7944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 8) + 200))
            (*(long **)(lVar1 + 8),*(undefined4 *)(param_1 + 0x10),2);
  return;
}

