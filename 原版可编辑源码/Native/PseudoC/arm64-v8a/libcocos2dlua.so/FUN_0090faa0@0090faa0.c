
undefined8 FUN_0090faa0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  WebSocket *this;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isusertype(param_1,1,"cc.WebSocket",0,auStack_38);
  if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,auStack_38), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'getReadyState\'.",auStack_38);
  }
  else {
                    /* catch() { ... } // from try @ 0090f9dc with catch @ 0090faf4 */
                    /* catch() { ... } // from try @ 0090f9b4 with catch @ 0090faf8 */
                    /* catch() { ... } // from try @ 0090fa38 with catch @ 0090fafc */
    this = (WebSocket *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 0090fa04 with catch @ 0090fb00 */
    if (this != (WebSocket *)0x0) {
                    /* catch() { ... } // from try @ 0090f980 with catch @ 0090fb04 */
      cocos2d::network::WebSocket::closeAsync(this);
    }
  }
                    /* try { // try from 0090fb20 to 00a0fb7b has its CatchHandler @ 0090fb20
                       catch() { ... } // from try @ 0090fb20 with catch @ 0090fb20
                       catch() { ... } // from try @ 0090fc40 with catch @ 0090fb20 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

