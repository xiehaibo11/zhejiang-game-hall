
undefined8 FUN_008bf138(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isnumber(param_1,1,0,auStack_78);
  if ((((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_78), iVar2 == 0)) ||
      (iVar2 = tolua_istable(param_1,3,0,auStack_78), iVar2 == 0)) ||
     ((iVar2 = tolua_isnumber(param_1,4,0,auStack_78), iVar2 == 0 ||
      (iVar2 = tolua_isnoobj(param_1,5,auStack_78), iVar2 == 0)))) {
    tolua_error(param_1,"#ferror in function \'glBufferData\'.",auStack_78);
  }
  else {
    dVar6 = (double)tolua_tonumber(0,param_1,1);
    dVar7 = (double)tolua_tonumber(0,param_1,2);
    uVar4 = (ulong)dVar7;
    uVar5 = uVar4 << 2;
    if (uVar4 >> 0x3e != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    pvVar3 = operator_new__(uVar5,(nothrow_t *)&std::nothrow);
    if (pvVar3 != (void *)0x0) {
      if (0 < (long)uVar4) {
        uVar5 = 0;
        do {
          dVar7 = (double)tolua_tofieldnumber(0,param_1,3,uVar5 + 1 & 0xffffffff);
          iVar2 = (int)uVar5;
          *(float *)((long)pvVar3 + uVar5 * 4) = (float)dVar7;
          uVar5 = uVar5 + 1;
        } while ((long)(ulong)(iVar2 + 2) <= (long)uVar4);
      }
      dVar7 = (double)tolua_tonumber(0,param_1,4);
      glBufferData((int)dVar6,uVar4 << 2,pvVar3,(int)dVar7);
      operator_delete__(pvVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

