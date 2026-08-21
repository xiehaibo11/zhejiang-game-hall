
/* lua_cocos2dx_extension_TableView_constructor(lua_State*) */

bool lua_cocos2dx_extension_TableView_constructor(lua_State *param_1)

{
  int iVar1;
  TableView *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x4f0);
    cocos2d::extension::TableView::TableView(this);
    cocos2d::Ref::autorelease((Ref *)this);
                    /* try { // try from 009ad894 to 00aad8a3 has its CatchHandler @ 009ad8e4 */
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.TableView");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TableView:TableView",iVar1,0);
  }
                    /* try { // try from 009ad8a4 to 00aad92b has its CatchHandler @ 009ad658 */
  return iVar1 == 0;
}

