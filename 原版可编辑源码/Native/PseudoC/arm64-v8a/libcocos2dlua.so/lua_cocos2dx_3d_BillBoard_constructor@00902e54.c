
/* lua_cocos2dx_3d_BillBoard_constructor(lua_State*) */

bool lua_cocos2dx_3d_BillBoard_constructor(lua_State *param_1)

{
  int iVar1;
  BillBoard *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x5c0);
    cocos2d::BillBoard::BillBoard(this);
                    /* try { // try from 00902ea4 to 00a02ecf has its CatchHandler @ 00902e20 */
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.BillBoard");
  }
  else {
                    /* try { // try from 00902e70 to 00a02e87 has its CatchHandler @ 00902f50 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.BillBoard:BillBoard",iVar1,0);
                    /* try { // try from 00902e8c to 00a02ea3 has its CatchHandler @ 00902f4c */
  }
                    /* try { // try from 00902ed0 to 00a02ee3 has its CatchHandler @ 00902f50 */
  return iVar1 == 0;
}

