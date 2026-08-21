
undefined8 FUN_008ea0c4(lua_State *param_1)

{
  int iVar1;
  GGraph *this;
  ulong uVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 != 0) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "fairygui.GGraph:create",iVar1 + -1,0);
    return 0;
  }
                    /* try { // try from 008ea110 to 009ea14f has its CatchHandler @ 008ea1c4 */
  this = operator_new(0x230,(nothrow_t *)&std::nothrow);
  if (this != (GGraph *)0x0) {
    fairygui::GGraph::GGraph(this);
    uVar2 = fairygui::GObject::init((GObject *)this);
    if ((uVar2 & 1) != 0) {
      cocos2d::Ref::autorelease((Ref *)this);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"fairygui.GGraph");
      return 1;
                    /* try { // try from 008ea150 to 009ea177 has its CatchHandler @ 008ea0c0 */
    }
    (**(code **)(*(long *)this + 8))(this);
  }
  lua_pushnil(param_1);
                    /* try { // try from 008ea178 to 009ea18b has its CatchHandler @ 008ea1c4 */
  return 1;
}

