
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_ui_RichElementText_create(lua_State*) */

undefined4 lua_cocos2dx_ui_RichElementText_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  void *pvVar17;
  undefined4 uVar18;
  Color3B local_118 [4];
  uchar local_114 [4];
  int local_110 [2];
  Color3B local_108 [8];
  Color3B local_100 [8];
  int local_f8 [2];
  Color3B local_f0 [8];
  uint local_e8 [2];
  Size aSStack_e0 [8];
  ulong local_d8;
  undefined8 local_d0;
  void *local_c8;
  double local_c0;
  ulong local_b8;
  undefined8 local_b0;
  void *local_a8;
  ulong local_a0;
  undefined8 local_98;
  void *local_90;
  int local_84;
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  switch(iVar2) {
  case 7:
    cocos2d::Color3B::Color3B((Color3B *)local_e8);
    local_98 = 0;
    local_90 = (void *)0x0;
    local_a0 = 0;
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_b8 = 0;
    uVar3 = luaval_to_int32(param_1,2,&local_84,"ccui.RichElementText:create");
    uVar4 = luaval_to_color3b(param_1,3,(Color3B *)local_e8,"ccui.RichElementText:create");
    uVar5 = luaval_to_uint16(param_1,4,(ushort *)local_f8,"ccui.RichElementText:create");
    uVar6 = luaval_to_std_string(param_1,5,(basic_string *)&local_a0,"ccui.RichElementText:create");
    uVar7 = luaval_to_std_string(param_1,6,(basic_string *)&local_b8,"ccui.RichElementText:create");
    uVar8 = luaval_to_number(param_1,7,&local_c0,"ccui.RichElementText:create");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & 1) == 0) {
                    /* catch() { ... } // from try @ 009893a8 with catch @ 00989440 */
      tolua_error(param_1,&DAT_012de514,0);
                    /* catch() { ... } // from try @ 009893c0 with catch @ 00989444 */
      goto LAB_0098945c;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_d8,"");
    cocos2d::Size::Size(aSStack_e0,2.0,-2.0);
    pvVar17 = (void *)cocos2d::ui::RichElementText::create
                                (local_84,(Color3B *)local_e8,(uchar)local_f8[0]._0_1_,
                                 (basic_string *)&local_a0,(basic_string *)&local_b8,(float)local_c0
                                 ,0,(basic_string *)&local_d8,(Color3B *)&cocos2d::Color3B::WHITE,-1
                                 ,(Color3B *)&cocos2d::Color3B::BLACK,aSStack_e0,0,
                                 (Color3B *)&cocos2d::Color3B::WHITE);
    if ((local_d8 & 1) != 0) {
      operator_delete(local_c8);
    }
    if (pvVar17 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar17 + 0xc),(int *)((long)pvVar17 + 0x10),pvVar17,
                 "ccui.RichElementText");
    }
