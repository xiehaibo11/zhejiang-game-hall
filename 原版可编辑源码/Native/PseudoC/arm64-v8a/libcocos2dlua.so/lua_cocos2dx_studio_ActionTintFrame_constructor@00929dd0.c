
/* lua_cocos2dx_studio_ActionTintFrame_constructor(lua_State*) */

bool lua_cocos2dx_studio_ActionTintFrame_constructor(lua_State *param_1)

{
  int iVar1;
  ActionTintFrame *this;
  
                    /* try { // try from 00929ddc to 00a29ddf has its CatchHandler @ 00929e30 */
                    /* try { // try from 00929de0 to 00a29e53 has its CatchHandler @ 00929d6c */
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x58);
    cocostudio::ActionTintFrame::ActionTintFrame(this);
    cocos2d::Ref::autorelease((Ref *)this);
                    /* catch() { ... } // from try @ 00929ddc with catch @ 00929e30 */
                    /* catch() { ... } // from try @ 00929db8 with catch @ 00929e40 */
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.ActionTintFrame");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionTintFrame:ActionTintFrame",iVar1,0);
  }
  return iVar1 == 0;
}

