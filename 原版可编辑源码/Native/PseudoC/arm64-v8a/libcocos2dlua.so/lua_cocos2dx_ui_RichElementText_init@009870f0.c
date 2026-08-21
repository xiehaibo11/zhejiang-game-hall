
/* lua_cocos2dx_ui_RichElementText_init(lua_State*) */

undefined4 lua_cocos2dx_ui_RichElementText_init(lua_State *param_1)

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
  RichElementText *this;
  undefined4 uVar17;
  Color3B local_118 [4];
  uchar local_114 [4];
  int local_110 [2];
  Color3B local_108 [8];
  Color3B local_100 [8];
  int local_f8 [2];
  Color3B local_f0 [8];
  Size aSStack_e8 [8];
  ulong local_e0;
  undefined8 local_d8;
  void *local_d0;
  uint local_c4;
  double local_c0;
  ulong local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  ulong local_a0;
  undefined8 local_98;
  void *local_90;
  int local_84;
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  this = (RichElementText *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  switch(iVar2) {
  case 9:
    cocos2d::Color3B::Color3B((Color3B *)local_f8);
    local_98 = 0;
    local_90 = (void *)0x0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_d8 = 0;
    local_d0 = (void *)0x0;
    local_e0 = 0;
    uVar3 = luaval_to_int32(param_1,2,&local_84,"ccui.RichElementText:init");
    uVar4 = luaval_to_color3b(param_1,3,(Color3B *)local_f8,"ccui.RichElementText:init");
    uVar5 = luaval_to_uint16(param_1,4,(ushort *)local_110,"ccui.RichElementText:init");
    uVar6 = luaval_to_std_string(param_1,5,(basic_string *)&local_a0,"ccui.RichElementText:init");
    uVar7 = luaval_to_std_string(param_1,6,(basic_string *)&local_b8,"ccui.RichElementText:init");
    uVar8 = luaval_to_number(param_1,7,&local_c0,"ccui.RichElementText:init");
    uVar9 = luaval_to_uint32(param_1,8,&local_c4,"ccui.RichElementText:init");
    uVar10 = luaval_to_std_string(param_1,9,(basic_string *)&local_e0,"ccui.RichElementText:init");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 & 1) == 0) {
      tolua_error(param_1,&DAT_012de4b3,0);
      break;
    }
                    /* try { // try from 00987280 to 00a875ef has its CatchHandler @ 00987280
                       catch() { ... } // from try @ 00987280 with catch @ 00987280
                       catch() { ... } // from try @ 00987670 with catch @ 00987280 */
    cocos2d::Size::Size(aSStack_e8,2.0,-2.0);
    uVar3 = cocos2d::ui::RichElementText::init
                      (this,local_84,(Color3B *)local_f8,(uchar)local_110[0]._0_1_,
                       (basic_string *)&local_a0,(basic_string *)&local_b8,(float)local_c0,local_c4,
                       (basic_string *)&local_e0,(Color3B *)&cocos2d::Color3B::WHITE,-1,
                       (Color3B *)&cocos2d::Color3B::BLACK,aSStack_e8,0,
                       (Color3B *)&cocos2d::Color3B::WHITE);
    tolua_pushboolean(param_1,uVar3 & 1);
