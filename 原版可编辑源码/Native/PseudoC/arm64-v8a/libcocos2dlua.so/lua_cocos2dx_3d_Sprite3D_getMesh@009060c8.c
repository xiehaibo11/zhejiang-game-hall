
/* lua_cocos2dx_3d_Sprite3D_getMesh(lua_State*) */

undefined8 lua_cocos2dx_3d_Sprite3D_getMesh(lua_State *param_1)

{
  int iVar1;
  Sprite3D *this;
  undefined8 uVar2;
  void *pvVar3;
  
                    /* try { // try from 009060c8 to 00a060cb has its CatchHandler @ 00906100 */
                    /* try { // try from 009060cc to 00a06113 has its CatchHandler @ 0090607c */
  this = (Sprite3D *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)cocos2d::Sprite3D::getMesh(this);
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,"cc.Mesh")
      ;
    }
    uVar2 = 1;
  }
  else {
                    /* catch() { ... } // from try @ 009060c8 with catch @ 00906100 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Sprite3D:getMesh",iVar1 + -1,0);
                    /* try { // try from 00906114 to 00a061e3 has its CatchHandler @ 00906114
                       catch() { ... } // from try @ 00906114 with catch @ 00906114
                       catch() { ... } // from try @ 00906264 with catch @ 00906114 */
    uVar2 = 0;
  }
  return uVar2;
}

