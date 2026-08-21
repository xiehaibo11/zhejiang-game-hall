
uint FUN_00fe33c0(basic_string *param_1)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [8];
  ulong local_48;
  int *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_50,param_1);
  uVar5 = (ulong)(byte)local_50[0];
  if (((byte)local_50[0] & 1) == 0) {
    piVar7 = (int *)((ulong)local_50 | 1);
    piVar9 = (int *)((long)piVar7 + (ulong)((byte)local_50[0] >> 1));
                    /* catch() { ... } // from try @ 00fe3448 with catch @ 00fe3404 */
    if (piVar7 != piVar9) {
LAB_00fe341c:
      do {
        iVar4 = toupper((int)(char)*piVar7);
        piVar8 = (int *)((long)piVar7 + 1);
        *(char *)piVar7 = (char)iVar4;
        piVar7 = piVar8;
      } while (piVar9 != piVar8);
      uVar5 = (ulong)(byte)local_50[0];
    }
  }
  else {
    piVar9 = (int *)((long)local_40 + local_48);
    piVar7 = local_40;
    if (local_40 != piVar9) goto LAB_00fe341c;
  }
                    /* try { // try from 00fe3440 to 010e3447 has its CatchHandler @ 00fe34b4 */
  uVar1 = uVar5 >> 1;
  if ((uVar5 & 1) != 0) {
    uVar1 = local_48;
  }
                    /* try { // try from 00fe3448 to 010e34cf has its CatchHandler @ 00fe3404 */
  uVar6 = 1;
  switch(uVar1) {
  case 4:
    piVar9 = (int *)((ulong)local_50 | 1);
    if ((uVar5 & 1) != 0) {
      piVar9 = local_40;
    }
    uVar6 = (uint)(*piVar9 != 0x4f52455a);
    goto joined_r0x00fe3684;
  default:
    goto switchD_00fe346c_caseD_5;
  case 9:
    piVar9 = (int *)((ulong)local_50 | 1);
                    /* catch() { ... } // from try @ 00fe3554 with catch @ 00fe3510 */
    if ((uVar5 & 1) != 0) {
      piVar9 = local_40;
    }
    iVar4 = memcmp(piVar9,"SRC_COLOR",9);
    if (iVar4 == 0) {
      uVar6 = 0x300;
    }
    else {
      iVar4 = memcmp(piVar9,"DST_COLOR",9);
      if (iVar4 == 0) {
        uVar6 = 0x306;
      }
      else {
                    /* try { // try from 00fe354c to 010e3553 has its CatchHandler @ 00fe35c0 */
                    /* try { // try from 00fe3554 to 010e35db has its CatchHandler @ 00fe3510 */
        iVar4 = memcmp(piVar9,"SRC_ALPHA",9);
        if (iVar4 != 0) {
          iVar4 = memcmp(piVar9,"DST_ALPHA",9);
          bVar3 = iVar4 == 0;
          uVar6 = 0x304;
          break;
        }
        uVar6 = 0x302;
      }
    }
joined_r0x00fe3684:
    if ((uVar5 & 1) == 0) goto LAB_00fe35b8;
    goto LAB_00fe35b0;
  case 0xe:
    piVar9 = (int *)((ulong)local_50 | 1);
                    /* catch() { ... } // from try @ 00fe3440 with catch @ 00fe34b4 */
    if ((uVar5 & 1) != 0) {
      piVar9 = local_40;
    }
    iVar4 = memcmp(piVar9,"CONSTANT_ALPHA",0xe);
    bVar3 = iVar4 == 0;
    uVar6 = 0x8003;
    break;
  case 0x12:
    piVar9 = (int *)((ulong)local_50 | 1);
    if ((uVar5 & 1) != 0) {
      piVar9 = local_40;
    }
    iVar4 = memcmp(piVar9,"SRC_ALPHA_SATURATE",0x12);
    bVar3 = iVar4 == 0;
    uVar6 = 0x308;
    break;
  case 0x13:
    piVar9 = (int *)((ulong)local_50 | 1);
    if ((uVar5 & 1) != 0) {
      piVar9 = local_40;
    }
    iVar4 = memcmp(piVar9,"ONE_MINUS_SRC_COLOR",0x13);
    if (iVar4 != 0) {
                    /* try { // try from 00fe3618 to 010e361f has its CatchHandler @ 00fe3694 */
      iVar4 = memcmp(piVar9,"ONE_MINUS_DST_COLOR",0x13);
                    /* try { // try from 00fe3620 to 010e36af has its CatchHandler @ 00fe35dc */
      if (iVar4 == 0) {
        uVar6 = 0x307;
      }
      else {
        iVar4 = memcmp(piVar9,"ONE_MINUS_SRC_ALPHA",0x13);
        if (iVar4 != 0) {
          iVar4 = memcmp(piVar9,"ONE_MINUS_DST_ALPHA",0x13);
          bVar3 = iVar4 == 0;
          uVar6 = 0x305;
          break;
        }
        uVar6 = 0x303;
      }
      goto joined_r0x00fe3684;
    }
    uVar6 = 0x301;
    goto joined_r0x00fe366c;
  case 0x18:
    piVar9 = (int *)((ulong)local_50 | 1);
    if ((uVar5 & 1) != 0) {
      piVar9 = local_40;
    }
    iVar4 = memcmp(piVar9,"ONE_MINUS_CONSTANT_ALPHA",0x18);
    bVar3 = iVar4 == 0;
    uVar6 = 0x8004;
  }
  if (!bVar3) {
    uVar6 = 1;
  }
switchD_00fe346c_caseD_5:
joined_r0x00fe366c:
  if ((uVar5 & 1) != 0) {
LAB_00fe35b0:
    operator_delete(local_40);
  }
LAB_00fe35b8:
                    /* catch() { ... } // from try @ 00fe354c with catch @ 00fe35c0 */
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00fe3620 with catch @ 00fe35dc */
  return uVar6;
}

