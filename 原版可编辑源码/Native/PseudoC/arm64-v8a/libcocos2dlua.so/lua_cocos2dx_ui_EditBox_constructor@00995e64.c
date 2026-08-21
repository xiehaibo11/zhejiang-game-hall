
/* lua_cocos2dx_ui_EditBox_constructor(lua_State*) */

bool lua_cocos2dx_ui_EditBox_constructor(lua_State *param_1)

{
  int iVar1;
  EditBox *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x5d0);
    cocos2d::ui::EditBox::EditBox(this);
    cocos2d::Ref::autorelease((Ref *)this);
                    /* try { // try from 00995ebc to 00a95f07 has its CatchHandler @ 00995ebc
                       catch() { ... } // from try @ 00995ebc with catch @ 00995ebc
                       catch() { ... } // from try @ 00995f24 with catch @ 00995ebc */
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccui.EditBox");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.EditBox:EditBox",iVar1,0);
  }
  return iVar1 == 0;
}

