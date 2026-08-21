
undefined8 FUN_008bfd20(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_b8 [16];
  long local_a8;
  
  lVar1 = tpidr_el0;
  local_a8 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isnumber(param_1,1,0,auStack_b8);
  if ((((((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_b8), iVar2 == 0)) ||
        (iVar2 = tolua_isnumber(param_1,3,0,auStack_b8), iVar2 == 0)) ||
       ((iVar2 = tolua_isnumber(param_1,4,0,auStack_b8), iVar2 == 0 ||
        (iVar2 = tolua_isnumber(param_1,5,0,auStack_b8), iVar2 == 0)))) ||
      ((iVar2 = tolua_isnumber(param_1,6,0,auStack_b8), iVar2 == 0 ||
       ((iVar2 = tolua_isnumber(param_1,7,0,auStack_b8), iVar2 == 0 ||
        (iVar2 = tolua_isnumber(param_1,8,0,auStack_b8), iVar2 == 0)))))) ||
     ((iVar2 = tolua_isnumber(param_1,9,0,auStack_b8), iVar2 == 0 ||
      ((iVar2 = tolua_istable(param_1,10,0,auStack_b8), iVar2 == 0 ||
       (iVar2 = tolua_isnoobj(param_1,0xb,auStack_b8), iVar2 == 0)))))) {
    tolua_error(param_1,"#ferror in function \'glCompressedTexSubImage2D\'.",auStack_b8);
  }
  else {
    dVar6 = (double)tolua_tonumber(0,param_1,1);
    dVar7 = (double)tolua_tonumber(0,param_1,2);
    dVar8 = (double)tolua_tonumber(0,param_1,3);
    dVar9 = (double)tolua_tonumber(0,param_1,4);
    dVar10 = (double)tolua_tonumber(0,param_1,5);
    dVar11 = (double)tolua_tonumber(0,param_1,6);
    dVar12 = (double)tolua_tonumber(0,param_1,7);
    dVar13 = (double)tolua_tonumber(0,param_1,8);
    dVar14 = (double)tolua_tonumber(0,param_1,9);
    uVar5 = (ulong)dVar14;
    uVar4 = uVar5 << 2;
    if (uVar5 >> 0x3e != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    pvVar3 = operator_new__(uVar4,(nothrow_t *)&std::nothrow);
    if (pvVar3 != (void *)0x0) {
      if (0 < (long)uVar5) {
        uVar4 = 0;
        do {
          dVar14 = (double)tolua_tofieldnumber(0,param_1,10,uVar4 + 1 & 0xffffffff);
          iVar2 = (int)uVar4;
          *(float *)((long)pvVar3 + uVar4 * 4) = (float)dVar14;
          uVar4 = uVar4 + 1;
        } while ((long)(ulong)(iVar2 + 2) <= (long)uVar5);
      }
      glCompressedTexSubImage2D
                ((int)dVar6,(int)dVar7,(int)dVar8,(int)dVar9,(int)dVar10,(int)dVar11,(int)dVar12,
                 (int)dVar13,pvVar3);
      operator_delete__(pvVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_a8) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

