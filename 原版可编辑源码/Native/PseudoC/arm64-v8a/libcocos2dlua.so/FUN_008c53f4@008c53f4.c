
undefined8 FUN_008c53f4(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isnumber(param_1,1,0,auStack_58);
                    /* try { // try from 008c5468 to 009c54bf has its CatchHandler @ 008c5468
                       catch() { ... } // from try @ 008c5468 with catch @ 008c5468
                       catch() { ... } // from try @ 008c54d8 with catch @ 008c5468
                       catch() { ... } // from try @ 008c55bc with catch @ 008c5468
                       catch() { ... } // from try @ 008c5620 with catch @ 008c5468
                       catch() { ... } // from try @ 008c564c with catch @ 008c5468 */
  if ((((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_58), iVar2 == 0)) ||
      (iVar2 = tolua_isnumber(param_1,3,0,auStack_58), iVar2 == 0)) ||
     ((iVar2 = tolua_isnumber(param_1,4,0,auStack_58), iVar2 == 0 ||
      (iVar2 = tolua_isnoobj(param_1,5,auStack_58), iVar2 == 0)))) {
    tolua_error(param_1,"#ferror in function \'glUniform4f\'.",auStack_58);
  }
  else {
    dVar3 = (double)tolua_tonumber(0,param_1,1);
    dVar4 = (double)tolua_tonumber(0,param_1,2);
                    /* try { // try from 008c54c0 to 009c54d7 has its CatchHandler @ 008c5684 */
    dVar5 = (double)tolua_tonumber(0,param_1,3);
    dVar6 = (double)tolua_tonumber(0,param_1,4);
                    /* try { // try from 008c54d8 to 009c5523 has its CatchHandler @ 008c5468 */
    glUniform3f((float)dVar4,(float)dVar5,(float)dVar6,(int)dVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 008c5524 to 009c5537 has its CatchHandler @ 008c5684 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

