
/* lua_cocos2dx_ui_TextBMFont_create(lua_State*) */

void lua_cocos2dx_ui_TextBMFont_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  ulong local_68;
  undefined8 local_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009838dc with catch @ 00983840
                       catch(type#1 @ 00000000) { ... } // from try @ 00983990 with catch @ 00983840
                        */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 0) {
    pvVar4 = (void *)cocos2d::ui::TextBMFont::create();
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "ccui.TextBMFont");
    }
LAB_00983978:
    uVar5 = 1;
  }
  else {
    if (iVar2 == 3) {
      local_48 = 0;
      local_40 = (void *)0x0;
      local_50 = 0;
      uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.TextBMFont:create");
      if ((uVar3 & 1) == 0) {
        iVar6 = 2;
      }
      else {
        local_60 = 0;
        local_58 = (void *)0x0;
        local_68 = 0;
        uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"ccui.TextBMFont:create");
        if ((uVar3 & 1) == 0) {
          iVar6 = 2;
        }
        else {
          pvVar4 = (void *)cocos2d::ui::TextBMFont::create
                                     ((basic_string *)&local_50,(basic_string *)&local_68);
                    /* try { // try from 009838bc to 00a838cb has its CatchHandler @ 0098394c */
          if (pvVar4 == (void *)0x0) {
            lua_pushnil(param_1);
          }
          else {
                    /* try { // try from 009838d0 to 00a838db has its CatchHandler @ 00983948 */
            toluafix_pushusertype_ccobject
                      (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                       "ccui.TextBMFont");
                    /* try { // try from 009838dc to 00a83983 has its CatchHandler @ 00983840 */
          }
          iVar6 = 1;
        }
        if ((local_68 & 1) != 0) {
          operator_delete(local_58);
        }
      }
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009838d0 with catch @ 00983948
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009838bc with catch @ 0098394c
                        */
      if (iVar6 != 2) goto LAB_00983978;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
               "ccui.TextBMFont:create",iVar2 + -1,0);
    uVar5 = 0;
  }
                    /* try { // try from 00983984 to 00a83987 has its CatchHandler @ 00983988 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00983984 with catch @ 00983988
                        */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
                    /* try { // try from 0098398c to 00a8398f has its CatchHandler @ 00983998 */
                    /* try { // try from 00983990 to 00a8399b has its CatchHandler @ 00983840 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0098398c with catch @ 00983998
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009839ec with catch @ 0098399c
                        */
  return;
}

