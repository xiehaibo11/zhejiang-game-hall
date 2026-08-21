
void FUN_008c20b8(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
                    /* try { // try from 008c20bc to 009c20f7 has its CatchHandler @ 008c20bc
                       catch() { ... } // from try @ 008c20bc with catch @ 008c20bc
                       catch() { ... } // from try @ 008c2108 with catch @ 008c20bc */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isnoobj(param_1,1,auStack_38);
  if (iVar2 == 0) {
                    /* try { // try from 008c2108 to 009c215b has its CatchHandler @ 008c20bc */
    tolua_error(param_1,"#ferror in function \'glGetAttribLocation\'.",auStack_38);
  }
  else {
    iVar3 = glGetError();
    lua_pushnumber((double)iVar3,param_1);
                    /* try { // try from 008c20f8 to 009c2107 has its CatchHandler @ 008c2140 */
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != 0);
}

