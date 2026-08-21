
/* lua_cocos2dx_3d_Skybox_constructor(lua_State*) */

bool lua_cocos2dx_3d_Skybox_constructor(lua_State *param_1)

{
  int iVar1;
  Skybox *this;
  
                    /* try { // try from 0090559c to 00a055e7 has its CatchHandler @ 0090559c
                       catch() { ... } // from try @ 0090559c with catch @ 0090559c
                       catch() { ... } // from try @ 00905624 with catch @ 0090559c */
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x370);
    cocos2d::Skybox::Skybox(this);
    cocos2d::Ref::autorelease((Ref *)this);
                    /* try { // try from 009055e8 to 00a055eb has its CatchHandler @ 00905658 */
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.Skybox");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Skybox:Skybox",iVar1,0);
  }
  return iVar1 == 0;
}

