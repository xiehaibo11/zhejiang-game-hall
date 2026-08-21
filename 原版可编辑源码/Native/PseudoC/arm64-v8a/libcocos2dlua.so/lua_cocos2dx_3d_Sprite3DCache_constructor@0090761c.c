
/* lua_cocos2dx_3d_Sprite3DCache_constructor(lua_State*) */

bool lua_cocos2dx_3d_Sprite3DCache_constructor(lua_State *param_1)

{
  int iVar1;
  undefined4 uVar2;
  Sprite3DCache *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
                    /* catch() { ... } // from try @ 00907534 with catch @ 00907634 */
  if (iVar1 == 0) {
    this = operator_new(0x28);
    cocos2d::Sprite3DCache::Sprite3DCache(this);
    tolua_pushusertype(param_1,this,"cc.Sprite3DCache");
    uVar2 = lua_gettop(param_1);
    tolua_register_gc(param_1,uVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Sprite3DCache:Sprite3DCache",iVar1,0);
  }
  return iVar1 == 0;
}

