
undefined8 FUN_008c56e4(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_58 [16];
  long local_48;
  
                    /* try { // try from 008c56f8 to 009c570f has its CatchHandler @ 008c5894 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 008c5710 to 009c575b has its CatchHandler @ 008c56a0 */
  iVar2 = tolua_isnumber(param_1,1,0,auStack_58);
                    /* try { // try from 008c575c to 009c576f has its CatchHandler @ 008c5894 */
  if ((((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_58), iVar2 == 0)) ||
      (iVar2 = tolua_isnumber(param_1,3,0,auStack_58), iVar2 == 0)) ||
     ((iVar2 = tolua_isnumber(param_1,4,0,auStack_58), iVar2 == 0 ||
      (iVar2 = tolua_isnoobj(param_1,5,auStack_58), iVar2 == 0)))) {
                    /* try { // try from 008c57ec to 009c57f3 has its CatchHandler @ 008c5890 */
    tolua_error(param_1,"#ferror in function \'glUniform3i\'.",auStack_58);
  }
  else {
    dVar3 = (double)tolua_tonumber(0,param_1,1);
    dVar4 = (double)tolua_tonumber(0,param_1,2);
    dVar5 = (double)tolua_tonumber(0,param_1,3);
    dVar6 = (double)tolua_tonumber(0,param_1,4);
    glUniform3i((int)dVar3,(int)dVar4,(int)dVar5,(int)dVar6);
  }
                    /* try { // try from 008c57f4 to 009c5817 has its CatchHandler @ 008c56a0 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 008c5818 to 009c5823 has its CatchHandler @ 008c5860 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

