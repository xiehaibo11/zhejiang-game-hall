
void FUN_00a203fc(undefined8 param_1,ushort *param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined2 local_3c;
  long local_38;
  
                    /* try { // try from 00a203fc to 00b2044f has its CatchHandler @ 00a200cc */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((param_3 == 0x2015) || (param_3 == 0x30fb)) {
LAB_00a20440:
    if (0x2bf < param_3 - 0x2000) {
      if (param_3 - 0x2500 < 0x110) {
        uVar6 = (param_3 >> 4) - 0x250;
        puVar8 = &UNK_013313a2;
        goto LAB_00a20598;
      }
      if ((param_3 & 0xffffff00) == 0x3000) {
        uVar6 = (param_3 >> 4) - 0x300;
        puVar8 = &UNK_013313e6;
        goto LAB_00a20598;
      }
                    /* catch() { ... } // from try @ 00a20450 with catch @ 00a20508 */
                    /* catch() { ... } // from try @ 00a20118 with catch @ 00a2050c */
      if (param_3 - 0x3200 < 0x1e0) {
                    /* try { // try from 00a20520 to 00b20787 has its CatchHandler @ 00a20520
                       catch() { ... } // from try @ 00a20520 with catch @ 00a20520
                       catch() { ... } // from try @ 00a20808 with catch @ 00a20520 */
        uVar6 = (param_3 >> 4) - 800;
        puVar8 = &UNK_01331426;
        goto LAB_00a20598;
      }
      if (param_3 - 0x4e00 >> 4 < 0x51b) {
        uVar6 = (param_3 >> 4) - 0x4e0;
        puVar8 = &UNK_0133149e;
        goto LAB_00a20598;
      }
      if (param_3 - 0xf900 < 0x130) {
        uVar6 = (param_3 >> 4) - 0xf90;
        puVar8 = (undefined *)0x133290a;
        goto LAB_00a20598;
      }
      if (param_3 - 0xfe00 < 0x1f0) {
        uVar6 = (param_3 >> 4) - 0xfe0;
        puVar8 = (undefined *)0x1332956;
        goto LAB_00a20598;
      }
LAB_00a20624:
      if (param_3 - 0x2170 < 10) {
        if (param_4 < 2) goto LAB_00a206e8;
        *(byte *)param_2 = 0xa2;
        *(byte *)((long)param_2 + 1) = (char)param_3 + 0x31;
      }
      else {
        if ((param_3 & 0xfffffff0) == 0x140) {
          uVar6 = param_3 - 0x140;
          puVar8 = &DAT_012fccd4;
LAB_00a2069c:
          uVar5 = *(ushort *)(puVar8 + (ulong)uVar6 * 2);
          if (uVar5 != 0) {
            local_3c = uVar5 >> 8 | uVar5 << 8;
            goto joined_r0x00a206b4;
          }
        }
        else {
          uVar6 = param_3 - 0x250;
          if (uVar6 < 0x18) {
            puVar8 = &DAT_013399a4;
            goto LAB_00a2069c;
          }
          uVar6 = param_3 - 0xfe30;
          if (uVar6 < 0x18) {
            puVar8 = &DAT_013399d4;
            goto LAB_00a2069c;
          }
        }
        if (param_3 == 0x2014) {
          if (param_4 < 2) goto LAB_00a206e8;
          uVar5 = 0xaaa1;
        }
        else {
          if (param_3 != 0xb7) {
            uVar4 = 0xffffffff;
            goto LAB_00a206ec;
          }
          if (param_4 < 2) goto LAB_00a206e8;
          uVar5 = 0xa4a1;
        }
LAB_00a20618:
        *param_2 = uVar5;
      }
LAB_00a2061c:
      uVar4 = 2;
      goto LAB_00a206ec;
    }
                    /* try { // try from 00a20450 to 00b20457 has its CatchHandler @ 00a20508 */
    uVar6 = (param_3 >> 4) - 0x200;
                    /* try { // try from 00a20458 to 00b204a7 has its CatchHandler @ 00a200cc */
    puVar8 = &DAT_013312f2;
LAB_00a20598:
    uVar1 = 1 << (ulong)(param_3 & 0xf);
    uVar7 = (uint)*(ushort *)((long)(puVar8 + (ulong)uVar6 * 4) + 2);
    if ((uVar1 & uVar7) == 0) goto LAB_00a20624;
    uVar7 = uVar7 & uVar1 - 1;
    uVar7 = (uVar7 >> 1 & 0x55555555) + (uVar7 & 0x55555555);
    uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
    uVar7 = (uVar7 >> 4 & 0xffffff0f) + (uVar7 & 0xf0f0f0f);
    uVar5 = *(ushort *)
             (((ulong)*(ushort *)(puVar8 + (ulong)uVar6 * 4) + (ulong)((uVar7 & 0xf) + (uVar7 >> 8))
              ) * 2 + 0x13329d2);
    local_3c = uVar5 >> 8 | uVar5 << 8;
joined_r0x00a206b4:
    uVar5 = local_3c;
    if (1 < param_4) goto LAB_00a20618;
  }
  else {
    iVar3 = FUN_00a158bc(param_1,&local_3c,param_3,2);
    if (iVar3 == -1) {
      if (0xdf < param_3 - 0x200) goto LAB_00a20440;
                    /* catch() { ... } // from try @ 00a20258 with catch @ 00a204f8 */
                    /* catch() { ... } // from try @ 00a203e8 with catch @ 00a204fc */
      uVar6 = (param_3 >> 4) - 0x20;
                    /* catch() { ... } // from try @ 00a20300 with catch @ 00a20500 */
      puVar8 = &UNK_013312ba;
                    /* catch() { ... } // from try @ 00a204a8 with catch @ 00a20504 */
      goto LAB_00a20598;
    }
    if (iVar3 != 2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
                    /* try { // try from 00a204a8 to 00b204bb has its CatchHandler @ 00a20504 */
    if (1 < param_4) {
      *(byte *)param_2 = (byte)local_3c ^ 0x80;
                    /* try { // try from 00a204bc to 00b2051f has its CatchHandler @ 00a200cc */
      *(byte *)((long)param_2 + 1) = local_3c._1_1_ ^ 0x80;
      goto LAB_00a2061c;
    }
  }
LAB_00a206e8:
  uVar4 = 0xfffffffe;
LAB_00a206ec:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

