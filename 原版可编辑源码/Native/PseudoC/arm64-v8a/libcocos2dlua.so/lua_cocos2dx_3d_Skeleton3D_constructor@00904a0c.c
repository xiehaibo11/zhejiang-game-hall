
/* lua_cocos2dx_3d_Skeleton3D_constructor(lua_State*) */

bool lua_cocos2dx_3d_Skeleton3D_constructor(lua_State *param_1)

{
  int iVar1;
  Skeleton3D *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 00904a4c to 00a04a97 has its CatchHandler @ 00904a4c
                       catch() { ... } // from try @ 00904a4c with catch @ 00904a4c
                       catch() { ... } // from try @ 00904a9c with catch @ 00904a4c */
    this = operator_new(0x58);
    cocos2d::Skeleton3D::Skeleton3D(this);
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.Skeleton3D");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Skeleton3D:Skeleton3D",iVar1,0);
  }
  return iVar1 == 0;
}

