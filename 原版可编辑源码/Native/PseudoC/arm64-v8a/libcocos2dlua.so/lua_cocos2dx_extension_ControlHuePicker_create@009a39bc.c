
/* lua_cocos2dx_extension_ControlHuePicker_create(lua_State*) */

void lua_cocos2dx_extension_ControlHuePicker_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 009a37a8 with catch @ 009a39bc */
                    /* catch() { ... } // from try @ 009a3494 with catch @ 009a39c0 */
                    /* catch() { ... } // from try @ 009a37c4 with catch @ 009a39d0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 2) {
    local_40 = 0;
                    /* try { // try from 009a3a0c to 00aa3a97 has its CatchHandler @ 009a3a0c
                       catch(type#1 @ 00000000) { ... } // from try @ 009a3a0c with catch @ 009a3a0c
                       catch(type#1 @ 00000000) { ... } // from try @ 009a3aa8 with catch @ 009a3a0c
                       catch(type#1 @ 00000000) { ... } // from try @ 009a3b08 with catch @ 009a3a0c
                       catch(type#1 @ 00000000) { ... } // from try @ 009a3b78 with catch @ 009a3a0c
                        */
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar3 & 1) == 0)) {
                    /* try { // try from 009a3aa8 to 00aa3ae3 has its CatchHandler @ 009a3a0c */
      luaval_to_vec2(param_1,3,(Vec2 *)&local_40,"cc.ControlHuePicker:create");
    }
    else {
      uVar4 = tolua_tousertype(param_1,2,0);
      uVar3 = luaval_to_vec2(param_1,3,(Vec2 *)&local_40,"cc.ControlHuePicker:create");
      if ((uVar3 & 1) != 0) {
        pvVar5 = (void *)cocos2d::extension::ControlHuePicker::create
                                   ((ControlHuePicker *)local_40,local_40._4_4_,uVar4);
        if (pvVar5 == (void *)0x0) {
          lua_pushnil(param_1);
                    /* try { // try from 009a3b04 to 00aa3b07 has its CatchHandler @ 009a3ba8 */
          uVar4 = 1;
                    /* try { // try from 009a3b08 to 00aa3b73 has its CatchHandler @ 009a3a0c */
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                     "cc.ControlHuePicker");
          uVar4 = 1;
        }
        goto LAB_009a3ad8;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ControlHuePicker_create\'",0
               );
  }
  else {
                    /* try { // try from 009a3a98 to 00aa3a9f has its CatchHandler @ 009a3b60 */
                    /* try { // try from 009a3aa0 to 00aa3aa7 has its CatchHandler @ 009a3b5c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.ControlHuePicker:create",iVar2 + -1,2);
  }
  uVar4 = 0;
LAB_009a3ad8:
                    /* try { // try from 009a3ae4 to 00aa3af3 has its CatchHandler @ 009a3b58 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

