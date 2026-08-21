
undefined8 FUN_008c3a3c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  double dVar3;
  undefined8 local_50;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 008c3a54 to 009c3abf has its CatchHandler @ 008c3c54 */
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isnumber(param_1,1,0,auStack_48);
  if (((iVar2 == 0) || (iVar2 = tolua_isstring(param_1,2,0,auStack_48), iVar2 == 0)) ||
     (iVar2 = tolua_isnoobj(param_1,3,auStack_48), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'glShaderSource\'.",auStack_48);
  }
  else {
    dVar3 = (double)tolua_tonumber(0,param_1,1);
    local_50 = tolua_tostring(param_1,2,&DAT_013c996e);
    glShaderSource((int)dVar3,1,&local_50,0);
  }
                    /* try { // try from 008c3afc to 009c3b0f has its CatchHandler @ 008c3c20 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 008c3b14 to 009c3b7f has its CatchHandler @ 008c3c24 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

