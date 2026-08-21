
undefined4 FUN_00ab1818(long *param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  char *__s;
  long lVar14;
  long *plVar15;
  code *pcVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  char local_228 [383];
  undefined1 local_a9;
  char acStack_a8 [64];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar6 = lws_get_context();
  lVar14 = *param_2;
  uVar12 = param_3;
  if (param_3 < 10000000) {
    if (*param_1 == 0) goto LAB_00ab1890;
LAB_00ab18c4:
    lwsl_hexdump(*param_2,param_3);
  }
  else {
    _lws_log(1,"%s: assert: len %ld\n","lws_handshake_server",param_3);
    if (*param_1 != 0) goto LAB_00ab18c4;
LAB_00ab1890:
    _lws_log(1,"%s: assert: NULL ah\n","lws_handshake_server");
    lwsl_hexdump(*param_2,param_3);
  }
  do {
    if (uVar12 == 0) goto LAB_00ab1938;
    uVar12 = uVar12 - 1;
    *(uint *)((long)param_1 + 0x2f4) =
         *(uint *)((long)param_1 + 0x2f4) & 0xfffffc00 |
         *(uint *)((long)param_1 + 0x2f4) & 0x1ff | (uint)(uVar12 != 0) << 9;
    if ((5 < *(byte *)((long)param_1 + 0x2fe)) ||
       ((1 << (ulong)(*(byte *)((long)param_1 + 0x2fe) & 0x1f) & 0x23U) == 0)) {
      _lws_log(1,"%s: bad wsi mode %d\n","lws_handshake_server");
      goto LAB_00ab1c1c;
    }
    puVar11 = (undefined1 *)*param_2;
    *param_2 = (long)(puVar11 + 1);
    iVar4 = FUN_00aa6228(param_1,*puVar11);
    if (iVar4 != 0) {
      if (iVar4 != 2) goto LAB_00ab1c1c;
      bVar3 = true;
      goto LAB_00ab1a6c;
    }
  } while (*(char *)((long)param_1 + 0x36) != '_');
  iVar4 = lws_hdr_total_length(param_1,3);
  if (iVar4 != 0) {
    uVar5 = *(undefined4 *)(param_1[0x45] + 0x1d0);
    uVar7 = FUN_00aa581c(param_1,3);
    lVar8 = FUN_00ab00d0(uVar6,uVar5,uVar7);
    if (lVar8 != 0) {
      param_1[0x45] = lVar8;
    }
  }
  if (*(char *)((long)param_1 + 0x2fe) != '\x05') {
    lVar8 = param_1[0x45];
    *(long *)(lVar8 + 0x118) = *(long *)(lVar8 + 0x118) + 1;
    if ((*(byte *)((long)param_1 + 0x2f5) >> 2 & 1) == 0) {
      *(long *)(lVar8 + 0x110) = *(long *)(lVar8 + 0x110) + 1;
      *(uint *)((long)param_1 + 0x2f4) = *(uint *)((long)param_1 + 0x2f4) | 0x400;
    }
  }
  plVar15 = *(long **)(param_1[0x44] + 0x870);
  if ((plVar15 != (long *)0x0) && (iVar4 = lws_hdr_copy(param_1,local_228,0x17f,0x45), 0 < iVar4)) {
    local_a9 = 0;
    do {
      pcVar9 = strstr(local_228,(char *)plVar15[2]);
      if (pcVar9 != (char *)0x0) {
        __s = (char *)plVar15[3];
        pcVar10 = strchr(__s,0x20);
        pcVar9 = (char *)0x0;
        if (pcVar10 != (char *)0x0) {
          pcVar9 = pcVar10 + 1;
        }
        iVar4 = atoi(__s);
        lws_return_http_status(param_1,iVar4,pcVar9);
                    /* try { // try from 00ab1c18 to 00bb1ce7 has its CatchHandler @ 00ab1c18
                       catch() { ... } // from try @ 00ab1c18 with catch @ 00ab1c18
                       catch() { ... } // from try @ 00ab1d44 with catch @ 00ab1c18 */
        *(long *)(param_1[0x45] + 0x148) = *(long *)(param_1[0x45] + 0x148) + 1;
        goto LAB_00ab1c1c;
      }
      plVar15 = (long *)*plVar15;
    } while (plVar15 != (long *)0x0);
  }
  iVar4 = lws_hdr_total_length(param_1,0x51);
  if (iVar4 == 0) {
                    /* catch() { ... } // from try @ 00ab1b0c with catch @ 00ab1b2c */
    *(undefined1 *)((long)param_1 + 0x2fe) = 2;
    lws_set_timeout(param_1,0,0);
                    /* catch() { ... } // from try @ 00ab1b00 with catch @ 00ab1b3c */
    iVar4 = lws_hdr_total_length(param_1,5);
    if (iVar4 == 0) {
      lVar14 = *param_1;
      lws_union_transition(param_1,1);
      *(undefined1 *)((long)param_1 + 0x2ff) = 0;
      param_1[8] = 0;
      *param_1 = lVar14;
      uVar5 = FUN_00ab0648(param_1);
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return uVar5;
      }
      goto LAB_00ab1c44;
    }
    pcVar9 = (char *)FUN_00aa581c(param_1,5);
    iVar4 = strcasecmp(pcVar9,"websocket");
    if (iVar4 == 0) {
      *(long *)(param_1[0x45] + 0x128) = *(long *)(param_1[0x45] + 0x128) + 1;
      if (param_1[0x49] == 0) {
        _lws_log(1,"NULL protocol at lws_read\n");
      }
      iVar4 = lws_hdr_copy(param_1,local_228,0x7f,0xc);
      if (iVar4 < 0) {
        _lws_log(1,"protocol list too long");
      }
      else {
        iVar4 = lws_hdr_total_length(param_1,0xc);
        local_228[iVar4] = '\0';
        if (local_228[0] != '\0') {
          uVar12 = 0;
          uVar13 = 0;
          bVar3 = false;
          pcVar9 = local_228;
LAB_00ab1ca0:
          do {
            if ((local_228[0] != '\0') && (local_228[0] != ',')) {
              if (local_228[0] == ' ') {
                uVar13 = (long)(int)uVar13;
                do {
                  if (bVar3) goto LAB_00ab1cd8;
                  uVar12 = uVar13 + 1;
                  uVar13 = uVar12;
                } while ((uint)uVar12 < 0x3f);
              }
              else {
LAB_00ab1cd8:
                uVar1 = (int)uVar13 + 1;
                uVar13 = (ulong)uVar1;
                pcVar9 = pcVar9 + 1;
                acStack_a8[uVar12] = local_228[0];
                    /* try { // try from 00ab1ce8 to 00bb1cfb has its CatchHandler @ 00ab1e14 */
                uVar12 = (ulong)(int)uVar1;
                if (uVar1 < 0x3f) {
                  local_228[0] = *pcVar9;
                  bVar3 = true;
                  goto LAB_00ab1ca0;
                }
              }
            }
            acStack_a8[uVar12] = '\0';
            puVar17 = *(undefined8 **)(param_1[0x45] + 0x188);
            if (*pcVar9 != '\0') {
              pcVar9 = pcVar9 + 1;
            }
            if (puVar17[1] != 0) {
              uVar12 = 0;
              do {
                if (((char *)*puVar17 != (char *)0x0) &&
                   (iVar4 = strcmp((char *)*puVar17,acStack_a8), iVar4 == 0)) goto LAB_00ab1d78;
                plVar15 = puVar17 + 8;
                uVar12 = (ulong)((int)uVar12 + 1);
                    /* try { // try from 00ab1d34 to 00bb1d43 has its CatchHandler @ 00ab1e08 */
                puVar17 = puVar17 + 7;
              } while (*plVar15 != 0);
            }
            local_228[0] = *pcVar9;
            uVar12 = 0;
                    /* try { // try from 00ab1d44 to 00bb1e2b has its CatchHandler @ 00ab1c18 */
            uVar13 = 0;
            bVar3 = false;
          } while (local_228[0] != '\0');
        }
        lVar14 = FUN_00aa581c(param_1,0xc);
        if (lVar14 == 0) {
          uVar12 = (ulong)*(byte *)(param_1[0x45] + 0x201);
          puVar17 = (undefined8 *)(*(long *)(param_1[0x45] + 0x188) + uVar12 * 0x38);
LAB_00ab1d78:
          param_1[0x49] = (long)puVar17;
          iVar4 = FUN_00a9fbb0(param_1);
          if (iVar4 == 0) {
            lVar14 = param_1[0x4e];
            pcVar16 = *(code **)(param_1[0x49] + 8);
            uVar7 = FUN_00aa581c(param_1,0xc);
            iVar4 = (*pcVar16)(param_1,0x14,lVar14,uVar7,0);
            if (iVar4 == 0) {
              if ((*(char *)((long)param_1 + 0x2fd) == '\r') &&
                 (iVar4 = FUN_00ab353c(uVar6,param_1), iVar4 == 0)) {
                FUN_00aa3e24(param_1,uVar12);
                lVar14 = param_1[6];
                    /* catch() { ... } // from try @ 00ab1d34 with catch @ 00ab1e08 */
                lVar20 = param_1[5];
                lVar8 = param_1[4];
                lVar21 = param_1[3];
                lVar18 = param_1[2];
                    /* catch() { ... } // from try @ 00ab1ce8 with catch @ 00ab1e14 */
                lVar22 = param_1[1];
                lVar19 = *param_1;
                lws_union_transition(param_1,3);
                param_1[6] = lVar14;
                param_1[5] = lVar20;
                param_1[4] = lVar8;
                param_1[3] = lVar21;
                param_1[2] = lVar18;
                param_1[1] = lVar22;
                *param_1 = lVar19;
                FUN_00ab1e6c(param_1);
                if ((*(byte *)((long)param_1 + 0x2f5) >> 1 & 1) == 0) {
                  FUN_00aa5308(param_1);
                  FUN_00aa5364(param_1,1);
                }
                goto LAB_00ab1938;
              }
            }
            else {
              _lws_log(2,"User code denied connection\n");
            }
          }
        }
      }
    }
  }
  else {
    bVar3 = false;
LAB_00ab1a6c:
    lws_set_timeout(param_1,0,0);
    FUN_00a9fa04(param_1,*(long *)(param_1[0x45] + 0x188) +
                         (ulong)*(byte *)(param_1[0x45] + 0x202) * 0x38);
                    /* try { // try from 00ab1aa0 to 00bb1aff has its CatchHandler @ 00ab1aa0
                       catch() { ... } // from try @ 00ab1aa0 with catch @ 00ab1aa0
                       catch() { ... } // from try @ 00ab1b14 with catch @ 00ab1aa0 */
    iVar4 = (**(code **)(param_1[0x49] + 8))(param_1,0x3e,param_1[0x4e],0,0);
    if (iVar4 == 0) {
      FUN_00aa5308(param_1);
      lws_union_transition(param_1,0xc);
      FUN_00aa5364(param_1,1);
                    /* try { // try from 00ab1b00 to 00bb1b07 has its CatchHandler @ 00ab1b3c */
      if ((bVar3) &&
         (iVar4 = (**(code **)(param_1[0x49] + 8))(param_1,0x3b,param_1[0x4e],lVar14,param_3),
         iVar4 != 0)) {
                    /* try { // try from 00ab1b0c to 00bb1b13 has its CatchHandler @ 00ab1b2c */
                    /* try { // try from 00ab1b14 to 00bb1b57 has its CatchHandler @ 00ab1aa0 */
        if (*(long *)(lVar2 + 0x28) == local_68) {
          return 1;
        }
        goto LAB_00ab1c44;
      }
LAB_00ab1938:
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return 0;
      }
      goto LAB_00ab1c44;
    }
  }
LAB_00ab1c1c:
  FUN_00aa5308(param_1);
  FUN_00aa5364(param_1,1);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return 1;
  }
LAB_00ab1c44:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

