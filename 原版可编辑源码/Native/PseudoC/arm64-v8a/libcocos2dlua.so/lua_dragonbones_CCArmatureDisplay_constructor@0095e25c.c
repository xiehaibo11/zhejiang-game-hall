
/* lua_dragonbones_CCArmatureDisplay_constructor(lua_State*) */

bool lua_dragonbones_CCArmatureDisplay_constructor(lua_State *param_1)

{
  int iVar1;
  CCArmatureDisplay *this;
  
                    /* try { // try from 0095e25c to 00a5e2a7 has its CatchHandler @ 0095e25c
                       catch() { ... } // from try @ 0095e25c with catch @ 0095e25c
                       catch() { ... } // from try @ 0095e2ac with catch @ 0095e25c */
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(800);
                    /* try { // try from 0095e2a8 to 00a5e2ab has its CatchHandler @ 0095e2e0 */
    dragonBones::CCArmatureDisplay::CCArmatureDisplay(this);
                    /* try { // try from 0095e2ac to 00a5e2f3 has its CatchHandler @ 0095e25c */
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"db.CCArmatureDisplay");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d4163,
               iVar1,0);
  }
  return iVar1 == 0;
}

