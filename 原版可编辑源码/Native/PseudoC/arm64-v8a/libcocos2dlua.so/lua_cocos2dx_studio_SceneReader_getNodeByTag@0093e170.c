
/* lua_cocos2dx_studio_SceneReader_getNodeByTag(lua_State*) */

void lua_cocos2dx_studio_SceneReader_getNodeByTag(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  SceneReader *this;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int local_3c;
  long local_38;
  
                    /* try { // try from 0093e170 to 00a3e183 has its CatchHandler @ 0093e208 */
  lVar1 = tpidr_el0;
                    /* try { // try from 0093e188 to 00a3e1bb has its CatchHandler @ 0093e20c */
  local_38 = *(long *)(lVar1 + 0x28);
  this = (SceneReader *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 0093e1bc to 00a3e257 has its CatchHandler @ 0093e084 */
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"ccs.SceneReader:getNodeByTag");
    if ((uVar3 & 1) != 0) {
      pvVar4 = (void *)cocostudio::SceneReader::getNodeByTag(this,local_3c);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar5 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.Node");
        uVar5 = 1;
      }
      goto LAB_0093e240;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_SceneReader_getNodeByTag\'",0);
  }
  else {
                    /* catch() { ... } // from try @ 0093e170 with catch @ 0093e208 */
                    /* catch() { ... } // from try @ 0093e188 with catch @ 0093e20c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.SceneReader:getNodeByTag",iVar2 + -1,1);
  }
                    /* catch() { ... } // from try @ 0093e13c with catch @ 0093e23c */
  uVar5 = 0;
LAB_0093e240:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

