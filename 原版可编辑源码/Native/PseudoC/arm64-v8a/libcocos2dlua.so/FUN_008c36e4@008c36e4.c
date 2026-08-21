
undefined8 FUN_008c36e4(undefined8 param_1)

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
                    /* try { // try from 008c370c to 009c3713 has its CatchHandler @ 008c37ec */
                    /* try { // try from 008c3714 to 009c3737 has its CatchHandler @ 008c3454 */
  iVar2 = tolua_isnumber(param_1,1,0,auStack_58);
                    /* try { // try from 008c3738 to 009c374b has its CatchHandler @ 008c3824 */
  if ((((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_58), iVar2 == 0)) ||
      (iVar2 = tolua_isnumber(param_1,3,0,auStack_58), iVar2 == 0)) ||
     ((iVar2 = tolua_isnumber(param_1,4,0,auStack_58), iVar2 == 0 ||
      (iVar2 = tolua_isnoobj(param_1,5,auStack_58), iVar2 == 0)))) {
                    /* try { // try from 008c37e4 to 009c37eb has its CatchHandler @ 008c37ec */
                    /* catch() { ... } // from try @ 008c370c with catch @ 008c37ec
                       catch() { ... } // from try @ 008c37e4 with catch @ 008c37ec
                       try { // try from 008c37ec to 009c38c7 has its CatchHandler @ 008c3454 */
    tolua_error(param_1,"#ferror in function \'glRenderbufferStorage\'.",auStack_58);
  }
  else {
                    /* try { // try from 008c3784 to 009c378b has its CatchHandler @ 008c3810 */
    dVar3 = (double)tolua_tonumber(0,param_1,1);
                    /* try { // try from 008c378c to 009c37d3 has its CatchHandler @ 008c3454 */
    dVar4 = (double)tolua_tonumber(0,param_1,2);
    dVar5 = (double)tolua_tonumber(0,param_1,3);
    dVar6 = (double)tolua_tonumber(0,param_1,4);
                    /* try { // try from 008c37d4 to 009c37db has its CatchHandler @ 008c380c */
    glRenderbufferStorage((int)dVar3,(int)dVar4,(int)dVar5,(int)dVar6);
                    /* try { // try from 008c37dc to 009c37e3 has its CatchHandler @ 008c37fc */
  }
                    /* catch() { ... } // from try @ 008c3684 with catch @ 008c37fc
                       catch() { ... } // from try @ 008c37dc with catch @ 008c37fc */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 008c35fc with catch @ 008c380c
                       catch() { ... } // from try @ 008c37d4 with catch @ 008c380c */
                    /* catch() { ... } // from try @ 008c3784 with catch @ 008c3810 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

