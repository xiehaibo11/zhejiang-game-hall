
byte * iconv_canonicalize(byte *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  byte *pbVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long *__s1;
  long *plVar8;
  long local_90 [7];
  long local_58;
  
                    /* try { // try from 00a0f798 to 00b0f7a3 has its CatchHandler @ 00a0f95c */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar6 = (uint)(char)*param_1;
  if ((char)*param_1 < '\0') {
LAB_00a0f8b4:
    if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return param_1;
  }
  iVar3 = 0x38;
  pbVar4 = param_1;
  plVar8 = local_90;
LAB_00a0f7dc:
  do {
    uVar1 = uVar6 - 0x20;
    if (0x19 < (uVar6 - 0x61 & 0xff)) {
      uVar1 = uVar6;
    }
    *(char *)plVar8 = (char)uVar1;
    if ((uVar1 & 0xff) == 0) {
      do {
        uVar7 = (long)plVar8 - (long)local_90;
                    /* try { // try from 00a0f834 to 00b0f83f has its CatchHandler @ 00a0f958 */
        if ((long)uVar7 < 10) {
          if ((long)uVar7 < 8) goto LAB_00a0f858;
LAB_00a0f81c:
          __s1 = plVar8 + -1;
          if (*__s1 != 0x45524f4e47492f2f) goto LAB_00a0f858;
        }
        else {
          __s1 = (long *)((long)plVar8 + -10);
                    /* try { // try from 00a0f840 to 00b0f84f has its CatchHandler @ 00a0f948 */
          iVar3 = memcmp(__s1,(void *)0x12fc39d,10);
          if (iVar3 != 0) goto LAB_00a0f81c;
        }
        *(undefined1 *)__s1 = 0;
        plVar8 = __s1;
      } while( true );
    }
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) break;
    pbVar4 = pbVar4 + 1;
    uVar6 = (uint)(char)*pbVar4;
                    /* try { // try from 00a0f808 to 00b0f80f has its CatchHandler @ 00a0f910 */
    plVar8 = (long *)((long)plVar8 + 1);
  } while (-1 < (int)uVar6);
  goto LAB_00a0f8b4;
LAB_00a0f858:
  if ((char)local_90[0] != '\0') {
    lVar5 = aliases_lookup(local_90,uVar7 & 0xffffffff);
    if (lVar5 == 0) goto LAB_00a0f8b4;
    if (*(uint *)(lVar5 + 4) != 0x6f) {
                    /* try { // try from 00a0f8b0 to 00b0f9df has its CatchHandler @ 00a0f620 */
      param_1 = &DAT_012fb5a0 + *(ushort *)(&DAT_012fc3b2 + (ulong)*(uint *)(lVar5 + 4) * 2);
      goto LAB_00a0f8b4;
    }
  }
  pbVar4 = (byte *)locale_charset();
  uVar6 = (uint)*pbVar4;
                    /* try { // try from 00a0f888 to 00b0f8af has its CatchHandler @ 00a0f97c */
  if ((uVar6 == 0) || (iVar3 = 0x38, plVar8 = local_90, (char)*pbVar4 < '\0')) goto LAB_00a0f8b4;
  goto LAB_00a0f7dc;
}

