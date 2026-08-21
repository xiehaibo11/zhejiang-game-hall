
undefined8 FUN_008c31f8(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008c3190 with catch @ 008c3228
                       catch(type#1 @ 00000000) { ... } // from try @ 008c31b8 with catch @ 008c3228
                       catch(type#1 @ 00000000) { ... } // from try @ 008c31e0 with catch @ 008c3228
                        */
  iVar2 = tolua_isnumber(param_1,1,0,auStack_48);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008c3130 with catch @ 008c322c
                       catch(type#1 @ 00000000) { ... } // from try @ 008c315c with catch @ 008c322c
                        */
  if (((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_48), iVar2 == 0)) ||
     (iVar2 = tolua_isnoobj(param_1,3,auStack_48), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'glPixelStorei\'.",auStack_48);
  }
  else {
    dVar3 = (double)tolua_tonumber(0,param_1,1);
    dVar4 = (double)tolua_tonumber(0,param_1,2);
    glPixelStorei((int)dVar3,(int)dVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

