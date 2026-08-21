
undefined8 FUN_008c1a54(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  double dVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 008c1a6c to 009c1aa7 has its CatchHandler @ 008c1850 */
  iVar2 = tolua_isnumber(param_1,1,0,auStack_38);
  if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,auStack_38), iVar2 == 0)) {
                    /* try { // try from 008c1ac0 to 009c1acf has its CatchHandler @ 008c1e04 */
    tolua_error(param_1,"#ferror in function \'glGenerateMipmap\'.",auStack_38);
  }
  else {
                    /* try { // try from 008c1aa8 to 009c1aab has its CatchHandler @ 008c1efc */
    dVar3 = (double)tolua_tonumber(0,param_1,1);
                    /* try { // try from 008c1ab0 to 009c1abf has its CatchHandler @ 008c1e08 */
    glGenerateMipmap((int)dVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 008c1ae0 to 009c1ae3 has its CatchHandler @ 008c1efc */
                    /* try { // try from 008c1ae8 to 009c1af7 has its CatchHandler @ 008c1e00 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

