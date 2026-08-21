
void FUN_0099f51c(lua_State *param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  AssetsManagerEx *pAVar4;
  void *pvVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined **local_70;
  lua_State *plStack_68;
  ulong local_60;
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar6 = 0;
  if (param_1 == (lua_State *)0x0) goto LAB_0099f624;
  iVar3 = lua_gettop();
                    /* try { // try from 0099f550 to 00a9f557 has its CatchHandler @ 0099f5e4 */
  if (iVar3 + -1 != 2) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","create",
               iVar3 + -1,2);
    uVar6 = 0;
    goto LAB_0099f624;
  }
                    /* try { // try from 0099f558 to 00a9f5ff has its CatchHandler @ 0099f4c8 */
  pAVar4 = (AssetsManagerEx *)tolua_tousertype(param_1,2,0);
  local_60 = toluafix_ref_function(param_1,3,0);
  local_60 = local_60 & 0xffffffff;
  local_70 = &PTR_FUN_0169e610;
  plStack_68 = param_1;
  local_50 = (long *)&local_70;
  pvVar5 = (void *)cocos2d::extension::EventListenerAssetsManagerEx::create
                             (pAVar4,(function *)&local_70);
  if (&local_70 == (undefined ***)local_50) {
                    /* catch() { ... } // from try @ 0099f550 with catch @ 0099f5e4 */
    pcVar7 = *(code **)(*local_50 + 0x20);
LAB_0099f5ec:
    (*pcVar7)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar7 = *(code **)(*local_50 + 0x28);
    goto LAB_0099f5ec;
  }
                    /* try { // try from 0099f600 to 00a9f65b has its CatchHandler @ 0099f600
                       catch() { ... } // from try @ 0099f600 with catch @ 0099f600
                       catch() { ... } // from try @ 0099f664 with catch @ 0099f600 */
  piVar1 = (int *)((long)pvVar5 + 0x10);
  if (pvVar5 == (void *)0x0) {
    iVar3 = -1;
    piVar1 = (int *)0x0;
  }
  else {
    iVar3 = *(int *)((long)pvVar5 + 0xc);
  }
  toluafix_pushusertype_ccobject(param_1,iVar3,piVar1,pvVar5,"cc.EventListenerAssetsManagerEx");
  uVar6 = 1;
LAB_0099f624:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

