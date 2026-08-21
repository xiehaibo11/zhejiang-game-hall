
void FUN_00a1d130(undefined8 param_1,ushort *param_2,uint param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  undefined *puVar11;
  undefined2 local_4c;
  long local_48;
  
                    /* try { // try from 00a1d134 to 00b1d147 has its CatchHandler @ 00a1d190 */
                    /* try { // try from 00a1d148 to 00b1d1af has its CatchHandler @ 00a1d054 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_3 < 0x80) {
    *(char *)param_2 = (char)param_3;
    uVar4 = 1;
    goto LAB_00a1d5ec;
  }
  uVar8 = param_3 >> 8;
  if (uVar8 - 0xe0 < 0x17) {
    uVar10 = param_3 - 0xe000;
                    /* catch() { ... } // from try @ 00a1d134 with catch @ 00a1d190 */
    if (0x16b0 < uVar10) goto switchD_00a1d210_caseD_1;
                    /* catch() { ... } // from try @ 00a1d0dc with catch @ 00a1d194 */
    iVar3 = -0x77;
    if (0xeb7 < uVar10) {
      iVar3 = 0x69;
    }
    iVar1 = -6;
    if (0x310 < uVar10) {
      iVar1 = iVar3;
    }
    uVar7 = (uVar10 & 0xffff) / 0x9d;
    uVar10 = uVar10 + uVar7 * -0x9d;
    uVar7 = iVar1 + uVar7;
    cVar9 = '@';
    if (0x3e < (uVar10 & 0xffff)) {
      cVar9 = 'b';
    }
    local_4c = CONCAT11(cVar9 + (char)uVar10,(char)uVar7);
    goto LAB_00a1d408;
  }
  switch(uVar8) {
  case 0:
    if (2 < param_3 - 0xa2) {
      if (param_3 == 0xaf) {
                    /* try { // try from 00a1d228 to 00b1d277 has its CatchHandler @ 00a1d228
                       catch() { ... } // from try @ 00a1d228 with catch @ 00a1d228
                       catch() { ... } // from try @ 00a1d2b0 with catch @ 00a1d228
                       catch() { ... } // from try @ 00a1d2f4 with catch @ 00a1d228 */
        uVar6 = 0xc2a1;
        goto LAB_00a1d620;
      }
      break;
    }
    goto LAB_00a1d5dc;
  case 1:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x23:
  case 0x24:
    break;
  case 2:
                    /* try { // try from 00a1d278 to 00b1d2af has its CatchHandler @ 00a1d334 */
    if (param_3 == 0x2cd) {
      uVar6 = 0xc5a1;
      goto LAB_00a1d620;
    }
    break;
  case 0x20:
    uVar4 = 0xffffffff;
    if ((int)param_3 < 0x203e) {
                    /* try { // try from 00a1d2b0 to 00b1d2df has its CatchHandler @ 00a1d228 */
      if (param_3 == 0x2022) goto LAB_00a1d5ec;
      if (param_3 == 0x2027) {
        uVar6 = 0x45a1;
        goto LAB_00a1d620;
      }
      break;
    }
                    /* catch() { ... } // from try @ 00a1d278 with catch @ 00a1d334
                       catch() { ... } // from try @ 00a1d2e0 with catch @ 00a1d334 */
    if (param_3 == 0x203e) goto LAB_00a1d5ec;
    if (param_3 != 0x20ac) break;
                    /* try { // try from 00a1d350 to 00b1d3ab has its CatchHandler @ 00a1d350
                       catch() { ... } // from try @ 00a1d350 with catch @ 00a1d350
                       catch() { ... } // from try @ 00a1d3e8 with catch @ 00a1d350
                       catch() { ... } // from try @ 00a1d510 with catch @ 00a1d350 */
    local_4c = 0xe1a3;
    uVar5 = 0xa3;
    uVar6 = local_4c;
    goto joined_r0x00a1d62c;
  case 0x22:
    if (0x2294 < (int)param_3) {
      if (param_3 == 0x2295) {
        uVar6 = 0xf2a1;
      }
      else {
        if (param_3 != 0x2299) break;
        uVar6 = 0xf3a1;
      }
      goto LAB_00a1d620;
    }
                    /* try { // try from 00a1d2e0 to 00b1d2f3 has its CatchHandler @ 00a1d334 */
    if (param_3 == 0x2215) {
      uVar6 = 0x41a2;
      goto LAB_00a1d638;
    }
    if (param_3 == 0x223c) goto LAB_00a1d5dc;
    break;
  case 0x25:
    if (param_3 == 0x2574) {
      uVar6 = 0x5aa1;
      goto LAB_00a1d620;
    }
    break;
  case 0x26:
                    /* try { // try from 00a1d2f4 to 00b1d34f has its CatchHandler @ 00a1d228 */
    uVar4 = 0xffffffff;
    if ((param_3 == 0x2609) || (param_3 == 0x2641)) goto LAB_00a1d5ec;
    break;
  default:
    if (uVar8 == 0xfe) {
      if (param_3 == 0xfe68) {
        uVar6 = 0x42a2;
        goto LAB_00a1d638;
      }
      if (param_3 == 0xfe51) {
        uVar6 = 0x4ea1;
        goto LAB_00a1d620;
      }
      break;
    }
    if (uVar8 != 0xff) break;
    if ((int)param_3 < 0xff64) {
      if (param_3 == 0xff0f) {
        uVar6 = 0xfea1;
      }
      else {
        if (param_3 == 0xff3c) {
          uVar6 = 0x40a2;
          goto LAB_00a1d638;
        }
        if (param_3 != 0xff5e) break;
        uVar6 = 0xe3a1;
      }
LAB_00a1d620:
      uVar5 = 0xa1;
      goto joined_r0x00a1d62c;
    }
    switch(param_3) {
    case 0xffe0:
                    /* try { // try from 00a1d3ac to 00b1d3e7 has its CatchHandler @ 00a1d524 */
      uVar6 = 0x46a2;
      break;
    case 0xffe1:
      uVar6 = 0x47a2;
      break;
    case 0xffe2:
    case 0xffe4:
      goto switchD_00a1d210_caseD_1;
    case 0xffe3:
      uVar6 = 0xc3a1;
      goto LAB_00a1d620;
    case 0xffe5:
      uVar6 = 0x44a2;
      break;
    default:
      if (param_3 == 0xff64) goto LAB_00a1d5dc;
      goto switchD_00a1d210_caseD_1;
    }
LAB_00a1d638:
    uVar5 = 0xa2;
    goto joined_r0x00a1d62c;
  }
