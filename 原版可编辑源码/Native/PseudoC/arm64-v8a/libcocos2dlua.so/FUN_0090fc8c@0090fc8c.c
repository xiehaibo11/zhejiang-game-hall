
void FUN_0090fc8c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isusertype(param_1,1,"cc.WebSocket",0,auStack_38);
  if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 0090fbd8 with catch @ 0090fce8 */
                    /* catch() { ... } // from try @ 0090fbb0 with catch @ 0090fcec */
                    /* catch() { ... } // from try @ 0090fc30 with catch @ 0090fcf0 */
                    /* catch() { ... } // from try @ 0090fbfc with catch @ 0090fcf4 */
                    /* catch() { ... } // from try @ 0090fb7c with catch @ 0090fcf8 */
    tolua_error(param_1,"#ferror in function \'sendString\'.",auStack_38);
    uVar4 = 0;
  }
  else {
    lVar3 = tolua_tousertype(param_1,1,0);
    if ((*(byte *)(lVar3 + 0x38) & 1) == 0) {
      lVar3 = lVar3 + 0x39;
    }
    else {
      lVar3 = *(long *)(lVar3 + 0x48);
    }
    lua_pushstring(param_1,lVar3);
    uVar4 = 1;
  }
                    /* try { // try from 0090fd14 to 00a0fd67 has its CatchHandler @ 0090fd14
                       catch() { ... } // from try @ 0090fd14 with catch @ 0090fd14
                       catch() { ... } // from try @ 0090fde4 with catch @ 0090fd14
                       catch() { ... } // from try @ 0090fe28 with catch @ 0090fd14 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

