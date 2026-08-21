
/* lua_cocos2dx_3d_Animation3D_constructor(lua_State*) */

bool lua_cocos2dx_3d_Animation3D_constructor(lua_State *param_1)

{
  int iVar1;
  Animation3D *this;
  
  iVar1 = lua_gettop();
                    /* try { // try from 00900674 to 00a00677 has its CatchHandler @ 009006ac */
  iVar1 = iVar1 + -1;
                    /* try { // try from 00900678 to 00a006bf has its CatchHandler @ 00900628 */
  if (iVar1 == 0) {
    this = operator_new(0x58);
                    /* catch() { ... } // from try @ 00900674 with catch @ 009006ac */
    cocos2d::Animation3D::Animation3D(this);
    cocos2d::Ref::autorelease((Ref *)this);
                    /* try { // try from 009006c0 to 00a00837 has its CatchHandler @ 009006c0
                       catch() { ... } // from try @ 009006c0 with catch @ 009006c0
                       catch() { ... } // from try @ 009008b8 with catch @ 009006c0 */
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.Animation3D");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Animation3D:Animation3D",iVar1,0);
  }
  return iVar1 == 0;
}

