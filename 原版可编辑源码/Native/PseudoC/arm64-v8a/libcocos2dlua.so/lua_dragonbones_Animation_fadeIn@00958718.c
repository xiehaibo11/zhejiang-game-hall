
/* lua_dragonbones_Animation_fadeIn(lua_State*) */

undefined4 lua_dragonbones_Animation_fadeIn(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  AnimationState *pAVar11;
  char *pcVar12;
  undefined4 uVar13;
  int local_ac;
  int local_a8;
  int local_a4;
  double local_a0;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  ulong local_80;
  undefined8 local_78;
  void *local_70;
  long local_68;
  
                    /* try { // try from 00958728 to 00a5873b has its CatchHandler @ 00958b4c */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar9 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 00958764 to 00a5877b has its CatchHandler @ 00958c34 */
                    /* try { // try from 00958780 to 00a58797 has its CatchHandler @ 00958bfc */
  switch(iVar2) {
  case 2:
    local_78 = 0;
    local_70 = (void *)0x0;
    local_80 = 0;
    uVar10 = luaval_to_std_string(param_1,2,(basic_string *)&local_80,"db.Animation:fadeIn");
                    /* try { // try from 009587a4 to 00a587bb has its CatchHandler @ 00958bc8 */
    if ((uVar10 & 1) != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_98,"");
      pAVar11 = (AnimationState *)
                dragonBones::Animation::fadeIn
                          ((Animation *)0xbf800000,uVar9,&local_80,0xffffffff,0,&local_98,3);
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      if (pAVar11 == (AnimationState *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        pcVar12 = getLuaTypeName<dragonBones::AnimationState>(pAVar11,"db.AnimationState");
                    /* try { // try from 00958800 to 00a58817 has its CatchHandler @ 00958bf8 */
        tolua_pushusertype(param_1,pAVar11,pcVar12);
      }
      break;
    }
    tolua_error(param_1,0x12d3157,0);
LAB_00958d24:
    uVar13 = 0;
    goto joined_r0x00958d78;
  case 3:
                    /* try { // try from 00958ad8 to 00a58c6b has its CatchHandler @ 00958554 */
    local_78 = 0;
    local_70 = (void *)0x0;
    local_80 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_80,"db.Animation:fadeIn");
    uVar4 = luaval_to_number(param_1,3,&local_a0,"db.Animation:fadeIn");
    if ((uVar3 & uVar4 & 1) == 0) {
      tolua_error(param_1,0x12d3157,0);
      goto LAB_00958d24;
    }
                    /* catch() { ... } // from try @ 00958ad0 with catch @ 00958b24 */
                    /* catch() { ... } // from try @ 00958a98 with catch @ 00958b28 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_98,"");
                    /* catch() { ... } // from try @ 00958a60 with catch @ 00958b30 */
                    /* catch() { ... } // from try @ 00958a38 with catch @ 00958b38 */
                    /* catch() { ... } // from try @ 009588fc with catch @ 00958b3c */
                    /* catch() { ... } // from try @ 00958844 with catch @ 00958b44 */
                    /* catch() { ... } // from try @ 00958728 with catch @ 00958b4c */
    pAVar11 = (AnimationState *)
              dragonBones::Animation::fadeIn
                        ((Animation *)(float)local_a0,uVar9,&local_80,0xffffffff,0,&local_98,3);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (pAVar11 == (AnimationState *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      pcVar12 = getLuaTypeName<dragonBones::AnimationState>(pAVar11,"db.AnimationState");
      tolua_pushusertype(param_1,pAVar11,pcVar12);
    }
    break;
  case 4:
    local_78 = 0;
    local_70 = (void *)0x0;
    local_80 = 0;
                    /* try { // try from 00958910 to 00a589b7 has its CatchHandler @ 00958554 */
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_80,"db.Animation:fadeIn");
    uVar4 = luaval_to_number(param_1,3,&local_a0,"db.Animation:fadeIn");
    uVar5 = luaval_to_int32(param_1,4,&local_a4,"db.Animation:fadeIn");
    if ((uVar3 & uVar4 & uVar5 & 1) == 0) {
      tolua_error(param_1,0x12d3157,0);
      goto LAB_00958d24;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_98,"");
    pAVar11 = (AnimationState *)
              dragonBones::Animation::fadeIn
                        ((Animation *)(float)local_a0,uVar9,&local_80,local_a4,0,&local_98,3);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
                    /* try { // try from 009589b8 to 00a589bf has its CatchHandler @ 00958bf0 */
    if (pAVar11 == (AnimationState *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 009589c0 to 00a58a0f has its CatchHandler @ 00958554 */
      pcVar12 = getLuaTypeName<dragonBones::AnimationState>(pAVar11,"db.AnimationState");
      tolua_pushusertype(param_1,pAVar11,pcVar12);
    }
    break;
  case 5:
    local_78 = 0;
    local_70 = (void *)0x0;
    local_80 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_80,"db.Animation:fadeIn");
                    /* try { // try from 00958a10 to 00a58a17 has its CatchHandler @ 00958bbc */
                    /* try { // try from 00958a18 to 00a58a37 has its CatchHandler @ 00958554 */
    uVar4 = luaval_to_number(param_1,3,&local_a0,"db.Animation:fadeIn");
    uVar5 = luaval_to_int32(param_1,4,&local_a4,"db.Animation:fadeIn");
                    /* try { // try from 00958a38 to 00a58a3f has its CatchHandler @ 00958b38 */
                    /* try { // try from 00958a40 to 00a58a5f has its CatchHandler @ 00958554 */
    uVar6 = luaval_to_int32(param_1,5,&local_a8,"db.Animation:fadeIn");
                    /* try { // try from 00958a60 to 00a58a67 has its CatchHandler @ 00958b30 */
    if ((uVar3 & uVar4 & uVar5 & uVar6 & 1) == 0) {
      tolua_error(param_1,0x12d3157,0);
      goto LAB_00958d24;
    }
                    /* try { // try from 00958a68 to 00a58a97 has its CatchHandler @ 00958554 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_98,"");
                    /* try { // try from 00958a98 to 00a58a9f has its CatchHandler @ 00958b28 */
    pAVar11 = (AnimationState *)
              dragonBones::Animation::fadeIn
                        ((Animation *)(float)local_a0,uVar9,&local_80,local_a4,local_a8,&local_98,3)
    ;
                    /* try { // try from 00958aa0 to 00a58acf has its CatchHandler @ 00958554 */
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (pAVar11 == (AnimationState *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      pcVar12 = getLuaTypeName<dragonBones::AnimationState>(pAVar11,"db.AnimationState");
                    /* try { // try from 00958ad0 to 00a58ad7 has its CatchHandler @ 00958b24 */
      tolua_pushusertype(param_1,pAVar11,pcVar12);
    }
    break;
  case 6:
    local_78 = 0;
    local_70 = (void *)0x0;
    local_88 = (void *)0x0;
    local_80 = 0;
                    /* try { // try from 0095881c to 00a58833 has its CatchHandler @ 00958bc4 */
    local_98 = 0;
    uStack_90 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_80,"db.Animation:fadeIn");
                    /* try { // try from 00958844 to 00a58857 has its CatchHandler @ 00958b44 */
    uVar4 = luaval_to_number(param_1,3,&local_a0,"db.Animation:fadeIn");
    uVar5 = luaval_to_int32(param_1,4,&local_a4,"db.Animation:fadeIn");
    uVar6 = luaval_to_int32(param_1,5,&local_a8,"db.Animation:fadeIn");
    uVar7 = luaval_to_std_string(param_1,6,(basic_string *)&local_98,"db.Animation:fadeIn");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & 1) != 0) {
                    /* try { // try from 009588bc to 00a588d3 has its CatchHandler @ 00958bf4 */
                    /* try { // try from 009588d8 to 00a588ef has its CatchHandler @ 00958bc0 */
      pAVar11 = (AnimationState *)
                dragonBones::Animation::fadeIn
                          ((Animation *)(float)local_a0,uVar9,&local_80,local_a4,local_a8,&local_98,
                           3);
      if (pAVar11 == (AnimationState *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        pcVar12 = getLuaTypeName<dragonBones::AnimationState>(pAVar11,"db.AnimationState");
                    /* try { // try from 009588fc to 00a5890f has its CatchHandler @ 00958b3c */
        tolua_pushusertype(param_1,pAVar11,pcVar12);
      }
      goto LAB_00958e08;
    }
    tolua_error(param_1,0x12d3157,0);
LAB_00958d60:
    uVar13 = 0;
    goto joined_r0x00958e10;
  case 7:
    local_78 = 0;
    local_70 = (void *)0x0;
    local_88 = (void *)0x0;
    local_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_80,"db.Animation:fadeIn");
                    /* catch() { ... } // from try @ 00958688 with catch @ 00958bb4 */
                    /* catch() { ... } // from try @ 00958a10 with catch @ 00958bbc */
                    /* catch() { ... } // from try @ 009588d8 with catch @ 00958bc0 */
                    /* catch() { ... } // from try @ 0095881c with catch @ 00958bc4 */
                    /* catch() { ... } // from try @ 009587a4 with catch @ 00958bc8 */
    uVar4 = luaval_to_number(param_1,3,&local_a0,"db.Animation:fadeIn");
    uVar5 = luaval_to_int32(param_1,4,&local_a4,"db.Animation:fadeIn");
                    /* catch() { ... } // from try @ 009586fc with catch @ 00958be8 */
                    /* catch() { ... } // from try @ 00958660 with catch @ 00958bec */
                    /* catch() { ... } // from try @ 009589b8 with catch @ 00958bf0 */
                    /* catch() { ... } // from try @ 009588bc with catch @ 00958bf4 */
                    /* catch() { ... } // from try @ 00958800 with catch @ 00958bf8 */
                    /* catch() { ... } // from try @ 00958780 with catch @ 00958bfc */
                    /* catch() { ... } // from try @ 009586e0 with catch @ 00958c00 */
    uVar6 = luaval_to_int32(param_1,5,&local_a8,"db.Animation:fadeIn");
                    /* catch() { ... } // from try @ 00958644 with catch @ 00958c04 */
                    /* catch() { ... } // from try @ 009585e8 with catch @ 00958c08 */
    uVar7 = luaval_to_std_string(param_1,6,(basic_string *)&local_98,"db.Animation:fadeIn");
                    /* catch() { ... } // from try @ 00958764 with catch @ 00958c34 */
                    /* catch() { ... } // from try @ 009586c4 with catch @ 00958c38 */
    uVar8 = luaval_to_int32(param_1,7,&local_ac,"db.Animation:fadeIn");
                    /* catch() { ... } // from try @ 00958628 with catch @ 00958c4c */
                    /* catch() { ... } // from try @ 009585c8 with catch @ 00958c50 */
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & 1) == 0) {
      tolua_error(param_1,0x12d3157,0);
      goto LAB_00958d60;
    }
    pAVar11 = (AnimationState *)
              dragonBones::Animation::fadeIn
                        ((Animation *)(float)local_a0,uVar9,&local_80,local_a4,local_a8,&local_98,
                         local_ac);
    if (pAVar11 == (AnimationState *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      pcVar12 = getLuaTypeName<dragonBones::AnimationState>(pAVar11,"db.AnimationState");
      tolua_pushusertype(param_1,pAVar11,pcVar12);
    }
LAB_00958e08:
    uVar13 = 1;
joined_r0x00958e10:
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
joined_r0x00958d78:
    if ((local_80 & 1) == 0) goto LAB_00958d84;
    goto LAB_00958d7c;
  default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",0x12d3143,
               iVar2 + -1,1);
    uVar13 = 0;
    goto LAB_00958d84;
  }
  uVar13 = 1;
  if ((local_80 & 1) != 0) {
LAB_00958d7c:
    operator_delete(local_70);
  }
LAB_00958d84:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

