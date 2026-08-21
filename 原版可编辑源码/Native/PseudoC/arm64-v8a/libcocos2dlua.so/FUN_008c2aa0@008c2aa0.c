
undefined8 FUN_008c2aa0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
                    /* catch() { ... } // from try @ 008c2a38 with catch @ 008c2ab0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isnumber(param_1,1,0,auStack_48);
                    /* try { // try from 008c2af0 to 009c2b7f has its CatchHandler @ 008c2af0
                       catch() { ... } // from try @ 008c2af0 with catch @ 008c2af0
                       catch() { ... } // from try @ 008c2b88 with catch @ 008c2af0
                       catch() { ... } // from try @ 008c2c48 with catch @ 008c2af0
                       catch() { ... } // from try @ 008c2c9c with catch @ 008c2af0 */
  if (((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_48), iVar2 == 0)) ||
     (iVar2 = tolua_isnoobj(param_1,3,auStack_48), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'glHint\'.",auStack_48);
  }
  else {
    dVar3 = (double)tolua_tonumber(0,param_1,1);
    dVar4 = (double)tolua_tonumber(0,param_1,2);
    glHint((int)dVar3,(int)dVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

