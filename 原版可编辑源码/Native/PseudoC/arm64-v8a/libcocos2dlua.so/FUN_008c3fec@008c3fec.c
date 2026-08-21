
undefined8 FUN_008c3fec(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_58 [16];
  long local_48;
  
                    /* catch() { ... } // from try @ 008c3e28 with catch @ 008c3ff8
                       catch() { ... } // from try @ 008c3f7c with catch @ 008c3ff8 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isnumber(param_1,1,0,auStack_58);
  if ((((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_58), iVar2 == 0)) ||
      (iVar2 = tolua_isnumber(param_1,3,0,auStack_58), iVar2 == 0)) ||
     ((iVar2 = tolua_isnumber(param_1,4,0,auStack_58), iVar2 == 0 ||
      (iVar2 = tolua_isnoobj(param_1,5,auStack_58), iVar2 == 0)))) {
    tolua_error(param_1,"#ferror in function \'glStencilOpSeparate\'.",auStack_58);
  }
  else {
    dVar3 = (double)tolua_tonumber(0,param_1,1);
                    /* try { // try from 008c4098 to 009c40c3 has its CatchHandler @ 008c4098
                       catch() { ... } // from try @ 008c4098 with catch @ 008c4098
                       catch() { ... } // from try @ 008c40c8 with catch @ 008c4098 */
    dVar4 = (double)tolua_tonumber(0,param_1,2);
    dVar5 = (double)tolua_tonumber(0,param_1,3);
                    /* try { // try from 008c40c4 to 009c40c7 has its CatchHandler @ 008c40e0 */
                    /* try { // try from 008c40c8 to 009c40f3 has its CatchHandler @ 008c4098 */
    dVar6 = (double)tolua_tonumber(0,param_1,4);
                    /* catch() { ... } // from try @ 008c40c4 with catch @ 008c40e0 */
    glStencilOpSeparate((int)dVar3,(int)dVar4,(int)dVar5,(int)dVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

