
/* lua_cocos2dx_extension_TableViewCell_create(lua_State*) */

undefined8 lua_cocos2dx_extension_TableViewCell_create(lua_State *param_1)

{
  int iVar1;
  Node *this;
  ulong uVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 != 0) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.TableViewCell:create",iVar1 + -1,0);
    return 0;
  }
  this = operator_new(0x300,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    cocos2d::Node::Node(this);
    *(undefined ***)this = &PTR__Node_0169e6b8;
    uVar2 = cocos2d::Node::init();
    if ((uVar2 & 1) != 0) {
      cocos2d::Ref::autorelease((Ref *)this);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.TableViewCell");
      return 1;
                    /* try { // try from 009acb18 to 00aacba7 has its CatchHandler @ 009acb18
                       catch() { ... } // from try @ 009acb18 with catch @ 009acb18
                       catch() { ... } // from try @ 009acbb4 with catch @ 009acb18 */
    }
    (**(code **)(*(long *)this + 8))(this);
  }
  lua_pushnil(param_1);
  return 1;
}

