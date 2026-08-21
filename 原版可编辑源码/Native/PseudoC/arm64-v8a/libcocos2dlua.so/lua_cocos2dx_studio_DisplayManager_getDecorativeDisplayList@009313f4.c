
/* lua_cocos2dx_studio_DisplayManager_getDecorativeDisplayList(lua_State*) */

bool lua_cocos2dx_studio_DisplayManager_getDecorativeDisplayList(lua_State *param_1)

{
  int iVar1;
  DisplayManager *this;
  Vector *pVVar2;
  
                    /* try { // try from 009313f8 to 00a313fb has its CatchHandler @ 0093147c */
  this = (DisplayManager *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 0093141c to 00a3141f has its CatchHandler @ 0093146c */
  iVar1 = iVar1 + -1;
                    /* try { // try from 00931420 to 00a3148f has its CatchHandler @ 009313ac */
  if (iVar1 == 0) {
    pVVar2 = (Vector *)cocostudio::DisplayManager::getDecorativeDisplayList(this);
    ccvector_to_luaval<cocostudio::DecorativeDisplay*>(param_1,pVVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.DisplayManager:getDecorativeDisplayList",iVar1,0);
  }
  return iVar1 == 0;
}

