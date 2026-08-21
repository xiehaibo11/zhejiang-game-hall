
undefined8 FUN_008c3ee4(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
                    /* try { // try from 008c3ef4 to 009c3f03 has its CatchHandler @ 008c3f84 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 008c3f04 to 009c3f7b has its CatchHandler @ 008c3dec */
  iVar2 = tolua_isnumber(param_1,1,0,auStack_48);
  if ((((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_48), iVar2 == 0)) ||
      (iVar2 = tolua_isnumber(param_1,3,0,auStack_48), iVar2 == 0)) ||
     (iVar2 = tolua_isnoobj(param_1,4,auStack_48), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'glStencilOp\'.",auStack_48);
  }
  else {
    dVar3 = (double)tolua_tonumber(0,param_1,1);
                    /* try { // try from 008c3f7c to 009c3f83 has its CatchHandler @ 008c3ff8 */
    dVar4 = (double)tolua_tonumber(0,param_1,2);
                    /* catch() { ... } // from try @ 008c3ef4 with catch @ 008c3f84
                       try { // try from 008c3f84 to 009c4013 has its CatchHandler @ 008c3dec */
    dVar5 = (double)tolua_tonumber(0,param_1,3);
    glStencilOp((int)dVar3,(int)dVar4,(int)dVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 008c3ec4 with catch @ 008c3fd8 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

