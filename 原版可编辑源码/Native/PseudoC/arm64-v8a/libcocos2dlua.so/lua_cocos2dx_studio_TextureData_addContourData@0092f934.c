
/* lua_cocos2dx_studio_TextureData_addContourData(lua_State*) */

undefined4 lua_cocos2dx_studio_TextureData_addContourData(lua_State *param_1)

{
  int iVar1;
  TextureData *this;
  ulong uVar2;
  ContourData *pCVar3;
  
  this = (TextureData *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0092f958 to 00a2f9a3 has its CatchHandler @ 0092f958
                       catch() { ... } // from try @ 0092f958 with catch @ 0092f958
                       catch() { ... } // from try @ 0092f9cc with catch @ 0092f958 */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"ccs.ContourData",0), (uVar2 & 1) != 0)) {
                    /* try { // try from 0092f9a4 to 00a2f9a7 has its CatchHandler @ 0092fa28 */
      pCVar3 = (ContourData *)tolua_tousertype(param_1,2,0);
      cocostudio::TextureData::addContourData(this,pCVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_TextureData_addContourData\'",0
               );
  }
  else {
                    /* try { // try from 0092f9c8 to 00a2f9cb has its CatchHandler @ 0092fa18 */
                    /* try { // try from 0092f9cc to 00a2fa3b has its CatchHandler @ 0092f958 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.TextureData:addContourData",iVar1 + -1,1);
  }
  return 0;
}

