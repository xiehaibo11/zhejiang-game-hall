
undefined8 FUN_008c452c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008c4444 with catch @ 008c452c
                        */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008c43dc with catch @ 008c4554
                        */
  iVar2 = tolua_isnumber(param_1,1,0,auStack_48);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008c427c with catch @ 008c4568
                        */
  if ((((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_48), iVar2 == 0)) ||
      (iVar2 = tolua_isnumber(param_1,3,0,auStack_48), iVar2 == 0)) ||
     (iVar2 = tolua_isnoobj(param_1,4,auStack_48), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'glTexParameteri\'.",auStack_48);
  }
  else {
    dVar3 = (double)tolua_tonumber(0,param_1,1);
    dVar4 = (double)tolua_tonumber(0,param_1,2);
    dVar5 = (double)tolua_tonumber(0,param_1,3);
    glTexParameteri((int)dVar3,(int)dVar4,(int)dVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

