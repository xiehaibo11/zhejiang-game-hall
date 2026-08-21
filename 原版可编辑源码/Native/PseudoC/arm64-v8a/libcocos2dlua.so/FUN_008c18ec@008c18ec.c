
undefined4 FUN_008c18ec(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  double dVar4;
  undefined8 uVar5;
  uint local_4c;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isnumber(param_1,1,0,auStack_48);
                    /* try { // try from 008c1930 to 009c1963 has its CatchHandler @ 008c1efc */
  if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,auStack_48), iVar2 == 0)) {
                    /* try { // try from 008c197c to 009c1987 has its CatchHandler @ 008c1ea0 */
    tolua_error(param_1,"#ferror in function \'glGenRenderbuffers\'.",auStack_48);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    dVar4 = (double)tolua_tonumber(0,param_1,1);
    local_4c = (uint)dVar4;
    glGenRenderbuffers(1,&local_4c);
                    /* try { // try from 008c1968 to 009c197b has its CatchHandler @ 008c1eec */
    uVar5 = NEON_ucvtf((ulong)local_4c);
    tolua_pushnumber(uVar5,param_1);
  }
                    /* try { // try from 008c1998 to 009c199b has its CatchHandler @ 008c1efc */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

