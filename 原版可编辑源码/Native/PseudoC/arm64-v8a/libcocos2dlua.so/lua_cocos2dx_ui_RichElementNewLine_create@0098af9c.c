
/* lua_cocos2dx_ui_RichElementNewLine_create(lua_State*) */

void lua_cocos2dx_ui_RichElementNewLine_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  uchar local_54 [4];
  Color3B aCStack_50 [4];
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 3) {
    cocos2d::Color3B::Color3B(aCStack_50);
                    /* try { // try from 0098aff0 to 00a8b00f has its CatchHandler @ 0098b0a8 */
    uVar3 = luaval_to_int32(param_1,2,&local_4c,"ccui.RichElementNewLine:create");
    uVar4 = luaval_to_color3b(param_1,3,aCStack_50,"ccui.RichElementNewLine:create");
    uVar5 = luaval_to_uint16(param_1,4,(ushort *)local_54,"ccui.RichElementNewLine:create");
    if ((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) {
      pvVar6 = (void *)cocos2d::ui::RichElementNewLine::create(local_4c,aCStack_50,local_54[0]);
      if (pvVar6 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar7 = 1;
      }
      else {
                    /* try { // try from 0098b048 to 00a8b05b has its CatchHandler @ 0098b0a4 */
                    /* try { // try from 0098b05c to 00a8b0c3 has its CatchHandler @ 0098af68 */
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                   "ccui.RichElementNewLine");
        uVar7 = 1;
      }
      goto LAB_0098b0a4;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_RichElementNewLine_create\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccui.RichElementNewLine:create",iVar2 + -1,3);
  }
  uVar7 = 0;
LAB_0098b0a4:
                    /* catch() { ... } // from try @ 0098b048 with catch @ 0098b0a4 */
                    /* catch() { ... } // from try @ 0098aff0 with catch @ 0098b0a8 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