LAB_009895a0:
    uVar18 = 1;
    goto joined_r0x009895a8;
  case 8:
    cocos2d::Color3B::Color3B((Color3B *)local_f8);
    local_98 = 0;
    local_90 = (void *)0x0;
    local_a0 = 0;
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_b8 = 0;
    uVar3 = luaval_to_int32(param_1,2,&local_84,"ccui.RichElementText:create");
    uVar4 = luaval_to_color3b(param_1,3,(Color3B *)local_f8,"ccui.RichElementText:create");
    uVar5 = luaval_to_uint16(param_1,4,(ushort *)local_110,"ccui.RichElementText:create");
                    /* try { // try from 009889bc to 00a88a8b has its CatchHandler @ 009889bc
                       catch() { ... } // from try @ 009889bc with catch @ 009889bc
                       catch() { ... } // from try @ 00988b0c with catch @ 009889bc */
    uVar6 = luaval_to_std_string(param_1,5,(basic_string *)&local_a0,"ccui.RichElementText:create");
    uVar7 = luaval_to_std_string(param_1,6,(basic_string *)&local_b8,"ccui.RichElementText:create");
    uVar8 = luaval_to_number(param_1,7,&local_c0,"ccui.RichElementText:create");
    uVar9 = luaval_to_uint32(param_1,8,local_e8,"ccui.RichElementText:create");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & 1) != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_d8,"");
      cocos2d::Size::Size(aSStack_e0,2.0,-2.0);
                    /* try { // try from 00988a8c to 00a88abf has its CatchHandler @ 00988b8c */
      pvVar17 = (void *)cocos2d::ui::RichElementText::create
                                  (local_84,(Color3B *)local_f8,(uchar)local_110[0]._0_1_,
                                   (basic_string *)&local_a0,(basic_string *)&local_b8,
                                   (float)local_c0,local_e8[0],(basic_string *)&local_d8,
                                   (Color3B *)&cocos2d::Color3B::WHITE,-1,
                                   (Color3B *)&cocos2d::Color3B::BLACK,aSStack_e0,0,
                                   (Color3B *)&cocos2d::Color3B::WHITE);
      if ((local_d8 & 1) != 0) {
                    /* try { // try from 00988ac0 to 00a88ad3 has its CatchHandler @ 00988b58 */
        operator_delete(local_c8);
      }
      if (pvVar17 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
                    /* try { // try from 00988ad8 to 00a88b0b has its CatchHandler @ 00988b5c */
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar17 + 0xc),(int *)((long)pvVar17 + 0x10),pvVar17,
                   "ccui.RichElementText");
      }
      goto LAB_009895a0;
    }
    tolua_error(param_1,&DAT_012de514,0);
LAB_0098945c:
    uVar18 = 0;
    goto joined_r0x009895a8;
  case 9:
                    /* catch() { ... } // from try @ 00988528 with catch @ 009885c0 */
                    /* catch() { ... } // from try @ 00988540 with catch @ 009885c4 */
    cocos2d::Color3B::Color3B((Color3B *)local_f8);
    local_98 = 0;
    local_90 = (void *)0x0;
    local_a0 = 0;
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (void *)0x0;
    local_d8 = 0;
                    /* catch() { ... } // from try @ 009884f4 with catch @ 009885f4 */
    uVar3 = luaval_to_int32(param_1,2,&local_84,"ccui.RichElementText:create");
    uVar4 = luaval_to_color3b(param_1,3,(Color3B *)local_f8,"ccui.RichElementText:create");
    uVar5 = luaval_to_uint16(param_1,4,(ushort *)local_110,"ccui.RichElementText:create");
    uVar6 = luaval_to_std_string(param_1,5,(basic_string *)&local_a0,"ccui.RichElementText:create");
    uVar7 = luaval_to_std_string(param_1,6,(basic_string *)&local_b8,"ccui.RichElementText:create");
    uVar8 = luaval_to_number(param_1,7,&local_c0,"ccui.RichElementText:create");
    uVar9 = luaval_to_uint32(param_1,8,local_e8,"ccui.RichElementText:create");
    uVar10 = luaval_to_std_string(param_1,9,(basic_string *)&local_d8,"ccui.RichElementText:create")
    ;
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 & 1) == 0) {
                    /* catch() { ... } // from try @ 00989374 with catch @ 00989474 */
      tolua_error(param_1,&DAT_012de514,0);
      break;
    }
    cocos2d::Size::Size(aSStack_e0,2.0,-2.0);
    pvVar17 = (void *)cocos2d::ui::RichElementText::create
                                (local_84,(Color3B *)local_f8,(uchar)local_110[0]._0_1_,
                                 (basic_string *)&local_a0,(basic_string *)&local_b8,(float)local_c0
                                 ,local_e8[0],(basic_string *)&local_d8,
                                 (Color3B *)&cocos2d::Color3B::WHITE,-1,
                                 (Color3B *)&cocos2d::Color3B::BLACK,aSStack_e0,0,
                                 (Color3B *)&cocos2d::Color3B::WHITE);
    if (pvVar17 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar17 + 0xc),(int *)((long)pvVar17 + 0x10),pvVar17,
                 "ccui.RichElementText");
    }
