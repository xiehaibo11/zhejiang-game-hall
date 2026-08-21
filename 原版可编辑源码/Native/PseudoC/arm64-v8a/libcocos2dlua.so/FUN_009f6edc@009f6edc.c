
undefined8 FUN_009f6edc(undefined8 param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  undefined2 *puVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  undefined2 uStack_3b;
  undefined1 local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009f6f00 to 00af6f33 has its CatchHandler @ 009f70e0 */
  lVar4 = FUN_009f9a54();
  bVar2 = *(byte *)(lVar4 + 0x484) >> 3 & 3;
  dVar8 = (double)luaL_checknumber(param_1,1);
  uVar6 = (ulong)(uint)(float)dVar8;
  if ((bVar2 == 0) || (-1 < (int)(float)dVar8)) {
    lua_pushnumber((double)uVar6,param_1);
  }
  else {
    if (bVar2 == 2) {
      puVar5 = &uStack_3b;
      local_39 = 0;
      do {
        uVar7 = uVar6 & 0xf;
                    /* try { // try from 009f6fa4 to 00af6fab has its CatchHandler @ 009f70d0 */
        uVar6 = uVar6 >> 4;
        *(char *)((long)puVar5 + 1) = "0123456789ABCDEF"[uVar7];
                    /* try { // try from 009f6fac to 00af701b has its CatchHandler @ 009f7100 */
        puVar5 = (undefined2 *)((long)puVar5 + -1);
      } while (uVar6 != 0);
      *puVar5 = 0x7830;
    }
    else {
      puVar5 = (undefined2 *)&local_39;
      if (bVar2 == 1) {
                    /* try { // try from 009f6f40 to 00af6f47 has its CatchHandler @ 009f70d4 */
                    /* try { // try from 009f6f48 to 00af6f97 has its CatchHandler @ 009f70fc */
        local_39 = 0;
        do {
          bVar3 = 9 < uVar6;
          puVar5 = (undefined2 *)((long)puVar5 + -1);
          *(undefined *)puVar5 = (&DAT_012f5a37)[uVar6 % 10];
          uVar6 = uVar6 / 10;
        } while (bVar3);
      }
    }
    *(undefined1 *)((long)puVar5 + -1) = 0x23;
    lua_pushstring(param_1);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

