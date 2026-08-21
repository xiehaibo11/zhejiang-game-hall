
undefined8 FUN_008c6f8c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar3 = tolua_isnumber(param_1,1,0,auStack_68);
  if ((((iVar3 == 0) || (iVar3 = tolua_isnumber(param_1,2,0,auStack_68), iVar3 == 0)) ||
      (iVar3 = tolua_istable(param_1,3,0,auStack_68), iVar3 == 0)) ||
     (iVar3 = tolua_isnoobj(param_1,4,auStack_68), iVar3 == 0)) {
    tolua_error(param_1,"#ferror in function \'glVertexAttrib4fv\'.",auStack_68);
  }
  else {
    dVar7 = (double)tolua_tonumber(0,param_1,1);
    dVar8 = (double)tolua_tonumber(0,param_1,2);
    uVar6 = (uint)dVar8;
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
          dVar8 = (double)tolua_tofieldnumber(0,param_1,3,uVar1 & 0xffffffff);
          *(float *)((long)pvVar4 + uVar5 * 4) = (float)dVar8;
          uVar5 = uVar1;
        } while ((ulong)(uVar6 + 1) - 1 != uVar1);
      }
      glVertexAttrib4fv((int)dVar7,pvVar4);
      operator_delete__(pvVar4);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

