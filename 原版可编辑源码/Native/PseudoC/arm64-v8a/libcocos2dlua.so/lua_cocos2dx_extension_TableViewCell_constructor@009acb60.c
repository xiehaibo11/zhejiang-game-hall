
/* lua_cocos2dx_extension_TableViewCell_constructor(lua_State*) */

bool lua_cocos2dx_extension_TableViewCell_constructor(lua_State *param_1)

{
  int iVar1;
  Node *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x300);
                    /* try { // try from 009acba8 to 00aacbb3 has its CatchHandler @ 009acc20 */
    cocos2d::Node::Node(this);
                    /* try { // try from 009acbb4 to 00aacc3b has its CatchHandler @ 009acb18 */
    *(undefined ***)this = &PTR__Node_0169e6b8;
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.TableViewCell");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TableViewCell:TableViewCell",iVar1,0);
  }
  return iVar1 == 0;
}

