
undefined4 FUN_008c2c38(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  double dVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
                    /* try { // try from 008c2c48 to 009c2c93 has its CatchHandler @ 008c2af0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar3 = tolua_isnumber(param_1,1,0,auStack_48);
  if ((iVar3 == 0) || (iVar3 = tolua_isnoobj(param_1,2,auStack_48), iVar3 == 0)) {
    tolua_error(param_1,"#ferror in function \'glIsEnabled\'.",auStack_48);
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
                    /* try { // try from 008c2c94 to 009c2c9b has its CatchHandler @ 008c2c9c */
    dVar5 = (double)tolua_tonumber(0,param_1,1);
                    /* catch() { ... } // from try @ 008c2b80 with catch @ 008c2c9c
                       catch() { ... } // from try @ 008c2c94 with catch @ 008c2c9c
                       try { // try from 008c2c9c to 009c2ce7 has its CatchHandler @ 008c2af0 */
    cVar2 = glIsEnabled((int)dVar5);
                    /* catch() { ... } // from try @ 008c2bac with catch @ 008c2cac */
    lua_pushboolean(param_1,cVar2 != '\0');
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