LAB_009895f4:
    uVar18 = 1;
    goto joined_r0x009895fc;
  case 10:
    cocos2d::Color3B::Color3B((Color3B *)local_f8);
    local_98 = 0;
    local_90 = (void *)0x0;
    local_a0 = 0;
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (void *)0x0;
    local_d8 = 0;
    cocos2d::Color3B::Color3B((Color3B *)local_110);
    uVar3 = luaval_to_int32(param_1,2,&local_84,"ccui.RichElementText:create");
    uVar4 = luaval_to_color3b(param_1,3,(Color3B *)local_f8,"ccui.RichElementText:create");
    uVar5 = luaval_to_uint16(param_1,4,(ushort *)local_f0,"ccui.RichElementText:create");
    uVar6 = luaval_to_std_string(param_1,5,(basic_string *)&local_a0,"ccui.RichElementText:create");
    uVar7 = luaval_to_std_string(param_1,6,(basic_string *)&local_b8,"ccui.RichElementText:create");
    uVar8 = luaval_to_number(param_1,7,&local_c0,"ccui.RichElementText:create");
    uVar9 = luaval_to_uint32(param_1,8,local_e8,"ccui.RichElementText:create");
    uVar10 = luaval_to_std_string(param_1,9,(basic_string *)&local_d8,"ccui.RichElementText:create")
    ;
    uVar11 = luaval_to_color3b(param_1,10,(Color3B *)local_110,"ccui.RichElementText:create");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 & uVar11 & 1) != 0) {
      cocos2d::Size::Size(aSStack_e0,2.0,-2.0);
      pvVar17 = (void *)cocos2d::ui::RichElementText::create
                                  (local_84,(Color3B *)local_f8,(uchar)local_f0[0],
                                   (basic_string *)&local_a0,(basic_string *)&local_b8,
                                   (float)local_c0,local_e8[0],(basic_string *)&local_d8,
                                   (Color3B *)local_110,-1,(Color3B *)&cocos2d::Color3B::BLACK,
                                   aSStack_e0,0,(Color3B *)&cocos2d::Color3B::WHITE);
      if (pvVar17 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar17 + 0xc),(int *)((long)pvVar17 + 0x10),pvVar17,
                   "ccui.RichElementText");
      }
      goto LAB_009895f4;
    }
    tolua_error(param_1,&DAT_012de514,0);
    break;
  case 0xb:
    cocos2d::Color3B::Color3B((Color3B *)local_110);
    local_98 = 0;
    local_90 = (void *)0x0;
    local_a0 = 0;
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (void *)0x0;
    local_d8 = 0;
    cocos2d::Color3B::Color3B(local_f0);
    uVar3 = luaval_to_int32(param_1,2,&local_84,"ccui.RichElementText:create");
    uVar4 = luaval_to_color3b(param_1,3,(Color3B *)local_110,"ccui.RichElementText:create");
                    /* try { // try from 0098843c to 00a884f3 has its CatchHandler @ 0098843c
                       catch() { ... } // from try @ 0098843c with catch @ 0098843c
                       catch() { ... } // from try @ 00988574 with catch @ 0098843c */
    uVar5 = luaval_to_uint16(param_1,4,(ushort *)local_100,"ccui.RichElementText:create");
    uVar6 = luaval_to_std_string(param_1,5,(basic_string *)&local_a0,"ccui.RichElementText:create");
    uVar7 = luaval_to_std_string(param_1,6,(basic_string *)&local_b8,"ccui.RichElementText:create");
    uVar8 = luaval_to_number(param_1,7,&local_c0,"ccui.RichElementText:create");
    uVar9 = luaval_to_uint32(param_1,8,local_e8,"ccui.RichElementText:create");
    uVar10 = luaval_to_std_string(param_1,9,(basic_string *)&local_d8,"ccui.RichElementText:create")
    ;
    uVar11 = luaval_to_color3b(param_1,10,local_f0,"ccui.RichElementText:create");
                    /* try { // try from 009884f4 to 00a88527 has its CatchHandler @ 009885f4 */
    uVar12 = luaval_to_int32(param_1,0xb,local_f8,"ccui.RichElementText:create");
                    /* try { // try from 00988528 to 00a8853b has its CatchHandler @ 009885c0 */
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 & uVar11 & uVar12 & 1) != 0)
    {
                    /* try { // try from 00988540 to 00a88573 has its CatchHandler @ 009885c4 */
      cocos2d::Size::Size(aSStack_e0,2.0,-2.0);
                    /* try { // try from 00988574 to 00a8860f has its CatchHandler @ 0098843c */
      pvVar17 = (void *)cocos2d::ui::RichElementText::create
                                  (local_84,(Color3B *)local_110,(uchar)local_100[0],
                                   (basic_string *)&local_a0,(basic_string *)&local_b8,
                                   (float)local_c0,local_e8[0],(basic_string *)&local_d8,local_f0,
                                   local_f8[0],(Color3B *)&cocos2d::Color3B::BLACK,aSStack_e0,0,
                                   (Color3B *)&cocos2d::Color3B::WHITE);
      if (pvVar17 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar17 + 0xc),(int *)((long)pvVar17 + 0x10),pvVar17,
                   "ccui.RichElementText");
      }
      goto LAB_009895f4;
    }
    tolua_error(param_1,&DAT_012de514,0);
    break;
  case 0xc:
                    /* try { // try from 00988d40 to 00a88ddb has its CatchHandler @ 00988c20 */
    cocos2d::Color3B::Color3B((Color3B *)local_110);
    local_98 = 0;
    local_90 = (void *)0x0;
    local_a0 = 0;
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (void *)0x0;
    local_d8 = 0;
    cocos2d::Color3B::Color3B(local_f0);
    cocos2d::Color3B::Color3B(local_100);
    uVar3 = luaval_to_int32(param_1,2,&local_84,"ccui.RichElementText:create");
                    /* catch() { ... } // from try @ 00988cf4 with catch @ 00988d8c */
                    /* catch() { ... } // from try @ 00988d0c with catch @ 00988d90 */
    uVar4 = luaval_to_color3b(param_1,3,(Color3B *)local_110,"ccui.RichElementText:create");
    uVar5 = luaval_to_uint16(param_1,4,(ushort *)local_108,"ccui.RichElementText:create");
                    /* catch() { ... } // from try @ 00988cc0 with catch @ 00988dc0 */
    uVar6 = luaval_to_std_string(param_1,5,(basic_string *)&local_a0,"ccui.RichElementText:create");
    uVar7 = luaval_to_std_string(param_1,6,(basic_string *)&local_b8,"ccui.RichElementText:create");
    uVar8 = luaval_to_number(param_1,7,&local_c0,"ccui.RichElementText:create");
    uVar9 = luaval_to_uint32(param_1,8,local_e8,"ccui.RichElementText:create");
    uVar10 = luaval_to_std_string(param_1,9,(basic_string *)&local_d8,"ccui.RichElementText:create")
    ;
    uVar11 = luaval_to_color3b(param_1,10,local_f0,"ccui.RichElementText:create");
    uVar12 = luaval_to_int32(param_1,0xb,local_f8,"ccui.RichElementText:create");
    uVar13 = luaval_to_color3b(param_1,0xc,local_100,"ccui.RichElementText:create");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 & uVar11 & uVar12 & uVar13 &
        1) != 0) {
      cocos2d::Size::Size(aSStack_e0,2.0,-2.0);
      pvVar17 = (void *)cocos2d::ui::RichElementText::create
                                  (local_84,(Color3B *)local_110,(uchar)local_108[0],
                                   (basic_string *)&local_a0,(basic_string *)&local_b8,
                                   (float)local_c0,local_e8[0],(basic_string *)&local_d8,local_f0,
                                   local_f8[0],local_100,aSStack_e0,0,
                                   (Color3B *)&cocos2d::Color3B::WHITE);
      if (pvVar17 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar17 + 0xc),(int *)((long)pvVar17 + 0x10),pvVar17,
                   "ccui.RichElementText");
      }
      goto LAB_009895f4;
    }
    tolua_error(param_1,&DAT_012de514,0);
    break;
  case 0xd:
    cocos2d::Color3B::Color3B((Color3B *)local_110);
    local_98 = 0;
    local_90 = (void *)0x0;
    local_a0 = 0;
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (void *)0x0;
    local_d8 = 0;
    cocos2d::Color3B::Color3B(local_f0);
    cocos2d::Color3B::Color3B(local_100);
    cocos2d::Size::Size(aSStack_e0);
    uVar3 = luaval_to_int32(param_1,2,&local_84,"ccui.RichElementText:create");
    uVar4 = luaval_to_color3b(param_1,3,(Color3B *)local_110,"ccui.RichElementText:create");
    uVar5 = luaval_to_uint16(param_1,4,(ushort *)local_108,"ccui.RichElementText:create");
    uVar6 = luaval_to_std_string(param_1,5,(basic_string *)&local_a0,"ccui.RichElementText:create");
    uVar7 = luaval_to_std_string(param_1,6,(basic_string *)&local_b8,"ccui.RichElementText:create");
    uVar8 = luaval_to_number(param_1,7,&local_c0,"ccui.RichElementText:create");
    uVar9 = luaval_to_uint32(param_1,8,local_e8,"ccui.RichElementText:create");
    uVar10 = luaval_to_std_string(param_1,9,(basic_string *)&local_d8,"ccui.RichElementText:create")
    ;
    uVar11 = luaval_to_color3b(param_1,10,local_f0,"ccui.RichElementText:create");
                    /* try { // try from 009890a0 to 00a8913f has its CatchHandler @ 009890a0
                       catch() { ... } // from try @ 009890a0 with catch @ 009890a0
                       catch() { ... } // from try @ 009891c0 with catch @ 009890a0 */
    uVar12 = luaval_to_int32(param_1,0xb,local_f8,"ccui.RichElementText:create");
    uVar13 = luaval_to_color3b(param_1,0xc,local_100,"ccui.RichElementText:create");
    uVar14 = luaval_to_size(param_1,0xd,aSStack_e0,"ccui.RichElementText:create");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 & uVar11 & uVar12 & uVar13 &
         uVar14 & 1) != 0) {
                    /* try { // try from 00989140 to 00a89173 has its CatchHandler @ 00989240 */
      pvVar17 = (void *)cocos2d::ui::RichElementText::create
                                  (local_84,(Color3B *)local_110,(uchar)local_108[0],
                                   (basic_string *)&local_a0,(basic_string *)&local_b8,
                                   (float)local_c0,local_e8[0],(basic_string *)&local_d8,local_f0,
                                   local_f8[0],local_100,aSStack_e0,0,
                                   (Color3B *)&cocos2d::Color3B::WHITE);
      if (pvVar17 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
                    /* try { // try from 00989174 to 00a89187 has its CatchHandler @ 0098920c */
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar17 + 0xc),(int *)((long)pvVar17 + 0x10),pvVar17,
                   "ccui.RichElementText");
      }
      goto LAB_009895f4;
    }
    tolua_error(param_1,&DAT_012de514,0);
    break;
  case 0xe:
    cocos2d::Color3B::Color3B(local_f0);
    local_98 = 0;
    local_90 = (void *)0x0;
    local_a0 = 0;
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (void *)0x0;
    local_d8 = 0;
                    /* try { // try from 00988b0c to 00a88ba7 has its CatchHandler @ 009889bc */
    cocos2d::Color3B::Color3B(local_100);
    cocos2d::Color3B::Color3B(local_108);
    cocos2d::Size::Size(aSStack_e0);
    uVar3 = luaval_to_int32(param_1,2,&local_84,"ccui.RichElementText:create");
    uVar4 = luaval_to_color3b(param_1,3,local_f0,"ccui.RichElementText:create");
                    /* catch() { ... } // from try @ 00988ac0 with catch @ 00988b58 */
                    /* catch() { ... } // from try @ 00988ad8 with catch @ 00988b5c */
    uVar5 = luaval_to_uint16(param_1,4,(ushort *)local_118,"ccui.RichElementText:create");
                    /* catch() { ... } // from try @ 00988a8c with catch @ 00988b8c */
    uVar6 = luaval_to_std_string(param_1,5,(basic_string *)&local_a0,"ccui.RichElementText:create");
    uVar7 = luaval_to_std_string(param_1,6,(basic_string *)&local_b8,"ccui.RichElementText:create");
    uVar8 = luaval_to_number(param_1,7,&local_c0,"ccui.RichElementText:create");
    uVar9 = luaval_to_uint32(param_1,8,local_e8,"ccui.RichElementText:create");
    uVar10 = luaval_to_std_string(param_1,9,(basic_string *)&local_d8,"ccui.RichElementText:create")
    ;
    uVar11 = luaval_to_color3b(param_1,10,local_100,"ccui.RichElementText:create");
                    /* try { // try from 00988c20 to 00a88cbf has its CatchHandler @ 00988c20
                       catch() { ... } // from try @ 00988c20 with catch @ 00988c20
                       catch() { ... } // from try @ 00988d40 with catch @ 00988c20 */
    uVar12 = luaval_to_int32(param_1,0xb,local_f8,"ccui.RichElementText:create");
    uVar13 = luaval_to_color3b(param_1,0xc,local_108,"ccui.RichElementText:create");
    uVar14 = luaval_to_size(param_1,0xd,aSStack_e0,"ccui.RichElementText:create");
    uVar15 = luaval_to_int32(param_1,0xe,local_110,"ccui.RichElementText:create");
                    /* try { // try from 00988cc0 to 00a88cf3 has its CatchHandler @ 00988dc0 */
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 & uVar11 & uVar12 & uVar13 &
         uVar14 & uVar15 & 1) != 0) {
                    /* try { // try from 00988cf4 to 00a88d07 has its CatchHandler @ 00988d8c */
                    /* try { // try from 00988d0c to 00a88d3f has its CatchHandler @ 00988d90 */
      pvVar17 = (void *)cocos2d::ui::RichElementText::create
                                  (local_84,local_f0,(uchar)local_118[0],(basic_string *)&local_a0,
                                   (basic_string *)&local_b8,(float)local_c0,local_e8[0],
                                   (basic_string *)&local_d8,local_100,local_f8[0],local_108,
                                   aSStack_e0,local_110[0],(Color3B *)&cocos2d::Color3B::WHITE);
      if (pvVar17 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar17 + 0xc),(int *)((long)pvVar17 + 0x10),pvVar17,
                   "ccui.RichElementText");
      }
      goto LAB_009895f4;
    }
    tolua_error(param_1,&DAT_012de514,0);
    break;
  case 0xf:
                    /* try { // try from 0098918c to 00a891bf has its CatchHandler @ 00989210 */
    cocos2d::Color3B::Color3B(local_f0);
    local_98 = 0;
    local_90 = (void *)0x0;
    local_a0 = 0;
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (void *)0x0;
    local_d8 = 0;
    cocos2d::Color3B::Color3B(local_100);
    cocos2d::Color3B::Color3B(local_108);
                    /* try { // try from 009891c0 to 00a8925b has its CatchHandler @ 009890a0 */
    cocos2d::Size::Size(aSStack_e0);
    cocos2d::Color3B::Color3B(local_118);
    uVar3 = luaval_to_int32(param_1,2,&local_84,"ccui.RichElementText:create");
    uVar4 = luaval_to_color3b(param_1,3,local_f0,"ccui.RichElementText:create");
                    /* catch() { ... } // from try @ 00989174 with catch @ 0098920c */
                    /* catch() { ... } // from try @ 0098918c with catch @ 00989210 */
    uVar5 = luaval_to_uint16(param_1,4,(ushort *)local_114,"ccui.RichElementText:create");
    uVar6 = luaval_to_std_string(param_1,5,(basic_string *)&local_a0,"ccui.RichElementText:create");
                    /* catch() { ... } // from try @ 00989140 with catch @ 00989240 */
    uVar7 = luaval_to_std_string(param_1,6,(basic_string *)&local_b8,"ccui.RichElementText:create");
    uVar8 = luaval_to_number(param_1,7,&local_c0,"ccui.RichElementText:create");
    uVar9 = luaval_to_uint32(param_1,8,local_e8,"ccui.RichElementText:create");
    uVar10 = luaval_to_std_string(param_1,9,(basic_string *)&local_d8,"ccui.RichElementText:create")
    ;
    uVar11 = luaval_to_color3b(param_1,10,local_100,"ccui.RichElementText:create");
                    /* try { // try from 009892d4 to 00a89373 has its CatchHandler @ 009892d4
                       catch() { ... } // from try @ 009892d4 with catch @ 009892d4
                       catch() { ... } // from try @ 009893f4 with catch @ 009892d4 */
    uVar12 = luaval_to_int32(param_1,0xb,local_f8,"ccui.RichElementText:create");
    uVar13 = luaval_to_color3b(param_1,0xc,local_108,"ccui.RichElementText:create");
    uVar14 = luaval_to_size(param_1,0xd,aSStack_e0,"ccui.RichElementText:create");
    uVar15 = luaval_to_int32(param_1,0xe,local_110,"ccui.RichElementText:create");
    uVar16 = luaval_to_color3b(param_1,0xf,local_118,"ccui.RichElementText:create");
                    /* try { // try from 00989374 to 00a893a7 has its CatchHandler @ 00989474 */
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 & uVar11 & uVar12 & uVar13 &
         uVar14 & uVar15 & uVar16 & 1) != 0) {
                    /* try { // try from 009893a8 to 00a893bb has its CatchHandler @ 00989440 */
                    /* try { // try from 009893c0 to 00a893f3 has its CatchHandler @ 00989444 */
      pvVar17 = (void *)cocos2d::ui::RichElementText::create
                                  (local_84,local_f0,local_114[0],(basic_string *)&local_a0,
                                   (basic_string *)&local_b8,(float)local_c0,local_e8[0],
                                   (basic_string *)&local_d8,local_100,local_f8[0],local_108,
                                   aSStack_e0,local_110[0],local_118);
      if (pvVar17 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
                    /* try { // try from 009893f4 to 00a8948f has its CatchHandler @ 009892d4 */
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar17 + 0xc),(int *)((long)pvVar17 + 0x10),pvVar17,
                   "ccui.RichElementText");
      }
      goto LAB_009895f4;
    }
    tolua_error(param_1,&DAT_012de514,0);
    break;
  default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",&DAT_012de4f8,
               iVar2 + -1,6);
    uVar18 = 0;
    goto LAB_00989544;
  }
  uVar18 = 0;
joined_r0x009895fc:
  if ((local_d8 & 1) != 0) {
    operator_delete(local_c8);
  }
joined_r0x009895a8:
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
LAB_00989544:
  if (*(long *)(lVar1 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar18;
}

