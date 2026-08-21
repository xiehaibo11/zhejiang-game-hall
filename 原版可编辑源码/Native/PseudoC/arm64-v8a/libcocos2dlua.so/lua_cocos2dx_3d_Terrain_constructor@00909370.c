
/* lua_cocos2dx_3d_Terrain_constructor(lua_State*) */

bool lua_cocos2dx_3d_Terrain_constructor(lua_State *param_1)

{
  int iVar1;
  Terrain *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x80640);
    cocos2d::Terrain::Terrain(this);
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.Terrain");
  }
  else {
                    /* catch() { ... } // from try @ 00909298 with catch @ 00909398 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Terrain:Terrain",iVar1,0);
  }
  return iVar1 == 0;
}

