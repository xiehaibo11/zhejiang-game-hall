
undefined4 FUN_008c1820(undefined8 param_1)

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
                    /* try { // try from 008c1850 to 009c18d3 has its CatchHandler @ 008c1850
                       catch() { ... } // from try @ 008c1850 with catch @ 008c1850
                       catch() { ... } // from try @ 008c19c4 with catch @ 008c1850
                       catch() { ... } // from try @ 008c1a6c with catch @ 008c1850
                       catch() { ... } // from try @ 008c1d10 with catch @ 008c1850 */
  iVar2 = tolua_isnumber(param_1,1,0,auStack_48);
  if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,auStack_48), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'glGenFramebuffers\'.",auStack_48);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    dVar4 = (double)tolua_tonumber(0,param_1,1);
    local_4c = (uint)dVar4;
    glGenFramebuffers(1,&local_4c);
    uVar5 = NEON_ucvtf((ulong)local_4c);
    tolua_pushnumber(uVar5,param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 008c18d4 to 009c18e7 has its CatchHandler @ 008c1edc */
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

