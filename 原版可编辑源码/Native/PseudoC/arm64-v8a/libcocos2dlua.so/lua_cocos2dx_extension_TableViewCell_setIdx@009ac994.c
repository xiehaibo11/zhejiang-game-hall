
/* lua_cocos2dx_extension_TableViewCell_setIdx(lua_State*) */

undefined4 lua_cocos2dx_extension_TableViewCell_setIdx(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TableViewCell *this;
  ulong uVar3;
  undefined4 uVar4;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 009ac9ac to 00aac9b7 has its CatchHandler @ 009aca6c */
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009ac9b8 to 00aac9db has its CatchHandler @ 009ac918 */
  this = (TableViewCell *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 009ac9dc to 00aac9e7 has its CatchHandler @ 009aca68 */
                    /* try { // try from 009ac9e8 to 00aaca87 has its CatchHandler @ 009ac918 */
    uVar3 = luaval_to_ssize(param_1,2,&local_40,"cc.TableViewCell:setIdx");
    if ((uVar3 & 1) != 0) {
      cocos2d::extension::TableViewCell::setIdx(this,local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009aca50;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_TableViewCell_setIdx\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TableViewCell:setIdx",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009aca50:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 009ac9dc with catch @ 009aca68 */
                    /* catch() { ... } // from try @ 009ac9ac with catch @ 009aca6c */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

