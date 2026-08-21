
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_constructor(lua_State*) */

bool lua_cocos2dx_cocosbuilder_CCBAnimationManager_constructor(lua_State *param_1)

{
  int iVar1;
  CCBAnimationManager *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x1e8);
    cocosbuilder::CCBAnimationManager::CCBAnimationManager(this);
    cocos2d::Ref::autorelease((Ref *)this);
                    /* catch() { ... } // from try @ 0091e908 with catch @ 0091ea08 */
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.CCBAnimationManager");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:CCBAnimationManager",iVar1,0);
                    /* catch() { ... } // from try @ 0091e93c with catch @ 0091e9d4 */
                    /* catch() { ... } // from try @ 0091e954 with catch @ 0091e9d8 */
  }
  return iVar1 == 0;
}

