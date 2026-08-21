
void FUN_008b022c(lua_State *param_1)

{
  LuaCallFunc *pLVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Action *this;
  ScriptHandlerMgr *pSVar6;
  undefined8 uVar7;
  int iVar8;
  code *pcVar9;
  Action *this_00;
  undefined4 uStack_98;
  undefined3 uStack_94;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar7 = 0;
  if (param_1 == (lua_State *)0x0) goto LAB_008b03f8;
  uVar3 = lua_gettop();
  iVar8 = uVar3 - 1;
  if ((uVar3 & 0xfffffffe) != 2) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
               "cc.CallFunc:create",iVar8,1);
    uVar7 = 0;
    goto LAB_008b03f8;
  }
  uVar4 = toluafix_ref_function(param_1,2,0);
  if (iVar8 != 2) {
    uVar5 = 0;
  }
  else {
    lua_pushvalue(param_1,3);
    uVar5 = luaL_ref(param_1,0xffffd8f0);
  }
  this = operator_new(0x100,(nothrow_t *)&std::nothrow);
  if (this == (Action *)0x0) {
    this_00 = (Action *)0x0;
  }
  else {
    cocos2d::Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0xc0) = 0;
    *(undefined8 *)(this + 0xf0) = 0;
    *(undefined ***)this = &PTR__LuaCallFunc_0169b360;
    *(undefined ***)(this + 0x28) = &PTR_clone_0169b3c8;
    this_00 = this;
  }
  local_70 = operator_new(0x28);
  *(bool *)(local_70 + 2) = iVar8 == 2;
  local_70[3] = (long)param_1;
  *(undefined4 *)(local_70 + 4) = uVar5;
  *local_70 = (long)&PTR_FUN_01699750;
  local_70[1] = (long)this;
  *(undefined4 *)((long)local_70 + 0x11) = uStack_98;
  *(uint *)((long)local_70 + 0x14) = CONCAT31(uStack_94,uStack_98._3_1_);
  cocos2d::LuaCallFunc::initWithFunction((LuaCallFunc *)this_00,(function *)alStack_90);
  if (alStack_90 == local_70) {
    pcVar9 = *(code **)(*local_70 + 0x20);
LAB_008b03a4:
    (*pcVar9)();
  }
  else if (local_70 != (long *)0x0) {
    pcVar9 = *(code **)(*local_70 + 0x28);
    goto LAB_008b03a4;
  }
  cocos2d::Ref::autorelease((Ref *)this_00);
  pSVar6 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar6,this,uVar4,2);
  pLVar1 = (LuaCallFunc *)(this_00 + 0x10);
  if (this_00 == (Action *)0x0) {
    iVar8 = -1;
    pLVar1 = (LuaCallFunc *)0x0;
  }
  else {
    iVar8 = *(int *)(this_00 + 0xc);
  }
  toluafix_pushusertype_ccobject(param_1,iVar8,(int *)pLVar1,this,"cc.CallFunc");
  uVar7 = 1;
LAB_008b03f8:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

