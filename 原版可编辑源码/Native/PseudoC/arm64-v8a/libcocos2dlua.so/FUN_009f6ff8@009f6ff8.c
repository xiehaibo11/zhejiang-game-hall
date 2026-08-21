
undefined8 FUN_009f6ff8(undefined8 param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  undefined2 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined2 uStack_3b;
  undefined1 local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009f701c to 00af7043 has its CatchHandler @ 009f6ea0 */
  lVar4 = FUN_009f9a54();
  bVar2 = *(byte *)(lVar4 + 0x484) >> 3 & 3;
  uVar8 = luaL_checknumber(param_1,1);
                    /* try { // try from 009f7044 to 00af7057 has its CatchHandler @ 009f70e0 */
  if ((bVar2 == 0) || (uVar8 + 0x80000000 >> 0x20 == 0)) {
    lua_pushnumber((double)(long)uVar8,param_1);
  }
  else {
    uVar6 = -uVar8;
    if (-1 < (long)uVar8) {
      uVar6 = uVar8;
    }
                    /* try { // try from 009f705c to 00af706f has its CatchHandler @ 009f70fc */
    if (bVar2 == 2) {
      puVar5 = &uStack_3b;
                    /* catch() { ... } // from try @ 009f6f48 with catch @ 009f70fc
                       catch() { ... } // from try @ 009f705c with catch @ 009f70fc */
                    /* catch() { ... } // from try @ 009f6fac with catch @ 009f7100
                       catch() { ... } // from try @ 009f7074 with catch @ 009f7100 */
      local_39 = 0;
      do {
        uVar7 = uVar6 & 0xf;
        uVar6 = uVar6 >> 4;
        *(char *)((long)puVar5 + 1) = "0123456789ABCDEF"[uVar7];
        puVar5 = (undefined2 *)((long)puVar5 + -1);
                    /* try { // try from 009f711c to 00af718b has its CatchHandler @ 009f711c
                       catch() { ... } // from try @ 009f711c with catch @ 009f711c
                       catch() { ... } // from try @ 009f719c with catch @ 009f711c */
      } while (uVar6 != 0);
      *puVar5 = 0x7830;
    }
    else {
      puVar5 = (undefined2 *)&local_39;
      if (bVar2 == 1) {
                    /* try { // try from 009f7074 to 00af7087 has its CatchHandler @ 009f7100 */
        local_39 = 0;
        do {
                    /* try { // try from 009f7088 to 00af711b has its CatchHandler @ 009f6ea0 */
          bVar3 = 9 < uVar6;
          puVar5 = (undefined2 *)((long)puVar5 + -1);
          *(undefined *)puVar5 = (&DAT_012f5a37)[uVar6 % 10];
          uVar6 = uVar6 / 10;
        } while (bVar3);
      }
    }
    if ((long)uVar8 < 0) {
      puVar5 = (undefined2 *)((long)puVar5 + -1);
      *(undefined1 *)puVar5 = 0x2d;
    }
    *(undefined1 *)((long)puVar5 + -1) = 0x23;
    lua_pushstring(param_1);
  }
                    /* catch() { ... } // from try @ 009f6fa4 with catch @ 009f70d0 */
                    /* catch() { ... } // from try @ 009f6f40 with catch @ 009f70d4 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 009f6f00 with catch @ 009f70e0
                       catch() { ... } // from try @ 009f7044 with catch @ 009f70e0 */
  return 1;
}

