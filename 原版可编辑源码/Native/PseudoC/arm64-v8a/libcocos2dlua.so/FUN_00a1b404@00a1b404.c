
void FUN_00a1b404(long param_1,char *param_2,uint param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  char local_6c;
  char local_6b;
  char local_6a;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar4 = *(uint *)(param_1 + 0x44);
  uVar5 = uVar4 & 0xff;
  uVar8 = uVar4 >> 8 & 0xff;
  uVar9 = uVar4 >> 0x10;
  if (param_3 < 0x80) {
    local_6c = (char)param_3;
                    /* try { // try from 00a1b460 to 00b1b587 has its CatchHandler @ 00a1b460
                       catch() { ... } // from try @ 00a1b460 with catch @ 00a1b460
                       catch() { ... } // from try @ 00a1b5bc with catch @ 00a1b460 */
    if (local_6c < '\0') goto LAB_00a1b4b0;
    uVar4 = 1;
    if (uVar5 != 0) {
      uVar4 = 2;
    }
    uVar3 = (ulong)uVar4;
    if (uVar3 <= param_4) {
      pcVar6 = param_2;
      if (uVar5 != 0) {
        pcVar6 = param_2 + 1;
        *param_2 = '\x0f';
      }
      *pcVar6 = local_6c;
      if ((param_3 == 0xd) || (param_3 == 10)) {
        uVar8 = 0;
        uVar9 = 0;
      }
      uVar5 = uVar8 << 8 | uVar9 << 0x10;
LAB_00a1b4a8:
      *(uint *)(param_1 + 0x44) = uVar5;
      goto LAB_00a1b608;
    }
    goto LAB_00a1b5fc;
  }
LAB_00a1b4b0:
  iVar2 = FUN_00a158bc(param_1,&local_6c,param_3,2);
  if (iVar2 != -1) {
    if (iVar2 != 2) goto LAB_00a1b668;
    if ((local_6c < '\0') || (local_6b < '\0')) goto LAB_00a1b538;
    uVar3 = (ulong)((uint)(uVar5 != 1) | (uint)(uVar8 != 1) << 2 | 2);
    if (param_4 < uVar3) goto LAB_00a1b5fc;
    pcVar6 = param_2;
    if (uVar8 != 1) {
      pcVar6 = param_2 + 4;
      builtin_strncpy(param_2,"\x1b$)A",4);
    }
    pcVar7 = pcVar6;
    if (uVar5 != 1) {
      pcVar7 = pcVar6 + 1;
      *pcVar6 = '\x0e';
    }
    *pcVar7 = local_6c;
    uVar5 = 0x101;
    pcVar7[1] = local_6b;
LAB_00a1b5c8:
    *(uint *)(param_1 + 0x44) = uVar4 & 0xffff0000 | uVar5;
    goto LAB_00a1b608;
  }
LAB_00a1b538:
  uVar3 = FUN_00a20728(&local_6c,param_3);
  if ((int)uVar3 == -1) goto LAB_00a1b608;
  if ((int)uVar3 != 3) {
LAB_00a1b668:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (local_6c == '\x02') {
    if ((local_6b < '\0') || (local_6a < '\0')) goto LAB_00a1b604;
    uVar4 = 4;
    if (uVar9 != 1) {
      uVar4 = 8;
    }
    uVar3 = (ulong)uVar4;
                    /* catch() { ... } // from try @ 00a1b588 with catch @ 00a1b5f8 */
    if (uVar3 <= param_4) {
      pcVar6 = param_2;
      if (uVar9 != 1) {
        pcVar6 = param_2 + 4;
        builtin_strncpy(param_2,"\x1b$*H",4);
      }
      pcVar6[2] = local_6b;
      uVar5 = uVar5 | uVar8 << 8 | 0x10000;
      pcVar6[3] = local_6a;
      pcVar6[0] = '\x1b';
      pcVar6[1] = 'N';
      goto LAB_00a1b4a8;
    }
  }
  else {
    if (((local_6c != '\x01') || (local_6b < '\0')) || (local_6a < '\0')) {
LAB_00a1b604:
      uVar3 = 0xffffffff;
      goto LAB_00a1b608;
    }
                    /* try { // try from 00a1b588 to 00b1b5bb has its CatchHandler @ 00a1b5f8 */
    uVar3 = (ulong)((uint)(uVar5 != 1) | (uint)(uVar8 != 2) << 2 | 2);
    if (uVar3 <= param_4) {
      pcVar6 = param_2;
      if (uVar8 != 2) {
        pcVar6 = param_2 + 4;
        builtin_strncpy(param_2,"\x1b$)G",4);
      }
      pcVar7 = pcVar6;
      if (uVar5 != 1) {
        pcVar7 = pcVar6 + 1;
        *pcVar6 = '\x0e';
      }
                    /* try { // try from 00a1b5bc to 00b1b613 has its CatchHandler @ 00a1b460 */
      *pcVar7 = local_6b;
      pcVar7[1] = local_6a;
      uVar5 = 0x201;
      goto LAB_00a1b5c8;
    }
  }
LAB_00a1b5fc:
  uVar3 = 0xfffffffe;
LAB_00a1b608:
                    /* try { // try from 00a1b614 to 00b1b66f has its CatchHandler @ 00a1b614
                       catch() { ... } // from try @ 00a1b614 with catch @ 00a1b614
                       catch() { ... } // from try @ 00a1b678 with catch @ 00a1b614 */
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

