
/* lua_cocos2dx_studio_SceneReader_createNodeWithSceneFile(lua_State*) */

undefined4 lua_cocos2dx_studio_SceneReader_createNodeWithSceneFile(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  SceneReader *pSVar5;
  ulong uVar6;
  void *pvVar7;
  undefined4 uVar8;
  int local_54;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 0093de84 with catch @ 0093df1c */
                    /* catch() { ... } // from try @ 0093de9c with catch @ 0093df20 */
  pSVar5 = (SceneReader *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccs.SceneReader:createNodeWithSceneFile"
                      );
    uVar4 = luaval_to_int32(param_1,3,&local_54,"ccs.SceneReader:createNodeWithSceneFile");
    if ((uVar3 & uVar4 & 1) != 0) {
                    /* try { // try from 0093dfec to 00a3e037 has its CatchHandler @ 0093dfec
                       catch() { ... } // from try @ 0093dfec with catch @ 0093dfec
                       catch() { ... } // from try @ 0093e03c with catch @ 0093dfec */
      pvVar7 = (void *)cocostudio::SceneReader::createNodeWithSceneFile(pSVar5,&local_50,local_54);
      if (pvVar7 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                   "cc.Node");
      }
      goto LAB_0093e0bc;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_SceneReader_createNodeWithSceneFile\'"
                ,0);
LAB_0093e06c:
    uVar8 = 0;
                    /* catch() { ... } // from try @ 0093e038 with catch @ 0093e070 */
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccs.SceneReader:createNodeWithSceneFile",iVar2 + -1,1);
                    /* try { // try from 0093e038 to 00a3e03b has its CatchHandler @ 0093e070 */
      uVar8 = 0;
                    /* try { // try from 0093e03c to 00a3e083 has its CatchHandler @ 0093dfec */
      goto LAB_0093e080;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* catch() { ... } // from try @ 0093de50 with catch @ 0093df50 */
    uVar6 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccs.SceneReader:createNodeWithSceneFile"
                      );
    if ((uVar6 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_SceneReader_createNodeWithSceneFile\'"
                  ,0);
      goto LAB_0093e06c;
    }
    pvVar7 = (void *)cocostudio::SceneReader::createNodeWithSceneFile(pSVar5,&local_50,0);
    if (pvVar7 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,"cc.Node")
      ;
    }
LAB_0093e0bc:
    uVar8 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_0093e080:
                    /* try { // try from 0093e084 to 00a3e13b has its CatchHandler @ 0093e084
                       catch() { ... } // from try @ 0093e084 with catch @ 0093e084
                       catch() { ... } // from try @ 0093e1bc with catch @ 0093e084 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

