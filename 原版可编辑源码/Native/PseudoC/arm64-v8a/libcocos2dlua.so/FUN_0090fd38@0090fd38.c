
void FUN_0090fd38(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0090fd68 to 00a0fde3 has its CatchHandler @ 0090fe6c */
  iVar2 = tolua_isusertype(param_1,1,"cc.WebSocket",0,auStack_38);
  if (iVar2 == 0) {
    tolua_error(param_1,"#ferror in function \'sendString\'.",auStack_38);
    uVar4 = 0;
  }
  else {
    lVar3 = tolua_tousertype(param_1,1,0);
    if ((*(byte *)(lVar3 + 0x90) & 1) == 0) {
      lVar3 = lVar3 + 0x91;
    }
    else {
      lVar3 = *(long *)(lVar3 + 0xa0);
    }
    lua_pushstring(param_1,lVar3);
    uVar4 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