switchD_00a1d210_caseD_1:
                    /* try { // try from 00a1d3e8 to 00b1d41b has its CatchHandler @ 00a1d350 */
  iVar3 = FUN_00a208f0(&local_4c,param_3);
  if (iVar3 == -1) {
LAB_00a1d428:
    if (param_3 - 0x2500 < 0xa0) {
      uVar8 = (param_3 >> 4) - 0x250;
      puVar11 = &DAT_013938b2;
LAB_00a1d554:
      uVar7 = 1 << (ulong)(param_3 & 0xf);
      uVar10 = (uint)*(ushort *)((long)(puVar11 + (ulong)uVar8 * 4) + 2);
      if ((uVar7 & uVar10) != 0) {
        uVar10 = uVar10 & uVar7 - 1;
        uVar10 = (uVar10 >> 1 & 0x55555555) + (uVar10 & 0x55555555);
        uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
        uVar10 = (uVar10 >> 4 & 0xffffff0f) + (uVar10 & 0xf0f0f0f);
        local_4c = *(ushort *)
                    (&DAT_01393a16 +
                    ((ulong)*(ushort *)(puVar11 + (ulong)uVar8 * 4) +
                    (ulong)((uVar10 & 0xf) + (uVar10 >> 8))) * 2) >> 8 |
                   *(ushort *)
                    (&DAT_01393a16 +
                    ((ulong)*(ushort *)(puVar11 + (ulong)uVar8 * 4) +
                    (ulong)((uVar10 & 0xf) + (uVar10 >> 8))) * 2) << 8;
        if (1 < param_4) {
          *param_2 = local_4c;
          goto LAB_00a1d5e8;
        }
        goto LAB_00a1d5d4;
      }
    }
    else {
      if (param_3 - 0x5800 < 0xc0) {
        uVar8 = (param_3 >> 4) - 0x580;
        puVar11 = &UNK_013938da;
        goto LAB_00a1d554;
      }
      if (uVar8 == 0x5a) {
        uVar8 = (param_3 >> 4) - 0x5a0;
        puVar11 = &UNK_0139390a;
        goto LAB_00a1d554;
      }
      if (param_3 - 0x6000 < 0x60) {
        uVar8 = (param_3 >> 4) - 0x600;
        puVar11 = &UNK_0139394a;
        goto LAB_00a1d554;
      }
      if (param_3 - 0x7800 < 0x90) {
        uVar8 = (param_3 >> 4) - 0x780;
        puVar11 = &UNK_01393962;
        goto LAB_00a1d554;
      }
      if (param_3 - 0x7c00 < 0xb0) {
        uVar8 = (param_3 >> 4) - 0x7c0;
        puVar11 = &UNK_01393986;
        goto LAB_00a1d554;
      }
                    /* try { // try from 00a1d510 to 00b1d53f has its CatchHandler @ 00a1d350 */
      if (param_3 - 0x8800 < 0xd0) {
                    /* catch() { ... } // from try @ 00a1d3ac with catch @ 00a1d524
                       catch() { ... } // from try @ 00a1d41c with catch @ 00a1d524 */
        uVar8 = (param_3 >> 4) - 0x880;
        puVar11 = &UNK_013939b2;
        goto LAB_00a1d554;
      }
      if (param_3 - 0x9200 < 0xc0) {
        uVar8 = (param_3 >> 4) - 0x920;
        puVar11 = &UNK_013939e6;
        goto LAB_00a1d554;
      }
    }
LAB_00a1d5dc:
    uVar4 = 0xffffffff;
  }
  else {
    if (iVar3 != 2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar7 = (uint)(byte)local_4c;
LAB_00a1d408:
    uVar5 = (undefined1)uVar7;
    if ((uVar7 & 0xff) == 199) goto LAB_00a1d428;
    uVar6 = local_4c;
    if ((uVar7 & 0xff) == 0xc6) {
                    /* try { // try from 00a1d41c to 00b1d50f has its CatchHandler @ 00a1d524 */
      if (0xa0 < local_4c._1_1_) goto LAB_00a1d428;
      uVar5 = 0xc6;
    }
joined_r0x00a1d62c:
    local_4c = uVar6;
    if (1 < param_4) {
      *(undefined1 *)param_2 = uVar5;
      local_4c._1_1_ = (byte)(uVar6 >> 8);
      *(byte *)((long)param_2 + 1) = local_4c._1_1_;
LAB_00a1d5e8:
      uVar4 = 2;
      goto LAB_00a1d5ec;
    }
LAB_00a1d5d4:
    uVar4 = 0xfffffffe;
  }
LAB_00a1d5ec:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

