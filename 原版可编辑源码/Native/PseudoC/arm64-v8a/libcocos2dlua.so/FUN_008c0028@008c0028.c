
undefined8 FUN_008c0028(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isnumber(param_1,1,0,auStack_78);
  if ((((((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_78), iVar2 == 0)) ||
        (iVar2 = tolua_isnumber(param_1,3,0,auStack_78), iVar2 == 0)) ||
       ((iVar2 = tolua_isnumber(param_1,4,0,auStack_78), iVar2 == 0 ||
        (iVar2 = tolua_isnumber(param_1,5,0,auStack_78), iVar2 == 0)))) ||
      ((iVar2 = tolua_isnumber(param_1,6,0,auStack_78), iVar2 == 0 ||
       ((iVar2 = tolua_isnumber(param_1,7,0,auStack_78), iVar2 == 0 ||
        (iVar2 = tolua_isnumber(param_1,8,0,auStack_78), iVar2 == 0)))))) ||
     (iVar2 = tolua_isnoobj(param_1,9,auStack_78), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'glCopyTexImage2D\'.",auStack_78);
  }
  else {
    dVar3 = (double)tolua_tonumber(0,param_1,1);
    dVar4 = (double)tolua_tonumber(0,param_1,2);
    dVar5 = (double)tolua_tonumber(0,param_1,3);
    dVar6 = (double)tolua_tonumber(0,param_1,4);
    dVar7 = (double)tolua_tonumber(0,param_1,5);
    dVar8 = (double)tolua_tonumber(0,param_1,6);
    dVar9 = (double)tolua_tonumber(0,param_1,7);
    dVar10 = (double)tolua_tonumber(0,param_1,8);
    glCopyTexImage2D((int)dVar3,(int)dVar4,(int)dVar5,(int)dVar6,(int)dVar7,(int)dVar8,(int)dVar9,
                     (int)dVar10);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

