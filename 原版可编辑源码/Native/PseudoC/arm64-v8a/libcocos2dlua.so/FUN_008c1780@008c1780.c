
bool FUN_008c1780(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  uint local_4c;
  undefined1 auStack_48 [16];
  long local_38;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008c176c with catch @ 008c1780
                        */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isnoobj(param_1,1,auStack_48);
  if (iVar2 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008c17c0 with catch @ 008c17dc
                        */
    tolua_error(param_1,"#ferror in function \'glGenBuffers\'.",auStack_48);
  }
  else {
    local_4c = 0;
                    /* try { // try from 008c17c0 to 009c17c3 has its CatchHandler @ 008c17dc */
    glGenBuffers(1,&local_4c);
    uVar3 = NEON_ucvtf((ulong)local_4c);
    tolua_pushnumber(uVar3,param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return iVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

