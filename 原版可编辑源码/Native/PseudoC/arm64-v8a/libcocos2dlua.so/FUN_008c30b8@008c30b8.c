
undefined8 FUN_008c30b8(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  double dVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008c3138 with catch @ 008c30c8
                       catch(type#1 @ 00000000) { ... } // from try @ 008c3168 with catch @ 008c30c8
                       catch(type#1 @ 00000000) { ... } // from try @ 008c3198 with catch @ 008c30c8
                       catch(type#1 @ 00000000) { ... } // from try @ 008c31c0 with catch @ 008c30c8
                       catch(type#1 @ 00000000) { ... } // from try @ 008c31ec with catch @ 008c30c8
                        */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isnumber(param_1,1,0,auStack_38);
  if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,auStack_38), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'glLineWidth\'.",auStack_38);
  }
  else {
    dVar3 = (double)tolua_tonumber(0,param_1,1);
    glLineWidth((float)dVar3);
  }
                    /* try { // try from 008c3130 to 009c3137 has its CatchHandler @ 008c322c */
                    /* try { // try from 008c3138 to 009c315b has its CatchHandler @ 008c30c8 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

