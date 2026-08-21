
undefined4 lws_protocol_init(long param_1)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  char *pcVar10;
  long lVar11;
  undefined1 auStack_378 [544];
  long local_158;
  long local_150;
  long local_130;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0xc98) == 0) {
    lVar11 = *(long *)(param_1 + 0x830);
    *(undefined4 *)(param_1 + 0xc98) = 1;
    memset(auStack_378,0,0x310);
    local_158 = param_1;
    if (lVar11 != 0) {
LAB_00aa7780:
                    /* try { // try from 00aa7780 to 00ba7797 has its CatchHandler @ 00aa7820 */
      bVar3 = *(byte *)(lVar11 + 0x200);
      local_150 = lVar11;
      if ((bVar3 >> 1 & 1) == 0) {
        iVar2 = *(int *)(lVar11 + 0x1dc);
        if (0 < iVar2) {
                    /* try { // try from 00aa7798 to 00ba781b has its CatchHandler @ 00aa7664 */
          lVar4 = 0;
LAB_00aa779c:
          lVar7 = *(long *)(lVar11 + 0x188);
          local_130 = lVar7 + lVar4 * 0x38;
          pcVar10 = *(char **)(lVar7 + lVar4 * 0x38);
          if (pcVar10 != (char *)0x0) {
            for (plVar6 = *(long **)(lVar11 + 0x198); plVar6 != (long *)0x0;
                plVar6 = (long *)*plVar6) {
              iVar2 = strcmp((char *)plVar6[2],pcVar10);
              if (iVar2 == 0) {
                plVar9 = (long *)plVar6[1];
                uVar8 = 0;
                if (plVar9 == (long *)0x0) goto LAB_00aa78b0;
                goto LAB_00aa77fc;
              }
            }
            uVar8 = 0;
            goto LAB_00aa78b0;
          }
          goto LAB_00aa78d8;
        }
        goto LAB_00aa78e8;
      }
      goto LAB_00aa78f0;
    }
LAB_00aa78f8:
    bVar3 = *(byte *)(param_1 + 0xc94);
    *(undefined4 *)(param_1 + 0xc98) = 0;
    if ((bVar3 >> 4 & 1) == 0) {
      lws_finalize_startup(param_1);
      bVar3 = *(byte *)(param_1 + 0xc94);
    }
    uVar5 = 0;
    *(byte *)(param_1 + 0xc94) = bVar3 | 0x10;
LAB_00aa7958:
    if (*(long *)(lVar1 + 0x28) != local_68) goto LAB_00aa796c;
  }
  else {
    uVar5 = 0;
    if (*(long *)(lVar1 + 0x28) != local_68) {
LAB_00aa796c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* try { // try from 00aa7734 to 00ba773b has its CatchHandler @ 00aa7850 */
  return uVar5;
LAB_00aa77fc:
  _lws_log(4,"    vhost \"%s\", protocol \"%s\", option \"%s\"\n",*(undefined8 *)(lVar11 + 0x170),
           pcVar10,plVar9[2]);
  pcVar10 = (char *)plVar9[2];
                    /* try { // try from 00aa781c to 00ba781f has its CatchHandler @ 00aa7820 */
                    /* catch() { ... } // from try @ 00aa7780 with catch @ 00aa7820
                       catch() { ... } // from try @ 00aa781c with catch @ 00aa7820
                       try { // try from 00aa7820 to 00ba786b has its CatchHandler @ 00aa7664 */
  iVar2 = strcmp(pcVar10,"default");
  if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 00aa7734 with catch @ 00aa7850 */
    _lws_log(4,"Setting default protocol for vh %s to %s\n",*(undefined8 *)(lVar11 + 0x170),
             *(undefined8 *)(*(long *)(lVar11 + 0x188) + lVar4 * 0x38));
    *(char *)(lVar11 + 0x201) = (char)lVar4;
                    /* catch() { ... } // from try @ 00aa7950 with catch @ 00aa786c
                       catch() { ... } // from try @ 00aa79a0 with catch @ 00aa786c */
    iVar2 = strcmp((char *)plVar9[2],"raw");
    if (iVar2 != 0) goto LAB_00aa7838;
LAB_00aa7878:
    _lws_log(4,"Setting raw protocol for vh %s to %s\n",*(undefined8 *)(lVar11 + 0x170),
             *(undefined8 *)(*(long *)(lVar11 + 0x188) + lVar4 * 0x38));
    *(char *)(lVar11 + 0x202) = (char)lVar4;
    plVar9 = (long *)*plVar9;
  }
  else {
    iVar2 = strcmp(pcVar10,"raw");
    if (iVar2 == 0) goto LAB_00aa7878;
LAB_00aa7838:
    plVar9 = (long *)*plVar9;
  }
  if (plVar9 == (long *)0x0) goto LAB_00aa78a4;
  pcVar10 = *(char **)(*(long *)(lVar11 + 0x188) + lVar4 * 0x38);
  goto LAB_00aa77fc;
LAB_00aa78a4:
  uVar8 = plVar6[1];
  lVar7 = *(long *)(lVar11 + 0x188);
LAB_00aa78b0:
  iVar2 = (**(code **)(lVar7 + lVar4 * 0x38 + 8))(auStack_378,0x1b,0,uVar8,0);
  if (iVar2 != 0) {
                    /* try { // try from 00aa7938 to 00ba794f has its CatchHandler @ 00aa79a0 */
    uVar5 = 1;
    _lws_log(1,"%s: vhost %s failed init\n","lws_protocol_init",
             *(undefined8 *)(*(long *)(lVar11 + 0x188) + lVar4 * 0x38));
                    /* try { // try from 00aa7950 to 00ba799b has its CatchHandler @ 00aa786c */
    *(undefined4 *)(param_1 + 0xc98) = 0;
    goto LAB_00aa7958;
  }
  iVar2 = *(int *)(lVar11 + 0x1dc);
LAB_00aa78d8:
  lVar4 = lVar4 + 1;
  if (iVar2 <= lVar4) goto code_r0x00aa78e4;
  goto LAB_00aa779c;
code_r0x00aa78e4:
  bVar3 = *(byte *)(lVar11 + 0x200);
LAB_00aa78e8:
  *(byte *)(lVar11 + 0x200) = bVar3 | 2;
LAB_00aa78f0:
  lVar11 = *(long *)(lVar11 + 0x158);
  if (lVar11 == 0) goto LAB_00aa78f8;
  goto LAB_00aa7780;
}

