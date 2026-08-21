
/* WARNING: Type propagation algorithm not settling */

int FUN_00a2ed1c(long *param_1,undefined1 *param_2)

{
  char *__buf;
  undefined8 *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ssize_t sVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined *puVar14;
  char *pcVar15;
  undefined4 uVar16;
  byte *pbVar17;
  int *piVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  undefined8 *puVar22;
  long lVar23;
  long lVar24;
  undefined4 uVar25;
  int iVar26;
  long lVar27;
  char cVar28;
  undefined4 *puVar29;
  uint uVar30;
  ulong uVar32;
  undefined1 auVar33 [16];
  undefined8 *local_230;
  long local_200;
  undefined4 local_1f8;
  undefined2 local_1f4;
  char local_1ec [4];
  undefined4 local_1e8;
  undefined2 local_1e4;
  ushort local_1e2;
  int local_1e0;
  undefined2 local_1dc;
  ushort local_1da;
  undefined8 local_e8;
  long local_68;
  uint uVar31;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar3 = (undefined4)param_1[0x4c];
  lVar24 = *param_1;
  *param_2 = 1;
  lVar9 = (*(code *)PTR_calloc_01d1b760)(1,0x1ed0);
  if (lVar9 == 0) {
    iVar7 = 0x1b;
  }
  else {
    lVar27 = *param_1;
    *(long *)(lVar27 + 0x218) = lVar9;
    *(undefined4 *)(lVar9 + 0x1ec8) = 0;
    *(long *)(lVar9 + 0x1eb8) = lVar9 + 0x1cb8;
    *(undefined4 *)(lVar9 + 0x814) = 1;
    *(undefined4 *)(lVar9 + 0x1414) = 1;
    *(undefined4 *)(lVar9 + 0x808) = 1;
    *(undefined4 *)(lVar9 + 0x1408) = 1;
    *(undefined4 *)(lVar9 + 0x140c) = 1;
    *(undefined4 *)(lVar9 + 0x1884) = 1;
    piVar21 = *(int **)(lVar24 + 0x218);
    memset(&local_e8,0,0x80);
    memset(&local_1e8,0,0x100);
    if ((char)param_1[0x78] != '\0') {
                    /* try { // try from 00a2ede4 to 00b2eec7 has its CatchHandler @ 00a2ec88 */
      FUN_00a0e7c4(&local_1e8,0x100,"USER,%s",param_1[0x43]);
      lVar10 = FUN_00a16ac0(*(undefined8 *)(lVar9 + 0x1cb0),&local_1e8);
      if (lVar10 == 0) {
        FUN_00a16c3c(*(undefined8 *)(lVar9 + 0x1cb0));
        iVar7 = 0x1b;
        *(undefined8 *)(lVar9 + 0x1cb0) = 0;
        goto LAB_00a303c8;
      }
      *(long *)(lVar9 + 0x1cb0) = lVar10;
      *(undefined4 *)(lVar9 + 0x8a4) = 1;
    }
    puVar22 = *(undefined8 **)(lVar27 + 0x408);
    if (puVar22 != (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 00a2ed08 with catch @ 00a2ee58 */
                    /* catch() { ... } // from try @ 00a2ecfc with catch @ 00a2ee5c */
                    /* catch() { ... } // from try @ 00a2ecdc with catch @ 00a2ee60 */
      puVar1 = (undefined8 *)(lVar9 + 0x1cb0);
                    /* catch() { ... } // from try @ 00a2ed14 with catch @ 00a2ee70 */
LAB_00a2ee7c:
      do {
        iVar7 = sscanf((char *)*puVar22,"%127[^= ]%*[ =]%255s",&local_e8,&local_1e8);
        if (iVar7 != 2) {
LAB_00a2eff4:
          FUN_00a23020(lVar27,"Syntax error in telnet option: %s",*puVar22);
          iVar7 = 0x31;
          goto LAB_00a2f00c;
        }
        iVar7 = FUN_00a33710(&local_e8,"TTYPE");
        if (iVar7 != 0) {
          strncpy((char *)(lVar9 + 0x1c08),(char *)&local_1e8,0x1f);
          *(undefined1 *)(lVar9 + 0x1c27) = 0;
          *(undefined4 *)(lVar9 + 0x868) = 1;
          puVar22 = (undefined8 *)puVar22[1];
joined_r0x00a2eefc:
          if (puVar22 == (undefined8 *)0x0) break;
          goto LAB_00a2ee7c;
        }
        iVar7 = FUN_00a33710(&local_e8,"XDISPLOC");
        if (iVar7 != 0) {
          strncpy((char *)(lVar9 + 0x1c28),(char *)&local_1e8,0x7f);
          *(undefined1 *)(lVar9 + 0x1ca7) = 0;
          *(undefined4 *)(lVar9 + 0x894) = 1;
          puVar22 = (undefined8 *)puVar22[1];
          goto joined_r0x00a2eefc;
        }
        iVar7 = FUN_00a33710(&local_e8,&DAT_01893590);
        if (iVar7 == 0) {
                    /* try { // try from 00a2ef48 to 00b2ef53 has its CatchHandler @ 00a2f0f4 */
          iVar7 = FUN_00a33710(&local_e8,&DAT_0189377b);
          if (iVar7 == 0) {
            iVar7 = FUN_00a33710(&local_e8,"BINARY");
            if (iVar7 == 0) {
              FUN_00a23020(lVar27,"Unknown telnet option %s",*puVar22);
              iVar7 = 0x30;
              goto LAB_00a2f00c;
            }
            iVar7 = atoi((char *)&local_1e8);
            if (iVar7 != 1) {
              *(undefined4 *)(lVar9 + 0x808) = 0;
              *(undefined4 *)(lVar9 + 0x1408) = 0;
            }
            puVar22 = (undefined8 *)puVar22[1];
          }
          else {
                    /* try { // try from 00a2ef54 to 00b2f07f has its CatchHandler @ 00a2f10c */
            iVar7 = sscanf((char *)&local_1e8,"%hu%*[xX]%hu",lVar9 + 0x1ca8,lVar9 + 0x1caa);
            if (iVar7 != 2) goto LAB_00a2eff4;
            *(undefined4 *)(lVar9 + 0x884) = 1;
            puVar22 = (undefined8 *)puVar22[1];
          }
          goto joined_r0x00a2eefc;
        }
                    /* try { // try from 00a2ef1c to 00b2ef33 has its CatchHandler @ 00a2f0fc */
        lVar10 = FUN_00a16ac0(*puVar1,&local_1e8);
        if (lVar10 == 0) {
          iVar7 = 0x1b;
LAB_00a2f00c:
          FUN_00a16c3c(*puVar1);
          *puVar1 = 0;
          goto LAB_00a303c8;
        }
        *(long *)(lVar9 + 0x1cb0) = lVar10;
        *(undefined4 *)(lVar9 + 0x8a4) = 1;
        puVar22 = (undefined8 *)puVar22[1];
      } while (puVar22 != (undefined8 *)0x0);
    }
    local_1e4 = 1;
    __buf = (char *)(lVar24 + 0xb08);
    local_1e8 = uVar3;
    if (*(int *)(lVar24 + 0x2d0) == 0) {
      local_1e0 = fileno(*(FILE **)(lVar24 + 0x8d18));
      uVar25 = 1000;
      iVar26 = 2;
      local_1dc = 1;
    }
    else {
      uVar25 = 100;
      iVar26 = 1;
    }
    local_230 = (undefined8 *)(lVar24 + 0x8d18);
    iVar7 = 0;
    bVar6 = true;
                    /* try { // try from 00a2f080 to 00b2f163 has its CatchHandler @ 00a2eec8 */
    do {
      if (!bVar6) goto LAB_00a303a4;
      iVar8 = FUN_00a15cfc(&local_1e8,iVar26,uVar25);
      if (iVar8 == 0) {
        local_1e2 = 0;
        local_1da = 0;
LAB_00a2f0f4:
                    /* catch() { ... } // from try @ 00a2ef48 with catch @ 00a2f0f4 */
                    /* catch() { ... } // from try @ 00a2ef3c with catch @ 00a2f0f8 */
        local_200 = 0;
                    /* catch() { ... } // from try @ 00a2ef1c with catch @ 00a2f0fc */
        if (iVar26 == 2) {
          if ((local_1da & 1) != 0) {
                    /* try { // try from 00a2f164 to 00b2f1b7 has its CatchHandler @ 00a2f164
                       catch() { ... } // from try @ 00a2f164 with catch @ 00a2f164
                       catch() { ... } // from try @ 00a2f32c with catch @ 00a2f164 */
            sVar11 = read(local_1e0,__buf,0x3fff);
LAB_00a2f17c:
            pcVar15 = __buf;
            local_200 = sVar11;
            if (0 < sVar11) {
              do {
                if (sVar11 == 0) {
                  FUN_00a1b744(lVar24);
                  iVar7 = 0;
                  goto LAB_00a2f154;
                }
                local_1ec[0] = *pcVar15;
                sVar11 = sVar11 + -1;
                if (local_1ec[0] == -1) {
                  lVar9 = 2;
                  local_1ec[1] = 0xff;
                }
                else {
                  lVar9 = 1;
                }
                lVar27 = 0;
                do {
                  local_1f8 = (undefined4)param_1[0x4c];
                    /* try { // try from 00a2f1b8 to 00b2f1cf has its CatchHandler @ 00a2f3a8 */
                  local_1f4 = 4;
                  iVar7 = FUN_00a15cfc(&local_1f8,1,0xffffffff);
                    /* try { // try from 00a2f1d8 to 00b2f1e3 has its CatchHandler @ 00a2f3a4 */
                  if (iVar7 + 1U < 2) {
                    iVar7 = 0x37;
                    goto LAB_00a2f240;
                  }
                  local_e8 = 0;
                    /* try { // try from 00a2f1e4 to 00b2f1ef has its CatchHandler @ 00a2f3a0 */
                    /* try { // try from 00a2f1f0 to 00b2f32b has its CatchHandler @ 00a2f3b8 */
                  iVar7 = FUN_00a232e8(param_1,(int)param_1[0x4c],local_1ec + lVar27,lVar9 - lVar27,
                                       &local_e8);
                } while ((iVar7 == 0) && (lVar27 = local_e8 + lVar27, lVar27 < lVar9));
                pcVar15 = pcVar15 + 1;
              } while (iVar7 == 0);
              goto LAB_00a2f240;
            }
          }
          bVar6 = local_200 == 0;
          lVar9 = *(long *)(lVar24 + 0x358);
        }
        else {
          iVar8 = (**(code **)(lVar24 + 0x8d10))(__buf,1,0x3fff,*local_230);
          sVar11 = (ssize_t)iVar8;
          local_200 = sVar11;
          if (iVar8 == 0x10000000) {
LAB_00a2f240:
            lVar9 = *(long *)(lVar24 + 0x358);
            goto joined_r0x00a30108;
          }
          if (sVar11 != 0x10000001) goto LAB_00a2f17c;
LAB_00a2f154:
          bVar6 = true;
          lVar9 = *(long *)(lVar24 + 0x358);
        }
      }
      else {
        if (iVar8 == -1) goto LAB_00a303a4;
        if ((local_1e2 & 1) == 0) goto LAB_00a2f0f4;
        iVar7 = FUN_00a239f8(param_1,uVar3,__buf,0x3fff,&local_200);
        if (iVar7 != 0) {
          if (iVar7 == 0x51) goto LAB_00a2f154;
          goto LAB_00a2f240;
        }
        if (local_200 < 1) {
          bVar6 = false;
          iVar7 = 0;
          lVar9 = *(long *)(lVar24 + 0x358);
          goto joined_r0x00a2f15c;
        }
        FUN_00a1b6ac(lVar24);
        lVar9 = local_200;
        if (local_200 == 0) {
LAB_00a30110:
          if (*piVar21 != 0) {
            if (piVar21[1] != 0) {
              iVar7 = 0;
              goto LAB_00a2f0f4;
            }
            lVar9 = 0;
            cVar28 = '\0';
            lVar27 = *(long *)(*param_1 + 0x218);
            while( true ) {
              lVar10 = lVar27 + lVar9 * 4;
              if (*(int *)(lVar10 + 0x808) == 1) {
                lVar23 = *param_1;
                lVar19 = *(long *)(lVar23 + 0x218);
                lVar20 = lVar19 + lVar9 * 4;
                iVar7 = *(int *)(lVar20 + 8);
                if (iVar7 == 3) {
                    /* catch() { ... } // from try @ 00a30094 with catch @ 00a30250 */
                  if (*(int *)(lVar20 + 0x408) == 0) {
                    /* catch() { ... } // from try @ 00a30088 with catch @ 00a30254 */
                    /* catch() { ... } // from try @ 00a30068 with catch @ 00a30258 */
                    *(undefined4 *)(lVar20 + 0x408) = 1;
                  }
                }
                else if (iVar7 == 2) {
                  lVar19 = lVar19 + lVar9 * 4;
                    /* catch() { ... } // from try @ 00a300a0 with catch @ 00a30268 */
                  if (*(int *)(lVar19 + 0x408) == 1) {
                    *(undefined4 *)(lVar19 + 0x408) = 0;
                  }
                }
                else if (iVar7 == 0) {
                  *(int *)(lVar20 + 8) = 2;
                    /* try { // try from 00a301dc to 00b302bf has its CatchHandler @ 00a30014 */
                  local_e8._0_3_ = CONCAT12(cVar28,0xfbff);
                  sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
                  if (sVar11 < 0) {
                    puVar13 = (undefined4 *)__errno();
                    FUN_00a23020(lVar23,"Sending data failed (%d)",*puVar13);
                  }
                  if (*(char *)(*param_1 + 0x628) != '\0') {
                    FUN_00a22d58(*param_1,"%s %s %s\n","SENT",&DAT_0189361b,
                                 (&PTR_s_BINARY_01c6d5f8)[lVar9]);
                  }
                }
              }
              if (*(int *)(lVar10 + 0x1408) == 1) {
                lVar19 = *param_1;
                lVar20 = *(long *)(lVar19 + 0x218);
                lVar10 = lVar20 + lVar9 * 4;
                iVar7 = *(int *)(lVar10 + 0xc08);
                if (iVar7 == 3) {
                  if (*(int *)(lVar10 + 0x1008) == 0) {
                    /* try { // try from 00a30340 to 00b3034b has its CatchHandler @ 00a30580 */
                    *(undefined4 *)(lVar10 + 0x1008) = 1;
                  }
                }
                else if (iVar7 == 2) {
                  lVar20 = lVar20 + lVar9 * 4;
                    /* try { // try from 00a3034c to 00b30357 has its CatchHandler @ 00a3057c */
                  if (*(int *)(lVar20 + 0x1008) == 1) {
                    /* try { // try from 00a30358 to 00b304fb has its CatchHandler @ 00a30594 */
                    *(undefined4 *)(lVar20 + 0x1008) = 0;
                  }
                }
                else if (iVar7 == 0) {
                  *(undefined4 *)(lVar10 + 0xc08) = 2;
                    /* try { // try from 00a302c0 to 00b3031f has its CatchHandler @ 00a302c0
                       catch() { ... } // from try @ 00a302c0 with catch @ 00a302c0
                       catch() { ... } // from try @ 00a304fc with catch @ 00a302c0 */
                  local_e8._0_3_ = CONCAT12(cVar28,0xfdff);
                  sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
                  if (sVar11 < 0) {
                    puVar13 = (undefined4 *)__errno();
                    FUN_00a23020(lVar19,"Sending data failed (%d)",*puVar13);
                  }
                  if (*(char *)(*param_1 + 0x628) != '\0') {
                    /* try { // try from 00a30320 to 00b30337 has its CatchHandler @ 00a30584 */
                    FUN_00a22d58(*param_1,"%s %s %s\n","SENT",&DAT_01893625,
                                 (&PTR_s_BINARY_01c6d5f8)[lVar9]);
                  }
                }
              }
              lVar9 = lVar9 + 1;
              if (lVar9 == 0x28) break;
              while (cVar28 = cVar28 + '\x01', lVar9 == 1) {
                lVar9 = 2;
              }
            }
            piVar21[1] = 1;
          }
          iVar7 = 0;
          goto LAB_00a2f0f4;
        }
        lVar10 = *param_1;
        lVar27 = 0;
        puVar29 = *(undefined4 **)(lVar10 + 0x218);
        puVar13 = puVar29 + 0x72e;
        pbVar2 = (byte *)(puVar29 + 0x7ae);
        iVar7 = -1;
        do {
          iVar8 = iVar7;
          if (8 < (uint)puVar29[0x7b2]) goto LAB_00a300bc;
          bVar4 = *(byte *)(lVar24 + 0xb08 + lVar27);
          uVar32 = (ulong)bVar4;
          uVar30 = (uint)bVar4;
          uVar31 = (uint)bVar4;
          switch(puVar29[0x7b2]) {
          case 0:
            if (bVar4 == 0xd) {
              puVar29[0x7b2] = 6;
            }
            else if (bVar4 == 0xff) {
              puVar29[0x7b2] = 1;
                    /* try { // try from 00a2f32c to 00b2f40f has its CatchHandler @ 00a2f164 */
              goto joined_r0x00a2f3c0;
            }
LAB_00a2fc5c:
            iVar8 = (int)lVar27;
            if (-1 < iVar7) {
              iVar8 = iVar7;
            }
            break;
          case 1:
switchD_00a2f30c_caseD_1:
            switch(uVar30) {
            case 0xfa:
              *(undefined4 **)(puVar29 + 0x7ae) = puVar13;
LAB_00a2fbe4:
              uVar16 = 7;
              goto LAB_00a2fc50;
            case 0xfb:
              puVar29[0x7b2] = 2;
              break;
            case 0xfc:
              puVar29[0x7b2] = 3;
              break;
            case 0xfd:
              puVar29[0x7b2] = 4;
              break;
            case 0xfe:
              uVar16 = 5;
LAB_00a2fc50:
                    /* try { // try from 00a2fc50 to 00b2fd3b has its CatchHandler @ 00a2fa3c */
              puVar29[0x7b2] = uVar16;
              break;
            case 0xff:
              puVar29[0x7b2] = 0;
              goto LAB_00a2fc5c;
            default:
              puVar29[0x7b2] = 0;
              if (*(char *)(lVar10 + 0x628) != '\0') {
                if (uVar31 - 0xec < 0x14) {
                  FUN_00a22d58(lVar10,"%s IAC %s\n","RCVD",
                               *(undefined8 *)(&DAT_01c6d558 + (long)(int)(uVar31 - 0xec) * 8));
                }
                else {
                  FUN_00a22d58(lVar10,"%s IAC %d\n","RCVD",uVar32);
                }
              }
            }
            break;
          case 2:
            if (*(char *)(lVar10 + 0x628) != '\0') {
              if (uVar30 < 0x28) {
                pcVar15 = (&PTR_s_BINARY_01c6d5f8)[uVar32];
              }
              else {
                if (uVar31 != 0xff) {
                  FUN_00a22d58(lVar10,"%s %s %d\n","RCVD",&DAT_0189361b,uVar32);
                  goto LAB_00a2f63c;
                }
                pcVar15 = "EXOPL";
              }
                    /* try { // try from 00a2f624 to 00b2f70f has its CatchHandler @ 00a2f410 */
              FUN_00a22d58(lVar10,"%s %s %s\n","RCVD",&DAT_0189361b,pcVar15);
            }
LAB_00a2f63c:
            *puVar29 = 1;
            lVar23 = *param_1;
            lVar20 = *(long *)(lVar23 + 0x218);
            lVar19 = lVar20 + uVar32 * 4;
            iVar7 = *(int *)(lVar19 + 0xc08);
            puVar12 = (undefined4 *)(lVar19 + 0xc08);
            if (iVar7 == 3) {
              if (*(int *)(lVar19 + 0x1008) == 0) {
                lVar20 = lVar20 + 0xc08;
              }
              else {
                if (*(int *)(lVar19 + 0x1008) != 1) goto LAB_00a2fdec;
                lVar20 = lVar20 + 0x1008;
                    /* try { // try from 00a2f710 to 00b2f76f has its CatchHandler @ 00a2f710
                       catch() { ... } // from try @ 00a2f710 with catch @ 00a2f710
                       catch() { ... } // from try @ 00a2f94c with catch @ 00a2f710 */
                *puVar12 = 1;
              }
              *(undefined4 *)(lVar20 + uVar32 * 4) = 0;
              puVar29[0x7b2] = 0;
            }
            else {
              if (iVar7 == 2) {
                lVar20 = lVar20 + uVar32 * 4;
                iVar7 = *(int *)(lVar20 + 0x1008);
                if (iVar7 == 1) {
                  *puVar12 = 3;
                  *(undefined4 *)(lVar20 + 0x1008) = 0;
                  local_e8._0_3_ = CONCAT12(bVar4,0xfeff);
                  sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
                  if (sVar11 < 0) {
                    puVar12 = (undefined4 *)__errno();
                    /* catch() { ... } // from try @ 00a2fac4 with catch @ 00a2fccc */
                    FUN_00a23020(lVar23,"Sending data failed (%d)",*puVar12);
                  }
                    /* catch() { ... } // from try @ 00a2fab8 with catch @ 00a2fcd0 */
                  lVar20 = *param_1;
                    /* catch() { ... } // from try @ 00a2fa98 with catch @ 00a2fcd4 */
                  if (*(char *)(lVar20 + 0x628) != '\0') {
                    if (0x27 < uVar31) goto LAB_00a2fe18;
LAB_00a2fce4:
                    /* catch() { ... } // from try @ 00a2fad0 with catch @ 00a2fce4 */
                    pcVar15 = (&PTR_s_BINARY_01c6d5f8)[uVar32];
LAB_00a2fee8:
                    puVar14 = &DAT_01893628;
                    goto LAB_00a30078;
                  }
                }
                else if (iVar7 == 0) {
                  *puVar12 = 1;
                  puVar29[0x7b2] = 0;
                  break;
                }
              }
              else if (iVar7 == 0) {
                if (*(int *)(lVar20 + uVar32 * 4 + 0x1408) == 1) {
                  *puVar12 = 1;
                  local_e8._0_3_ = CONCAT12(bVar4,0xfdff);
                    /* catch() { ... } // from try @ 00a2f498 with catch @ 00a2f6a0 */
                  sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
                    /* catch() { ... } // from try @ 00a2f48c with catch @ 00a2f6a4 */
                  if (sVar11 < 0) {
                    /* catch() { ... } // from try @ 00a2f46c with catch @ 00a2f6a8 */
                    puVar12 = (undefined4 *)__errno();
                    /* catch() { ... } // from try @ 00a2f4a4 with catch @ 00a2f6b8 */
                    FUN_00a23020(lVar23,"Sending data failed (%d)",*puVar12);
                  }
                  lVar20 = *param_1;
                  if (*(char *)(lVar20 + 0x628) != '\0') {
                    if (uVar31 < 0x28) goto LAB_00a2f8d8;
                    if (uVar30 == 0xff) goto LAB_00a2ffa8;
                    puVar14 = &DAT_01893625;
LAB_00a2fe38:
                    FUN_00a22d58(lVar20,"%s %s %d\n","SENT",puVar14,uVar32);
                  }
                }
                else {
                  local_e8._0_3_ = CONCAT12(bVar4,0xfeff);
                  sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
                  if (sVar11 < 0) {
                    puVar12 = (undefined4 *)__errno();
                    /* try { // try from 00a2f770 to 00b2f787 has its CatchHandler @ 00a2f9d4 */
                    FUN_00a23020(lVar23,"Sending data failed (%d)",*puVar12);
                  }
                  lVar20 = *param_1;
                  if (*(char *)(lVar20 + 0x628) != '\0') {
                    if (uVar31 < 0x28) goto LAB_00a2fce4;
LAB_00a2fe18:
                    if (uVar30 == 0xff) goto LAB_00a2fee0;
                    puVar14 = &DAT_01893628;
                    goto LAB_00a2fe38;
                  }
                }
              }
LAB_00a2fdec:
              puVar29[0x7b2] = 0;
            }
            break;
          case 3:
            if (*(char *)(lVar10 + 0x628) != '\0') {
              if (uVar30 < 0x28) {
                pcVar15 = (&PTR_s_BINARY_01c6d5f8)[uVar32];
              }
              else {
                if (bVar4 != 0xff) {
                  FUN_00a22d58(lVar10,"%s %s %d\n","RCVD",&DAT_01893620,uVar32);
                  goto LAB_00a2f7bc;
                }
                pcVar15 = "EXOPL";
              }
                    /* try { // try from 00a2f79c to 00b2f7a7 has its CatchHandler @ 00a2f9cc */
                    /* try { // try from 00a2f7a8 to 00b2f94b has its CatchHandler @ 00a2f9e4 */
              FUN_00a22d58(lVar10,"%s %s %s\n","RCVD",&DAT_01893620,pcVar15);
            }
LAB_00a2f7bc:
            *puVar29 = 1;
            lVar23 = *param_1;
            lVar20 = *(long *)(lVar23 + 0x218);
            lVar19 = lVar20 + uVar32 * 4;
            iVar7 = *(int *)(lVar19 + 0xc08);
            piVar18 = (int *)(lVar19 + 0xc08);
            if (iVar7 != 3) {
              if (iVar7 == 2) {
                iVar7 = *(int *)(lVar20 + uVar32 * 4 + 0x1008);
                if (iVar7 == 0) {
                  lVar20 = lVar20 + 0xc08;
                }
                else {
                  if (iVar7 != 1) goto LAB_00a2fdec;
                  lVar20 = lVar20 + 0x1008;
                  *piVar18 = 0;
                }
LAB_00a2fde8:
                *(undefined4 *)(lVar20 + uVar32 * 4) = 0;
              }
              else if (iVar7 == 1) {
                *piVar18 = 0;
                local_e8._0_3_ = CONCAT12(bVar4,0xfeff);
                sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
                if (sVar11 < 0) {
                  puVar12 = (undefined4 *)__errno();
                  FUN_00a23020(lVar23,"Sending data failed (%d)",*puVar12);
                }
                lVar20 = *param_1;
                if (*(char *)(lVar20 + 0x628) != '\0') {
                  if (uVar31 < 0x28) goto LAB_00a2fce4;
                  if (uVar31 != 0xff) {
                    puVar14 = &DAT_01893628;
                    goto LAB_00a2ff98;
                  }
LAB_00a2fee0:
                  pcVar15 = "EXOPL";
                  goto LAB_00a2fee8;
                }
              }
              goto LAB_00a2fdec;
            }
            iVar7 = *(int *)(lVar19 + 0x1008);
            if (iVar7 == 1) {
              *piVar18 = 2;
              *(undefined4 *)(lVar19 + 0x1008) = 0;
              local_e8._0_3_ = CONCAT12(bVar4,0xfdff);
              sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
              if (sVar11 < 0) {
                puVar12 = (undefined4 *)__errno();
                FUN_00a23020(lVar23,"Sending data failed (%d)",*puVar12);
              }
              lVar20 = *param_1;
              if (*(char *)(lVar20 + 0x628) == '\0') goto LAB_00a2fdec;
              if (bVar4 < 0x28) {
LAB_00a2f8d8:
                pcVar15 = (&PTR_s_BINARY_01c6d5f8)[uVar32];
              }
              else {
                if (uVar30 != 0xff) {
                  puVar14 = &DAT_01893625;
LAB_00a2ff98:
                  FUN_00a22d58(lVar20,"%s %s %d\n","SENT",puVar14,uVar32);
                  puVar29[0x7b2] = 0;
                    /* catch() { ... } // from try @ 00a2fdc0 with catch @ 00a2ffa4 */
                  break;
                }
LAB_00a2ffa8:
                    /* catch() { ... } // from try @ 00a2fdb4 with catch @ 00a2ffa8 */
                    /* catch() { ... } // from try @ 00a2fd94 with catch @ 00a2ffac */
                pcVar15 = "EXOPL";
              }
                    /* catch() { ... } // from try @ 00a2fdcc with catch @ 00a2ffbc */
              puVar14 = &DAT_01893625;
              goto LAB_00a30078;
            }
LAB_00a2fb60:
            if (iVar7 != 0) goto LAB_00a2fdec;
            *piVar18 = 0;
            puVar29[0x7b2] = 0;
            break;
          case 4:
            if (*(char *)(lVar10 + 0x628) != '\0') {
              if (uVar30 < 0x28) {
                pcVar15 = (&PTR_s_BINARY_01c6d5f8)[uVar32];
              }
              else {
                if (uVar31 != 0xff) {
                  FUN_00a22d58(lVar10,"%s %s %d\n","RCVD",&DAT_01893625,uVar32);
                  goto LAB_00a2f934;
                }
                pcVar15 = "EXOPL";
              }
              FUN_00a22d58(lVar10,"%s %s %s\n","RCVD",&DAT_01893625,pcVar15);
            }
LAB_00a2f934:
            *puVar29 = 1;
            lVar23 = *param_1;
            lVar19 = *(long *)(lVar23 + 0x218);
            lVar20 = lVar19 + uVar32 * 4;
                    /* try { // try from 00a2f94c to 00b2fa3b has its CatchHandler @ 00a2f710 */
            piVar18 = (int *)(lVar20 + 8);
            iVar7 = *piVar18;
            if (iVar7 == 3) {
              iVar7 = *(int *)(lVar20 + 0x408);
              if (iVar7 == 0) {
                *(undefined4 *)(lVar19 + 8 + uVar32 * 4) = 0;
              }
              else {
                    /* catch() { ... } // from try @ 00a2f7a8 with catch @ 00a2f9e4 */
                if (iVar7 == 1) {
                  *piVar18 = 1;
                  *(undefined4 *)(lVar19 + 0x408 + uVar32 * 4) = 0;
                }
              }
            }
            else if (iVar7 == 2) {
              lVar20 = lVar19 + uVar32 * 4;
              iVar7 = *(int *)(lVar20 + 0x408);
              if (iVar7 == 1) {
                *piVar18 = 3;
                *(undefined4 *)(lVar20 + 0x1008) = 0;
                local_e8._0_3_ = CONCAT12(bVar4,0xfcff);
                sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
                if (sVar11 < 0) {
                  puVar12 = (undefined4 *)__errno();
                    /* try { // try from 00a2fd3c to 00b2fd93 has its CatchHandler @ 00a2fd3c
                       catch() { ... } // from try @ 00a2fd3c with catch @ 00a2fd3c
                       catch() { ... } // from try @ 00a2ff2c with catch @ 00a2fd3c */
                  FUN_00a23020(lVar23,"Sending data failed (%d)",*puVar12);
                }
                lVar20 = *param_1;
                if (*(char *)(lVar20 + 0x628) != '\0') {
                  if (uVar31 < 0x28) {
LAB_00a2fd64:
                    pcVar15 = (&PTR_s_BINARY_01c6d5f8)[uVar32];
                  }
                  else {
LAB_00a2fe94:
                    if (bVar4 != 0xff) {
                      FUN_00a22d58(lVar20,"%s %s %d\n","SENT",&DAT_01893620,uVar32);
                      goto LAB_00a300b4;
                    }
                    pcVar15 = "EXOPL";
                  }
                    /* try { // try from 00a30014 to 00b30067 has its CatchHandler @ 00a30014
                       catch() { ... } // from try @ 00a30014 with catch @ 00a30014
                       catch() { ... } // from try @ 00a301dc with catch @ 00a30014 */
                  FUN_00a22d58(lVar20,"%s %s %s\n","SENT",&DAT_01893620,pcVar15);
                }
              }
              else if (iVar7 == 0) {
                *piVar18 = 1;
                goto LAB_00a30044;
              }
            }
            else if (iVar7 == 0) {
              lVar20 = lVar19 + uVar32 * 4;
              if (*(int *)(lVar20 + 0x808) == 1) {
                *piVar18 = 1;
                local_e8._0_3_ = CONCAT12(bVar4,0xfbff);
                sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
                if (sVar11 < 0) {
                  puVar12 = (undefined4 *)__errno();
                  FUN_00a23020(lVar23,"Sending data failed (%d)",*puVar12);
                }
                lVar20 = *param_1;
                if (*(char *)(lVar20 + 0x628) != '\0') {
                  if (bVar4 < 0x28) {
                    /* catch() { ... } // from try @ 00a2f79c with catch @ 00a2f9cc */
                    /* catch() { ... } // from try @ 00a2f790 with catch @ 00a2f9d0 */
                    /* catch() { ... } // from try @ 00a2f770 with catch @ 00a2f9d4 */
                    pcVar15 = (&PTR_s_BINARY_01c6d5f8)[uVar32];
                  }
                  else {
                    if (bVar4 != 0xff) {
                      FUN_00a22d58(lVar20,"%s %s %d\n","SENT",&DAT_0189361b,uVar32);
                    /* try { // try from 00a2ff2c to 00b30013 has its CatchHandler @ 00a2fd3c */
                      goto LAB_00a30044;
                    }
                    pcVar15 = "EXOPL";
                  }
                  FUN_00a22d58(lVar20,"%s %s %s\n","SENT",&DAT_0189361b,pcVar15);
                }
LAB_00a30044:
                if (*(int *)(lVar19 + uVar32 * 4 + 0x1808) == 1) {
LAB_00a300a8:
                  FUN_00a30750(param_1,uVar32);
                }
              }
              else {
                if (*(int *)(lVar20 + 0x1808) == 1) {
                  *piVar18 = 1;
                    /* try { // try from 00a2fa3c to 00b2fa97 has its CatchHandler @ 00a2fa3c
                       catch() { ... } // from try @ 00a2fa3c with catch @ 00a2fa3c
                       catch() { ... } // from try @ 00a2fc50 with catch @ 00a2fa3c */
                  local_e8._0_3_ = CONCAT12(bVar4,0xfbff);
                  sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
                  if (sVar11 < 0) {
                    puVar12 = (undefined4 *)__errno();
                    FUN_00a23020(lVar23,"Sending data failed (%d)",*puVar12);
                  }
                  lVar20 = *param_1;
                  if (*(char *)(lVar20 + 0x628) != '\0') {
                    if (uVar31 < 0x28) {
                      pcVar15 = (&PTR_s_BINARY_01c6d5f8)[uVar32];
                    }
                    else {
                      if (bVar4 != 0xff) {
                        FUN_00a22d58(lVar20,"%s %s %d\n","SENT",&DAT_0189361b,uVar32);
                        goto LAB_00a300a8;
                      }
                    /* try { // try from 00a30088 to 00b30093 has its CatchHandler @ 00a30254 */
                      pcVar15 = "EXOPL";
                    }
                    /* try { // try from 00a30094 to 00b3009f has its CatchHandler @ 00a30250 */
                    /* try { // try from 00a300a0 to 00b301db has its CatchHandler @ 00a30268 */
                    FUN_00a22d58(lVar20,"%s %s %s\n","SENT",&DAT_0189361b,pcVar15);
                  }
                  goto LAB_00a300a8;
                }
                local_e8._0_3_ = CONCAT12(bVar4,0xfcff);
                sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
                if (sVar11 < 0) {
                  puVar12 = (undefined4 *)__errno();
                  FUN_00a23020(lVar23,"Sending data failed (%d)",*puVar12);
                }
                lVar20 = *param_1;
                if (*(char *)(lVar20 + 0x628) != '\0') {
                  if (uVar31 < 0x28) goto LAB_00a2fd64;
                  goto LAB_00a2fe94;
                }
              }
            }
LAB_00a300b4:
            puVar29[0x7b2] = 0;
            break;
          case 5:
            if (*(char *)(lVar10 + 0x628) != '\0') {
                    /* catch() { ... } // from try @ 00a2f1e4 with catch @ 00a2f3a0 */
              if (uVar31 < 0x28) {
                    /* catch() { ... } // from try @ 00a2f1d8 with catch @ 00a2f3a4 */
                    /* catch() { ... } // from try @ 00a2f1b8 with catch @ 00a2f3a8 */
                pcVar15 = (&PTR_s_BINARY_01c6d5f8)[uVar32];
              }
              else {
                if (uVar31 != 0xff) {
                  FUN_00a22d58(lVar10,"%s %s %d\n","RCVD",&DAT_01893628,uVar32);
                  goto LAB_00a2fabc;
                }
                    /* try { // try from 00a2fa98 to 00b2faaf has its CatchHandler @ 00a2fcd4 */
                pcVar15 = "EXOPL";
              }
                    /* try { // try from 00a2fab8 to 00b2fac3 has its CatchHandler @ 00a2fcd0 */
              FUN_00a22d58(lVar10,"%s %s %s\n","RCVD",&DAT_01893628,pcVar15);
            }
LAB_00a2fabc:
            *puVar29 = 1;
                    /* try { // try from 00a2fac4 to 00b2facf has its CatchHandler @ 00a2fccc */
            lVar23 = *param_1;
            lVar20 = *(long *)(lVar23 + 0x218);
            lVar19 = lVar20 + uVar32 * 4;
                    /* try { // try from 00a2fad0 to 00b2fc4f has its CatchHandler @ 00a2fce4 */
            piVar18 = (int *)(lVar19 + 8);
            iVar7 = *piVar18;
            if (iVar7 != 3) {
              if (iVar7 == 2) {
                iVar7 = *(int *)(lVar20 + uVar32 * 4 + 0x408);
                if (iVar7 == 0) {
                  lVar20 = lVar20 + 8;
                }
                else {
                  if (iVar7 != 1) goto LAB_00a2fdec;
                  lVar20 = lVar20 + 0x408;
                  *piVar18 = 0;
                }
                goto LAB_00a2fde8;
              }
              if (iVar7 == 1) {
                *piVar18 = 0;
                local_e8._0_3_ = CONCAT12(bVar4,0xfcff);
                sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
                if (sVar11 < 0) {
                  puVar12 = (undefined4 *)__errno();
                  FUN_00a23020(lVar23,"Sending data failed (%d)",*puVar12);
                }
                lVar20 = *param_1;
                if (*(char *)(lVar20 + 0x628) != '\0') {
                  if (uVar31 < 0x28) {
                    pcVar15 = (&PTR_s_BINARY_01c6d5f8)[uVar32];
                  }
                  else {
                    if (uVar30 != 0xff) {
                      puVar14 = &DAT_01893620;
                      goto LAB_00a2ff98;
                    }
                    pcVar15 = "EXOPL";
                  }
                  puVar14 = &DAT_01893620;
                  goto LAB_00a30078;
                }
              }
              goto LAB_00a2fdec;
            }
            iVar7 = *(int *)(lVar19 + 0x408);
            if (iVar7 != 1) goto LAB_00a2fb60;
            *piVar18 = 2;
            *(undefined4 *)(lVar19 + 0x408) = 0;
            local_e8._0_3_ = CONCAT12(bVar4,0xfbff);
                    /* try { // try from 00a2fd94 to 00b2fdab has its CatchHandler @ 00a2ffac */
            sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
            if (sVar11 < 0) {
              puVar12 = (undefined4 *)__errno();
                    /* try { // try from 00a2fdb4 to 00b2fdbf has its CatchHandler @ 00a2ffa8 */
              FUN_00a23020(lVar23,"Sending data failed (%d)",*puVar12);
            }
                    /* try { // try from 00a2fdc0 to 00b2fdcb has its CatchHandler @ 00a2ffa4 */
            lVar20 = *param_1;
            if (*(char *)(lVar20 + 0x628) == '\0') goto LAB_00a2fdec;
                    /* try { // try from 00a2fdcc to 00b2ff2b has its CatchHandler @ 00a2ffbc */
            if (uVar31 < 0x28) {
              pcVar15 = (&PTR_s_BINARY_01c6d5f8)[uVar32];
            }
            else {
              if (uVar31 != 0xff) {
                puVar14 = &DAT_0189361b;
                goto LAB_00a2ff98;
              }
              pcVar15 = "EXOPL";
            }
                    /* try { // try from 00a30068 to 00b3007f has its CatchHandler @ 00a30258 */
            puVar14 = &DAT_0189361b;
LAB_00a30078:
            FUN_00a22d58(lVar20,"%s %s %s\n","SENT",puVar14,pcVar15);
            puVar29[0x7b2] = 0;
            break;
          case 6:
            puVar29[0x7b2] = 0;
                    /* catch() { ... } // from try @ 00a2f1f0 with catch @ 00a2f3b8 */
            if (uVar30 != 0) goto LAB_00a2fc5c;
joined_r0x00a2f3c0:
            if ((-1 < iVar7) &&
               (iVar7 = FUN_00a23808(param_1,1,lVar24 + iVar7 + 0xb08,(long)((int)lVar27 - iVar7)),
               iVar7 != 0)) goto LAB_00a300f8;
            iVar8 = -1;
            break;
          case 7:
            if (uVar30 == 0xff) {
              uVar16 = 8;
              goto LAB_00a2fc50;
            }
            pbVar17 = *(byte **)(puVar29 + 0x7ae);
            if (pbVar17 < pbVar2) {
                    /* try { // try from 00a2f410 to 00b2f46b has its CatchHandler @ 00a2f410
                       catch() { ... } // from try @ 00a2f410 with catch @ 00a2f410
                       catch() { ... } // from try @ 00a2f624 with catch @ 00a2f410 */
              *(byte **)(puVar29 + 0x7ae) = pbVar17 + 1;
              *pbVar17 = bVar4;
            }
            break;
          case 8:
            if (uVar31 != 0xf0) {
                    /* try { // try from 00a2f48c to 00b2f497 has its CatchHandler @ 00a2f6a4 */
              pbVar17 = *(byte **)(puVar29 + 0x7ae);
              if (uVar31 != 0xff) {
                    /* try { // try from 00a2f498 to 00b2f4a3 has its CatchHandler @ 00a2f6a0 */
                if (pbVar17 < pbVar2) {
                    /* try { // try from 00a2f4a4 to 00b2f623 has its CatchHandler @ 00a2f6b8 */
                  *(byte **)(puVar29 + 0x7ae) = pbVar17 + 1;
                  *pbVar17 = 0xff;
                  pbVar17 = *(byte **)(puVar29 + 0x7ae);
                }
                if (pbVar17 < pbVar2) {
                  *(byte **)(puVar29 + 0x7ae) = pbVar17 + 1;
                  *pbVar17 = bVar4;
                  pbVar17 = *(byte **)(puVar29 + 0x7ae);
                }
                *(byte **)(puVar29 + 0x7b0) = pbVar17 + -2;
                *(undefined4 **)(puVar29 + 0x7ae) = puVar13;
                if (*(char *)(lVar10 + 0x628) != '\0') {
                  if (uVar30 - 0xec < 0x14) {
                    FUN_00a22d58(lVar10,"%s IAC %s\n","In SUBOPTION processing, RCVD",
                                 *(undefined8 *)(&DAT_01c6d558 + (long)(int)(uVar30 - 0xec) * 8));
                  }
                  else {
                    FUN_00a22d58(lVar10,"%s IAC %d\n","In SUBOPTION processing, RCVD",uVar32);
                  }
                }
                FUN_00a3047c(param_1);
                puVar29[0x7b2] = 1;
                goto switchD_00a2f30c_caseD_1;
              }
              if (pbVar17 < pbVar2) {
                *(byte **)(puVar29 + 0x7ae) = pbVar17 + 1;
                *pbVar17 = 0xff;
              }
              goto LAB_00a2fbe4;
            }
            pbVar17 = *(byte **)(puVar29 + 0x7ae);
            if (pbVar17 < pbVar2) {
              *(byte **)(puVar29 + 0x7ae) = pbVar17 + 1;
              *pbVar17 = 0xff;
              pbVar17 = *(byte **)(puVar29 + 0x7ae);
            }
            if (pbVar17 < pbVar2) {
              *(byte **)(puVar29 + 0x7ae) = pbVar17 + 1;
              *pbVar17 = 0xf0;
              pbVar17 = *(byte **)(puVar29 + 0x7ae);
            }
                    /* try { // try from 00a2f46c to 00b2f483 has its CatchHandler @ 00a2f6a8 */
            *(byte **)(puVar29 + 0x7b0) = pbVar17 + -2;
            *(undefined4 **)(puVar29 + 0x7ae) = puVar13;
            FUN_00a3047c(param_1);
            uVar16 = 0;
            goto LAB_00a2fc50;
          }
LAB_00a300bc:
          iVar7 = iVar8;
          lVar27 = lVar27 + 1;
        } while (lVar9 != lVar27);
        if ((iVar7 < 0) ||
           (iVar7 = FUN_00a23808(param_1,1,lVar24 + iVar7 + 0xb08,(long)((int)lVar27 - iVar7)),
           iVar7 == 0)) goto LAB_00a30110;
LAB_00a300f8:
        lVar9 = *(long *)(lVar24 + 0x358);
joined_r0x00a30108:
        bVar6 = false;
      }
joined_r0x00a2f15c:
      if (lVar9 != 0) {
        auVar33 = FUN_00a18e40();
        lVar9 = FUN_00a18ea0(auVar33._0_8_,auVar33._8_8_,param_1[0x4a],param_1[0x4b]);
        if (*(long *)(lVar24 + 0x358) <= lVar9) {
          FUN_00a23020(lVar24,"Time-out");
          bVar6 = false;
          iVar7 = 0x1c;
        }
      }
      iVar8 = FUN_00a1ace8(param_1);
    } while (iVar8 == 0);
    iVar7 = 0x2a;
LAB_00a303a4:
    FUN_00a335d8(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
  }
LAB_00a303c8:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}