LAB_00987fc4:
                    /* try { // try from 00987fc4 to 00a87ff7 has its CatchHandler @ 009880c4 */
    uVar17 = 1;
    goto joined_r0x00987fcc;
  case 10:
    cocos2d::Color3B::Color3B((Color3B *)local_f8);
    local_98 = 0;
    local_90 = (void *)0x0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_d8 = 0;
    local_d0 = (void *)0x0;
    local_e0 = 0;
    cocos2d::Color3B::Color3B((Color3B *)local_110);
    uVar3 = luaval_to_int32(param_1,2,&local_84,"ccui.RichElementText:init");
    uVar4 = luaval_to_color3b(param_1,3,(Color3B *)local_f8,"ccui.RichElementText:init");
    uVar5 = luaval_to_uint16(param_1,4,(ushort *)local_f0,"ccui.RichElementText:init");
    uVar6 = luaval_to_std_string(param_1,5,(basic_string *)&local_a0,"ccui.RichElementText:init");
    uVar7 = luaval_to_std_string(param_1,6,(basic_string *)&local_b8,"ccui.RichElementText:init");
    uVar8 = luaval_to_number(param_1,7,&local_c0,"ccui.RichElementText:init");
    uVar9 = luaval_to_uint32(param_1,8,&local_c4,"ccui.RichElementText:init");
    uVar10 = luaval_to_std_string(param_1,9,(basic_string *)&local_e0,"ccui.RichElementText:init");
    uVar11 = luaval_to_color3b(param_1,10,(Color3B *)local_110,"ccui.RichElementText:init");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 & uVar11 & 1) != 0) {
      cocos2d::Size::Size(aSStack_e8,2.0,-2.0);
      uVar3 = cocos2d::ui::RichElementText::init
                        (this,local_84,(Color3B *)local_f8,(uchar)local_f0[0],
                         (basic_string *)&local_a0,(basic_string *)&local_b8,(float)local_c0,
                         local_c4,(basic_string *)&local_e0,(Color3B *)local_110,-1,
                         (Color3B *)&cocos2d::Color3B::BLACK,aSStack_e8,0,
                         (Color3B *)&cocos2d::Color3B::WHITE);
      tolua_pushboolean(param_1,uVar3 & 1);
      goto LAB_00987fc4;
    }
                    /* try { // try from 00987ff8 to 00a8800b has its CatchHandler @ 00988090 */
    tolua_error(param_1,&DAT_012de4b3,0);
    break;
  case 0xb:
    cocos2d::Color3B::Color3B((Color3B *)local_110);
    local_98 = 0;
    local_90 = (void *)0x0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_d8 = 0;
    local_d0 = (void *)0x0;
    local_e0 = 0;
    cocos2d::Color3B::Color3B(local_f0);
    uVar3 = luaval_to_int32(param_1,2,&local_84,"ccui.RichElementText:init");
    uVar4 = luaval_to_color3b(param_1,3,(Color3B *)local_110,"ccui.RichElementText:init");
    uVar5 = luaval_to_uint16(param_1,4,(ushort *)local_100,"ccui.RichElementText:init");
    uVar6 = luaval_to_std_string(param_1,5,(basic_string *)&local_a0,"ccui.RichElementText:init");
    uVar7 = luaval_to_std_string(param_1,6,(basic_string *)&local_b8,"ccui.RichElementText:init");
    uVar8 = luaval_to_number(param_1,7,&local_c0,"ccui.RichElementText:init");
                    /* try { // try from 009875f0 to 00a87623 has its CatchHandler @ 009876f0 */
    uVar9 = luaval_to_uint32(param_1,8,&local_c4,"ccui.RichElementText:init");
    uVar10 = luaval_to_std_string(param_1,9,(basic_string *)&local_e0,"ccui.RichElementText:init");
                    /* try { // try from 00987624 to 00a87637 has its CatchHandler @ 009876bc */
                    /* try { // try from 0098763c to 00a8766f has its CatchHandler @ 009876c0 */
    uVar11 = luaval_to_color3b(param_1,10,local_f0,"ccui.RichElementText:init");
    uVar12 = luaval_to_int32(param_1,0xb,local_f8,"ccui.RichElementText:init");
                    /* try { // try from 00987670 to 00a8770b has its CatchHandler @ 00987280 */
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 & uVar11 & uVar12 & 1) != 0)
    {
      cocos2d::Size::Size(aSStack_e8,2.0,-2.0);
                    /* catch() { ... } // from try @ 00987624 with catch @ 009876bc */
                    /* catch() { ... } // from try @ 0098763c with catch @ 009876c0 */
                    /* catch() { ... } // from try @ 009875f0 with catch @ 009876f0 */
      uVar3 = cocos2d::ui::RichElementText::init
                        (this,local_84,(Color3B *)local_110,(uchar)local_100[0],
                         (basic_string *)&local_a0,(basic_string *)&local_b8,(float)local_c0,
                         local_c4,(basic_string *)&local_e0,local_f0,local_f8[0],
                         (Color3B *)&cocos2d::Color3B::BLACK,aSStack_e8,0,
                         (Color3B *)&cocos2d::Color3B::WHITE);
      tolua_pushboolean(param_1,uVar3 & 1);
      goto LAB_00987fc4;
    }
                    /* try { // try from 00988010 to 00a88043 has its CatchHandler @ 00988094 */
    tolua_error(param_1,&DAT_012de4b3,0);
    break;
  case 0xc:
    cocos2d::Color3B::Color3B((Color3B *)local_110);
    local_98 = 0;
    local_90 = (void *)0x0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_d8 = 0;
    local_d0 = (void *)0x0;
    local_e0 = 0;
    cocos2d::Color3B::Color3B(local_f0);
    cocos2d::Color3B::Color3B(local_100);
    uVar3 = luaval_to_int32(param_1,2,&local_84,"ccui.RichElementText:init");
    uVar4 = luaval_to_color3b(param_1,3,(Color3B *)local_110,"ccui.RichElementText:init");
    uVar5 = luaval_to_uint16(param_1,4,(ushort *)local_108,"ccui.RichElementText:init");
    uVar6 = luaval_to_std_string(param_1,5,(basic_string *)&local_a0,"ccui.RichElementText:init");
    uVar7 = luaval_to_std_string(param_1,6,(basic_string *)&local_b8,"ccui.RichElementText:init");
    uVar8 = luaval_to_number(param_1,7,&local_c0,"ccui.RichElementText:init");
    uVar9 = luaval_to_uint32(param_1,8,&local_c4,"ccui.RichElementText:init");
    uVar10 = luaval_to_std_string(param_1,9,(basic_string *)&local_e0,"ccui.RichElementText:init");
    uVar11 = luaval_to_color3b(param_1,10,local_f0,"ccui.RichElementText:init");
    uVar12 = luaval_to_int32(param_1,0xb,local_f8,"ccui.RichElementText:init");
    uVar13 = luaval_to_color3b(param_1,0xc,local_100,"ccui.RichElementText:init");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 & uVar11 & uVar12 & uVar13 &
        1) != 0) {
      cocos2d::Size::Size(aSStack_e8,2.0,-2.0);
      uVar3 = cocos2d::ui::RichElementText::init
                        (this,local_84,(Color3B *)local_110,(uchar)local_108[0],
                         (basic_string *)&local_a0,(basic_string *)&local_b8,(float)local_c0,
                         local_c4,(basic_string *)&local_e0,local_f0,local_f8[0],local_100,
                         aSStack_e8,0,(Color3B *)&cocos2d::Color3B::WHITE);
      tolua_pushboolean(param_1,uVar3 & 1);
      goto LAB_00987fc4;
    }
    tolua_error(param_1,&DAT_012de4b3,0);
    break;
  case 0xd:
    cocos2d::Color3B::Color3B((Color3B *)local_110);
    local_98 = 0;
    local_90 = (void *)0x0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_d8 = 0;
    local_d0 = (void *)0x0;
    local_e0 = 0;
    cocos2d::Color3B::Color3B(local_f0);
    cocos2d::Color3B::Color3B(local_100);
    cocos2d::Size::Size(aSStack_e8);
    uVar3 = luaval_to_int32(param_1,2,&local_84,"ccui.RichElementText:init");
    uVar4 = luaval_to_color3b(param_1,3,(Color3B *)local_110,"ccui.RichElementText:init");
    uVar5 = luaval_to_uint16(param_1,4,(ushort *)local_108,"ccui.RichElementText:init");
    uVar6 = luaval_to_std_string(param_1,5,(basic_string *)&local_a0,"ccui.RichElementText:init");
    uVar7 = luaval_to_std_string(param_1,6,(basic_string *)&local_b8,"ccui.RichElementText:init");
    uVar8 = luaval_to_number(param_1,7,&local_c0,"ccui.RichElementText:init");
    uVar9 = luaval_to_uint32(param_1,8,&local_c4,"ccui.RichElementText:init");
    uVar10 = luaval_to_std_string(param_1,9,(basic_string *)&local_e0,"ccui.RichElementText:init");
    uVar11 = luaval_to_color3b(param_1,10,local_f0,"ccui.RichElementText:init");
    uVar12 = luaval_to_int32(param_1,0xb,local_f8,"ccui.RichElementText:init");
    uVar13 = luaval_to_color3b(param_1,0xc,local_100,"ccui.RichElementText:init");
    uVar14 = luaval_to_size(param_1,0xd,aSStack_e8,"ccui.RichElementText:init");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 & uVar11 & uVar12 & uVar13 &
         uVar14 & 1) != 0) {
      uVar3 = cocos2d::ui::RichElementText::init
                        (this,local_84,(Color3B *)local_110,(uchar)local_108[0],
                         (basic_string *)&local_a0,(basic_string *)&local_b8,(float)local_c0,
                         local_c4,(basic_string *)&local_e0,local_f0,local_f8[0],local_100,
                         aSStack_e8,0,(Color3B *)&cocos2d::Color3B::WHITE);
      tolua_pushboolean(param_1,uVar3 & 1);
      goto LAB_00987fc4;
    }
                    /* try { // try from 00988044 to 00a880df has its CatchHandler @ 00987f0c */
    tolua_error(param_1,&DAT_012de4b3,0);
    break;
  case 0xe:
    cocos2d::Color3B::Color3B(local_f0);
    local_98 = 0;
    local_90 = (void *)0x0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_d8 = 0;
    local_d0 = (void *)0x0;
    local_e0 = 0;
    cocos2d::Color3B::Color3B(local_100);
    cocos2d::Color3B::Color3B(local_108);
    cocos2d::Size::Size(aSStack_e8);
    uVar3 = luaval_to_int32(param_1,2,&local_84,"ccui.RichElementText:init");
    uVar4 = luaval_to_color3b(param_1,3,local_f0,"ccui.RichElementText:init");
    uVar5 = luaval_to_uint16(param_1,4,(ushort *)local_118,"ccui.RichElementText:init");
                    /* try { // try from 00987ba8 to 00a87c8f has its CatchHandler @ 00987ba8
                       catch() { ... } // from try @ 00987ba8 with catch @ 00987ba8
                       catch() { ... } // from try @ 00987d10 with catch @ 00987ba8 */
    uVar6 = luaval_to_std_string(param_1,5,(basic_string *)&local_a0,"ccui.RichElementText:init");
    uVar7 = luaval_to_std_string(param_1,6,(basic_string *)&local_b8,"ccui.RichElementText:init");
    uVar8 = luaval_to_number(param_1,7,&local_c0,"ccui.RichElementText:init");
    uVar9 = luaval_to_uint32(param_1,8,&local_c4,"ccui.RichElementText:init");
    uVar10 = luaval_to_std_string(param_1,9,(basic_string *)&local_e0,"ccui.RichElementText:init");
    uVar11 = luaval_to_color3b(param_1,10,local_100,"ccui.RichElementText:init");
    uVar12 = luaval_to_int32(param_1,0xb,local_f8,"ccui.RichElementText:init");
    uVar13 = luaval_to_color3b(param_1,0xc,local_108,"ccui.RichElementText:init");
                    /* try { // try from 00987c90 to 00a87cc3 has its CatchHandler @ 00987d90 */
    uVar14 = luaval_to_size(param_1,0xd,aSStack_e8,"ccui.RichElementText:init");
    uVar15 = luaval_to_int32(param_1,0xe,local_110,"ccui.RichElementText:init");
                    /* try { // try from 00987cc4 to 00a87cd7 has its CatchHandler @ 00987d5c */
                    /* try { // try from 00987cdc to 00a87d0f has its CatchHandler @ 00987d60 */
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 & uVar11 & uVar12 & uVar13 &
         uVar14 & uVar15 & 1) != 0) {
                    /* try { // try from 00987d10 to 00a87dab has its CatchHandler @ 00987ba8 */
      uVar3 = cocos2d::ui::RichElementText::init
                        (this,local_84,local_f0,(uchar)local_118[0],(basic_string *)&local_a0,
                         (basic_string *)&local_b8,(float)local_c0,local_c4,
                         (basic_string *)&local_e0,local_100,local_f8[0],local_108,aSStack_e8,
                         local_110[0],(Color3B *)&cocos2d::Color3B::WHITE);
      tolua_pushboolean(param_1,uVar3 & 1);
      goto LAB_00987fc4;
    }
    tolua_error(param_1,&DAT_012de4b3,0);
    break;
  case 0xf:
                    /* catch() { ... } // from try @ 00987cc4 with catch @ 00987d5c */
    cocos2d::Color3B::Color3B(local_f0);
                    /* catch() { ... } // from try @ 00987cdc with catch @ 00987d60 */
    local_98 = 0;
    local_90 = (void *)0x0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_d8 = 0;
    local_d0 = (void *)0x0;
    local_e0 = 0;
    cocos2d::Color3B::Color3B(local_100);
    cocos2d::Color3B::Color3B(local_108);
    cocos2d::Size::Size(aSStack_e8);
                    /* catch() { ... } // from try @ 00987c90 with catch @ 00987d90 */
    cocos2d::Color3B::Color3B(local_118);
    uVar3 = luaval_to_int32(param_1,2,&local_84,"ccui.RichElementText:init");
    uVar4 = luaval_to_color3b(param_1,3,local_f0,"ccui.RichElementText:init");
    uVar5 = luaval_to_uint16(param_1,4,(ushort *)local_114,"ccui.RichElementText:init");
    uVar6 = luaval_to_std_string(param_1,5,(basic_string *)&local_a0,"ccui.RichElementText:init");
    uVar7 = luaval_to_std_string(param_1,6,(basic_string *)&local_b8,"ccui.RichElementText:init");
    uVar8 = luaval_to_number(param_1,7,&local_c0,"ccui.RichElementText:init");
    uVar9 = luaval_to_uint32(param_1,8,&local_c4,"ccui.RichElementText:init");
    uVar10 = luaval_to_std_string(param_1,9,(basic_string *)&local_e0,"ccui.RichElementText:init");
    uVar11 = luaval_to_color3b(param_1,10,local_100,"ccui.RichElementText:init");
    uVar12 = luaval_to_int32(param_1,0xb,local_f8,"ccui.RichElementText:init");
    uVar13 = luaval_to_color3b(param_1,0xc,local_108,"ccui.RichElementText:init");
    uVar14 = luaval_to_size(param_1,0xd,aSStack_e8,"ccui.RichElementText:init");
    uVar15 = luaval_to_int32(param_1,0xe,local_110,"ccui.RichElementText:init");
                    /* try { // try from 00987f0c to 00a87fc3 has its CatchHandler @ 00987f0c
                       catch() { ... } // from try @ 00987f0c with catch @ 00987f0c
                       catch() { ... } // from try @ 00988044 with catch @ 00987f0c */
    uVar16 = luaval_to_color3b(param_1,0xf,local_118,"ccui.RichElementText:init");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 & uVar11 & uVar12 & uVar13 &
         uVar14 & uVar15 & uVar16 & 1) != 0) {
      uVar3 = cocos2d::ui::RichElementText::init
                        (this,local_84,local_f0,local_114[0],(basic_string *)&local_a0,
                         (basic_string *)&local_b8,(float)local_c0,local_c4,
                         (basic_string *)&local_e0,local_100,local_f8[0],local_108,aSStack_e8,
                         local_110[0],local_118);
      tolua_pushboolean(param_1,uVar3 & 1);
      goto LAB_00987fc4;
    }
    tolua_error(param_1,&DAT_012de4b3,0);
    break;
  default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.RichElementText:init",iVar2 + -1,8);
    uVar17 = 0;
    goto LAB_009880a4;
  }
  uVar17 = 0;
joined_r0x00987fcc:
  if ((local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
                    /* catch() { ... } // from try @ 00987ff8 with catch @ 00988090 */
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
LAB_009880a4:
  if (*(long *)(lVar1 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00987fc4 with catch @ 009880c4 */
  return uVar17;
}

