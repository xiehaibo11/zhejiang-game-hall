
/* lua_cocos2dx_3d_TextureCube_constructor(lua_State*) */

bool lua_cocos2dx_3d_TextureCube_constructor(lua_State *param_1)

{
  int iVar1;
  TextureCube *this;
  
                    /* try { // try from 0090217c to 00a021c3 has its CatchHandler @ 0090217c
                       catch() { ... } // from try @ 0090217c with catch @ 0090217c
                       catch() { ... } // from try @ 00902328 with catch @ 0090217c
                       catch() { ... } // from try @ 00902428 with catch @ 0090217c
                       catch() { ... } // from try @ 009024f4 with catch @ 0090217c */
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0xa0);
    cocos2d::TextureCube::TextureCube(this);
                    /* try { // try from 009021c4 to 00a021db has its CatchHandler @ 00902484 */
    cocos2d::Ref::autorelease((Ref *)this);
                    /* try { // try from 009021e0 to 00a0220f has its CatchHandler @ 00902480 */
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.TextureCube");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TextureCube:TextureCube",iVar1,0);
  }
  return iVar1 == 0;
}

