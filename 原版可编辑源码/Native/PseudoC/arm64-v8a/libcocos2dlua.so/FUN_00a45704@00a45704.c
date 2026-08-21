
/* WARNING: Type propagation algorithm not settling */

int FUN_00a45704(long *param_1,undefined1 *param_2)

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
  undefined1 *puVar15;
  char *pcVar16;
  undefined4 uVar17;
  byte *pbVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  undefined4 uVar26;
  int iVar27;
  long lVar28;
  char cVar29;
  undefined4 *puVar30;
  uint uVar31;
  ulong uVar33;
  undefined1 auVar34 [16];
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
  uint uVar32;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 00a45738 to 00b4573f has its CatchHandler @ 00a4577c */
  uVar3 = (undefined4)param_1[0x4c];
                    /* try { // try from 00a45740 to 00b45797 has its CatchHandler @ 00a456a4 */
  lVar25 = *param_1;
  *param_2 = 1;
  lVar9 = (*(code *)PTR_calloc_01769a18)(1,0x1ed0);
  if (lVar9 == 0) {
    iVar7 = 0x1b;
  }
  else {
    lVar28 = *param_1;
    *(long *)(lVar28 + 0x218) = lVar9;
                    /* catch() { ... } // from try @ 00a45738 with catch @ 00a4577c */
    *(undefined4 *)(lVar9 + 0x1ec8) = 0;
    *(long *)(lVar9 + 0x1eb8) = lVar9 + 0x1cb8;
    *(undefined4 *)(lVar9 + 0x814) = 1;
    *(undefined4 *)(lVar9 + 0x1414) = 1;
    *(undefined4 *)(lVar9 + 0x808) = 1;
    *(undefined4 *)(lVar9 + 0x1408) = 1;
    *(undefined4 *)(lVar9 + 0x140c) = 1;
    *(undefined4 *)(lVar9 + 0x1884) = 1;
    piVar22 = *(int **)(lVar25 + 0x218);
    memset(&local_e8,0,0x80);
    memset(&local_1e8,0,0x100);
    if ((char)param_1[0x78] != '\0') {
      FUN_00a241ac(&local_1e8,0x100,"USER,%s",param_1[0x43]);
      lVar10 = FUN_00a2c4a8(*(undefined8 *)(lVar9 + 0x1cb0),&local_1e8);
      if (lVar10 == 0) {
                    /* try { // try from 00a45a18 to 00b45ab3 has its CatchHandler @ 00a458b0 */
        FUN_00a2c624(*(undefined8 *)(lVar9 + 0x1cb0));
        iVar7 = 0x1b;
        *(undefined8 *)(lVar9 + 0x1cb0) = 0;
        goto LAB_00a46db0;
      }
      *(long *)(lVar9 + 0x1cb0) = lVar10;
      *(undefined4 *)(lVar9 + 0x8a4) = 1;
    }
    puVar23 = *(undefined8 **)(lVar28 + 0x408);
    if (puVar23 != (undefined8 *)0x0) {
                    /* try { // try from 00a45818 to 00b45863 has its CatchHandler @ 00a45818
                       catch() { ... } // from try @ 00a45818 with catch @ 00a45818
                       catch() { ... } // from try @ 00a45868 with catch @ 00a45818 */
      puVar1 = (undefined8 *)(lVar9 + 0x1cb0);
LAB_00a45864:
      do {
                    /* try { // try from 00a45864 to 00b45867 has its CatchHandler @ 00a4589c */
                    /* try { // try from 00a45868 to 00b458af has its CatchHandler @ 00a45818 */
        iVar7 = sscanf((char *)*puVar23,"%127[^= ]%*[ =]%255s",&local_e8,&local_1e8);
        if (iVar7 != 2) {
LAB_00a459dc:
                    /* try { // try from 00a459e4 to 00b45a17 has its CatchHandler @ 00a45a68 */
          FUN_00a38a08(lVar28,"Syntax error in telnet option: %s",*puVar23);
          iVar7 = 0x31;
          goto LAB_00a459f4;
        }
        iVar7 = FUN_00a4a0f8(&local_e8,"TTYPE");
        if (iVar7 != 0) {
                    /* catch() { ... } // from try @ 00a45864 with catch @ 00a4589c */
          strncpy((char *)(lVar9 + 0x1c08),(char *)&local_1e8,0x1f);
          *(undefined1 *)(lVar9 + 0x1c27) = 0;
          *(undefined4 *)(lVar9 + 0x868) = 1;
          puVar23 = (undefined8 *)puVar23[1];
joined_r0x00a458e4:
          if (puVar23 == (undefined8 *)0x0) break;
          goto LAB_00a45864;
        }
        iVar7 = FUN_00a4a0f8(&local_e8,"XDISPLOC");
        if (iVar7 != 0) {
          strncpy((char *)(lVar9 + 0x1c28),(char *)&local_1e8,0x7f);
          *(undefined1 *)(lVar9 + 0x1ca7) = 0;
          *(undefined4 *)(lVar9 + 0x894) = 1;
          puVar23 = (undefined8 *)puVar23[1];
          goto joined_r0x00a458e4;
        }
        iVar7 = FUN_00a4a0f8(&local_e8,&DAT_013c5ed8);
        if (iVar7 == 0) {
          iVar7 = FUN_00a4a0f8(&local_e8,&DAT_013c60b9);
          if (iVar7 == 0) {
            iVar7 = FUN_00a4a0f8(&local_e8,"BINARY");
            if (iVar7 == 0) {
              FUN_00a38a08(lVar28,"Unknown telnet option %s",*puVar23);
              iVar7 = 0x30;
              goto LAB_00a459f4;
            }
            iVar7 = atoi((char *)&local_1e8);
            if (iVar7 != 1) {
              *(undefined4 *)(lVar9 + 0x808) = 0;
              *(undefined4 *)(lVar9 + 0x1408) = 0;
            }
            puVar23 = (undefined8 *)puVar23[1];
                    /* try { // try from 00a45998 to 00b459cb has its CatchHandler @ 00a45a98 */
          }
          else {
            iVar7 = sscanf((char *)&local_1e8,"%hu%*[xX]%hu",lVar9 + 0x1ca8,lVar9 + 0x1caa);
            if (iVar7 != 2) goto LAB_00a459dc;
            *(undefined4 *)(lVar9 + 0x884) = 1;
            puVar23 = (undefined8 *)puVar23[1];
          }
          goto joined_r0x00a458e4;
        }
        lVar10 = FUN_00a2c4a8(*puVar1,&local_1e8);
        if (lVar10 == 0) {
          iVar7 = 0x1b;
LAB_00a459f4:
          FUN_00a2c624(*puVar1);
          *puVar1 = 0;
          goto LAB_00a46db0;
        }
        *(long *)(lVar9 + 0x1cb0) = lVar10;
        *(undefined4 *)(lVar9 + 0x8a4) = 1;
        puVar23 = (undefined8 *)puVar23[1];
      } while (puVar23 != (undefined8 *)0x0);
    }
    local_1e4 = 1;
    __buf = (char *)(lVar25 + 0xb08);
    local_1e8 = uVar3;
    if (*(int *)(lVar25 + 0x2d0) == 0) {
      local_1e0 = fileno(*(FILE **)(lVar25 + 0x8d18));
      uVar26 = 1000;
      iVar27 = 2;
      local_1dc = 1;
    }
    else {
      uVar26 = 100;
                    /* try { // try from 00a459cc to 00b459df has its CatchHandler @ 00a45a64 */
      iVar27 = 1;
    }
    local_230 = (undefined8 *)(lVar25 + 0x8d18);
    iVar7 = 0;
                    /* catch() { ... } // from try @ 00a459cc with catch @ 00a45a64 */
    bVar6 = true;
                    /* catch() { ... } // from try @ 00a459e4 with catch @ 00a45a68 */
    do {
      if (!bVar6) goto LAB_00a46d8c;
      iVar8 = FUN_00a2b6e4(&local_1e8,iVar27,uVar26);
      if (iVar8 == 0) {
        local_1e2 = 0;
        local_1da = 0;
LAB_00a45adc:
        local_200 = 0;
        if (iVar27 == 2) {
          if ((local_1da & 1) != 0) {
            sVar11 = read(local_1e0,__buf,0x3fff);
LAB_00a45b64:
            pcVar16 = __buf;
            local_200 = sVar11;
            if (0 < sVar11) {
              do {
                if (sVar11 == 0) {
                  FUN_00a3112c(lVar25);
                  iVar7 = 0;
                  goto LAB_00a45b3c;
                }
                local_1ec[0] = *pcVar16;
                sVar11 = sVar11 + -1;
                if (local_1ec[0] == -1) {
                  lVar9 = 2;
                  local_1ec[1] = 0xff;
                }
                else {
                  lVar9 = 1;
                }
                lVar28 = 0;
                do {
                  local_1f8 = (undefined4)param_1[0x4c];
                  local_1f4 = 4;
                  iVar7 = FUN_00a2b6e4(&local_1f8,1,0xffffffff);
                  if (iVar7 + 1U < 2) {
                    iVar7 = 0x37;
                    goto LAB_00a45c28;
                  }
                  local_e8 = 0;
                  iVar7 = FUN_00a38cd0(param_1,(int)param_1[0x4c],local_1ec + lVar28,lVar9 - lVar28,
                                       &local_e8);
                } while ((iVar7 == 0) && (lVar28 = local_e8 + lVar28, lVar28 < lVar9));
                pcVar16 = pcVar16 + 1;
              } while (iVar7 == 0);
              goto LAB_00a45c28;
            }
          }
          bVar6 = local_200 == 0;
          lVar9 = *(long *)(lVar25 + 0x358);
        }
        else {
          iVar8 = (**(code **)(lVar25 + 0x8d10))(__buf,1,0x3fff,*local_230);
          sVar11 = (ssize_t)iVar8;
          local_200 = sVar11;
          if (iVar8 == 0x10000000) {
LAB_00a45c28:
            lVar9 = *(long *)(lVar25 + 0x358);
            goto joined_r0x00a46af0;
          }
          if (sVar11 != 0x10000001) goto LAB_00a45b64;
LAB_00a45b3c:
          bVar6 = true;
          lVar9 = *(long *)(lVar25 + 0x358);
        }
      }
      else {
                    /* catch() { ... } // from try @ 00a45998 with catch @ 00a45a98 */
        if (iVar8 == -1) goto LAB_00a46d8c;
        if ((local_1e2 & 1) == 0) goto LAB_00a45adc;
        iVar7 = FUN_00a393e0(param_1,uVar3,__buf,0x3fff,&local_200);
        if (iVar7 != 0) {
          if (iVar7 == 0x51) goto LAB_00a45b3c;
          goto LAB_00a45c28;
        }
        if (local_200 < 1) {
          bVar6 = false;
          iVar7 = 0;
          lVar9 = *(long *)(lVar25 + 0x358);
          goto joined_r0x00a45b44;
        }
        FUN_00a31094(lVar25);
        lVar9 = local_200;
        if (local_200 == 0) {
LAB_00a46af8:
          if (*piVar22 != 0) {
            if (piVar22[1] != 0) {
              iVar7 = 0;
              goto LAB_00a45adc;
            }
            lVar9 = 0;
            cVar29 = '\0';
            lVar28 = *(long *)(*param_1 + 0x218);
            while( true ) {
              lVar10 = lVar28 + lVar9 * 4;
              if (*(int *)(lVar10 + 0x808) == 1) {
                lVar24 = *param_1;
                lVar20 = *(long *)(lVar24 + 0x218);
                lVar21 = lVar20 + lVar9 * 4;
                iVar7 = *(int *)(lVar21 + 8);
                if (iVar7 == 3) {
                  if (*(int *)(lVar21 + 0x408) == 0) {
                    *(undefined4 *)(lVar21 + 0x408) = 1;
                  }
                }
                else if (iVar7 == 2) {
                  lVar20 = lVar20 + lVar9 * 4;
                  if (*(int *)(lVar20 + 0x408) == 1) {
                    *(undefined4 *)(lVar20 + 0x408) = 0;
                  }
                }
                else if (iVar7 == 0) {
                  *(int *)(lVar21 + 8) = 2;
                  local_e8._0_3_ = CONCAT12(cVar29,0xfbff);
                  sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
                  if (sVar11 < 0) {
                    puVar13 = (undefined4 *)__errno();
                    FUN_00a38a08(lVar24,"Sending data failed (%d)",*puVar13);
                  }
                  if (*(char *)(*param_1 + 0x628) != '\0') {
                    FUN_00a38740(*param_1,"%s %s %s\n","SENT",&DAT_013c5f63,
                                 (&PTR_s_BINARY_016a3dc8)[lVar9]);
                  }
                }
              }
              if (*(int *)(lVar10 + 0x1408) == 1) {
                lVar20 = *param_1;
                lVar21 = *(long *)(lVar20 + 0x218);
                lVar10 = lVar21 + lVar9 * 4;
                iVar7 = *(int *)(lVar10 + 0xc08);
                if (iVar7 == 3) {
                  if (*(int *)(lVar10 + 0x1008) == 0) {
                    *(undefined4 *)(lVar10 + 0x1008) = 1;
                  }
                }
                else if (iVar7 == 2) {
                  lVar21 = lVar21 + lVar9 * 4;
                  if (*(int *)(lVar21 + 0x1008) == 1) {
                    *(undefined4 *)(lVar21 + 0x1008) = 0;
                  }
                }
                else if (iVar7 == 0) {
                  *(undefined4 *)(lVar10 + 0xc08) = 2;
                  local_e8._0_3_ = CONCAT12(cVar29,0xfdff);
                  sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
                  if (sVar11 < 0) {
                    puVar13 = (undefined4 *)__errno();
                    FUN_00a38a08(lVar20,"Sending data failed (%d)",*puVar13);
                  }
                  if (*(char *)(*param_1 + 0x628) != '\0') {
                    FUN_00a38740(*param_1,"%s %s %s\n","SENT",&DAT_013c5f6d,
                                 (&PTR_s_BINARY_016a3dc8)[lVar9]);
                  }
                }
              }
              lVar9 = lVar9 + 1;
              if (lVar9 == 0x28) break;
              while (cVar29 = cVar29 + '\x01', lVar9 == 1) {
                lVar9 = 2;
              }
            }
            piVar22[1] = 1;
          }
          iVar7 = 0;
          goto LAB_00a45adc;
        }
        lVar10 = *param_1;
        lVar28 = 0;
        puVar30 = *(undefined4 **)(lVar10 + 0x218);
        puVar13 = puVar30 + 0x72e;
        pbVar2 = (byte *)(puVar30 + 0x7ae);
        iVar7 = -1;
        do {
          iVar8 = iVar7;
          if (8 < (uint)puVar30[0x7b2]) goto LAB_00a46aa4;
          bVar4 = *(byte *)(lVar25 + 0xb08 + lVar28);
          uVar33 = (ulong)bVar4;
          uVar31 = (uint)bVar4;
          uVar32 = (uint)bVar4;
          switch(puVar30[0x7b2]) {
          case 0:
            if (bVar4 == 0xd) {
              puVar30[0x7b2] = 6;
            }
            else if (bVar4 == 0xff) {
              puVar30[0x7b2] = 1;
              goto joined_r0x00a45da8;
            }
LAB_00a46644:
            iVar8 = (int)lVar28;
            if (-1 < iVar7) {
              iVar8 = iVar7;
            }
            break;
          case 1:
switchD_00a45cf4_caseD_1:
            switch(uVar31) {
            case 0xfa:
              *(undefined4 **)(puVar30 + 0x7ae) = puVar13;
LAB_00a465cc:
              uVar17 = 7;
              goto LAB_00a46638;
            case 0xfb:
              puVar30[0x7b2] = 2;
              break;
            case 0xfc:
              puVar30[0x7b2] = 3;
              break;
            case 0xfd:
              puVar30[0x7b2] = 4;
              break;
            case 0xfe:
              uVar17 = 5;
LAB_00a46638:
              puVar30[0x7b2] = uVar17;
              break;
            case 0xff:
              puVar30[0x7b2] = 0;
              goto LAB_00a46644;
            default:
              puVar30[0x7b2] = 0;
              if (*(char *)(lVar10 + 0x628) != '\0') {
                if (uVar32 - 0xec < 0x14) {
                  FUN_00a38740(lVar10,"%s IAC %s\n","RCVD",
                               (&PTR_s_EOF_0145b715_0x13_016a3d28)[(int)(uVar32 - 0xec)]);
                }
                else {
                  FUN_00a38740(lVar10,"%s IAC %d\n","RCVD",uVar33);
                }
              }
            }
            break;
          case 2:
            if (*(char *)(lVar10 + 0x628) != '\0') {
              if (uVar31 < 0x28) {
                pcVar16 = (&PTR_s_BINARY_016a3dc8)[uVar33];
              }
              else {
                if (uVar32 != 0xff) {
                  FUN_00a38740(lVar10,"%s %s %d\n","RCVD",&DAT_013c5f63,uVar33);
                  goto LAB_00a46024;
                }
                pcVar16 = "EXOPL";
              }
              FUN_00a38740(lVar10,"%s %s %s\n","RCVD",&DAT_013c5f63,pcVar16);
            }
LAB_00a46024:
            *puVar30 = 1;
            lVar24 = *param_1;
            lVar21 = *(long *)(lVar24 + 0x218);
            lVar20 = lVar21 + uVar33 * 4;
            iVar7 = *(int *)(lVar20 + 0xc08);
            puVar12 = (undefined4 *)(lVar20 + 0xc08);
            if (iVar7 == 3) {
              if (*(int *)(lVar20 + 0x1008) == 0) {
                lVar21 = lVar21 + 0xc08;
              }
              else {
                if (*(int *)(lVar20 + 0x1008) != 1) goto LAB_00a467d4;
                lVar21 = lVar21 + 0x1008;
                *puVar12 = 1;
              }
              *(undefined4 *)(lVar21 + uVar33 * 4) = 0;
              puVar30[0x7b2] = 0;
            }
            else {
              if (iVar7 == 2) {
                lVar21 = lVar21 + uVar33 * 4;
                iVar7 = *(int *)(lVar21 + 0x1008);
                if (iVar7 == 1) {
                  *puVar12 = 3;
                  *(undefined4 *)(lVar21 + 0x1008) = 0;
                  local_e8._0_3_ = CONCAT12(bVar4,0xfeff);
                  sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
                  if (sVar11 < 0) {
                    puVar12 = (undefined4 *)__errno();
                    FUN_00a38a08(lVar24,"Sending data failed (%d)",*puVar12);
                  }
                  lVar21 = *param_1;
                  if (*(char *)(lVar21 + 0x628) != '\0') {
                    if (0x27 < uVar32) goto LAB_00a46800;
LAB_00a466cc:
                    pcVar16 = (&PTR_s_BINARY_016a3dc8)[uVar33];
LAB_00a468d0:
                    puVar14 = &DAT_013c5f70;
                    goto LAB_00a46a60;
                  }
                }
                else if (iVar7 == 0) {
                  *puVar12 = 1;
                  puVar30[0x7b2] = 0;
                  break;
                }
              }
              else if (iVar7 == 0) {
                if (*(int *)(lVar21 + uVar33 * 4 + 0x1408) == 1) {
                  *puVar12 = 1;
                  local_e8._0_3_ = CONCAT12(bVar4,0xfdff);
                  sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
                  if (sVar11 < 0) {
                    puVar12 = (undefined4 *)__errno();
                    FUN_00a38a08(lVar24,"Sending data failed (%d)",*puVar12);
                  }
                  lVar21 = *param_1;
                  if (*(char *)(lVar21 + 0x628) != '\0') {
                    if (uVar32 < 0x28) goto LAB_00a462c0;
                    if (uVar31 == 0xff) goto LAB_00a46990;
                    puVar15 = &DAT_013c5f6d;
LAB_00a46820:
                    FUN_00a38740(lVar21,"%s %s %d\n","SENT",puVar15,uVar33);
                  }
                }
                else {
                  local_e8._0_3_ = CONCAT12(bVar4,0xfeff);
                  sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
                  if (sVar11 < 0) {
                    puVar12 = (undefined4 *)__errno();
                    FUN_00a38a08(lVar24,"Sending data failed (%d)",*puVar12);
                  }
                  lVar21 = *param_1;
                    /* try { // try from 00a4616c to 00b461f3 has its CatchHandler @ 00a4616c
                       catch() { ... } // from try @ 00a4616c with catch @ 00a4616c
                       catch() { ... } // from try @ 00a46260 with catch @ 00a4616c */
                  if (*(char *)(lVar21 + 0x628) != '\0') {
                    if (uVar32 < 0x28) goto LAB_00a466cc;
LAB_00a46800:
                    if (uVar31 == 0xff) goto LAB_00a468c8;
                    puVar15 = &DAT_013c5f70;
                    goto LAB_00a46820;
                  }
                }
              }
LAB_00a467d4:
              puVar30[0x7b2] = 0;
            }
            break;
          case 3:
            if (*(char *)(lVar10 + 0x628) != '\0') {
              if (uVar31 < 0x28) {
                pcVar16 = (&PTR_s_BINARY_016a3dc8)[uVar33];
              }
              else {
                if (bVar4 != 0xff) {
                  FUN_00a38740(lVar10,"%s %s %d\n","RCVD",&DAT_013c5f68,uVar33);
                  goto LAB_00a461a4;
                }
                pcVar16 = "EXOPL";
              }
              FUN_00a38740(lVar10,"%s %s %s\n","RCVD",&DAT_013c5f68,pcVar16);
            }
LAB_00a461a4:
            *puVar30 = 1;
            lVar24 = *param_1;
            lVar21 = *(long *)(lVar24 + 0x218);
            lVar20 = lVar21 + uVar33 * 4;
            iVar7 = *(int *)(lVar20 + 0xc08);
            piVar19 = (int *)(lVar20 + 0xc08);
            if (iVar7 != 3) {
              if (iVar7 == 2) {
                iVar7 = *(int *)(lVar21 + uVar33 * 4 + 0x1008);
                if (iVar7 == 0) {
                  lVar21 = lVar21 + 0xc08;
                }
                else {
                  if (iVar7 != 1) goto LAB_00a467d4;
                  lVar21 = lVar21 + 0x1008;
                  *piVar19 = 0;
                }
LAB_00a467d0:
                *(undefined4 *)(lVar21 + uVar33 * 4) = 0;
              }
              else if (iVar7 == 1) {
                *piVar19 = 0;
                local_e8._0_3_ = CONCAT12(bVar4,0xfeff);
                    /* try { // try from 00a461f4 to 00b46213 has its CatchHandler @ 00a462ac */
                sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
                if (sVar11 < 0) {
                  puVar12 = (undefined4 *)__errno();
                  FUN_00a38a08(lVar24,"Sending data failed (%d)",*puVar12);
                }
                lVar21 = *param_1;
                if (*(char *)(lVar21 + 0x628) != '\0') {
                  if (uVar32 < 0x28) goto LAB_00a466cc;
                  if (uVar32 != 0xff) {
                    puVar14 = &DAT_013c5f70;
                    /* try { // try from 00a4624c to 00b4625f has its CatchHandler @ 00a462a8 */
                    goto LAB_00a46980;
                  }
LAB_00a468c8:
                  pcVar16 = "EXOPL";
                  goto LAB_00a468d0;
                }
              }
              goto LAB_00a467d4;
            }
            iVar7 = *(int *)(lVar20 + 0x1008);
            if (iVar7 == 1) {
                    /* try { // try from 00a46260 to 00b462c7 has its CatchHandler @ 00a4616c */
              *piVar19 = 2;
              *(undefined4 *)(lVar20 + 0x1008) = 0;
              local_e8._0_3_ = CONCAT12(bVar4,0xfdff);
              sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
              if (sVar11 < 0) {
                puVar12 = (undefined4 *)__errno();
                    /* catch() { ... } // from try @ 00a4624c with catch @ 00a462a8 */
                FUN_00a38a08(lVar24,"Sending data failed (%d)",*puVar12);
              }
                    /* catch() { ... } // from try @ 00a461f4 with catch @ 00a462ac */
              lVar21 = *param_1;
              if (*(char *)(lVar21 + 0x628) == '\0') goto LAB_00a467d4;
              if (bVar4 < 0x28) {
LAB_00a462c0:
                pcVar16 = (&PTR_s_BINARY_016a3dc8)[uVar33];
              }
              else {
                if (uVar31 != 0xff) {
                  puVar14 = &DAT_013c5f6d;
LAB_00a46980:
                  FUN_00a38740(lVar21,"%s %s %d\n","SENT",puVar14,uVar33);
                  puVar30[0x7b2] = 0;
                  break;
                }
LAB_00a46990:
                pcVar16 = "EXOPL";
              }
                    /* try { // try from 00a469a8 to 00b469db has its CatchHandler @ 00a46aa8 */
              puVar14 = &DAT_013c5f6d;
              goto LAB_00a46a60;
            }
LAB_00a46548:
            if (iVar7 != 0) goto LAB_00a467d4;
            *piVar19 = 0;
            puVar30[0x7b2] = 0;
            break;
          case 4:
            if (*(char *)(lVar10 + 0x628) != '\0') {
              if (uVar31 < 0x28) {
                pcVar16 = (&PTR_s_BINARY_016a3dc8)[uVar33];
              }
              else {
                if (uVar32 != 0xff) {
                  FUN_00a38740(lVar10,"%s %s %d\n","RCVD",&DAT_013c5f6d,uVar33);
                  goto LAB_00a4631c;
                }
                pcVar16 = "EXOPL";
              }
              FUN_00a38740(lVar10,"%s %s %s\n","RCVD",&DAT_013c5f6d,pcVar16);
            }
LAB_00a4631c:
            *puVar30 = 1;
            lVar24 = *param_1;
            lVar20 = *(long *)(lVar24 + 0x218);
            lVar21 = lVar20 + uVar33 * 4;
            piVar19 = (int *)(lVar21 + 8);
            iVar7 = *piVar19;
            if (iVar7 == 3) {
              iVar7 = *(int *)(lVar21 + 0x408);
              if (iVar7 == 0) {
                *(undefined4 *)(lVar20 + 8 + uVar33 * 4) = 0;
              }
              else if (iVar7 == 1) {
                *piVar19 = 1;
                *(undefined4 *)(lVar20 + 0x408 + uVar33 * 4) = 0;
              }
            }
            else if (iVar7 == 2) {
              lVar21 = lVar20 + uVar33 * 4;
              iVar7 = *(int *)(lVar21 + 0x408);
              if (iVar7 == 1) {
                *piVar19 = 3;
                *(undefined4 *)(lVar21 + 0x1008) = 0;
                local_e8._0_3_ = CONCAT12(bVar4,0xfcff);
                sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
                if (sVar11 < 0) {
                    /* try { // try from 00a46720 to 00b4676b has its CatchHandler @ 00a46720
                       catch() { ... } // from try @ 00a46720 with catch @ 00a46720
                       catch() { ... } // from try @ 00a46770 with catch @ 00a46720 */
                  puVar12 = (undefined4 *)__errno();
                  FUN_00a38a08(lVar24,"Sending data failed (%d)",*puVar12);
                }
                lVar21 = *param_1;
                if (*(char *)(lVar21 + 0x628) != '\0') {
                  if (uVar32 < 0x28) {
LAB_00a4674c:
                    pcVar16 = (&PTR_s_BINARY_016a3dc8)[uVar33];
                  }
                  else {
LAB_00a4687c:
                    if (bVar4 != 0xff) {
                      FUN_00a38740(lVar21,"%s %s %d\n","SENT",&DAT_013c5f68,uVar33);
                      goto LAB_00a46a9c;
                    }
                    pcVar16 = "EXOPL";
                  }
                    /* try { // try from 00a469f4 to 00b46a27 has its CatchHandler @ 00a46a78 */
                  FUN_00a38740(lVar21,"%s %s %s\n","SENT",&DAT_013c5f68,pcVar16);
                }
              }
              else if (iVar7 == 0) {
                *piVar19 = 1;
                goto LAB_00a46a2c;
              }
            }
            else if (iVar7 == 0) {
              lVar21 = lVar20 + uVar33 * 4;
              if (*(int *)(lVar21 + 0x808) == 1) {
                *piVar19 = 1;
                local_e8._0_3_ = CONCAT12(bVar4,0xfbff);
                sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
                if (sVar11 < 0) {
                  puVar12 = (undefined4 *)__errno();
                  FUN_00a38a08(lVar24,"Sending data failed (%d)",*puVar12);
                }
                lVar21 = *param_1;
                if (*(char *)(lVar21 + 0x628) != '\0') {
                  if (bVar4 < 0x28) {
                    pcVar16 = (&PTR_s_BINARY_016a3dc8)[uVar33];
                  }
                  else {
                    if (bVar4 != 0xff) {
                      FUN_00a38740(lVar21,"%s %s %d\n","SENT",&DAT_013c5f63,uVar33);
                      goto LAB_00a46a2c;
                    }
                    pcVar16 = "EXOPL";
                  }
                    /* try { // try from 00a46a28 to 00b46ac3 has its CatchHandler @ 00a467b8 */
                  FUN_00a38740(lVar21,"%s %s %s\n","SENT",&DAT_013c5f63,pcVar16);
                }
LAB_00a46a2c:
                if (*(int *)(lVar20 + uVar33 * 4 + 0x1808) == 1) {
LAB_00a46a90:
                  FUN_00a47138(param_1,uVar33);
                }
              }
              else {
                if (*(int *)(lVar21 + 0x1808) == 1) {
                  *piVar19 = 1;
                  local_e8._0_3_ = CONCAT12(bVar4,0xfbff);
                  sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
                  if (sVar11 < 0) {
                    puVar12 = (undefined4 *)__errno();
                    FUN_00a38a08(lVar24,"Sending data failed (%d)",*puVar12);
                  }
                  lVar21 = *param_1;
                  if (*(char *)(lVar21 + 0x628) != '\0') {
                    if (uVar32 < 0x28) {
                      pcVar16 = (&PTR_s_BINARY_016a3dc8)[uVar33];
                    }
                    else {
                      if (bVar4 != 0xff) {
                        FUN_00a38740(lVar21,"%s %s %d\n","SENT",&DAT_013c5f63,uVar33);
                    /* try { // try from 00a469dc to 00b469ef has its CatchHandler @ 00a46a74 */
                        goto LAB_00a46a90;
                      }
                      pcVar16 = "EXOPL";
                    }
                    /* catch() { ... } // from try @ 00a469dc with catch @ 00a46a74 */
                    /* catch() { ... } // from try @ 00a469f4 with catch @ 00a46a78 */
                    FUN_00a38740(lVar21,"%s %s %s\n","SENT",&DAT_013c5f63,pcVar16);
                  }
                  goto LAB_00a46a90;
                }
                local_e8._0_3_ = CONCAT12(bVar4,0xfcff);
                sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
                if (sVar11 < 0) {
                  puVar12 = (undefined4 *)__errno();
                  FUN_00a38a08(lVar24,"Sending data failed (%d)",*puVar12);
                }
                lVar21 = *param_1;
                if (*(char *)(lVar21 + 0x628) != '\0') {
                  if (uVar32 < 0x28) goto LAB_00a4674c;
                  goto LAB_00a4687c;
                }
              }
            }
LAB_00a46a9c:
            puVar30[0x7b2] = 0;
            break;
          case 5:
            if (*(char *)(lVar10 + 0x628) != '\0') {
              if (uVar32 < 0x28) {
                pcVar16 = (&PTR_s_BINARY_016a3dc8)[uVar33];
              }
              else {
                if (uVar32 != 0xff) {
                  FUN_00a38740(lVar10,"%s %s %d\n","RCVD",&DAT_013c5f70,uVar33);
                  goto LAB_00a464a4;
                }
                pcVar16 = "EXOPL";
              }
              FUN_00a38740(lVar10,"%s %s %s\n","RCVD",&DAT_013c5f70,pcVar16);
            }
LAB_00a464a4:
            *puVar30 = 1;
            lVar24 = *param_1;
            lVar21 = *(long *)(lVar24 + 0x218);
            lVar20 = lVar21 + uVar33 * 4;
            piVar19 = (int *)(lVar20 + 8);
            iVar7 = *piVar19;
            if (iVar7 != 3) {
              if (iVar7 == 2) {
                iVar7 = *(int *)(lVar21 + uVar33 * 4 + 0x408);
                if (iVar7 == 0) {
                  lVar21 = lVar21 + 8;
                }
                else {
                  if (iVar7 != 1) goto LAB_00a467d4;
                  lVar21 = lVar21 + 0x408;
                  *piVar19 = 0;
                }
                goto LAB_00a467d0;
              }
              if (iVar7 == 1) {
                *piVar19 = 0;
                local_e8._0_3_ = CONCAT12(bVar4,0xfcff);
                sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
                if (sVar11 < 0) {
                  puVar12 = (undefined4 *)__errno();
                  FUN_00a38a08(lVar24,"Sending data failed (%d)",*puVar12);
                }
                lVar21 = *param_1;
                if (*(char *)(lVar21 + 0x628) != '\0') {
                  if (uVar32 < 0x28) {
                    pcVar16 = (&PTR_s_BINARY_016a3dc8)[uVar33];
                  }
                  else {
                    if (uVar31 != 0xff) {
                      puVar14 = &DAT_013c5f68;
                      goto LAB_00a46980;
                    }
                    pcVar16 = "EXOPL";
                  }
                  puVar14 = &DAT_013c5f68;
                  goto LAB_00a46a60;
                }
              }
              goto LAB_00a467d4;
            }
            iVar7 = *(int *)(lVar20 + 0x408);
            if (iVar7 != 1) goto LAB_00a46548;
            *piVar19 = 2;
                    /* try { // try from 00a4676c to 00b4676f has its CatchHandler @ 00a467a4 */
            *(undefined4 *)(lVar20 + 0x408) = 0;
                    /* try { // try from 00a46770 to 00b467b7 has its CatchHandler @ 00a46720 */
            local_e8._0_3_ = CONCAT12(bVar4,0xfbff);
            sVar11 = send((int)param_1[0x4c],&local_e8,3,0x4000);
            if (sVar11 < 0) {
              puVar12 = (undefined4 *)__errno();
                    /* catch() { ... } // from try @ 00a4676c with catch @ 00a467a4 */
              FUN_00a38a08(lVar24,"Sending data failed (%d)",*puVar12);
            }
            lVar21 = *param_1;
            if (*(char *)(lVar21 + 0x628) == '\0') goto LAB_00a467d4;
                    /* try { // try from 00a467b8 to 00b469a7 has its CatchHandler @ 00a467b8
                       catch() { ... } // from try @ 00a467b8 with catch @ 00a467b8
                       catch() { ... } // from try @ 00a46a28 with catch @ 00a467b8 */
            if (uVar32 < 0x28) {
              pcVar16 = (&PTR_s_BINARY_016a3dc8)[uVar33];
            }
            else {
              if (uVar32 != 0xff) {
                puVar14 = &DAT_013c5f63;
                goto LAB_00a46980;
              }
              pcVar16 = "EXOPL";
            }
            puVar14 = &DAT_013c5f63;
LAB_00a46a60:
            FUN_00a38740(lVar21,"%s %s %s\n","SENT",puVar14,pcVar16);
            puVar30[0x7b2] = 0;
            break;
          case 6:
            puVar30[0x7b2] = 0;
            if (uVar31 != 0) goto LAB_00a46644;
joined_r0x00a45da8:
            if ((-1 < iVar7) &&
               (iVar7 = FUN_00a391f0(param_1,1,lVar25 + iVar7 + 0xb08,(long)((int)lVar28 - iVar7)),
               iVar7 != 0)) goto LAB_00a46ae0;
            iVar8 = -1;
            break;
          case 7:
            if (uVar31 == 0xff) {
              uVar17 = 8;
              goto LAB_00a46638;
            }
            pbVar18 = *(byte **)(puVar30 + 0x7ae);
            if (pbVar18 < pbVar2) {
              *(byte **)(puVar30 + 0x7ae) = pbVar18 + 1;
              *pbVar18 = bVar4;
            }
            break;
          case 8:
            if (uVar32 != 0xf0) {
              pbVar18 = *(byte **)(puVar30 + 0x7ae);
              if (uVar32 != 0xff) {
                if (pbVar18 < pbVar2) {
                  *(byte **)(puVar30 + 0x7ae) = pbVar18 + 1;
                  *pbVar18 = 0xff;
                  pbVar18 = *(byte **)(puVar30 + 0x7ae);
                }
                if (pbVar18 < pbVar2) {
                  *(byte **)(puVar30 + 0x7ae) = pbVar18 + 1;
                  *pbVar18 = bVar4;
                  pbVar18 = *(byte **)(puVar30 + 0x7ae);
                }
                *(byte **)(puVar30 + 0x7b0) = pbVar18 + -2;
                *(undefined4 **)(puVar30 + 0x7ae) = puVar13;
                if (*(char *)(lVar10 + 0x628) != '\0') {
                  if (uVar31 - 0xec < 0x14) {
                    FUN_00a38740(lVar10,"%s IAC %s\n","In SUBOPTION processing, RCVD",
                                 (&PTR_s_EOF_0145b715_0x13_016a3d28)[(int)(uVar31 - 0xec)]);
                  }
                  else {
                    FUN_00a38740(lVar10,"%s IAC %d\n","In SUBOPTION processing, RCVD",uVar33);
                  }
                }
                FUN_00a46e64(param_1);
                puVar30[0x7b2] = 1;
                goto switchD_00a45cf4_caseD_1;
              }
              if (pbVar18 < pbVar2) {
                *(byte **)(puVar30 + 0x7ae) = pbVar18 + 1;
                *pbVar18 = 0xff;
              }
              goto LAB_00a465cc;
            }
            pbVar18 = *(byte **)(puVar30 + 0x7ae);
            if (pbVar18 < pbVar2) {
              *(byte **)(puVar30 + 0x7ae) = pbVar18 + 1;
              *pbVar18 = 0xff;
              pbVar18 = *(byte **)(puVar30 + 0x7ae);
            }
            if (pbVar18 < pbVar2) {
              *(byte **)(puVar30 + 0x7ae) = pbVar18 + 1;
              *pbVar18 = 0xf0;
              pbVar18 = *(byte **)(puVar30 + 0x7ae);
            }
            *(byte **)(puVar30 + 0x7b0) = pbVar18 + -2;
            *(undefined4 **)(puVar30 + 0x7ae) = puVar13;
            FUN_00a46e64(param_1);
            uVar17 = 0;
            goto LAB_00a46638;
          }
LAB_00a46aa4:
          iVar7 = iVar8;
          lVar28 = lVar28 + 1;
                    /* catch() { ... } // from try @ 00a469a8 with catch @ 00a46aa8 */
        } while (lVar9 != lVar28);
        if ((iVar7 < 0) ||
           (iVar7 = FUN_00a391f0(param_1,1,lVar25 + iVar7 + 0xb08,(long)((int)lVar28 - iVar7)),
           iVar7 == 0)) goto LAB_00a46af8;
LAB_00a46ae0:
        lVar9 = *(long *)(lVar25 + 0x358);
joined_r0x00a46af0:
        bVar6 = false;
      }
joined_r0x00a45b44:
      if (lVar9 != 0) {
        auVar34 = FUN_00a2e828();
        lVar9 = FUN_00a2e888(auVar34._0_8_,auVar34._8_8_,param_1[0x4a],param_1[0x4b]);
        if (*(long *)(lVar25 + 0x358) <= lVar9) {
          FUN_00a38a08(lVar25,"Time-out");
          bVar6 = false;
          iVar7 = 0x1c;
        }
      }
      iVar8 = FUN_00a306d0(param_1);
    } while (iVar8 == 0);
    iVar7 = 0x2a;
LAB_00a46d8c:
    FUN_00a49fc0(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
  }
LAB_00a46db0:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a46e08 to 00b46e53 has its CatchHandler @ 00a46e08
                       catch() { ... } // from try @ 00a46e08 with catch @ 00a46e08
                       catch() { ... } // from try @ 00a46e58 with catch @ 00a46e08 */
    __stack_chk_fail();
  }
  return iVar7;
}

