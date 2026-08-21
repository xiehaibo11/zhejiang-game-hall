
undefined8 FUN_008c3c2c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 008c3a54 with catch @ 008c3c54 */
  iVar2 = tolua_isnumber(param_1,1,0,auStack_58);
                    /* try { // try from 008c3c70 to 009c3ccf has its CatchHandler @ 008c3c70
                       catch() { ... } // from try @ 008c3c70 with catch @ 008c3c70
                       catch() { ... } // from try @ 008c3cd8 with catch @ 008c3c70 */
  if ((((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_58), iVar2 == 0)) ||
      (iVar2 = tolua_isnumber(param_1,3,0,auStack_58), iVar2 == 0)) ||
     ((iVar2 = tolua_isnumber(param_1,4,0,auStack_58), iVar2 == 0 ||
      (iVar2 = tolua_isnoobj(param_1,5,auStack_58), iVar2 == 0)))) {
    tolua_error(param_1,"#ferror in function \'glStencilFuncSeparate\'.",auStack_58);
  }
  else {
                    /* try { // try from 008c3cd0 to 009c3cd7 has its CatchHandler @ 008c3d54 */
    dVar3 = (double)tolua_tonumber(0,param_1,1);
                    /* try { // try from 008c3cd8 to 009c3d8b has its CatchHandler @ 008c3c70 */
    dVar4 = (double)tolua_tonumber(0,param_1,2);
    dVar5 = (double)tolua_tonumber(0,param_1,3);
    dVar6 = (double)tolua_tonumber(0,param_1,4);
    glStencilFuncSeparate((int)dVar3,(int)dVar4,(int)dVar5,(int)dVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 008c3cd0 with catch @ 008c3d54 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

