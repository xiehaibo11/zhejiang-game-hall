
undefined8 FUN_008c3e0c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 008c3e28 to 009c3e93 has its CatchHandler @ 008c3ff8 */
  iVar2 = tolua_isnumber(param_1,1,0,auStack_48);
  if (((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_48), iVar2 == 0)) ||
     (iVar2 = tolua_isnoobj(param_1,3,auStack_48), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'glStencilMaskSeparate\'.",auStack_48);
  }
  else {
    dVar3 = (double)tolua_tonumber(0,param_1,1);
    dVar4 = (double)tolua_tonumber(0,param_1,2);
                    /* try { // try from 008c3e94 to 009c3ec3 has its CatchHandler @ 008c3dec */
    glStencilMaskSeparate((int)dVar3,(int)dVar4);
  }
                    /* try { // try from 008c3ec4 to 009c3ecb has its CatchHandler @ 008c3fd8 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

