
undefined8 FUN_008c3824(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
                    /* catch() { ... } // from try @ 008c3738 with catch @ 008c3824 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isnumber(param_1,1,0,auStack_48);
  if (((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_48), iVar2 == 0)) ||
     (iVar2 = tolua_isnoobj(param_1,3,auStack_48), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'glSampleCoverage\'.",auStack_48);
  }
  else {
    dVar3 = (double)tolua_tonumber(0,param_1,1);
                    /* catch() { ... } // from try @ 008c34a0 with catch @ 008c38a4
                       catch() { ... } // from try @ 008c3544 with catch @ 008c38a4 */
    dVar4 = (double)tolua_tonumber(0,param_1,2);
    glSampleCoverage((float)(int)dVar3,(int)dVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

