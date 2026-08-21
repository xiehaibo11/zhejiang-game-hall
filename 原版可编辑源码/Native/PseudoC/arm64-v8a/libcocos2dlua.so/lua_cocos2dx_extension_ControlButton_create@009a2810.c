
/* lua_cocos2dx_extension_ControlButton_create(lua_State*) */

void lua_cocos2dx_extension_ControlButton_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  Node *pNVar6;
  Scale9Sprite *pSVar7;
  undefined8 uVar8;
  double local_80;
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  switch(iVar2 + -1) {
  case 0:
    pvVar5 = (void *)cocos2d::extension::ControlButton::create();
    goto joined_r0x009a2918;
  case 1:
    if (((param_1 == (lua_State *)0x0) || (iVar3 = lua_gettop(param_1), iVar3 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"ccui.Scale9Sprite",0), (uVar4 & 1) == 0)) break;
    pSVar7 = (Scale9Sprite *)tolua_tousertype(param_1,2,0);
    pvVar5 = (void *)cocos2d::extension::ControlButton::create(pSVar7);
joined_r0x009a2918:
    if (pvVar5 == (void *)0x0) {
      lua_pushnil(param_1);
      uVar8 = 1;
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                 "cc.ControlButton");
      uVar8 = 1;
    }
    goto LAB_009a2b2c;
  case 2:
                    /* try { // try from 009a28b8 to 00aa28bf has its CatchHandler @ 009a2934 */
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar4 & 1) != 0)) {
      pNVar6 = (Node *)tolua_tousertype(param_1,2,0);
                    /* try { // try from 009a28d0 to 00aa28d7 has its CatchHandler @ 009a2930 */
      iVar3 = lua_gettop(param_1);
                    /* try { // try from 009a28e8 to 00aa28ef has its CatchHandler @ 009a2924 */
      if ((2 < iVar3) &&
         (uVar4 = luaval_is_usertype(param_1,3,"ccui.Scale9Sprite",0), (uVar4 & 1) != 0)) {
                    /* try { // try from 009a2900 to 00aa2907 has its CatchHandler @ 009a291c */
                    /* try { // try from 009a2908 to 00aa29b7 has its CatchHandler @ 009a2388 */
        pSVar7 = (Scale9Sprite *)tolua_tousertype(param_1,3,0);
        pvVar5 = (void *)cocos2d::extension::ControlButton::create(pNVar6,pSVar7);
        goto joined_r0x009a2918;
      }
    }
    break;
  case 3:
                    /* catch() { ... } // from try @ 009a2704 with catch @ 009a2920 */
    local_58 = 0;
    local_50 = (void *)0x0;
                    /* catch() { ... } // from try @ 009a2628 with catch @ 009a2924
                       catch() { ... } // from try @ 009a28e8 with catch @ 009a2924 */
    local_60 = 0;
                    /* catch() { ... } // from try @ 009a26e8 with catch @ 009a2928 */
                    /* catch() { ... } // from try @ 009a2600 with catch @ 009a292c */
                    /* catch() { ... } // from try @ 009a2490 with catch @ 009a2930
                       catch() { ... } // from try @ 009a28d0 with catch @ 009a2930 */
                    /* catch() { ... } // from try @ 009a2538 with catch @ 009a2934
                       catch() { ... } // from try @ 009a28b8 with catch @ 009a2934 */
                    /* catch() { ... } // from try @ 009a26c4 with catch @ 009a2938 */
                    /* catch() { ... } // from try @ 009a26a8 with catch @ 009a293c */
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.ControlButton:create");
                    /* catch() { ... } // from try @ 009a25dc with catch @ 009a2940 */
    if ((uVar4 & 1) == 0) {
      iVar3 = 8;
                    /* try { // try from 009a2a18 to 00aa2a4b has its CatchHandler @ 009a2b80 */
    }
    else {
                    /* catch() { ... } // from try @ 009a25c0 with catch @ 009a2944 */
      local_70 = 0;
      local_68 = (void *)0x0;
                    /* catch() { ... } // from try @ 009a2514 with catch @ 009a2948 */
      local_78 = 0;
                    /* catch() { ... } // from try @ 009a2464 with catch @ 009a294c */
                    /* catch() { ... } // from try @ 009a2448 with catch @ 009a2950 */
                    /* catch() { ... } // from try @ 009a268c with catch @ 009a2954 */
                    /* catch() { ... } // from try @ 009a25a4 with catch @ 009a2958 */
                    /* catch() { ... } // from try @ 009a24f8 with catch @ 009a295c */
                    /* catch() { ... } // from try @ 009a242c with catch @ 009a2960 */
      uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"cc.ControlButton:create");
      if (((uVar4 & 1) == 0) ||
         (uVar4 = luaval_to_number(param_1,4,&local_80,"cc.ControlButton:create"), (uVar4 & 1) == 0)
         ) {
        iVar3 = 8;
      }
      else {
                    /* catch() { ... } // from try @ 009a2668 with catch @ 009a2990 */
                    /* catch() { ... } // from try @ 009a2580 with catch @ 009a2994 */
        pvVar5 = (void *)cocos2d::extension::ControlButton::create
                                   ((basic_string *)&local_60,(basic_string *)&local_78,
                                    (float)local_80);
                    /* catch() { ... } // from try @ 009a24d4 with catch @ 009a2998 */
                    /* catch() { ... } // from try @ 009a2408 with catch @ 009a299c */
        if (pvVar5 == (void *)0x0) {
                    /* try { // try from 009a2b5c to 00aa2b63 has its CatchHandler @ 009a2b78 */
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                     "cc.ControlButton");
                    /* try { // try from 009a29b8 to 00aa2a17 has its CatchHandler @ 009a29b8
                       catch() { ... } // from try @ 009a29b8 with catch @ 009a29b8
                       catch() { ... } // from try @ 009a2ae8 with catch @ 009a29b8
                       catch() { ... } // from try @ 009a2b64 with catch @ 009a29b8 */
        }
                    /* try { // try from 009a2b64 to 00aa2bab has its CatchHandler @ 009a29b8 */
        iVar3 = 1;
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if (iVar3 != 8) {
      uVar8 = 1;
      goto LAB_009a2b2c;
    }
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar4 & 1) != 0)) {
                    /* try { // try from 009a2a80 to 00aa2ab3 has its CatchHandler @ 009a2b7c */
      pNVar6 = (Node *)tolua_tousertype(param_1,2,0);
      iVar3 = lua_gettop(param_1);
                    /* try { // try from 009a2abc to 00aa2ae7 has its CatchHandler @ 009a2b78 */
      if ((2 < iVar3) &&
         (uVar4 = luaval_is_usertype(param_1,3,"ccui.Scale9Sprite",0), (uVar4 & 1) != 0)) {
        pSVar7 = (Scale9Sprite *)tolua_tousertype(param_1,3,0);
                    /* try { // try from 009a2ae8 to 00aa2b5b has its CatchHandler @ 009a29b8 */
        uVar4 = luaval_to_boolean(param_1,4,(bool *)&local_60,"cc.ControlButton:create");
        if ((uVar4 & 1) != 0) {
          pvVar5 = (void *)cocos2d::extension::ControlButton::create
                                     (pNVar6,pSVar7,(bool)local_60._0_1_);
          goto joined_r0x009a2918;
        }
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "cc.ControlButton:create",iVar2 + -1,3);
  uVar8 = 0;
LAB_009a2b2c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}

