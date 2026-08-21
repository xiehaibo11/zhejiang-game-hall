
void FUN_008c1cac(undefined8 param_1)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  uint local_64;
  int local_60;
  int local_5c;
  undefined1 auStack_58 [16];
  long local_48;
  
                    /* try { // try from 008c1cb8 to 009c1cbf has its CatchHandler @ 008c1d94 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar3 = tolua_isnumber(param_1,1,0,auStack_58);
                    /* try { // try from 008c1cf0 to 009c1cf7 has its CatchHandler @ 008c1d90 */
                    /* try { // try from 008c1d00 to 009c1d0f has its CatchHandler @ 008c1d8c */
                    /* try { // try from 008c1d10 to 009c1f17 has its CatchHandler @ 008c1850 */
  if (((iVar3 == 0) || (iVar3 = tolua_isnumber(param_1,2,0,auStack_58), iVar3 == 0)) ||
     (iVar3 = tolua_isnoobj(param_1,3,auStack_58), iVar3 == 0)) {
                    /* catch() { ... } // from try @ 008c1ac0 with catch @ 008c1e04 */
                    /* catch() { ... } // from try @ 008c1ab0 with catch @ 008c1e08 */
                    /* catch() { ... } // from try @ 008c1a50 with catch @ 008c1e0c */
    tolua_error(param_1,"#ferror in function \'glGetActiveUniform\'.",auStack_58);
    uVar8 = 0;
  }
  else {
    dVar6 = (double)tolua_tonumber(0,param_1,1);
    dVar7 = (double)tolua_tonumber(0,param_1,2);
    glGetProgramiv((int)dVar6,0x8b8a,&local_5c);
    uVar5 = (ulong)local_5c;
    if ((long)uVar5 < 0) {
      uVar5 = 0xffffffffffffffff;
    }
    pcVar4 = operator_new__(uVar5,(nothrow_t *)&std::nothrow);
    local_64 = 0xffffffff;
    local_60 = -1;
                    /* catch() { ... } // from try @ 008c1d00 with catch @ 008c1d8c */
    glGetActiveUniform((int)dVar6,(int)dVar7,local_5c,0,&local_60,&local_64,pcVar4);
                    /* catch() { ... } // from try @ 008c1cf0 with catch @ 008c1d90 */
                    /* catch() { ... } // from try @ 008c1cb8 with catch @ 008c1d94 */
                    /* catch() { ... } // from try @ 008c1c84 with catch @ 008c1d98 */
                    /* catch() { ... } // from try @ 008c1c6c with catch @ 008c1d9c */
                    /* catch() { ... } // from try @ 008c1c38 with catch @ 008c1da0 */
    lua_pushnumber((double)(long)local_60,param_1);
                    /* catch() { ... } // from try @ 008c1c18 with catch @ 008c1da4 */
                    /* catch() { ... } // from try @ 008c1c04 with catch @ 008c1da8 */
                    /* catch() { ... } // from try @ 008c1be4 with catch @ 008c1dac */
    uVar8 = NEON_ucvtf((ulong)local_64);
                    /* catch() { ... } // from try @ 008c1bd0 with catch @ 008c1db0 */
    lua_pushnumber(uVar8,param_1);
                    /* catch() { ... } // from try @ 008c1bb0 with catch @ 008c1db4 */
                    /* catch() { ... } // from try @ 008c1b9c with catch @ 008c1db8 */
                    /* catch() { ... } // from try @ 008c1b7c with catch @ 008c1dbc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_80,pcVar4);
    pvVar1 = (void *)((ulong)local_80 | 1);
    if (((byte)local_80[0] & 1) != 0) {
      pvVar1 = local_70;
    }
                    /* catch() { ... } // from try @ 008c1b68 with catch @ 008c1ddc */
    lua_pushstring(param_1,pvVar1);
    if (pcVar4 != (char *)0x0) {
      operator_delete__(pcVar4);
    }
                    /* catch() { ... } // from try @ 008c1b60 with catch @ 008c1dec */
                    /* catch() { ... } // from try @ 008c1b50 with catch @ 008c1df0 */
    if (((byte)local_80[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 008c1b30 with catch @ 008c1df4 */
                    /* catch() { ... } // from try @ 008c1b20 with catch @ 008c1df8 */
      operator_delete(local_70);
    }
                    /* catch() { ... } // from try @ 008c1af8 with catch @ 008c1dfc */
    uVar8 = 3;
                    /* catch() { ... } // from try @ 008c1ae8 with catch @ 008c1e00 */
  }
                    /* catch() { ... } // from try @ 008c1a40 with catch @ 008c1e24 */
                    /* catch() { ... } // from try @ 008c1a38 with catch @ 008c1e28 */
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

