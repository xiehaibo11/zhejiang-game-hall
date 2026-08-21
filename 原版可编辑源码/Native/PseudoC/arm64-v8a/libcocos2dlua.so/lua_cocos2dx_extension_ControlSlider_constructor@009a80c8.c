
/* lua_cocos2dx_extension_ControlSlider_constructor(lua_State*) */

bool lua_cocos2dx_extension_ControlSlider_constructor(lua_State *param_1)

{
  int iVar1;
  ControlSlider *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 009a8108 to 00aa812f has its CatchHandler @ 009a84d0 */
    this = operator_new(0x390);
    cocos2d::extension::ControlSlider::ControlSlider(this);
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.ControlSlider");
                    /* try { // try from 009a813c to 00aa8143 has its CatchHandler @ 009a84b4 */
  }
  else {
                    /* try { // try from 009a80e4 to 00aa8107 has its CatchHandler @ 009a8484 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlSlider:ControlSlider",iVar1,0);
  }
                    /* try { // try from 009a8144 to 00aa8193 has its CatchHandler @ 009a84d4 */
  return iVar1 == 0;
}

