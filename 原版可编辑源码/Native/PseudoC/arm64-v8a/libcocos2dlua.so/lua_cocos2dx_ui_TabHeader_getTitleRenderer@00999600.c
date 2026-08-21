
/* lua_cocos2dx_ui_TabHeader_getTitleRenderer(lua_State*) */

undefined8 lua_cocos2dx_ui_TabHeader_getTitleRenderer(lua_State *param_1)

{
  int iVar1;
  TabHeader *this;
  undefined8 uVar2;
  void *pvVar3;
  
                    /* try { // try from 00999610 to 00a9961f has its CatchHandler @ 009996d4 */
  this = (TabHeader *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00999620 to 00a9962b has its CatchHandler @ 009996bc */
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 0099962c to 00a99667 has its CatchHandler @ 009995a4 */
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)cocos2d::ui::TabHeader::getTitleRenderer(this);
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 00999668 to 00a9967b has its CatchHandler @ 009996d8 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,"cc.Label"
                );
                    /* try { // try from 0099967c to 00a996f3 has its CatchHandler @ 009995a4 */
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TabHeader:getTitleRenderer",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

