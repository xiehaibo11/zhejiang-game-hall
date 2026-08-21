
/* lua_cocos2dx_3d_Mesh_constructor(lua_State*) */

bool lua_cocos2dx_3d_Mesh_constructor(lua_State *param_1)

{
  int iVar1;
  Mesh *this;
  
                    /* try { // try from 00903f34 to 00a03f37 has its CatchHandler @ 00903f8c */
                    /* try { // try from 00903f38 to 00a03f9f has its CatchHandler @ 00903ee8 */
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x2c0);
    cocos2d::Mesh::Mesh(this);
    cocos2d::Ref::autorelease((Ref *)this);
                    /* catch() { ... } // from try @ 00903f34 with catch @ 00903f8c */
    toluafix_pushusertype_ccobject(param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.Mesh")
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","cc.Mesh:Mesh",
               iVar1,0);
  }
                    /* try { // try from 00903fa0 to 00a0409f has its CatchHandler @ 00903fa0
                       catch() { ... } // from try @ 00903fa0 with catch @ 00903fa0
                       catch() { ... } // from try @ 00904120 with catch @ 00903fa0 */
  return iVar1 == 0;
}

