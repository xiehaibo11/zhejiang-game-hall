
/* lua_cocos2dx_ui_CheckBox_constructor(lua_State*) */

bool lua_cocos2dx_ui_CheckBox_constructor(lua_State *param_1)

{
  int iVar1;
  CheckBox *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x610);
    cocos2d::ui::CheckBox::CheckBox(this);
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccui.CheckBox");
  }
  else {
                    /* catch() { ... } // from try @ 00971608 with catch @ 009716a8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d8e4b,
               iVar1,0);
                    /* catch() { ... } // from try @ 009715ec with catch @ 009716ac
                       catch() { ... } // from try @ 00971654 with catch @ 009716ac */
  }
  return iVar1 == 0;
}

