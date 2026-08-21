
/* WARNING: Type propagation algorithm not settling */
/* lua_dragonbones_CCFactory_buildArmatureDisplay(lua_State*) */

undefined4 lua_dragonbones_CCFactory_buildArmatureDisplay(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  void *pvVar9;
  undefined4 uVar10;
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
  
                    /* catch() { ... } // from try @ 0095ec60 with catch @ 0095ecf8 */
                    /* catch() { ... } // from try @ 0095ec78 with catch @ 0095ecfc */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar7 = (long *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 0095ec2c with catch @ 0095ed2c */
  iVar2 = lua_gettop(param_1);
  switch(iVar2) {
  case 2:
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar8 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"db.CCFactory:buildArmatureDisplay");
    if ((uVar8 & 1) == 0) {
                    /* try { // try from 0095f0b8 to 00a5f0eb has its CatchHandler @ 0095f13c */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_dragonbones_CCFactory_buildArmatureDisplay\'"
                  ,0);
      uVar10 = 0;
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
      pvVar9 = (void *)(**(code **)(*plVar7 + 0xe0))(plVar7,&local_60,&local_78,&local_90,&local_a8)
      ;
      if ((local_a8 & 1) == 0) {
        if ((local_90 & 1) == 0) goto LAB_0095ede4;
LAB_0095f1a8:
        operator_delete(local_80);
        if ((local_78 & 1) != 0) goto LAB_0095f1b8;
LAB_0095edec:
        if (pvVar9 != (void *)0x0) goto LAB_0095edf0;
LAB_0095f1c4:
        lua_pushnil(param_1);
      }
      else {
        operator_delete(local_98);
        if ((local_90 & 1) != 0) goto LAB_0095f1a8;
LAB_0095ede4:
        if ((local_78 & 1) == 0) goto LAB_0095edec;
LAB_0095f1b8:
        operator_delete(local_68);
        if (pvVar9 == (void *)0x0) goto LAB_0095f1c4;
LAB_0095edf0:
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar9 + 0xc),(int *)((long)pvVar9 + 0x10),pvVar9,
                   "db.CCArmatureDisplay");
      }
      uVar10 = 1;
    }
    if ((local_60 & 1) == 0) goto LAB_0095f16c;
    goto LAB_0095f164;
  case 3:
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"db.CCFactory:buildArmatureDisplay");
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_78,"db.CCFactory:buildArmatureDisplay");
    if ((uVar3 & uVar4 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_dragonbones_CCFactory_buildArmatureDisplay\'"
                  ,0);
      uVar10 = 0;
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
      pvVar9 = (void *)(**(code **)(*plVar7 + 0xe0))(plVar7,&local_60,&local_78,&local_90,&local_a8)
      ;
      if ((local_a8 & 1) == 0) {
        if ((local_90 & 1) == 0) goto LAB_0095f05c;
LAB_0095f1ec:
        operator_delete(local_80);
        if (pvVar9 == (void *)0x0) goto LAB_0095f1f8;
LAB_0095f060:
                    /* try { // try from 0095f06c to 00a5f09f has its CatchHandler @ 0095f16c */
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar9 + 0xc),(int *)((long)pvVar9 + 0x10),pvVar9,
                   "db.CCArmatureDisplay");
      }
      else {
        operator_delete(local_98);
        if ((local_90 & 1) != 0) goto LAB_0095f1ec;
LAB_0095f05c:
        if (pvVar9 != (void *)0x0) goto LAB_0095f060;
LAB_0095f1f8:
        lua_pushnil(param_1);
      }
      uVar10 = 1;
    }
    goto joined_r0x0095f0e8;
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
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"db.CCFactory:buildArmatureDisplay");
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_78,"db.CCFactory:buildArmatureDisplay");
    uVar5 = luaval_to_std_string
                      (param_1,4,(basic_string *)&local_90,"db.CCFactory:buildArmatureDisplay");
    if ((uVar3 & uVar4 & uVar5 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_dragonbones_CCFactory_buildArmatureDisplay\'"
                  ,0);
      uVar10 = 0;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,"");
      pvVar9 = (void *)(**(code **)(*plVar7 + 0xe0))(plVar7,&local_60,&local_78,&local_90,&local_a8)
      ;
      if ((local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
      if (pvVar9 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar9 + 0xc),(int *)((long)pvVar9 + 0x10),pvVar9,
                   "db.CCArmatureDisplay");
      }
      uVar10 = 1;
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
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"db.CCFactory:buildArmatureDisplay");
                    /* try { // try from 0095ef1c to 00a5ef67 has its CatchHandler @ 0095ef1c
                       catch() { ... } // from try @ 0095ef1c with catch @ 0095ef1c
                       catch() { ... } // from try @ 0095ef6c with catch @ 0095ef1c */
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_78,"db.CCFactory:buildArmatureDisplay");
    uVar5 = luaval_to_std_string
                      (param_1,4,(basic_string *)&local_90,"db.CCFactory:buildArmatureDisplay");
                    /* try { // try from 0095ef68 to 00a5ef6b has its CatchHandler @ 0095efa0 */
    uVar6 = luaval_to_std_string
                      (param_1,5,(basic_string *)&local_a8,"db.CCFactory:buildArmatureDisplay");
                    /* try { // try from 0095ef6c to 00a5efb3 has its CatchHandler @ 0095ef1c */
    if ((uVar3 & uVar4 & uVar5 & uVar6 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_dragonbones_CCFactory_buildArmatureDisplay\'"
                  ,0);
      uVar10 = 0;
    }
    else {
      pvVar9 = (void *)(**(code **)(*plVar7 + 0xe0))(plVar7,&local_60,&local_78,&local_90,&local_a8)
      ;
                    /* catch() { ... } // from try @ 0095ef68 with catch @ 0095efa0 */
      if (pvVar9 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
                    /* try { // try from 0095efb4 to 00a5f06b has its CatchHandler @ 0095efb4
                       catch() { ... } // from try @ 0095efb4 with catch @ 0095efb4
                       catch() { ... } // from try @ 0095f0ec with catch @ 0095efb4 */
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar9 + 0xc),(int *)((long)pvVar9 + 0x10),pvVar9,
                   "db.CCArmatureDisplay");
      }
      uVar10 = 1;
    }
    if ((local_a8 & 1) != 0) {
                    /* catch() { ... } // from try @ 0095f0a0 with catch @ 0095f138 */
      operator_delete(local_98);
    }
    break;
  default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.CCFactory:buildArmatureDisplay",iVar2 + -1,1);
                    /* try { // try from 0095f0a0 to 00a5f0b3 has its CatchHandler @ 0095f138 */
    uVar10 = 0;
    goto LAB_0095f16c;
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
joined_r0x0095f0e8:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
LAB_0095f164:
    operator_delete(local_50);
  }
LAB_0095f16c:
                    /* catch() { ... } // from try @ 0095f06c with catch @ 0095f16c */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

