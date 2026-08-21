
undefined8 FUN_008c4424(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 008c4444 to 009c444b has its CatchHandler @ 008c452c */
                    /* try { // try from 008c444c to 009c456b has its CatchHandler @ 008c422c */
  iVar2 = tolua_isnumber(param_1,1,0,auStack_48);
  if ((((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_48), iVar2 == 0)) ||
      (iVar2 = tolua_isnumber(param_1,3,0,auStack_48), iVar2 == 0)) ||
     (iVar2 = tolua_isnoobj(param_1,4,auStack_48), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'glTexParameterf\'.",auStack_48);
  }
  else {
    dVar3 = (double)tolua_tonumber(0,param_1,1);
    dVar4 = (double)tolua_tonumber(0,param_1,2);
    dVar5 = (double)tolua_tonumber(0,param_1,3);
    glTexParameterf((float)dVar5,(int)dVar3,(int)dVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

