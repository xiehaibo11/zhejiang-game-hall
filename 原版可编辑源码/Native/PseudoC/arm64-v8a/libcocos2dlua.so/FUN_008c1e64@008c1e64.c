
void FUN_008c1e64(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  void *__s;
  ulong uVar4;
  size_t __n;
  double dVar5;
  undefined8 uVar6;
  undefined4 local_60;
  int local_5c;
  undefined1 auStack_58 [16];
  long local_48;
  
                    /* catch() { ... } // from try @ 008c19bc with catch @ 008c1e64 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar3 = tolua_isnumber(param_1,1,0,auStack_58);
                    /* catch() { ... } // from try @ 008c197c with catch @ 008c1ea0 */
  if ((iVar3 == 0) || (iVar3 = tolua_isnoobj(param_1,2,auStack_58), iVar3 == 0)) {
    tolua_error(param_1,"#ferror in function \'glGetAttachedShaders\'.",auStack_58);
    uVar6 = 0;
    goto LAB_008c1f9c;
  }
  dVar5 = (double)tolua_tonumber(0,param_1,1);
  glGetProgramiv((int)dVar5,0x8b85,&local_5c);
  iVar3 = local_5c;
                    /* catch() { ... } // from try @ 008c18d4 with catch @ 008c1edc */
  __n = (long)local_5c << 2;
  uVar4 = __n;
                    /* catch() { ... } // from try @ 008c1968 with catch @ 008c1eec */
  if ((ulong)(long)local_5c >> 0x3e != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  __s = operator_new__(uVar4,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 008c1930 with catch @ 008c1efc
                       catch() { ... } // from try @ 008c1998 with catch @ 008c1efc
                       catch() { ... } // from try @ 008c19ec with catch @ 008c1efc
                       catch() { ... } // from try @ 008c1aa8 with catch @ 008c1efc
                       catch() { ... } // from try @ 008c1ae0 with catch @ 008c1efc
                       catch() { ... } // from try @ 008c1b18 with catch @ 008c1efc */
  memset(__s,0,__n);
  local_60 = 0;
  glGetAttachedShaders((int)dVar5,iVar3,&local_60,__s);
  lua_createtable(param_1,0,0);
  if (local_5c < 1) {
    if (__s != (void *)0x0) goto LAB_008c1f90;
  }
  else {
    uVar4 = 0;
    do {
      lVar1 = uVar4 * 4;
      uVar4 = uVar4 + 1;
      uVar6 = NEON_ucvtf((ulong)*(uint *)((long)__s + lVar1));
      lua_pushnumber(uVar6,param_1);
      lua_rawseti(param_1,0xfffffffe,uVar4 & 0xffffffff);
    } while ((long)uVar4 < (long)local_5c);
LAB_008c1f90:
    operator_delete__(__s);
  }
  uVar6 = 1;
LAB_008c1f9c:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
                    /* try { // try from 008c1fb0 to 009c2047 has its CatchHandler @ 008c1fb0
                       catch() { ... } // from try @ 008c1fb0 with catch @ 008c1fb0
                       catch() { ... } // from try @ 008c20a0 with catch @ 008c1fb0 */
  return;
}

