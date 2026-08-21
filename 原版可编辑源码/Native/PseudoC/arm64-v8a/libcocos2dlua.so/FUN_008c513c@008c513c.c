
undefined8 FUN_008c513c(undefined8 param_1)

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
  iVar2 = tolua_isnumber(param_1,1,0,auStack_48);
                    /* try { // try from 008c5178 to 009c522b has its CatchHandler @ 008c5178
                       catch() { ... } // from try @ 008c5178 with catch @ 008c5178
                       catch() { ... } // from try @ 008c52ac with catch @ 008c5178 */
  if ((((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_48), iVar2 == 0)) ||
      (iVar2 = tolua_isnumber(param_1,3,0,auStack_48), iVar2 == 0)) ||
     (iVar2 = tolua_isnoobj(param_1,4,auStack_48), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'glUniform2i\'.",auStack_48);
  }
  else {
    dVar3 = (double)tolua_tonumber(0,param_1,1);
    dVar4 = (double)tolua_tonumber(0,param_1,2);
    dVar5 = (double)tolua_tonumber(0,param_1,3);
    glUniform2i((int)dVar3,(int)dVar4,(int)dVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 008c522c to 009c525f has its CatchHandler @ 008c532c */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

