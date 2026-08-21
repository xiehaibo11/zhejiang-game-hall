
undefined8 FUN_008f9a44(lua_State *param_1)

{
  int iVar1;
  GTree *this;
  ulong uVar2;
  
                    /* try { // try from 008f9a48 to 009f9a9b has its CatchHandler @ 008f9a48
                       catch() { ... } // from try @ 008f9a48 with catch @ 008f9a48
                       catch() { ... } // from try @ 008f9b38 with catch @ 008f9a48
                       catch() { ... } // from try @ 008f9b9c with catch @ 008f9a48 */
  iVar1 = lua_gettop();
  if (iVar1 + -1 != 0) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "fairygui.GTree:create",iVar1 + -1,0);
    return 0;
  }
  this = operator_new(0x400,(nothrow_t *)&std::nothrow);
  if (this != (GTree *)0x0) {
                    /* try { // try from 008f9a9c to 009f9ab3 has its CatchHandler @ 008f9be4 */
    fairygui::GTree::GTree(this);
    uVar2 = fairygui::GObject::init((GObject *)this);
    if ((uVar2 & 1) != 0) {
      cocos2d::Ref::autorelease((Ref *)this);
                    /* try { // try from 008f9ab8 to 009f9ad3 has its CatchHandler @ 008f9be0 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"fairygui.GTree");
      return 1;
    }
                    /* try { // try from 008f9ae0 to 009f9b13 has its CatchHandler @ 008f9be8 */
    (**(code **)(*(long *)this + 8))(this);
  }
  lua_pushnil(param_1);
  return 1;
}

