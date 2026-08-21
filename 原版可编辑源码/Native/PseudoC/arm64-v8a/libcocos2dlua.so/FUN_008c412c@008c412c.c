
undefined8 FUN_008c412c(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_b8 [16];
  long local_a8;
  
  lVar2 = tpidr_el0;
  local_a8 = *(long *)(lVar2 + 0x28);
  iVar3 = tolua_isnumber(param_1,1,0,auStack_b8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008c4284 with catch @ 008c422c
                       catch(type#1 @ 00000000) { ... } // from try @ 008c444c with catch @ 008c422c
                        */
  if ((((((iVar3 == 0) || (iVar3 = tolua_isnumber(param_1,2,0,auStack_b8), iVar3 == 0)) ||
        (iVar3 = tolua_isnumber(param_1,3,0,auStack_b8), iVar3 == 0)) ||
       ((iVar3 = tolua_isnumber(param_1,4,0,auStack_b8), iVar3 == 0 ||
        (iVar3 = tolua_isnumber(param_1,5,0,auStack_b8), iVar3 == 0)))) ||
      ((iVar3 = tolua_isnumber(param_1,6,0,auStack_b8), iVar3 == 0 ||
       ((iVar3 = tolua_isnumber(param_1,7,0,auStack_b8), iVar3 == 0 ||
        (iVar3 = tolua_isnumber(param_1,8,0,auStack_b8), iVar3 == 0)))))) ||
     ((iVar3 = tolua_isnumber(param_1,9,0,auStack_b8), iVar3 == 0 ||
      ((iVar3 = tolua_istable(param_1,10,0,auStack_b8), iVar3 == 0 ||
       (iVar3 = tolua_isnoobj(param_1,0xb,auStack_b8), iVar3 == 0)))))) {
    tolua_error(param_1,"#ferror in function \'glTexImage2D\'.",auStack_b8);
  }
  else {
    dVar7 = (double)tolua_tonumber(0,param_1,1);
                    /* try { // try from 008c427c to 009c4283 has its CatchHandler @ 008c4568 */
                    /* try { // try from 008c4284 to 009c43db has its CatchHandler @ 008c422c */
    dVar8 = (double)tolua_tonumber(0,param_1,2);
    dVar9 = (double)tolua_tonumber(0,param_1,3);
    dVar10 = (double)tolua_tonumber(0,param_1,4);
    dVar11 = (double)tolua_tonumber(0,param_1,5);
    dVar12 = (double)tolua_tonumber(0,param_1,6);
    dVar13 = (double)tolua_tonumber(0,param_1,7);
    dVar14 = (double)tolua_tonumber(0,param_1,8);
    dVar15 = (double)tolua_tonumber(0,param_1,9);
    uVar5 = (uint)dVar15;
    pvVar4 = operator_new__((ulong)uVar5,(nothrow_t *)&std::nothrow);
    if (pvVar4 != (void *)0x0) {
      if (uVar5 != 0) {
        uVar6 = 1;
        do {
          dVar15 = (double)tolua_tofieldnumber(0,param_1,10,uVar6);
          uVar1 = uVar6 - 1;
          uVar6 = uVar6 + 1;
          *(char *)((long)pvVar4 + (ulong)uVar1) = (char)(int)dVar15;
        } while (uVar6 <= uVar5);
      }
      glTexImage2D((int)dVar7,(int)dVar8,(int)dVar9,(int)dVar10,(int)dVar11,(int)dVar12,(int)dVar13,
                   (int)dVar14,pvVar4);
      operator_delete__(pvVar4);
    }
  }
                    /* try { // try from 008c43dc to 009c43e3 has its CatchHandler @ 008c4554 */
  if (*(long *)(lVar2 + 0x28) == local_a8) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

