
/* tolua_Cocos2d_CCSkeletonAnimation_registerSpineEventHandler00(lua_State*) */

undefined8 tolua_Cocos2d_CCSkeletonAnimation_registerSpineEventHandler00(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  SkeletonAnimation *this;
  ulong uVar3;
  ScriptHandlerMgr *pSVar4;
  undefined8 uVar5;
  code *pcVar6;
  double dVar7;
  tolua_Error atStack_80 [16];
  undefined **local_70;
  SkeletonAnimation *pSStack_68;
  ulong local_60;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isusertype(param_1,1,"sp.SkeletonAnimation",0,atStack_80);
  if ((((iVar2 == 0) ||
       (iVar2 = toluafix_isfunction(param_1,2,"LUA_FUNCTION",0,atStack_80), iVar2 == 0)) ||
      (iVar2 = tolua_isnumber(param_1,3,0,atStack_80), iVar2 == 0)) ||
     (iVar2 = tolua_isnoobj(param_1,4,atStack_80), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'registerSpineEventHandler\'.",atStack_80);
    goto switchD_0094dd04_default;
  }
  this = (SkeletonAnimation *)tolua_tousertype(param_1,1,0);
  if (this == (SkeletonAnimation *)0x0) goto switchD_0094dd04_default;
  uVar3 = toluafix_ref_function(param_1,2,0);
  uVar3 = uVar3 & 0xffffffff;
  dVar7 = (double)tolua_tonumber(0,param_1,3);
  switch((int)dVar7) {
  case 0:
    local_70 = &PTR_FUN_0169cf70;
    pSStack_68 = this;
    local_60 = uVar3;
    local_50 = &local_70;
    spine::SkeletonAnimation::setStartListener(this,(function *)&local_70);
    if (&local_70 == local_50) {
      pcVar6 = (code *)(*local_50)[4];
LAB_0094defc:
      (*pcVar6)();
    }
    else if (local_50 != (undefined ***)0x0) {
      pcVar6 = (code *)(*local_50)[5];
      goto LAB_0094defc;
    }
    pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    uVar5 = 0x40;
    break;
  case 1:
    local_60 = uVar3 | 0x100000000;
    local_70 = &PTR_FUN_0169d000;
    pSStack_68 = this;
    local_50 = &local_70;
    spine::SkeletonAnimation::setInterruptListener(this,(function *)&local_70);
    if (&local_70 == local_50) {
                    /* try { // try from 0094df10 to 00a4df23 has its CatchHandler @ 0094df7c */
      pcVar6 = (code *)(*local_50)[4];
LAB_0094df14:
      (*pcVar6)();
    }
    else if (local_50 != (undefined ***)0x0) {
      pcVar6 = (code *)(*local_50)[5];
      goto LAB_0094df14;
    }
    pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    uVar5 = 0x41;
    break;
  case 2:
    local_60 = uVar3 | 0x200000000;
    local_70 = &PTR_FUN_0169d080;
    pSStack_68 = this;
    local_50 = &local_70;
    spine::SkeletonAnimation::setEndListener(this,(function *)&local_70);
    if (&local_70 == local_50) {
      pcVar6 = (code *)(*local_50)[4];
LAB_0094df2c:
      (*pcVar6)();
    }
    else if (local_50 != (undefined ***)0x0) {
      pcVar6 = (code *)(*local_50)[5];
      goto LAB_0094df2c;
    }
    pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    uVar5 = 0x42;
    break;
  case 3:
    local_60 = uVar3 | 0x300000000;
    local_70 = &PTR_FUN_0169d180;
    pSStack_68 = this;
    local_50 = &local_70;
    spine::SkeletonAnimation::setCompleteListener(this,(function *)&local_70);
    if (&local_70 == local_50) {
      pcVar6 = (code *)(*local_50)[4];
LAB_0094df44:
      (*pcVar6)();
    }
    else if (local_50 != (undefined ***)0x0) {
      pcVar6 = (code *)(*local_50)[5];
      goto LAB_0094df44;
    }
    pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    uVar5 = 0x44;
    break;
  case 4:
                    /* try { // try from 0094de6c to 00a4dea3 has its CatchHandler @ 0094de6c
                       catch() { ... } // from try @ 0094de6c with catch @ 0094de6c
                       catch() { ... } // from try @ 0094dee8 with catch @ 0094de6c
                       catch() { ... } // from try @ 0094df64 with catch @ 0094de6c */
    local_60 = uVar3 | 0x400000000;
    local_70 = &PTR_FUN_0169d100;
    pSStack_68 = this;
    local_50 = &local_70;
    spine::SkeletonAnimation::setDisposeListener(this,(function *)&local_70);
    if (&local_70 == local_50) {
      pcVar6 = (code *)(*local_50)[4];
LAB_0094df5c:
                    /* try { // try from 0094df5c to 00a4df63 has its CatchHandler @ 0094df78 */
      (*pcVar6)();
    }
    else if (local_50 != (undefined ***)0x0) {
      pcVar6 = (code *)(*local_50)[5];
                    /* try { // try from 0094dea4 to 00a4debb has its CatchHandler @ 0094df7c */
      goto LAB_0094df5c;
    }
    pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
                    /* try { // try from 0094df64 to 00a4df97 has its CatchHandler @ 0094de6c */
    uVar5 = 0x43;
    break;
  case 5:
    local_60 = uVar3 | 0x500000000;
                    /* try { // try from 0094dec0 to 00a4dee7 has its CatchHandler @ 0094df78 */
    local_70 = &PTR_FUN_0169d200;
    pSStack_68 = this;
    local_50 = &local_70;
    spine::SkeletonAnimation::setEventListener(this,(function *)&local_70);
    if (&local_70 == local_50) {
      pcVar6 = (code *)(*local_50)[4];
LAB_0094df74:
      (*pcVar6)();
    }
    else if (local_50 != (undefined ***)0x0) {
                    /* try { // try from 0094dee8 to 00a4df0f has its CatchHandler @ 0094de6c */
      pcVar6 = (code *)(*local_50)[5];
      goto LAB_0094df74;
    }
                    /* catch() { ... } // from try @ 0094dec0 with catch @ 0094df78
                       catch() { ... } // from try @ 0094df5c with catch @ 0094df78 */
    pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
                    /* catch() { ... } // from try @ 0094dea4 with catch @ 0094df7c
                       catch() { ... } // from try @ 0094df10 with catch @ 0094df7c */
    uVar5 = 0x45;
    break;
  default:
    goto switchD_0094dd04_default;
  }
  cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar4,this,uVar3,uVar5);
switchD_0094dd04_default:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

