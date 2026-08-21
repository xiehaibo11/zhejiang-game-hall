
undefined8 FUN_008c5534(undefined8 param_1)

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
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar3 = tolua_isnumber(param_1,1,0,auStack_78);
                    /* try { // try from 008c55b4 to 009c55bb has its CatchHandler @ 008c564c */
                    /* try { // try from 008c55bc to 009c55df has its CatchHandler @ 008c5468 */
  if ((((iVar3 == 0) || (iVar3 = tolua_isnumber(param_1,2,0,auStack_78), iVar3 == 0)) ||
      (iVar3 = tolua_isnumber(param_1,3,0,auStack_78), iVar3 == 0)) ||
     ((iVar3 = tolua_istable(param_1,4,0,auStack_78), iVar3 == 0 ||
      (iVar3 = tolua_isnoobj(param_1,5,auStack_78), iVar3 == 0)))) {
                    /* try { // try from 008c56a0 to 009c56f7 has its CatchHandler @ 008c56a0
                       catch() { ... } // from try @ 008c56a0 with catch @ 008c56a0
                       catch() { ... } // from try @ 008c5710 with catch @ 008c56a0
                       catch() { ... } // from try @ 008c57f4 with catch @ 008c56a0
                       catch() { ... } // from try @ 008c5844 with catch @ 008c56a0
                       catch() { ... } // from try @ 008c5860 with catch @ 008c56a0 */
    tolua_error(param_1,"#ferror in function \'glUniform3fv\'.",auStack_78);
  }
  else {
                    /* try { // try from 008c55e0 to 009c55ef has its CatchHandler @ 008c5664 */
    dVar7 = (double)tolua_tonumber(0,param_1,1);
    dVar8 = (double)tolua_tonumber(0,param_1,2);
    dVar9 = (double)tolua_tonumber(0,param_1,3);
    uVar6 = (uint)dVar9;
                    /* try { // try from 008c5618 to 009c561f has its CatchHandler @ 008c5650 */
    uVar5 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
                    /* try { // try from 008c5620 to 009c5643 has its CatchHandler @ 008c5468 */
    if ((ulong)(long)(int)uVar6 >> 0x3e != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    pvVar4 = operator_new__(uVar5,(nothrow_t *)&std::nothrow);
    if (pvVar4 != (void *)0x0) {
      if (0 < (int)uVar6) {
                    /* try { // try from 008c5644 to 009c564b has its CatchHandler @ 008c564c */
                    /* catch() { ... } // from try @ 008c55b4 with catch @ 008c564c
                       catch() { ... } // from try @ 008c5644 with catch @ 008c564c
                       try { // try from 008c564c to 009c569f has its CatchHandler @ 008c5468 */
        uVar5 = 0;
        do {
                    /* catch() { ... } // from try @ 008c5618 with catch @ 008c5650 */
          uVar1 = uVar5 + 1;
                    /* catch() { ... } // from try @ 008c55e0 with catch @ 008c5664 */
          dVar9 = (double)tolua_tofieldnumber(0,param_1,4,uVar1 & 0xffffffff);
          *(float *)((long)pvVar4 + uVar5 * 4) = (float)dVar9;
          uVar5 = uVar1;
        } while ((ulong)(uVar6 + 1) - 1 != uVar1);
      }
                    /* catch() { ... } // from try @ 008c54c0 with catch @ 008c5684
                       catch() { ... } // from try @ 008c5524 with catch @ 008c5684 */
      glUniform1fv((int)dVar7,(int)dVar8,pvVar4);
      operator_delete__(pvVar4);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

