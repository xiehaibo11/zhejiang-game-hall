
undefined4 FUN_01053f9c(long *param_1,long *param_2,undefined *param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  char *__s;
  long lVar15;
  long *plVar16;
  code *pcVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  char local_228 [383];
  undefined1 local_a9;
  char acStack_a8 [64];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar7 = lws_get_context();
  lVar15 = *param_2;
  puVar2 = param_3;
  if (param_3 < &UNK_00989680) {
    if (*param_1 == 0) goto LAB_01054014;
LAB_01054048:
    lwsl_hexdump(*param_2,param_3);
  }
  else {
    _lws_log(1,"%s: assert: len %ld\n","lws_handshake_server",param_3);
    if (*param_1 != 0) goto LAB_01054048;
LAB_01054014:
    _lws_log(1,"%s: assert: NULL ah\n","lws_handshake_server");
    lwsl_hexdump(*param_2,param_3);
  }
  do {
    if (puVar2 == (undefined *)0x0) goto LAB_010540bc;
    puVar2 = puVar2 + -1;
    *(uint *)((long)param_1 + 0x2f4) =
         *(uint *)((long)param_1 + 0x2f4) & 0xfffffc00 |
         *(uint *)((long)param_1 + 0x2f4) & 0x1ff | (uint)(puVar2 != (undefined *)0x0) << 9;
    if ((5 < *(byte *)((long)param_1 + 0x2fe)) ||
       ((1 << (ulong)(*(byte *)((long)param_1 + 0x2fe) & 0x1f) & 0x23U) == 0)) {
      _lws_log(1,"%s: bad wsi mode %d\n","lws_handshake_server");
      goto LAB_010543a0;
    }
    puVar12 = (undefined1 *)*param_2;
    *param_2 = (long)(puVar12 + 1);
    iVar5 = FUN_010489ac(param_1,*puVar12);
    if (iVar5 != 0) {
                    /* try { // try from 01054110 to 0115411f has its CatchHandler @ 01054800 */
      if (iVar5 != 2) goto LAB_010543a0;
      bVar4 = true;
      goto LAB_010541f0;
    }
  } while (*(char *)((long)param_1 + 0x36) != '_');
  iVar5 = lws_hdr_total_length(param_1,3);
  if (iVar5 != 0) {
    uVar6 = *(undefined4 *)(param_1[0x45] + 0x1d0);
                    /* try { // try from 01054140 to 01154147 has its CatchHandler @ 010547e0 */
    uVar8 = FUN_01047fa0(param_1,3);
    lVar9 = FUN_01052854(uVar7,uVar6,uVar8);
    if (lVar9 != 0) {
      param_1[0x45] = lVar9;
    }
  }
  if (*(char *)((long)param_1 + 0x2fe) != '\x05') {
                    /* try { // try from 01054168 to 0115416f has its CatchHandler @ 010547b0 */
    lVar9 = param_1[0x45];
    *(long *)(lVar9 + 0x118) = *(long *)(lVar9 + 0x118) + 1;
    if ((*(byte *)((long)param_1 + 0x2f5) >> 2 & 1) == 0) {
                    /* try { // try from 01054184 to 0115418b has its CatchHandler @ 010547ac */
      *(long *)(lVar9 + 0x110) = *(long *)(lVar9 + 0x110) + 1;
      *(uint *)((long)param_1 + 0x2f4) = *(uint *)((long)param_1 + 0x2f4) | 0x400;
    }
  }
  plVar16 = *(long **)(param_1[0x44] + 0x870);
                    /* try { // try from 010541a4 to 011541b7 has its CatchHandler @ 010547b4 */
  if ((plVar16 != (long *)0x0) && (iVar5 = lws_hdr_copy(param_1,local_228,0x17f,0x45), 0 < iVar5)) {
    local_a9 = 0;
    do {
      pcVar10 = strstr(local_228,(char *)plVar16[2]);
      if (pcVar10 != (char *)0x0) {
        __s = (char *)plVar16[3];
                    /* try { // try from 01054368 to 01154373 has its CatchHandler @ 01054810 */
        pcVar11 = strchr(__s,0x20);
        pcVar10 = (char *)0x0;
        if (pcVar11 != (char *)0x0) {
          pcVar10 = pcVar11 + 1;
        }
        iVar5 = atoi(__s);
        lws_return_http_status(param_1,iVar5,pcVar10);
        *(long *)(param_1[0x45] + 0x148) = *(long *)(param_1[0x45] + 0x148) + 1;
        goto LAB_010543a0;
      }
      plVar16 = (long *)*plVar16;
    } while (plVar16 != (long *)0x0);
  }
                    /* try { // try from 010541e0 to 011541e7 has its CatchHandler @ 01054788 */
  iVar5 = lws_hdr_total_length(param_1,0x51);
  if (iVar5 == 0) {
    *(undefined1 *)((long)param_1 + 0x2fe) = 2;
    lws_set_timeout(param_1,0,0);
    iVar5 = lws_hdr_total_length(param_1,5);
    if (iVar5 == 0) {
      lVar15 = *param_1;
                    /* try { // try from 010543d8 to 011543f3 has its CatchHandler @ 01054844 */
      lws_union_transition(param_1,1);
      *(undefined1 *)((long)param_1 + 0x2ff) = 0;
      param_1[8] = 0;
      *param_1 = lVar15;
      uVar6 = FUN_01052dcc(param_1);
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return uVar6;
      }
      goto LAB_010543c8;
    }
    pcVar10 = (char *)FUN_01047fa0(param_1,5);
                    /* try { // try from 010542dc to 011542e7 has its CatchHandler @ 010547c4 */
    iVar5 = strcasecmp(pcVar10,"websocket");
    if (iVar5 == 0) {
      *(long *)(param_1[0x45] + 0x128) = *(long *)(param_1[0x45] + 0x128) + 1;
      if (param_1[0x49] == 0) {
        _lws_log(1,"NULL protocol at lws_read\n");
      }
                    /* try { // try from 01054314 to 01154323 has its CatchHandler @ 01054828 */
      iVar5 = lws_hdr_copy(param_1,local_228,0x7f,0xc);
      if (iVar5 < 0) {
        _lws_log(1,"protocol list too long");
      }
      else {
        iVar5 = lws_hdr_total_length(param_1,0xc);
        local_228[iVar5] = '\0';
        if (local_228[0] != '\0') {
          uVar13 = 0;
          uVar14 = 0;
          bVar4 = false;
          pcVar10 = local_228;
LAB_01054424:
          do {
            if ((local_228[0] != '\0') && (local_228[0] != ',')) {
              if (local_228[0] == ' ') {
                uVar14 = (long)(int)uVar14;
                do {
                  if (bVar4) goto LAB_0105445c;
                  uVar13 = uVar14 + 1;
                  uVar14 = uVar13;
                } while ((uint)uVar13 < 0x3f);
              }
              else {
LAB_0105445c:
                uVar1 = (int)uVar14 + 1;
                uVar14 = (ulong)uVar1;
                pcVar10 = pcVar10 + 1;
                acStack_a8[uVar13] = local_228[0];
                uVar13 = (ulong)(int)uVar1;
                    /* try { // try from 01054470 to 01154477 has its CatchHandler @ 01054838 */
                if (uVar1 < 0x3f) {
                  local_228[0] = *pcVar10;
                  bVar4 = true;
                  goto LAB_01054424;
                }
              }
            }
            acStack_a8[uVar13] = '\0';
                    /* try { // try from 01054478 to 01154587 has its CatchHandler @ 01053f18 */
            puVar18 = *(undefined8 **)(param_1[0x45] + 0x188);
            if (*pcVar10 != '\0') {
              pcVar10 = pcVar10 + 1;
            }
            if (puVar18[1] != 0) {
              uVar13 = 0;
              do {
                if (((char *)*puVar18 != (char *)0x0) &&
                   (iVar5 = strcmp((char *)*puVar18,acStack_a8), iVar5 == 0)) goto LAB_010544fc;
                plVar16 = puVar18 + 8;
                uVar13 = (ulong)((int)uVar13 + 1);
                puVar18 = puVar18 + 7;
              } while (*plVar16 != 0);
            }
            local_228[0] = *pcVar10;
            uVar13 = 0;
            uVar14 = 0;
            bVar4 = false;
          } while (local_228[0] != '\0');
        }
        lVar15 = FUN_01047fa0(param_1,0xc);
        if (lVar15 == 0) {
          uVar13 = (ulong)*(byte *)(param_1[0x45] + 0x201);
          puVar18 = (undefined8 *)(*(long *)(param_1[0x45] + 0x188) + uVar13 * 0x38);
LAB_010544fc:
          param_1[0x49] = (long)puVar18;
          iVar5 = FUN_01042334(param_1);
          if (iVar5 == 0) {
            lVar15 = param_1[0x4e];
            pcVar17 = *(code **)(param_1[0x49] + 8);
            uVar8 = FUN_01047fa0(param_1,0xc);
            iVar5 = (*pcVar17)(param_1,0x14,lVar15,uVar8,0);
            if (iVar5 == 0) {
              if ((*(char *)((long)param_1 + 0x2fd) == '\r') &&
                 (iVar5 = FUN_01055cc0(uVar7,param_1), iVar5 == 0)) {
                FUN_010465a8(param_1,uVar13);
                lVar15 = param_1[6];
                    /* try { // try from 01054588 to 0115459b has its CatchHandler @ 010547a8 */
                lVar21 = param_1[5];
                lVar9 = param_1[4];
                lVar22 = param_1[3];
                lVar19 = param_1[2];
                lVar23 = param_1[1];
                lVar20 = *param_1;
                lws_union_transition(param_1,3);
                param_1[6] = lVar15;
                param_1[5] = lVar21;
                param_1[4] = lVar9;
                param_1[3] = lVar22;
                param_1[2] = lVar19;
                    /* try { // try from 010545c8 to 011545cb has its CatchHandler @ 01054774 */
                param_1[1] = lVar23;
                *param_1 = lVar20;
                FUN_010545f0(param_1);
                if ((*(byte *)((long)param_1 + 0x2f5) >> 1 & 1) == 0) {
                  FUN_01047a8c(param_1);
                  FUN_01047ae8(param_1,1);
                }
                goto LAB_010540bc;
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
    bVar4 = false;
LAB_010541f0:
    lws_set_timeout(param_1,0,0);
                    /* try { // try from 01054218 to 01154223 has its CatchHandler @ 010547dc */
    FUN_01042188(param_1,*(long *)(param_1[0x45] + 0x188) +
                         (ulong)*(byte *)(param_1[0x45] + 0x202) * 0x38);
    iVar5 = (**(code **)(param_1[0x49] + 8))(param_1,0x3e,param_1[0x4e],0,0);
    if (iVar5 == 0) {
      FUN_01047a8c(param_1);
      lws_union_transition(param_1,0xc);
                    /* try { // try from 0105425c to 01154267 has its CatchHandler @ 010547d4 */
      FUN_01047ae8(param_1,1);
      if ((bVar4) &&
         (iVar5 = (**(code **)(param_1[0x49] + 8))(param_1,0x3b,param_1[0x4e],lVar15,param_3),
         iVar5 != 0)) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
          return 1;
        }
        goto LAB_010543c8;
      }
LAB_010540bc:
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return 0;
      }
      goto LAB_010543c8;
    }
  }
LAB_010543a0:
  FUN_01047a8c(param_1);
  FUN_01047ae8(param_1,1);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return 1;
  }
LAB_010543c8:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 010543c8 to 011543d3 has its CatchHandler @ 01054818 */
  __stack_chk_fail();
}

