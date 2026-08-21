
/* lua_cocos2dx_extension_Control_constructor(lua_State*) */

bool lua_cocos2dx_extension_Control_constructor(lua_State *param_1)

{
  int iVar1;
  Control *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x360);
    cocos2d::extension::Control::Control(this);
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.Control");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Control:Control",iVar1,0);
  }
                    /* try { // try from 009a0120 to 00aa0173 has its CatchHandler @ 009a0120
                       catch() { ... } // from try @ 009a0120 with catch @ 009a0120
                       catch() { ... } // from try @ 009a01fc with catch @ 009a0120 */
  return iVar1 == 0;
}

