
/* lua_cocos2dx_ui_RichText_constructor(lua_State*) */

bool lua_cocos2dx_ui_RichText_constructor(lua_State *param_1)

{
  int iVar1;
  RichText *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
                    /* try { // try from 0098e4f0 to 00a8e503 has its CatchHandler @ 0098e588 */
  if (iVar1 == 0) {
    this = operator_new(0x5a0);
    cocos2d::ui::RichText::RichText(this);
    cocos2d::Ref::autorelease((Ref *)this);
                    /* try { // try from 0098e53c to 00a8e5d7 has its CatchHandler @ 0098e3f0 */
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccui.RichText");
  }
  else {
                    /* try { // try from 0098e508 to 00a8e53b has its CatchHandler @ 0098e58c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.RichText:RichText",iVar1,0);
  }
  return iVar1 == 0;
}

