
/* lua_cocos2dx_studio_ActionTimeline_constructor(lua_State*) */

bool lua_cocos2dx_studio_ActionTimeline_constructor(lua_State *param_1)

{
  int iVar1;
  ActionTimeline *this;
  
                    /* catch() { ... } // from try @ 00949240 with catch @ 00949340 */
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x150);
    cocostudio::timeline::ActionTimeline::ActionTimeline(this);
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.ActionTimeline");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionTimeline:ActionTimeline",iVar1,0);
  }
  return iVar1 == 0;
}

