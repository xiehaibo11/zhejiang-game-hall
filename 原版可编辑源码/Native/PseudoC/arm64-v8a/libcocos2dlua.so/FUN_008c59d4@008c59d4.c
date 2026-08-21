
undefined8 FUN_008c59d4(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 008c59fc to 009c5a03 has its CatchHandler @ 008c5a94 */
                    /* try { // try from 008c5a04 to 009c5a27 has its CatchHandler @ 008c58b0 */
  iVar2 = tolua_isnumber(param_1,1,0,auStack_58);
                    /* try { // try from 008c5a28 to 009c5a37 has its CatchHandler @ 008c5aac */
                    /* try { // try from 008c5a60 to 009c5a67 has its CatchHandler @ 008c5a98 */
                    /* try { // try from 008c5a68 to 009c5a8b has its CatchHandler @ 008c58b0 */
  if ((((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_58), iVar2 == 0)) ||
      (iVar2 = tolua_isnumber(param_1,3,0,auStack_58), iVar2 == 0)) ||
     (((iVar2 = tolua_isnumber(param_1,4,0,auStack_58), iVar2 == 0 ||
       (iVar2 = tolua_isnumber(param_1,5,0,auStack_58), iVar2 == 0)) ||
      (iVar2 = tolua_isnoobj(param_1,6,auStack_58), iVar2 == 0)))) {
    tolua_error(param_1,"#ferror in function \'glUniform4f\'.",auStack_58);
  }
  else {
                    /* try { // try from 008c5a8c to 009c5a93 has its CatchHandler @ 008c5a94 */
                    /* catch() { ... } // from try @ 008c59fc with catch @ 008c5a94
                       catch() { ... } // from try @ 008c5a8c with catch @ 008c5a94
                       try { // try from 008c5a94 to 009c5ae7 has its CatchHandler @ 008c58b0 */
    dVar3 = (double)tolua_tonumber(0,param_1,1);
                    /* catch() { ... } // from try @ 008c5a60 with catch @ 008c5a98 */
    dVar4 = (double)tolua_tonumber(0,param_1,2);
                    /* catch() { ... } // from try @ 008c5a28 with catch @ 008c5aac */
    dVar5 = (double)tolua_tonumber(0,param_1,3);
                    /* catch() { ... } // from try @ 008c5908 with catch @ 008c5acc
                       catch() { ... } // from try @ 008c596c with catch @ 008c5acc */
    dVar6 = (double)tolua_tonumber(0,param_1,4);
    dVar7 = (double)tolua_tonumber(0,param_1,5);
                    /* try { // try from 008c5ae8 to 009c5b33 has its CatchHandler @ 008c5ae8
                       catch() { ... } // from try @ 008c5ae8 with catch @ 008c5ae8
                       catch() { ... } // from try @ 008c5b38 with catch @ 008c5ae8 */
    glUniform4f((float)dVar4,(float)dVar5,(float)dVar6,(float)dVar7,(int)dVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 008c5b34 to 009c5b37 has its CatchHandler @ 008c5b70 */
                    /* try { // try from 008c5b38 to 009c5b83 has its CatchHandler @ 008c5ae8 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

