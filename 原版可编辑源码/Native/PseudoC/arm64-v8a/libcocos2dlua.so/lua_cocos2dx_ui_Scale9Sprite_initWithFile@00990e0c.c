
/* lua_cocos2dx_ui_Scale9Sprite_initWithFile(lua_State*) */

void lua_cocos2dx_ui_Scale9Sprite_initWithFile(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  Rect aRStack_70 [16];
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  Rect aRStack_48 [16];
  long local_38;
  int iVar8;
  
                    /* try { // try from 00990e14 to 00a90e47 has its CatchHandler @ 00990f14 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 00990e48 to 00a90e5b has its CatchHandler @ 00990ee0 */
  if (iVar2 == 4) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
                    /* catch() { ... } // from try @ 00990e48 with catch @ 00990ee0 */
                    /* catch() { ... } // from try @ 00990e60 with catch @ 00990ee4 */
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"ccui.Scale9Sprite:initWithFile");
    if ((uVar5 & 1) == 0) {
LAB_00990f7c:
      iVar8 = 4;
      iVar7 = 4;
    }
    else {
      cocos2d::Rect::Rect(aRStack_48);
                    /* catch() { ... } // from try @ 00990e14 with catch @ 00990f14 */
      uVar5 = luaval_to_rect(param_1,3,aRStack_48,"ccui.Scale9Sprite:initWithFile");
      if ((uVar5 & 1) == 0) goto LAB_00990f7c;
      cocos2d::Rect::Rect(aRStack_70);
      uVar5 = luaval_to_rect(param_1,4,aRStack_70,"ccui.Scale9Sprite:initWithFile");
      if ((uVar5 & 1) == 0) goto LAB_00990f7c;
      uVar3 = (**(code **)(*plVar4 + 0x670))(plVar4,&local_60,aRStack_48,aRStack_70);
      tolua_pushboolean(param_1,uVar3 & 1);
      iVar8 = 1;
      iVar7 = 1;
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
      iVar7 = iVar8;
    }
    if (iVar7 != 4) {
LAB_00990fdc:
      uVar6 = 1;
      goto LAB_00990fe0;
    }
  }
  else if (iVar2 == 3) {
                    /* try { // try from 00990e60 to 00a90e93 has its CatchHandler @ 00990ee4 */
    cocos2d::Rect::Rect(aRStack_48);
    uVar5 = luaval_to_rect(param_1,2,aRStack_48,"ccui.Scale9Sprite:initWithFile");
    if ((uVar5 & 1) != 0) {
      local_58 = 0;
      local_50 = (void *)0x0;
      local_60 = 0;
                    /* try { // try from 00990e94 to 00a90f2f has its CatchHandler @ 00990c9c */
      uVar5 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_60,"ccui.Scale9Sprite:initWithFile");
      if ((uVar5 & 1) == 0) {
        iVar8 = 2;
        iVar7 = 2;
      }
      else {
        uVar3 = (**(code **)(*plVar4 + 0x678))(plVar4,aRStack_48,&local_60);
        tolua_pushboolean(param_1,uVar3 & 1);
        iVar8 = 1;
        iVar7 = 1;
      }
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
        iVar7 = iVar8;
      }
      if (iVar7 == 2) goto LAB_00990f98;
      goto LAB_00990fdc;
    }
  }
LAB_00990f98:
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012dfdd7,
             iVar2 + -1,3);
  uVar6 = 0;
LAB_00990fe0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

