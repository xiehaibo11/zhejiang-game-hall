
/* lua_cocos2dx_3d_Animate3D_constructor(lua_State*) */

bool lua_cocos2dx_3d_Animate3D_constructor(lua_State *param_1)

{
  int iVar1;
  Animate3D *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x168);
    cocos2d::Animate3D::Animate3D(this);
    cocos2d::Ref::autorelease((Ref *)this);
                    /* try { // try from 00901998 to 00a019ab has its CatchHandler @ 00901a9c */
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.Animate3D");
  }
  else {
                    /* try { // try from 00901950 to 00a01967 has its CatchHandler @ 00901a90 */
                    /* try { // try from 00901968 to 00a01997 has its CatchHandler @ 009017cc */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Animate3D:Animate3D",iVar1,0);
  }
  return iVar1 == 0;
}

