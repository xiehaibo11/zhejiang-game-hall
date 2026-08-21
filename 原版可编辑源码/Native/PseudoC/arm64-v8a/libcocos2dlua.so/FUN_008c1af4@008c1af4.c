
void FUN_008c1af4(undefined8 param_1)

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
  
                    /* try { // try from 008c1af8 to 009c1b07 has its CatchHandler @ 008c1dfc */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 008c1b18 to 009c1b1b has its CatchHandler @ 008c1efc */
                    /* try { // try from 008c1b20 to 009c1b2f has its CatchHandler @ 008c1df8 */
  iVar3 = tolua_isnumber(param_1,1,0,auStack_58);
                    /* try { // try from 008c1b30 to 009c1b3f has its CatchHandler @ 008c1df4 */
                    /* try { // try from 008c1b50 to 009c1b53 has its CatchHandler @ 008c1df0 */
  if (((iVar3 == 0) || (iVar3 = tolua_isnumber(param_1,2,0,auStack_58), iVar3 == 0)) ||
     (iVar3 = tolua_isnoobj(param_1,3,auStack_58), iVar3 == 0)) {
    tolua_error(param_1,"#ferror in function \'glGetActiveAttrib\'.",auStack_58);
    uVar8 = 0;
  }
  else {
                    /* try { // try from 008c1b60 to 009c1b67 has its CatchHandler @ 008c1dec */
                    /* try { // try from 008c1b68 to 009c1b7b has its CatchHandler @ 008c1ddc */
    dVar6 = (double)tolua_tonumber(0,param_1,1);
                    /* try { // try from 008c1b7c to 009c1b8b has its CatchHandler @ 008c1dbc */
    dVar7 = (double)tolua_tonumber(0,param_1,2);
    glGetProgramiv((int)dVar6,0x8b8a,&local_5c);
    uVar5 = (ulong)local_5c;
                    /* try { // try from 008c1b9c to 009c1baf has its CatchHandler @ 008c1db8 */
    if ((long)uVar5 < 0) {
      uVar5 = 0xffffffffffffffff;
    }
    pcVar4 = operator_new__(uVar5,(nothrow_t *)&std::nothrow);
                    /* try { // try from 008c1bb0 to 009c1bbf has its CatchHandler @ 008c1db4 */
                    /* try { // try from 008c1bd0 to 009c1be3 has its CatchHandler @ 008c1db0 */
    local_64 = 0xffffffff;
    local_60 = -1;
    glGetActiveAttrib((int)dVar6,(int)dVar7,local_5c,0,&local_60,&local_64,pcVar4);
                    /* try { // try from 008c1be4 to 009c1bf3 has its CatchHandler @ 008c1dac */
    lua_pushnumber((double)(long)local_60,param_1);
    uVar8 = NEON_ucvtf((ulong)local_64);
    lua_pushnumber(uVar8,param_1);
                    /* try { // try from 008c1c04 to 009c1c17 has its CatchHandler @ 008c1da8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_80,pcVar4);
                    /* try { // try from 008c1c18 to 009c1c27 has its CatchHandler @ 008c1da4 */
    pvVar1 = (void *)((ulong)local_80 | 1);
    if (((byte)local_80[0] & 1) != 0) {
      pvVar1 = local_70;
    }
    lua_pushstring(param_1,pvVar1);
    if (pcVar4 != (char *)0x0) {
      operator_delete__(pcVar4);
    }
                    /* try { // try from 008c1c38 to 009c1c4f has its CatchHandler @ 008c1da0 */
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    uVar8 = 3;
  }
                    /* try { // try from 008c1c6c to 009c1c73 has its CatchHandler @ 008c1d9c */
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 008c1c84 to 009c1c9b has its CatchHandler @ 008c1d98 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

