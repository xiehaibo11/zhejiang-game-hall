
/* tolua_Cocos2d_CCSkeletonAnimation_unregisterSpineEventHandler00(lua_State*) */

undefined8 tolua_Cocos2d_CCSkeletonAnimation_unregisterSpineEventHandler00(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  SkeletonAnimation *this;
  ScriptHandlerMgr *pSVar3;
  code *pcVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auStack_80 [16];
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isusertype(param_1,1,"sp.SkeletonAnimation",0,auStack_80);
  if (((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_80), iVar2 == 0)) ||
     (iVar2 = tolua_isnoobj(param_1,3,auStack_80), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'unregisterScriptHandler\'.",auStack_80);
    goto LAB_0094e0dc;
  }
  this = (SkeletonAnimation *)tolua_tousertype(param_1,1,0);
  if (this == (SkeletonAnimation *)0x0) goto LAB_0094e0dc;
  dVar6 = (double)tolua_tonumber(0,param_1,2);
  switch((int)dVar6) {
  case 0:
    local_50 = (long *)0x0;
    spine::SkeletonAnimation::setStartListener(this,(function *)alStack_70);
    if (alStack_70 == local_50) {
      pcVar4 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto switchD_0094e094_default;
      pcVar4 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar4)();
  default:
switchD_0094e094_default:
    uVar5 = 0x40;
    break;
  case 1:
    uVar5 = 0x41;
    break;
  case 2:
    local_50 = (long *)0x0;
    spine::SkeletonAnimation::setEndListener(this,(function *)alStack_70);
    if (alStack_70 == local_50) {
      pcVar4 = *(code **)(*local_50 + 0x20);
LAB_0094e1c0:
                    /* try { // try from 0094e1c0 to 00a4e1d3 has its CatchHandler @ 0094e21c */
      (*pcVar4)();
    }
    else if (local_50 != (long *)0x0) {
      pcVar4 = *(code **)(*local_50 + 0x28);
      goto LAB_0094e1c0;
    }
    uVar5 = 0x42;
    break;
  case 3:
    local_50 = (long *)0x0;
    spine::SkeletonAnimation::setCompleteListener(this,(function *)alStack_70);
    if (alStack_70 == local_50) {
      pcVar4 = *(code **)(*local_50 + 0x20);
LAB_0094e1d4:
                    /* try { // try from 0094e1d4 to 00a4e23b has its CatchHandler @ 0094e0e0 */
      (*pcVar4)();
    }
    else if (local_50 != (long *)0x0) {
                    /* try { // try from 0094e168 to 00a4e187 has its CatchHandler @ 0094e220 */
      pcVar4 = *(code **)(*local_50 + 0x28);
      goto LAB_0094e1d4;
    }
    uVar5 = 0x44;
    break;
  case 4:
    uVar5 = 0x43;
    break;
  case 5:
    local_50 = (long *)0x0;
    spine::SkeletonAnimation::setEventListener(this,(function *)alStack_70);
    if (alStack_70 == local_50) {
      pcVar4 = *(code **)(*local_50 + 0x20);
LAB_0094e1e8:
      (*pcVar4)();
    }
    else if (local_50 != (long *)0x0) {
      pcVar4 = *(code **)(*local_50 + 0x28);
      goto LAB_0094e1e8;
    }
    uVar5 = 0x45;
  }
  pSVar3 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  cocos2d::ScriptHandlerMgr::removeObjectHandler(pSVar3,this,uVar5);
LAB_0094e0dc:
                    /* try { // try from 0094e0e0 to 00a4e167 has its CatchHandler @ 0094e0e0
                       catch() { ... } // from try @ 0094e0e0 with catch @ 0094e0e0
                       catch() { ... } // from try @ 0094e1d4 with catch @ 0094e0e0 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

