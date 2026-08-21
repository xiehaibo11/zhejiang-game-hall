
undefined8 FUN_0092146c(lua_State *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  LuaArmatureWrapper **ppLVar4;
  LuaArmatureWrapper **ppLVar5;
  undefined8 *puVar6;
  long lVar7;
  LuaArmatureWrapper **ppLVar8;
  int iVar9;
  undefined4 uVar10;
  ArmatureAnimation *pAVar11;
  Ref *this;
  ScriptHandlerMgr *pSVar12;
  code *pcVar13;
  undefined8 *local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  LuaArmatureWrapper **local_a0;
  LuaArmatureWrapper **local_98;
  undefined8 uStack_90;
  Ref *local_88;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 == (lua_State *)0x0) goto LAB_00921684;
  pAVar11 = (ArmatureAnimation *)tolua_tousertype(param_1,1,0);
  iVar9 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 00921460 with catch @ 009214b8 */
  if (iVar9 + -1 != 1) {
    luaL_error(param_1,
               "\'setFrameEventCallFunc\' function of ArmatureAnimation has wrong number of arguments: %d, was expecting %d\n"
               ,iVar9 + -1,1);
    goto LAB_00921684;
  }
  uVar10 = toluafix_ref_function(param_1,2,0);
                    /* try { // try from 009214cc to 00a21583 has its CatchHandler @ 009214cc
                       catch() { ... } // from try @ 009214cc with catch @ 009214cc
                       catch() { ... } // from try @ 00921604 with catch @ 009214cc */
  this = operator_new(0x28,(nothrow_t *)&std::nothrow);
  if (this == (Ref *)0x0) {
    local_88 = (Ref *)0x0;
  }
  else {
    cocos2d::Ref::Ref(this);
    *(undefined ***)this = &PTR__LuaArmatureWrapper_0169cb68;
    local_88 = this;
  }
  cocos2d::Ref::autorelease(local_88);
  local_98 = (LuaArmatureWrapper **)0x0;
  uStack_90 = 0;
  local_a0 = (LuaArmatureWrapper **)0x0;
  std::__ndk1::vector<LuaArmatureWrapper*,std::__ndk1::allocator<LuaArmatureWrapper*>>::
  __push_back_slow_path<LuaArmatureWrapper*const&>
            ((vector<LuaArmatureWrapper*,std::__ndk1::allocator<LuaArmatureWrapper*>> *)&local_a0,
             (LuaArmatureWrapper **)&local_88);
  cocos2d::Ref::retain(local_88);
  pSVar12 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar12,this,uVar10,0x23);
  local_b8 = (undefined8 *)0x0;
  puStack_b0 = (undefined8 *)0x0;
  local_a8 = 0;
  std::__ndk1::vector<LuaArmatureWrapper*,std::__ndk1::allocator<LuaArmatureWrapper*>>::
  assign<LuaArmatureWrapper**>
            ((vector<LuaArmatureWrapper*,std::__ndk1::allocator<LuaArmatureWrapper*>> *)&local_b8,
             local_a0,local_98);
  puVar3 = puStack_b0;
                    /* try { // try from 00921584 to 00a215b7 has its CatchHandler @ 00921684 */
  for (puVar2 = local_b8; puVar2 != puVar3; puVar2 = puVar2 + 1) {
    cocos2d::Ref::retain((Ref *)*puVar2);
  }
  local_60 = (long *)0x0;
  local_60 = operator_new(0x28);
  lVar7 = local_a8;
  puVar3 = puStack_b0;
  puVar2 = local_b8;
                    /* try { // try from 009215b8 to 00a215cb has its CatchHandler @ 00921650 */
  local_b8 = (undefined8 *)0x0;
  puStack_b0 = (undefined8 *)0x0;
  local_a8 = 0;
  *local_60 = (long)&PTR_FUN_0169cc38;
  *(undefined4 *)(local_60 + 1) = uVar10;
                    /* try { // try from 009215d0 to 00a21603 has its CatchHandler @ 00921654 */
  local_60[3] = (long)puVar3;
  local_60[2] = (long)puVar2;
  local_60[4] = lVar7;
  cocostudio::ArmatureAnimation::setFrameEventCallFunc(pAVar11,alStack_80);
  if (alStack_80 == local_60) {
    pcVar13 = *(code **)(*local_60 + 0x20);
LAB_00921610:
    (*pcVar13)();
    puVar2 = local_b8;
    puVar3 = puStack_b0;
  }
  else {
    puVar2 = local_b8;
    puVar3 = puStack_b0;
    if (local_60 != (long *)0x0) {
      pcVar13 = *(code **)(*local_60 + 0x28);
                    /* try { // try from 00921604 to 00a2169f has its CatchHandler @ 009214cc */
      goto LAB_00921610;
    }
  }
  for (; puVar6 = puStack_b0, puVar2 != puStack_b0; puVar2 = puVar2 + 1) {
    puStack_b0 = puVar3;
    cocos2d::Ref::release((Ref *)*puVar2);
    puVar3 = puStack_b0;
    puStack_b0 = puVar6;
  }
  puStack_b0 = local_b8;
  ppLVar4 = local_a0;
  ppLVar5 = local_98;
  if (local_b8 != (undefined8 *)0x0) {
    operator_delete(local_b8);
    ppLVar4 = local_a0;
    ppLVar5 = local_98;
  }
                    /* catch() { ... } // from try @ 009215b8 with catch @ 00921650 */
                    /* catch() { ... } // from try @ 009215d0 with catch @ 00921654 */
  for (; ppLVar8 = local_98, ppLVar4 != local_98; ppLVar4 = ppLVar4 + 1) {
    local_98 = ppLVar5;
    cocos2d::Ref::release((Ref *)*ppLVar4);
    ppLVar5 = local_98;
    local_98 = ppLVar8;
  }
  local_98 = local_a0;
  if (local_a0 != (LuaArmatureWrapper **)0x0) {
    operator_delete(local_a0);
  }
LAB_00921684:
                    /* catch() { ... } // from try @ 00921584 with catch @ 00921684 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

