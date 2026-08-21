
/* WARNING: Type propagation algorithm not settling */
/* lua_dragonbones_BaseFactory_buildArmature(lua_State*) */

undefined4 lua_dragonbones_BaseFactory_buildArmature(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  Armature *pAVar9;
  char *pcVar10;
  undefined4 uVar11;
  ulong local_a8;
  undefined8 uStack_a0;
  void *local_98;
  ulong local_90;
  undefined8 local_88;
  void *local_80;
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar7 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  switch(iVar2) {
  case 2:
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar8 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"db.BaseFactory:buildArmature")
    ;
    if ((uVar8 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_dragonbones_BaseFactory_buildArmature\'",0);
      uVar11 = 0;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_78,"");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_90,"");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,"");
      pAVar9 = (Armature *)
               (**(code **)(*plVar7 + 0xa0))(plVar7,&local_60,&local_78,&local_90,&local_a8);
      if ((local_a8 & 1) == 0) {
                    /* try { // try from 0095c114 to 00a5c15f has its CatchHandler @ 0095c114
                       catch() { ... } // from try @ 0095c114 with catch @ 0095c114
                       catch() { ... } // from try @ 0095c164 with catch @ 0095c114 */
        if ((local_90 & 1) == 0) goto LAB_0095c11c;
LAB_0095c4f4:
        operator_delete(local_80);
        if ((local_78 & 1) != 0) goto LAB_0095c504;
LAB_0095c124:
        if (pAVar9 != (Armature *)0x0) goto LAB_0095c128;
LAB_0095c510:
        lua_pushnil(param_1);
      }
      else {
        operator_delete(local_98);
        if ((local_90 & 1) != 0) goto LAB_0095c4f4;
LAB_0095c11c:
        if ((local_78 & 1) == 0) goto LAB_0095c124;
LAB_0095c504:
                    /* try { // try from 0095c504 to 00a5c507 has its CatchHandler @ 0095c53c */
                    /* try { // try from 0095c508 to 00a5c54f has its CatchHandler @ 0095c4b8 */
        operator_delete(local_68);
        if (pAVar9 == (Armature *)0x0) goto LAB_0095c510;
LAB_0095c128:
        pcVar10 = getLuaTypeName<dragonBones::Armature>(pAVar9,"db.Armature");
        tolua_pushusertype(param_1,pAVar9,pcVar10);
      }
      uVar11 = 1;
    }
    if ((local_60 & 1) == 0) goto LAB_0095c4b8;
    goto LAB_0095c4b0;
  case 3:
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"db.BaseFactory:buildArmature")
    ;
                    /* try { // try from 0095c264 to 00a5c297 has its CatchHandler @ 0095c364 */
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"db.BaseFactory:buildArmature")
    ;
    if ((uVar3 & uVar4 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_dragonbones_BaseFactory_buildArmature\'",0);
      uVar11 = 0;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_90,"");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,"");
                    /* try { // try from 0095c298 to 00a5c2ab has its CatchHandler @ 0095c330 */
      pAVar9 = (Armature *)
               (**(code **)(*plVar7 + 0xa0))(plVar7,&local_60,&local_78,&local_90,&local_a8);
                    /* try { // try from 0095c2b0 to 00a5c2e3 has its CatchHandler @ 0095c334 */
      if ((local_a8 & 1) == 0) {
        if ((local_90 & 1) == 0) goto LAB_0095c2c4;
LAB_0095c538:
                    /* catch() { ... } // from try @ 0095c504 with catch @ 0095c53c */
        operator_delete(local_80);
        if (pAVar9 == (Armature *)0x0) goto LAB_0095c544;
LAB_0095c2c8:
        pcVar10 = getLuaTypeName<dragonBones::Armature>(pAVar9,"db.Armature");
                    /* try { // try from 0095c2e4 to 00a5c37f has its CatchHandler @ 0095c1ac */
        tolua_pushusertype(param_1,pAVar9,pcVar10);
      }
      else {
        operator_delete(local_98);
        if ((local_90 & 1) != 0) goto LAB_0095c538;
LAB_0095c2c4:
        if (pAVar9 != (Armature *)0x0) goto LAB_0095c2c8;
LAB_0095c544:
        lua_pushnil(param_1);
      }
      uVar11 = 1;
                    /* try { // try from 0095c550 to 00a5c607 has its CatchHandler @ 0095c550
                       catch() { ... } // from try @ 0095c550 with catch @ 0095c550
                       catch() { ... } // from try @ 0095c688 with catch @ 0095c550 */
    }
    goto joined_r0x0095c434;
  case 4:
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
                    /* try { // try from 0095c160 to 00a5c163 has its CatchHandler @ 0095c198 */
                    /* try { // try from 0095c164 to 00a5c1ab has its CatchHandler @ 0095c114 */
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"db.BaseFactory:buildArmature")
    ;
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"db.BaseFactory:buildArmature")
    ;
                    /* catch() { ... } // from try @ 0095c160 with catch @ 0095c198 */
                    /* try { // try from 0095c1ac to 00a5c263 has its CatchHandler @ 0095c1ac
                       catch() { ... } // from try @ 0095c1ac with catch @ 0095c1ac
                       catch() { ... } // from try @ 0095c2e4 with catch @ 0095c1ac */
    uVar5 = luaval_to_std_string(param_1,4,(basic_string *)&local_90,"db.BaseFactory:buildArmature")
    ;
    if ((uVar3 & uVar4 & uVar5 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_dragonbones_BaseFactory_buildArmature\'",0);
      uVar11 = 0;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,"");
      pAVar9 = (Armature *)
               (**(code **)(*plVar7 + 0xa0))(plVar7,&local_60,&local_78,&local_90,&local_a8);
      if ((local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
      if (pAVar9 == (Armature *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        pcVar10 = getLuaTypeName<dragonBones::Armature>(pAVar9,"db.Armature");
        tolua_pushusertype(param_1,pAVar9,pcVar10);
      }
      uVar11 = 1;
    }
    break;
  case 5:
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    local_80 = (void *)0x0;
    local_98 = (void *)0x0;
    local_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"db.BaseFactory:buildArmature")
    ;
                    /* catch() { ... } // from try @ 0095c298 with catch @ 0095c330 */
                    /* catch() { ... } // from try @ 0095c2b0 with catch @ 0095c334 */
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"db.BaseFactory:buildArmature")
    ;
    uVar5 = luaval_to_std_string(param_1,4,(basic_string *)&local_90,"db.BaseFactory:buildArmature")
    ;
                    /* catch() { ... } // from try @ 0095c264 with catch @ 0095c364 */
    uVar6 = luaval_to_std_string(param_1,5,(basic_string *)&local_a8,"db.BaseFactory:buildArmature")
    ;
    if ((uVar3 & uVar4 & uVar5 & uVar6 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_dragonbones_BaseFactory_buildArmature\'",0);
      uVar11 = 0;
    }
    else {
      pAVar9 = (Armature *)
               (**(code **)(*plVar7 + 0xa0))(plVar7,&local_60,&local_78,&local_90,&local_a8);
      if (pAVar9 == (Armature *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        pcVar10 = getLuaTypeName<dragonBones::Armature>(pAVar9,"db.Armature");
        tolua_pushusertype(param_1,pAVar9,pcVar10);
      }
      uVar11 = 1;
    }
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    break;
  default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.BaseFactory:buildArmature",iVar2 + -1,1);
    uVar11 = 0;
    goto LAB_0095c4b8;
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
joined_r0x0095c434:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
LAB_0095c4b0:
    operator_delete(local_50);
  }
LAB_0095c4b8:
                    /* try { // try from 0095c4b8 to 00a5c503 has its CatchHandler @ 0095c4b8
                       catch() { ... } // from try @ 0095c4b8 with catch @ 0095c4b8
                       catch() { ... } // from try @ 0095c508 with catch @ 0095c4b8 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

