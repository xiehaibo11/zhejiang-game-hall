
undefined8 FUN_008be8d0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isnumber(param_1,1,0,auStack_48);
  if ((((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_48), iVar2 == 0)) ||
      (iVar2 = tolua_isstring(param_1,3,0,auStack_48), iVar2 == 0)) ||
     (iVar2 = tolua_isnoobj(param_1,4,auStack_48), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'glBindAttribLocation\'.",auStack_48);
  }
  else {
    dVar4 = (double)tolua_tonumber(0,param_1,1);
    dVar5 = (double)tolua_tonumber(0,param_1,2);
    uVar3 = tolua_tostring(param_1,3,&DAT_013c996e);
    glBindAttribLocation((int)dVar4,(int)dVar5,uVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

