
/* lua_cocos2dx_extension_ControlHuePicker_constructor(lua_State*) */

bool lua_cocos2dx_extension_ControlHuePicker_constructor(lua_State *param_1)

{
  int iVar1;
  ControlHuePicker *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x380);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a3ae4 with catch @ 009a3b58
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a3aa0 with catch @ 009a3b5c
                        */
    cocos2d::extension::ControlHuePicker::ControlHuePicker(this);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a3a98 with catch @ 009a3b60
                        */
    cocos2d::Ref::autorelease((Ref *)this);
                    /* try { // try from 009a3b74 to 00aa3b77 has its CatchHandler @ 009a3ba4 */
                    /* try { // try from 009a3b78 to 00aa3bbb has its CatchHandler @ 009a3a0c */
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.ControlHuePicker");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlHuePicker:ControlHuePicker",iVar1,0);
  }
  return iVar1 == 0;
}

