
undefined8 FUN_008c5824(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_78 [16];
  long local_68;
  
                    /* try { // try from 008c583c to 009c5843 has its CatchHandler @ 008c5890 */
                    /* try { // try from 008c5844 to 009c5857 has its CatchHandler @ 008c56a0 */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 008c5858 to 009c585f has its CatchHandler @ 008c5890 */
                    /* catch() { ... } // from try @ 008c5818 with catch @ 008c5860
                       try { // try from 008c5860 to 009c58af has its CatchHandler @ 008c56a0 */
  iVar3 = tolua_isnumber(param_1,1,0,auStack_78);
                    /* catch() { ... } // from try @ 008c57ec with catch @ 008c5890
                       catch() { ... } // from try @ 008c583c with catch @ 008c5890
                       catch() { ... } // from try @ 008c5858 with catch @ 008c5890 */
                    /* catch() { ... } // from try @ 008c56f8 with catch @ 008c5894
                       catch() { ... } // from try @ 008c575c with catch @ 008c5894 */
                    /* try { // try from 008c58b0 to 009c5907 has its CatchHandler @ 008c58b0
                       catch() { ... } // from try @ 008c58b0 with catch @ 008c58b0
                       catch() { ... } // from try @ 008c5920 with catch @ 008c58b0
                       catch() { ... } // from try @ 008c5a04 with catch @ 008c58b0
                       catch() { ... } // from try @ 008c5a68 with catch @ 008c58b0
                       catch() { ... } // from try @ 008c5a94 with catch @ 008c58b0 */
  if ((((iVar3 == 0) || (iVar3 = tolua_isnumber(param_1,2,0,auStack_78), iVar3 == 0)) ||
      (iVar3 = tolua_isnumber(param_1,3,0,auStack_78), iVar3 == 0)) ||
     ((iVar3 = tolua_istable(param_1,4,0,auStack_78), iVar3 == 0 ||
      (iVar3 = tolua_isnoobj(param_1,5,auStack_78), iVar3 == 0)))) {
    tolua_error(param_1,"#ferror in function \'glUniform3iv\'.",auStack_78);
  }
  else {
    dVar7 = (double)tolua_tonumber(0,param_1,1);
    dVar8 = (double)tolua_tonumber(0,param_1,2);
    dVar9 = (double)tolua_tonumber(0,param_1,3);
    uVar6 = (uint)dVar9;
                    /* try { // try from 008c5908 to 009c591f has its CatchHandler @ 008c5acc */
    uVar5 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
    if ((ulong)(long)(int)uVar6 >> 0x3e != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    pvVar4 = operator_new__(uVar5,(nothrow_t *)&std::nothrow);
    if (pvVar4 != (void *)0x0) {
                    /* try { // try from 008c5920 to 009c596b has its CatchHandler @ 008c58b0 */
      if (0 < (int)uVar6) {
        uVar5 = 0;
        do {
          uVar1 = uVar5 + 1;
          dVar9 = (double)tolua_tofieldnumber(0,param_1,4,uVar1 & 0xffffffff);
          *(int *)((long)pvVar4 + uVar5 * 4) = (int)dVar9;
          uVar5 = uVar1;
        } while ((ulong)(uVar6 + 1) - 1 != uVar1);
      }
                    /* try { // try from 008c596c to 009c597f has its CatchHandler @ 008c5acc */
      glUniform3iv((int)dVar7,(int)dVar8,pvVar4);
      operator_delete__(pvVar4);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

