
/* lua_cocos2dx_ui_RadioButton_constructor(lua_State*) */

bool lua_cocos2dx_ui_RadioButton_constructor(lua_State *param_1)

{
  int iVar1;
  RadioButton *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x600);
    cocos2d::ui::RadioButton::RadioButton(this);
                    /* try { // try from 00972208 to 00a72257 has its CatchHandler @ 009720d8 */
    cocos2d::Ref::autorelease((Ref *)this);
                    /* catch() { ... } // from try @ 0097212c with catch @ 0097221c
                       catch() { ... } // from try @ 009721f4 with catch @ 0097221c */
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccui.RadioButton");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.RadioButton:RadioButton",iVar1,0);
                    /* try { // try from 009721f4 to 00a72207 has its CatchHandler @ 0097221c */
  }
  return iVar1 == 0;
}

