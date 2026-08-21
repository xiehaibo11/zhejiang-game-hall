
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01049f34 with catch @ 01049ee0
                        */
    local_158 = param_1;
    if (lVar11 != 0) {
LAB_01049f04:
      bVar3 = *(byte *)(lVar11 + 0x200);
      local_150 = lVar11;
      if ((bVar3 >> 1 & 1) == 0) {
        iVar2 = *(int *)(lVar11 + 0x1dc);
        if (0 < iVar2) {
          lVar4 = 0;
LAB_01049f20:
          lVar7 = *(long *)(lVar11 + 0x188);
          local_130 = lVar7 + lVar4 * 0x38;
                    /* try { // try from 01049f2c to 01149f33 has its CatchHandler @ 0104a0a8 */
          pcVar10 = *(char **)(lVar7 + lVar4 * 0x38);
                    /* try { // try from 01049f34 to 0114a0ab has its CatchHandler @ 01049ee0 */
          if (pcVar10 != (char *)0x0) {
            for (plVar6 = *(long **)(lVar11 + 0x198); plVar6 != (long *)0x0;
                plVar6 = (long *)*plVar6) {
              iVar2 = strcmp((char *)plVar6[2],pcVar10);
              if (iVar2 == 0) {
                plVar9 = (long *)plVar6[1];
                uVar8 = 0;
                if (plVar9 == (long *)0x0) goto LAB_0104a034;
                goto LAB_01049f80;
              }
            }
            uVar8 = 0;
            goto LAB_0104a034;
          }
          goto LAB_0104a05c;
        }
        goto LAB_0104a06c;
      }
      goto LAB_0104a074;
    }
LAB_0104a07c:
    bVar3 = *(byte *)(param_1 + 0xc94);
    *(undefined4 *)(param_1 + 0xc98) = 0;
    if ((bVar3 >> 4 & 1) == 0) {
      lws_finalize_startup(param_1);
      bVar3 = *(byte *)(param_1 + 0xc94);
    }
    uVar5 = 0;
    *(byte *)(param_1 + 0xc94) = bVar3 | 0x10;
LAB_0104a0dc:
    if (*(long *)(lVar1 + 0x28) != local_68) goto LAB_0104a0f0;
  }
  else {
    uVar5 = 0;
    if (*(long *)(lVar1 + 0x28) != local_68) {
LAB_0104a0f0:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return uVar5;
LAB_01049f80:
  _lws_log(4,"    vhost \"%s\", protocol \"%s\", option \"%s\"\n",*(undefined8 *)(lVar11 + 0x170),
           pcVar10,plVar9[2]);
  pcVar10 = (char *)plVar9[2];
  iVar2 = strcmp(pcVar10,"default");
  if (iVar2 == 0) {
    _lws_log(4,"Setting default protocol for vh %s to %s\n",*(undefined8 *)(lVar11 + 0x170),
             *(undefined8 *)(*(long *)(lVar11 + 0x188) + lVar4 * 0x38));
    *(char *)(lVar11 + 0x201) = (char)lVar4;
    iVar2 = strcmp((char *)plVar9[2],"raw");
    if (iVar2 != 0) goto LAB_01049fbc;
LAB_01049ffc:
    _lws_log(4,"Setting raw protocol for vh %s to %s\n",*(undefined8 *)(lVar11 + 0x170),
             *(undefined8 *)(*(long *)(lVar11 + 0x188) + lVar4 * 0x38));
    *(char *)(lVar11 + 0x202) = (char)lVar4;
    plVar9 = (long *)*plVar9;
  }
  else {
    iVar2 = strcmp(pcVar10,"raw");
    if (iVar2 == 0) goto LAB_01049ffc;
LAB_01049fbc:
    plVar9 = (long *)*plVar9;
  }
  if (plVar9 == (long *)0x0) goto LAB_0104a028;
  pcVar10 = *(char **)(*(long *)(lVar11 + 0x188) + lVar4 * 0x38);
  goto LAB_01049f80;
LAB_0104a028:
  uVar8 = plVar6[1];
  lVar7 = *(long *)(lVar11 + 0x188);
LAB_0104a034:
  iVar2 = (**(code **)(lVar7 + lVar4 * 0x38 + 8))(auStack_378,0x1b,0,uVar8,0);
  if (iVar2 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01049f2c with catch @ 0104a0a8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0104a100 with catch @ 0104a0ac
                        */
    uVar5 = 1;
    _lws_log(1,"%s: vhost %s failed init\n","lws_protocol_init",
             *(undefined8 *)(*(long *)(lVar11 + 0x188) + lVar4 * 0x38));
    *(undefined4 *)(param_1 + 0xc98) = 0;
    goto LAB_0104a0dc;
  }
  iVar2 = *(int *)(lVar11 + 0x1dc);
LAB_0104a05c:
  lVar4 = lVar4 + 1;
  if (iVar2 <= lVar4) goto code_r0x0104a068;
  goto LAB_01049f20;
code_r0x0104a068:
  bVar3 = *(byte *)(lVar11 + 0x200);
LAB_0104a06c:
  *(byte *)(lVar11 + 0x200) = bVar3 | 2;
LAB_0104a074:
  lVar11 = *(long *)(lVar11 + 0x158);
  if (lVar11 == 0) goto LAB_0104a07c;
  goto LAB_01049f04;
}

