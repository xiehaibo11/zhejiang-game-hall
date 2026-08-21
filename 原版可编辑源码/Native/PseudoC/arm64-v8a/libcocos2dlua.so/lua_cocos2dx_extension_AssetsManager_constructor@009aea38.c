
/* lua_cocos2dx_extension_AssetsManager_constructor(lua_State*) */

bool lua_cocos2dx_extension_AssetsManager_constructor(lua_State *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  AssetsManager *pAVar9;
  ulong uVar10;
  bool bVar11;
  ulong local_a0;
  undefined8 local_98;
  char *local_90;
  ulong local_88;
  undefined8 local_80;
  char *local_78;
  ulong local_70;
  undefined8 local_68;
  char *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  iVar5 = lua_gettop();
  switch(iVar5 + -1) {
  case 0:
    pAVar9 = operator_new(0x390);
    cocos2d::extension::AssetsManager::AssetsManager(pAVar9,(char *)0x0,(char *)0x0,(char *)0x0);
    cocos2d::Ref::autorelease((Ref *)pAVar9);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(pAVar9 + 0xc),(int *)(pAVar9 + 0x10),pAVar9,"cc.AssetsManager");
    bVar11 = true;
    goto LAB_009aedec;
  case 1:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009aebb0 with catch @ 009aecac
                       catch(type#1 @ 00000000) { ... } // from try @ 009aebdc with catch @ 009aecac
                        */
    local_68 = 0;
    local_60 = (char *)0x0;
    local_70 = 0;
    uVar10 = luaval_to_std_string
                       (param_1,2,(basic_string *)&local_70,"cc.AssetsManager:AssetsManager");
    pcVar3 = (char *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      pcVar3 = local_60;
    }
    bVar11 = (uVar10 & 1) == 0;
    if (bVar11) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_extension_AssetsManager_constructor\'"
                  ,0);
    }
    else {
      pAVar9 = operator_new(0x390);
      cocos2d::extension::AssetsManager::AssetsManager(pAVar9,pcVar3,(char *)0x0,(char *)0x0);
      cocos2d::Ref::autorelease((Ref *)pAVar9);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(pAVar9 + 0xc),(int *)(pAVar9 + 0x10),pAVar9,"cc.AssetsManager");
    }
    bVar11 = !bVar11;
    if ((local_70 & 1) == 0) goto LAB_009aedec;
    goto LAB_009aede4;
  case 2:
    local_68 = 0;
    local_60 = (char *)0x0;
    local_70 = 0;
    uVar6 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_70,"cc.AssetsManager:AssetsManager");
    pcVar3 = (char *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      pcVar3 = local_60;
    }
    local_80 = 0;
    local_78 = (char *)0x0;
    local_88 = 0;
    uVar7 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_88,"cc.AssetsManager:AssetsManager");
    pcVar1 = (char *)((ulong)&local_88 | 1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009aebb8 with catch @ 009aeb48
                       catch(type#1 @ 00000000) { ... } // from try @ 009aebe8 with catch @ 009aeb48
                       catch(type#1 @ 00000000) { ... } // from try @ 009aec18 with catch @ 009aeb48
                       catch(type#1 @ 00000000) { ... } // from try @ 009aec40 with catch @ 009aeb48
                       catch(type#1 @ 00000000) { ... } // from try @ 009aec6c with catch @ 009aeb48
                        */
    if ((local_88 & 1) != 0) {
      pcVar1 = local_78;
    }
    if ((uVar6 & uVar7 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_extension_AssetsManager_constructor\'"
                  ,0);
      bVar11 = false;
    }
    else {
      pAVar9 = operator_new(0x390);
      cocos2d::extension::AssetsManager::AssetsManager(pAVar9,pcVar3,pcVar1,(char *)0x0);
      cocos2d::Ref::autorelease((Ref *)pAVar9);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(pAVar9 + 0xc),(int *)(pAVar9 + 0x10),pAVar9,"cc.AssetsManager");
      bVar11 = true;
    }
    break;
  case 3:
    local_68 = 0;
    local_60 = (char *)0x0;
    local_70 = 0;
                    /* try { // try from 009aebb0 to 00aaebb7 has its CatchHandler @ 009aecac */
                    /* try { // try from 009aebb8 to 00aaebdb has its CatchHandler @ 009aeb48 */
    uVar6 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_70,"cc.AssetsManager:AssetsManager");
    pcVar3 = (char *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      pcVar3 = local_60;
    }
                    /* try { // try from 009aebdc to 00aaebe7 has its CatchHandler @ 009aecac */
    local_80 = 0;
    local_78 = (char *)0x0;
    local_88 = 0;
                    /* try { // try from 009aebe8 to 00aaec0f has its CatchHandler @ 009aeb48 */
    uVar7 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_88,"cc.AssetsManager:AssetsManager");
                    /* try { // try from 009aec10 to 00aaec17 has its CatchHandler @ 009aeca8 */
    pcVar1 = (char *)((ulong)&local_88 | 1);
    if ((local_88 & 1) != 0) {
      pcVar1 = local_78;
    }
                    /* try { // try from 009aec18 to 00aaec37 has its CatchHandler @ 009aeb48 */
    local_98 = 0;
    local_90 = (char *)0x0;
    local_a0 = 0;
                    /* try { // try from 009aec38 to 00aaec3f has its CatchHandler @ 009aeca8 */
    uVar8 = luaval_to_std_string
                      (param_1,4,(basic_string *)&local_a0,"cc.AssetsManager:AssetsManager");
                    /* try { // try from 009aec40 to 00aaec5f has its CatchHandler @ 009aeb48 */
    pcVar2 = (char *)((ulong)&local_a0 | 1);
    if ((local_a0 & 1) != 0) {
      pcVar2 = local_90;
    }
    bVar11 = (uVar6 & uVar7 & uVar8 & 1) == 0;
    if (bVar11) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_extension_AssetsManager_constructor\'"
                  ,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009aee28 with catch @ 009aedb8
                       catch(type#1 @ 00000000) { ... } // from try @ 009aee58 with catch @ 009aedb8
                       catch(type#1 @ 00000000) { ... } // from try @ 009aee88 with catch @ 009aedb8
                       catch(type#1 @ 00000000) { ... } // from try @ 009aeeb0 with catch @ 009aedb8
                       catch(type#1 @ 00000000) { ... } // from try @ 009aeedc with catch @ 009aedb8
                        */
    }
    else {
                    /* try { // try from 009aec60 to 00aaec6b has its CatchHandler @ 009aeca8 */
      pAVar9 = operator_new(0x390);
                    /* try { // try from 009aec6c to 00aaecaf has its CatchHandler @ 009aeb48 */
      cocos2d::extension::AssetsManager::AssetsManager(pAVar9,pcVar3,pcVar1,pcVar2);
      cocos2d::Ref::autorelease((Ref *)pAVar9);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(pAVar9 + 0xc),(int *)(pAVar9 + 0x10),pAVar9,"cc.AssetsManager");
    }
    bVar11 = !bVar11;
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    break;
  default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e7b9a,
               iVar5 + -1,0);
    bVar11 = false;
    goto LAB_009aedec;
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70 & 1) != 0) {
LAB_009aede4:
    operator_delete(local_60);
  }
LAB_009aedec:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return bVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

