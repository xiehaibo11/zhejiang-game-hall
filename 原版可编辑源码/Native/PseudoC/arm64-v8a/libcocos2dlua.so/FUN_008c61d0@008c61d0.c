
undefined8 FUN_008c61d0(undefined8 param_1)

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
  if ((((iVar3 == 0) || (iVar3 = tolua_isnumber(param_1,2,0,auStack_78), iVar3 == 0)) ||
      (iVar3 = tolua_isnumber(param_1,3,0,auStack_78), iVar3 == 0)) ||
     ((iVar3 = tolua_istable(param_1,4,0,auStack_78), iVar3 == 0 ||
      (iVar3 = tolua_isnoobj(param_1,5,auStack_78), iVar3 == 0)))) {
    tolua_error(param_1,"#ferror in function \'glUniformMatrix3fv\'.",auStack_78);
  }
  else {
    dVar7 = (double)tolua_tonumber(0,param_1,1);
    dVar8 = (double)tolua_tonumber(0,param_1,2);
    dVar9 = (double)tolua_tonumber(0,param_1,3);
    uVar6 = (uint)dVar9;
    uVar5 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
    if ((ulong)(long)(int)uVar6 >> 0x3e != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    pvVar4 = operator_new__(uVar5,(nothrow_t *)&std::nothrow);
    if (pvVar4 != (void *)0x0) {
      if (0 < (int)uVar6) {
        uVar5 = 0;
        do {
          uVar1 = uVar5 + 1;
          dVar9 = (double)tolua_tofieldnumber(0,param_1,4,uVar1 & 0xffffffff);
          *(float *)((long)pvVar4 + uVar5 * 4) = (float)dVar9;
          uVar5 = uVar1;
        } while ((ulong)(uVar6 + 1) - 1 != uVar1);
      }
      glUniformMatrix3fv((int)dVar7,1,(int)dVar8,pvVar4);
      operator_delete__(pvVar4);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

