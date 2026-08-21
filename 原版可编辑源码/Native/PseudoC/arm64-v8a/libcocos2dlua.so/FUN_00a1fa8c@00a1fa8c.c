
void FUN_00a1fa8c(undefined8 param_1,byte *param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte local_3c;
  byte local_3b;
  long local_38;
  
  lVar2 = tpidr_el0;
                    /* try { // try from 00a1faa4 to 00b1faaf has its CatchHandler @ 00a1fb18 */
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00a1fab0 to 00b1fb5f has its CatchHandler @ 00a1fa30 */
  if ((param_3 < 0x80) && (param_3 != 0x5c)) {
    *param_2 = (byte)param_3;
    uVar3 = 1;
    goto LAB_00a1fc90;
  }
  if (param_3 == 0x20a9) {
    *param_2 = 0x5c;
    uVar3 = 1;
    goto LAB_00a1fc90;
  }
  if (param_3 - 0x3131 < 0x33) {
    local_3b = (byte)*(undefined2 *)(&DAT_013a5df8 + (ulong)(param_3 - 0x3131) * 2);
    local_3c = (byte)((ushort)*(undefined2 *)(&DAT_013a5df8 + (ulong)(param_3 - 0x3131) * 2) >> 8);
LAB_00a1fbb0:
    if (1 < param_4) {
      *param_2 = local_3c;
      param_2[1] = local_3b;
LAB_00a1fbd0:
      uVar3 = 2;
      goto LAB_00a1fc90;
    }
  }
  else {
    uVar5 = param_3 - 0xac00;
                    /* catch() { ... } // from try @ 00a1faa4 with catch @ 00a1fb18 */
    if (uVar5 >> 2 < 0xae9) {
      uVar1 = uVar5 >> 2 & 0x3fff;
      uVar6 = uVar1 / 7;
      iVar7 = (int)(((ulong)uVar1 / 7) * 0x86186187 >> 0x20);
      local_3c = (byte)(((uint)(byte)(&DAT_013a5e71)
                                     [uVar6 + (iVar7 + (uVar6 - iVar7 >> 1) >> 4) * -0x15] |
                         (uint)(byte)(&DAT_013a5e5e)[(ulong)(uVar5 & 0xffff) / 0x24c] << 5 | 0x400)
                       >> 3);
      local_3b = (&DAT_013a5e86)[(ulong)(uVar5 + uVar6 * -0x1c) & 0xffff] |
                 (&DAT_013a5e71)[uVar6 + (iVar7 + (uVar6 - iVar7 >> 1) >> 4) * -0x15] << 5;
      goto LAB_00a1fbb0;
    }
    uVar3 = FUN_00a15fac(param_1,&local_3c,param_3,2);
    if ((int)uVar3 == -1) goto LAB_00a1fc90;
    if ((int)uVar3 != 2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (1 < param_4) {
      uVar5 = (uint)local_3b;
      if (local_3c - 0x21 < 0xc) {
        if (0x5d < uVar5 - 0x21) {
          uVar3 = 0xffffffff;
          goto LAB_00a1fc90;
        }
      }
      else {
        uVar3 = 0xffffffff;
        if ((0x33 < local_3c - 0x4a) || (0x5d < (uVar5 - 0x21 & 0xff))) goto LAB_00a1fc90;
      }
      iVar7 = 0x191;
      if (0x49 < local_3c) {
        iVar7 = 0x176;
      }
      uVar1 = iVar7 + (uint)local_3c;
      uVar5 = (uVar5 - 0x21) + (-(uVar1 & 1) & 0x5e);
      *param_2 = (byte)(uVar1 >> 1);
      cVar4 = '1';
      if (0x4d < (uVar5 & 0xff)) {
        cVar4 = 'C';
      }
      param_2[1] = cVar4 + (char)uVar5;
      goto LAB_00a1fbd0;
    }
  }
  uVar3 = 0xfffffffe;
LAB_00a1fc90:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

