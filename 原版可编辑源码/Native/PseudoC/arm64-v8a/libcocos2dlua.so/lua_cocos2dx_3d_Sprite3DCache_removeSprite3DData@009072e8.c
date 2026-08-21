
/* lua_cocos2dx_3d_Sprite3DCache_removeSprite3DData(lua_State*) */

bool lua_cocos2dx_3d_Sprite3DCache_removeSprite3DData(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Sprite3DCache *this;
  ulong uVar3;
  bool bVar4;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 009071e8 with catch @ 009072e8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Sprite3DCache *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"cc.Sprite3DCache:removeSprite3DData");
    bVar4 = (uVar3 & 1) == 0;
    if (bVar4) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_3d_Sprite3DCache_removeSprite3DData\'"
                  ,0);
                    /* try { // try from 009073b8 to 00a07403 has its CatchHandler @ 009073b8
                       catch() { ... } // from try @ 009073b8 with catch @ 009073b8
                       catch() { ... } // from try @ 00907408 with catch @ 009073b8 */
    }
    else {
      cocos2d::Sprite3DCache::removeSprite3DData(this,(basic_string *)&local_50);
      lua_settop(param_1,1);
    }
    bVar4 = !bVar4;
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Sprite3DCache:removeSprite3DData",iVar2 + -1,1);
    bVar4 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

