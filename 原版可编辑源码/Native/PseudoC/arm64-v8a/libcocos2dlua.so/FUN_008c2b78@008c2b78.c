
undefined4 FUN_008c2b78(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  double dVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
                    /* try { // try from 008c2b80 to 009c2b87 has its CatchHandler @ 008c2c9c */
                    /* try { // try from 008c2b88 to 009c2bab has its CatchHandler @ 008c2af0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar3 = tolua_isnumber(param_1,1,0,auStack_48);
                    /* try { // try from 008c2bac to 009c2c47 has its CatchHandler @ 008c2cac */
  if ((iVar3 == 0) || (iVar3 = tolua_isnoobj(param_1,2,auStack_48), iVar3 == 0)) {
    tolua_error(param_1,"#ferror in function \'glIsBuffer\'.",auStack_48);
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    dVar5 = (double)tolua_tonumber(0,param_1,1);
    cVar2 = glIsBuffer((int)dVar5);
    lua_pushboolean(param_1,cVar2 != '\0');
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

