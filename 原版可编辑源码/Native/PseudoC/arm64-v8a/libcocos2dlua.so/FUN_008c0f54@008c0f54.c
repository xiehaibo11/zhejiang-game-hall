
undefined8 FUN_008c0f54(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar3 = tolua_isnumber(param_1,1,0,auStack_68);
  if ((((iVar3 == 0) || (iVar3 = tolua_isnumber(param_1,2,0,auStack_68), iVar3 == 0)) ||
      (iVar3 = tolua_isnumber(param_1,3,0,auStack_68), iVar3 == 0)) ||
     (((iVar3 = tolua_isnumber(param_1,4,0,auStack_68), iVar3 == 0 ||
       (iVar3 = tolua_istable(param_1,5,1,auStack_68), iVar3 == 0)) ||
      (iVar3 = tolua_isnoobj(param_1,6,auStack_68), iVar3 == 0)))) {
    tolua_error(param_1,"#ferror in function \'glDrawElements\'.",auStack_68);
    goto LAB_008c10e4;
  }
  dVar8 = (double)tolua_tonumber(0,param_1,1);
  dVar9 = (double)tolua_tonumber(0,param_1,2);
  dVar10 = (double)tolua_tonumber(0,param_1,3);
  iVar3 = (int)dVar10;
  dVar10 = (double)tolua_tonumber(0,param_1,4);
  uVar7 = (uint)dVar10;
  if (iVar3 == 0x1405) {
    if (uVar7 == 0) {
      uVar5 = 0x1405;
LAB_008c11f0:
      glDrawElements((int)dVar8,(int)dVar9,uVar5,0);
      goto LAB_008c10e4;
    }
    pvVar4 = operator_new__((ulong)uVar7 << 2,(nothrow_t *)&std::nothrow);
    if (pvVar4 == (void *)0x0) goto LAB_008c10e4;
    uVar6 = 1;
    do {
      dVar10 = (double)tolua_tofieldnumber(0,param_1,5,uVar6);
      uVar1 = uVar6 - 1;
      uVar6 = uVar6 + 1;
      *(int *)((long)pvVar4 + (ulong)uVar1 * 4) = (int)dVar10;
    } while (uVar6 <= uVar7);
    uVar5 = 0x1405;
  }
  else if (iVar3 == 0x1403) {
    if (uVar7 == 0) {
      uVar5 = 0x1403;
      goto LAB_008c11f0;
    }
    pvVar4 = operator_new__((ulong)uVar7 << 1,(nothrow_t *)&std::nothrow);
    if (pvVar4 == (void *)0x0) goto LAB_008c10e4;
    uVar6 = 1;
    do {
      dVar10 = (double)tolua_tofieldnumber(0,param_1,5,uVar6);
      uVar1 = uVar6 - 1;
      uVar6 = uVar6 + 1;
      *(short *)((long)pvVar4 + (ulong)uVar1 * 2) = (short)(int)dVar10;
    } while (uVar6 <= uVar7);
    uVar5 = 0x1403;
  }
  else {
    if (iVar3 != 0x1401) goto LAB_008c10e4;
    if (uVar7 == 0) {
      uVar5 = 0x1401;
      goto LAB_008c11f0;
    }
    pvVar4 = operator_new__((ulong)uVar7,(nothrow_t *)&std::nothrow);
    if (pvVar4 == (void *)0x0) goto LAB_008c10e4;
    uVar6 = 1;
    do {
      dVar10 = (double)tolua_tofieldnumber(0,param_1,5,uVar6);
      uVar1 = uVar6 - 1;
      uVar6 = uVar6 + 1;
      *(char *)((long)pvVar4 + (ulong)uVar1) = (char)(int)dVar10;
    } while (uVar6 <= uVar7);
    uVar5 = 0x1401;
  }
  glDrawElements((int)dVar8,(int)dVar9,uVar5,pvVar4);
  operator_delete__(pvVar4);
LAB_008c10e4:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

