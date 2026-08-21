
/* lua_cocos2dx_studio_Armature_constructor(lua_State*) */

bool lua_cocos2dx_studio_Armature_constructor(lua_State *param_1)

{
  int iVar1;
  Armature *this;
  
                    /* try { // try from 00938fdc to 00a3903b has its CatchHandler @ 00938fdc
                       catch() { ... } // from try @ 00938fdc with catch @ 00938fdc
                       catch() { ... } // from try @ 00939188 with catch @ 00938fdc
                       catch() { ... } // from try @ 00939204 with catch @ 00938fdc */
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x380);
    cocostudio::Armature::Armature(this);
    cocos2d::Ref::autorelease((Ref *)this);
                    /* try { // try from 0093903c to 00a39053 has its CatchHandler @ 00939254 */
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.Armature");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Armature:Armature",iVar1,0);
  }
  return iVar1 == 0;
}

