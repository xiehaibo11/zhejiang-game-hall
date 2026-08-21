
bool FUN_008c19b8(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  uint local_4c;
  undefined1 auStack_48 [16];
  long local_38;
  
                    /* try { // try from 008c19bc to 009c19c3 has its CatchHandler @ 008c1e64 */
                    /* try { // try from 008c19c4 to 009c19eb has its CatchHandler @ 008c1850 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isnoobj(param_1,1,auStack_48);
  if (iVar2 == 0) {
    tolua_error(param_1,"#ferror in function \'glGenTextures\'.",auStack_48);
  }
  else {
                    /* try { // try from 008c19ec to 009c1a1f has its CatchHandler @ 008c1efc */
    glGenTextures(1,&local_4c);
    uVar3 = NEON_ucvtf((ulong)local_4c);
    tolua_pushnumber(uVar3,param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 008c1a38 to 009c1a3b has its CatchHandler @ 008c1e28 */
                    /* try { // try from 008c1a40 to 009c1a4f has its CatchHandler @ 008c1e24 */
    return iVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 008c1a50 to 009c1a6b has its CatchHandler @ 008c1e0c */
  __stack_chk_fail();
}

