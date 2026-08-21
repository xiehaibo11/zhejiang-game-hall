
/* lua_cocos2dx_3d_BillBoard_create(lua_State*) */

void lua_cocos2dx_3d_BillBoard_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  int local_64;
  int local_60 [4];
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  int iVar7;
  
                    /* try { // try from 009028c0 to 00a0295b has its CatchHandler @ 009025d8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  switch(iVar2 + -1) {
  case 0:
                    /* catch() { ... } // from try @ 00902874 with catch @ 0090290c */
    pvVar4 = (void *)cocos2d::BillBoard::create(0);
                    /* catch() { ... } // from try @ 0090288c with catch @ 00902910 */
    goto joined_r0x00902b90;
  case 1:
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.BillBoard:create");
    if ((uVar3 & 1) != 0) {
      pvVar4 = (void *)cocos2d::BillBoard::create(&local_50,0);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.BillBoard");
      }
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
      }
LAB_00902be8:
      uVar5 = 1;
      goto LAB_00902bec;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    uVar3 = luaval_to_int32(param_1,2,(int *)&local_50,"cc.BillBoard:create");
    if ((uVar3 & 1) == 0) break;
    pvVar4 = (void *)cocos2d::BillBoard::create(local_50 & 0xffffffff);
joined_r0x00902b90:
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
      uVar5 = 1;
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "cc.BillBoard");
      uVar5 = 1;
    }
    goto LAB_00902bec;
  case 2:
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* catch() { ... } // from try @ 00902840 with catch @ 00902940 */
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.BillBoard:create");
    if (((uVar3 & 1) == 0) ||
       (uVar3 = luaval_to_int32(param_1,3,local_60,"cc.BillBoard:create"), (uVar3 & 1) == 0)) {
      iVar7 = 4;
      iVar6 = 4;
    }
    else {
      pvVar4 = (void *)cocos2d::BillBoard::create(&local_50,local_60[0]);
      if (pvVar4 == (void *)0x0) {
                    /* try { // try from 00902c1c to 00a02d03 has its CatchHandler @ 00902c1c
                       catch() { ... } // from try @ 00902c1c with catch @ 00902c1c
                       catch() { ... } // from try @ 00902d84 with catch @ 00902c1c */
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.BillBoard");
      }
      iVar7 = 1;
      iVar6 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
      iVar6 = iVar7;
    }
    if (iVar6 != 4) goto LAB_00902be8;
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.BillBoard:create");
    if ((uVar3 & 1) == 0) {
LAB_00902ba4:
      iVar7 = 10;
      iVar6 = 10;
    }
    else {
      cocos2d::Rect::Rect((Rect *)local_60);
      uVar3 = luaval_to_rect(param_1,3,(Rect *)local_60,"cc.BillBoard:create");
      if ((uVar3 & 1) == 0) goto LAB_00902ba4;
      pvVar4 = (void *)cocos2d::BillBoard::create(&local_50,local_60,0);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.BillBoard");
      }
      iVar7 = 1;
      iVar6 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
      iVar6 = iVar7;
    }
    if (iVar6 != 10) goto LAB_00902be8;
    break;
  case 3:
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.BillBoard:create");
    if ((uVar3 & 1) == 0) {
LAB_00902aa4:
      iVar7 = 0xc;
      iVar6 = 0xc;
    }
    else {
      cocos2d::Rect::Rect((Rect *)local_60);
      uVar3 = luaval_to_rect(param_1,3,(Rect *)local_60,"cc.BillBoard:create");
      if (((uVar3 & 1) == 0) ||
         (uVar3 = luaval_to_int32(param_1,4,&local_64,"cc.BillBoard:create"), (uVar3 & 1) == 0))
      goto LAB_00902aa4;
      pvVar4 = (void *)cocos2d::BillBoard::create(&local_50,local_60,local_64);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.BillBoard");
      }
      iVar7 = 1;
      iVar6 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
      iVar6 = iVar7;
    }
    if (iVar6 != 0xc) goto LAB_00902be8;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d","cc.BillBoard:create",
             iVar2 + -1,2);
  uVar5 = 0;
LAB_00902bec:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

