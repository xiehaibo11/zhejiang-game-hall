
undefined8 FUN_008bf2dc(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isnumber(param_1,1,0,auStack_78);
  if ((((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_78), iVar2 == 0)) ||
      (iVar2 = tolua_isnumber(param_1,3,0,auStack_78), iVar2 == 0)) ||
     ((iVar2 = tolua_istable(param_1,4,0,auStack_78), iVar2 == 0 ||
      (iVar2 = tolua_isnoobj(param_1,5,auStack_78), iVar2 == 0)))) {
    tolua_error(param_1,"#ferror in function \'glBufferData\'.",auStack_78);
  }
  else {
    dVar6 = (double)tolua_tonumber(0,param_1,1);
    dVar7 = (double)tolua_tonumber(0,param_1,2);
    dVar8 = (double)tolua_tonumber(0,param_1,3);
    uVar5 = (ulong)dVar8;
    uVar4 = uVar5 << 2;
    if (uVar5 >> 0x3e != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    pvVar3 = operator_new__(uVar4,(nothrow_t *)&std::nothrow);
    if (pvVar3 != (void *)0x0) {
      if (0 < (long)uVar5) {
        uVar4 = 0;
        do {
          dVar8 = (double)tolua_tofieldnumber(0,param_1,4,uVar4 + 1 & 0xffffffff);
          iVar2 = (int)uVar4;
          *(float *)((long)pvVar3 + uVar4 * 4) = (float)dVar8;
          uVar4 = uVar4 + 1;
        } while ((long)(ulong)(iVar2 + 2) <= (long)uVar5);
      }
      glBufferSubData((int)dVar6,(long)dVar7 << 2,(long)((int)uVar5 << 2),pvVar3);
      operator_delete__(pvVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

