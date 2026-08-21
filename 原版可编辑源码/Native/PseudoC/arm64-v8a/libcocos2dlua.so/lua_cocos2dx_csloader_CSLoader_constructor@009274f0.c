
/* lua_cocos2dx_csloader_CSLoader_constructor(lua_State*) */

bool lua_cocos2dx_csloader_CSLoader_constructor(lua_State *param_1)

{
  int iVar1;
  undefined4 uVar2;
  CSLoader *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
                    /* try { // try from 00927508 to 00a275a3 has its CatchHandler @ 009273a0 */
  if (iVar1 == 0) {
    this = operator_new(0xc0);
    cocos2d::CSLoader::CSLoader(this);
    tolua_pushusertype(param_1,this,"cc.CSLoader");
                    /* catch() { ... } // from try @ 009274bc with catch @ 00927554 */
                    /* catch() { ... } // from try @ 009274d4 with catch @ 00927558 */
    uVar2 = lua_gettop(param_1);
    tolua_register_gc(param_1,uVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CSLoader:CSLoader",iVar1,0);
  }
  return iVar1 == 0;
}

