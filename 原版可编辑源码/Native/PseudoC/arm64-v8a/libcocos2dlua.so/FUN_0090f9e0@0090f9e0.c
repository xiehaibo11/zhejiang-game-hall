
void FUN_0090f9e0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  WebSocket *this;
  undefined8 uVar3;
  double dVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0090fa04 to 00a0fa1b has its CatchHandler @ 0090fb00 */
  iVar2 = tolua_isusertype(param_1,1,"cc.WebSocket",0,auStack_38);
  if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,auStack_38), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'getReadyState\'.",auStack_38);
    uVar3 = 0;
  }
  else {
                    /* try { // try from 0090fa38 to 00a0fa4b has its CatchHandler @ 0090fafc */
    this = (WebSocket *)tolua_tousertype(param_1,1,0);
    if (this == (WebSocket *)0x0) {
      dVar4 = -1.0;
    }
    else {
      iVar2 = cocos2d::network::WebSocket::getReadyState(this);
      dVar4 = (double)iVar2;
                    /* try { // try from 0090fa4c to 00a0fb1f has its CatchHandler @ 0090f924 */
    }
    tolua_pushnumber(dVar4,param_1);
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

