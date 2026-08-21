
undefined8 FUN_008c3670(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 008c3684 to 009c368b has its CatchHandler @ 008c37fc */
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 008c368c to 009c370b has its CatchHandler @ 008c3454 */
  iVar2 = tolua_isnoobj(param_1,1,auStack_38);
  if (iVar2 == 0) {
    tolua_error(param_1,"#ferror in function \'glReleaseShaderCompiler\'.",auStack_38);
  }
  else {
    glReleaseShaderCompiler();
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

