
/* WARNING: Removing unreachable block (ram,0x00a6595c) */

int FUN_00a651fc(long *param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined4 uVar11;
  char *pcVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  char *pcVar16;
  char cVar17;
  long lVar18;
  char *pcVar19;
  char cVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  long *plVar27;
  long local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 local_184;
  uint local_180;
  short asStack_17c [2];
  undefined8 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  int iStack_158;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  plVar1 = param_1 + 0xc3;
  lVar23 = *param_1;
  local_198 = 0;
  if (param_1[0xc9] != 0) {
    iVar6 = FUN_00a550ec(plVar1);
    goto LAB_00a652a4;
  }
  plVar27 = (long *)param_1[0xce];
  lVar26 = *plVar27;
  iVar6 = FUN_00a54e00((int)param_1[0x4c],plVar1,&local_170,&local_198);
  uVar22 = local_170;
  iVar7 = (uint)local_170;
  *(uint *)(lVar26 + 0x8d68) = (uint)local_170;
  if ((uint)local_170 == 0x1a5) {
    FUN_00a38740(lVar26,"We got a 421 - timeout!\n");
    *(undefined4 *)(plVar27 + 0xd9) = 0;
    iVar6 = 0x1c;
    goto LAB_00a652a4;
  }
  if (iVar6 != 0) goto LAB_00a652a4;
  if ((uint)local_170 == 0) {
LAB_00a65f30:
    iVar6 = 0;
    goto LAB_00a652a4;
  }
  iVar3 = (int)param_1[0xd9];
  switch(iVar3) {
  case 1:
    if ((uint)local_170 != 0xdc) {
      if ((uint)local_170 == 0xe6) {
        iVar6 = FUN_00a6678c(param_1,0xe6);
      }
      else {
                    /* try { // try from 00a65e34 to 00b65e63 has its CatchHandler @ 00a65dac */
        FUN_00a38a08(lVar23,"Got a %03d ftp-server response when 220 was expected",
                     local_170 & 0xffffffff);
        iVar6 = 8;
      }
      break;
    }
                    /* try { // try from 00a65dac to 00b65dfb has its CatchHandler @ 00a65dac
                       catch() { ... } // from try @ 00a65dac with catch @ 00a65dac
                       catch() { ... } // from try @ 00a65e34 with catch @ 00a65dac
                       catch() { ... } // from try @ 00a65e78 with catch @ 00a65dac */
    if ((*(int *)(lVar23 + 0x630) != 0) &&
       (((char)param_1[0x53] == '\0' ||
        ((*(char *)((long)param_1 + 0x3d9) != '\0' && ((char)param_1[0x5d] == '\0')))))) {
      *(undefined4 *)((long)param_1 + 0x6c4) = 0;
      if (*(uint *)(lVar23 + 0x634) < 3) {
        lVar23 = (long)(int)*(uint *)(lVar23 + 0x634) * 4;
        uVar25 = *(uint *)(&DAT_013cbe40 + lVar23);
                    /* try { // try from 00a65dfc to 00b65e33 has its CatchHandler @ 00a65eb8 */
        *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(&DAT_013cbe34 + lVar23);
        *(uint *)((long)param_1 + 0x6bc) = uVar25;
        iVar6 = FUN_00a54d8c(plVar1,"AUTH %s",&UNK_013cbe00 + (ulong)uVar25 * 4);
        if (iVar6 == 0) {
          *(undefined4 *)(param_1 + 0xd9) = 2;
        }
      }
      else {
        FUN_00a38a08(lVar23,"unsupported parameter to CURLOPT_FTPSSLAUTH: %d");
        iVar6 = 0x30;
      }
      break;
    }
LAB_00a65f44:
    lVar23 = *param_1;
    goto LAB_00a65f48;
  case 2:
                    /* try { // try from 00a654dc to 00b654ef has its CatchHandler @ 00a65574 */
    if (((uint)local_170 != 0x14e) && ((uint)local_170 != 0xea)) {
      if (*(int *)((long)param_1 + 0x6c4) < 1) {
                    /* try { // try from 00a66110 to 00b66257 has its CatchHandler @ 00a66110
                       catch() { ... } // from try @ 00a66110 with catch @ 00a66110
                       catch() { ... } // from try @ 00a662d8 with catch @ 00a66110 */
        *(int *)((long)param_1 + 0x6c4) = *(int *)((long)param_1 + 0x6c4) + 1;
        iVar6 = *(int *)((long)param_1 + 0x6bc) + (int)param_1[0xd8];
        *(int *)((long)param_1 + 0x6bc) = iVar6;
        puVar10 = &UNK_013cbe00 + (long)iVar6 * 4;
        pcVar9 = "AUTH %s";
        goto LAB_00a65c70;
      }
      if (1 < *(uint *)(lVar23 + 0x630)) goto LAB_00a65e58;
      goto LAB_00a65f44;
    }
    iVar6 = FUN_00a2d590(param_1,0);
                    /* try { // try from 00a654f4 to 00b65527 has its CatchHandler @ 00a65578 */
    if (iVar6 != 0) break;
    lVar23 = *param_1;
    *(undefined1 *)((long)param_1 + 0x3ce) = 0;
LAB_00a65f48:
    puVar14 = *(undefined1 **)(*(long *)(lVar23 + 0x218) + 8);
    puVar2 = &DAT_013c996e;
    if (puVar14 != (undefined1 *)0x0) {
      puVar2 = puVar14;
    }
    iVar6 = FUN_00a54d8c(plVar1,"USER %s",puVar2);
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0xd9) = 3;
      *(undefined1 *)(*param_1 + 36000) = 0;
    }
    break;
  case 3:
  case 4:
                    /* catch() { ... } // from try @ 00a65318 with catch @ 00a6537c */
    iVar6 = FUN_00a6678c(param_1,local_170 & 0xffffffff);
    break;
  case 5:
    if ((uint)local_170 != 0xe6) {
      FUN_00a38a08(*param_1,"ACCT rejected by server: %03d",local_170 & 0xffffffff);
      iVar6 = 0xb;
      break;
    }
    if ((char)param_1[0x53] != '\0') {
      iVar6 = FUN_00a54d8c(plVar1,"PBSZ %d",0);
                    /* try { // try from 00a65528 to 00b655c3 has its CatchHandler @ 00a65390 */
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0xd9) = 6;
      }
      break;
    }
    goto LAB_00a65c18;
  case 6:
    uVar11 = 0x43;
    if (*(int *)(lVar23 + 0x630) != 2) {
      uVar11 = 0x50;
    }
    iVar6 = FUN_00a54d8c(plVar1,"PROT %c",uVar11);
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0xd9) = 7;
    }
    break;
  case 7:
                    /* catch() { ... } // from try @ 00a654dc with catch @ 00a65574 */
                    /* catch() { ... } // from try @ 00a654f4 with catch @ 00a65578 */
    if ((uint)local_170 - 200 < 100) {
      *(bool *)((long)param_1 + 0x3ce) = *(uint *)(lVar23 + 0x630) != 2;
      iVar6 = *(int *)(lVar23 + 0x638);
    }
    else {
      if (2 < *(uint *)(lVar23 + 0x630)) {
LAB_00a65e58:
        iVar6 = 0x40;
        break;
      }
      iVar6 = *(int *)(lVar23 + 0x638);
    }
    if (iVar6 != 0) {
                    /* try { // try from 00a65bf4 to 00b65c23 has its CatchHandler @ 00a65b6c */
      iVar6 = FUN_00a54d8c(plVar1,"%s",&DAT_013cb309);
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0xd9) = 8;
      }
      break;
    }
    goto LAB_00a65c18;
  case 8:
                    /* catch() { ... } // from try @ 00a654a8 with catch @ 00a655a8 */
    if (((int)(uint)local_170 < 500) && (iVar6 = FUN_00a2df54(param_1,0), iVar6 != 0)) {
      FUN_00a38a08(*param_1,"Failed to clear the command channel (CCC)");
      break;
    }
LAB_00a65c18:
                    /* try { // try from 00a65c24 to 00b65c37 has its CatchHandler @ 00a65c78 */
    iVar6 = FUN_00a54d8c(plVar1,"%s",&DAT_013cb47c);
    if (iVar6 == 0) {
LAB_00a65c38:
                    /* try { // try from 00a65c38 to 00b65c93 has its CatchHandler @ 00a65b6c */
      *(undefined4 *)(param_1 + 0xd9) = 9;
    }
    break;
  case 9:
    if ((uint)local_170 == 0x101) {
      pcVar9 = (char *)(*(code *)PTR_malloc_017699f8)(local_198 + 1);
      if (pcVar9 == (char *)0x0) {
LAB_00a6656c:
        iVar6 = 0x1b;
        break;
      }
      cVar17 = *(char *)(lVar23 + 0xb0c);
      pcVar12 = (char *)(lVar23 + 0xb0c);
      do {
        if ((cVar17 == '\0') || (cVar17 == '\n')) goto LAB_00a660e8;
        pcVar16 = pcVar9;
        if (cVar17 == '\"') goto LAB_00a6563c;
        pcVar12 = pcVar12 + 1;
        cVar17 = *pcVar12;
      } while (pcVar12 < (char *)(lVar23 + 0x4b09U));
      if (cVar17 == '\"') {
LAB_00a6563c:
        do {
          pcVar19 = pcVar12 + 1;
          cVar17 = *pcVar19;
          if (cVar17 == '\"') {
            pcVar19 = pcVar12 + 2;
            cVar17 = *pcVar19;
            if (cVar17 != '\"') goto code_r0x00a65664;
          }
          else if (cVar17 == '\0') goto LAB_00a65668;
          *pcVar16 = cVar17;
          pcVar12 = pcVar19;
          pcVar16 = pcVar16 + 1;
        } while( true );
      }
LAB_00a660e8:
                    /* catch() { ... } // from try @ 00a660a8 with catch @ 00a660f8 */
      (*(code *)PTR_free_01769a00)(pcVar9);
                    /* catch() { ... } // from try @ 00a6608c with catch @ 00a660fc */
      FUN_00a38740(lVar23,"Failed to figure out path\n");
    }
  default:
switchD_00a652fc_default:
    iVar6 = 0;
    *(undefined4 *)(param_1 + 0xd9) = 0;
    break;
  case 10:
    if ((uint)local_170 == 0xd7) {
      pcVar9 = (char *)(*(code *)PTR_malloc_017699f8)(local_198 + 1);
      if (pcVar9 == (char *)0x0) goto LAB_00a6656c;
      pbVar15 = (byte *)(lVar23 + 0xb0c);
      do {
        pbVar13 = pbVar15 + 1;
        bVar4 = *pbVar15;
        pbVar15 = pbVar13;
      } while (bVar4 == 0x20);
      lVar23 = 0;
      while ((bVar4 | 0x20) != 0x20) {
        pcVar9[lVar23] = bVar4;
        pbVar15 = pbVar13 + lVar23;
        lVar23 = lVar23 + 1;
        bVar4 = *pbVar15;
      }
      pcVar9[lVar23] = '\0';
      iVar6 = FUN_00a4a0f8(pcVar9,"OS/400");
      if (iVar6 != 0) {
        iVar6 = FUN_00a54d8c(plVar1,"%s","SITE NAMEFMT 1");
        if (iVar6 == 0) {
          (*(code *)PTR_free_01769a00)(param_1[0xdb]);
          param_1[0xdb] = (long)pcVar9;
          *(undefined4 *)(param_1 + 0xd9) = 0xb;
          break;
        }
        goto LAB_00a65758;
      }
      (*(code *)PTR_free_01769a00)(param_1[0xdb]);
      param_1[0xdb] = (long)pcVar9;
    }
    goto switchD_00a652fc_default;
  case 0xb:
    if ((uint)local_170 != 0xfa) goto switchD_00a652fc_default;
    iVar7 = FUN_00a54d8c(plVar1,"%s",&DAT_013cb47c);
    iVar6 = 0;
    if (iVar7 != 0) break;
    goto LAB_00a65c38;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    if (((int)(uint)local_170 < 400) || ((int)param_1[0xd8] != 0)) {
                    /* try { // try from 00a65318 to 00b6531b has its CatchHandler @ 00a6537c */
      iVar6 = FUN_00a668f0(param_1,0,iVar3);
    }
    else {
      FUN_00a38a08(*param_1,"QUOT command failed with %03d",local_170 & 0xffffffff);
      iVar6 = 0x15;
    }
    break;
  case 0x10:
    if (99 < (uint)local_170 - 200) {
                    /* try { // try from 00a657a4 to 00b657ef has its CatchHandler @ 00a657a4
                       catch() { ... } // from try @ 00a657a4 with catch @ 00a657a4
                       catch() { ... } // from try @ 00a6580c with catch @ 00a657a4 */
      if (((*(int *)(*param_1 + 0x5fc) == 0) || (*(int *)((long)param_1 + 0x6bc) == 0)) ||
         ((int)param_1[0xd8] != 0)) {
        FUN_00a38a08(lVar23,"Server denied you to change to the given directory");
        *(undefined1 *)((long)param_1 + 0x6ab) = 1;
        iVar6 = 9;
      }
      else {
        *(undefined4 *)(param_1 + 0xd8) = 1;
        iVar6 = FUN_00a54d8c(plVar1,"MKD %s",
                             *(undefined8 *)
                              (param_1[0xd2] + (long)(*(int *)((long)param_1 + 0x6bc) + -1) * 8));
        if (iVar6 == 0) {
          *(undefined4 *)(param_1 + 0xd9) = 0x11;
        }
      }
      break;
    }
    iVar6 = *(int *)((long)param_1 + 0x6bc);
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(int *)((long)param_1 + 0x6bc) = iVar6 + 1;
    if (iVar6 < (int)param_1[0xd3]) {
      puVar10 = *(undefined **)(param_1[0xd2] + (long)iVar6 * 8);
      goto LAB_00a65c68;
    }
    lVar23 = *param_1;
    if (((*(char *)(lVar23 + 0x611) != '\0') || (*(int *)(lVar23 + 0x420) != 0)) &&
       (param_1[0xd4] != 0)) {
                    /* catch() { ... } // from try @ 00a66018 with catch @ 00a66050 */
      iVar6 = FUN_00a54d8c(plVar1,"MDTM %s");
                    /* try { // try from 00a66064 to 00b6608b has its CatchHandler @ 00a66064
                       catch() { ... } // from try @ 00a66064 with catch @ 00a66064
                       catch() { ... } // from try @ 00a660c8 with catch @ 00a66064 */
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0xd9) = 0x12;
      }
      break;
    }
    if ((*(char *)(lVar23 + 0x620) != '\0') && (param_1[0xd4] != 0)) {
      lVar26 = param_1[0xd7];
      cVar20 = 'A';
      cVar17 = cVar20;
      if (*(char *)(lVar23 + 0x613) == '\0') {
        cVar17 = 'I';
      }
      if (cVar17 != (char)lVar26) {
        if (*(char *)(lVar23 + 0x613) == '\0') {
          cVar20 = 'I';
        }
        *(undefined4 *)(*(long *)(lVar23 + 0x218) + 0x18) = 1;
        if ((char)lVar26 == cVar20) goto LAB_00a66404;
        goto LAB_00a664b4;
      }
    }
    iVar6 = *(int *)(*(long *)(lVar23 + 0x218) + 0x18);
    if (iVar6 == 0) goto LAB_00a661e4;
LAB_00a661a0:
    if (iVar6 != 1) goto LAB_00a661b4;
    if (param_1[0xd4] != 0) {
LAB_00a6640c:
      iVar6 = FUN_00a54d8c(plVar1,"SIZE %s");
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0xd9) = 0x17;
      }
      break;
    }
    goto LAB_00a661e4;
  case 0x11:
                    /* try { // try from 00a657f0 to 00b657f3 has its CatchHandler @ 00a6586c */
    if ((99 < (uint)local_170 - 200) &&
       (iVar6 = *(int *)((long)param_1 + 0x6c4), *(int *)((long)param_1 + 0x6c4) = iVar6 + -1,
       iVar6 == 0)) {
      FUN_00a38a08(lVar23,"Failed to MKD dir: %03d",local_170 & 0xffffffff);
                    /* try { // try from 00a660a8 to 00b660b7 has its CatchHandler @ 00a660f8 */
      iVar6 = 9;
      break;
    }
    *(undefined4 *)(param_1 + 0xd9) = 0x10;
                    /* try { // try from 00a65808 to 00b6580b has its CatchHandler @ 00a6585c */
    puVar10 = *(undefined **)(param_1[0xd2] + (long)*(int *)((long)param_1 + 0x6bc) * 8 + -8);
                    /* try { // try from 00a6580c to 00b6587f has its CatchHandler @ 00a657a4 */
LAB_00a65c68:
    pcVar9 = "CWD %s";
LAB_00a65c70:
    iVar6 = FUN_00a54d8c(plVar1,pcVar9,puVar10);
                    /* catch() { ... } // from try @ 00a65bbc with catch @ 00a65c78
                       catch() { ... } // from try @ 00a65c24 with catch @ 00a65c78 */
    break;
  case 0x12:
    lVar23 = *param_1;
    lVar26 = *(long *)(lVar23 + 0x218);
    if ((uint)local_170 == 0x226) {
                    /* try { // try from 00a65e64 to 00b65e77 has its CatchHandler @ 00a65eb8 */
      FUN_00a38a08(lVar23,"Given file does not exist");
      iVar6 = 0x13;
      iVar7 = *(int *)(lVar23 + 0x420);
                    /* try { // try from 00a65e78 to 00b65ed3 has its CatchHandler @ 00a65dac */
    }
    else if ((uint)local_170 == 0xd5) {
      lVar21 = lVar23 + 0xb08;
      iVar6 = sscanf((char *)(lVar23 + 0xb0c),"%04d%02d%02d%02d%02d%02d",&local_178,&local_180,
                     &local_184,&uStack_188,&local_18c,&local_190);
      if (iVar6 == 6) {
                    /* catch() { ... } // from try @ 00a65808 with catch @ 00a6585c */
        local_170 = time((time_t *)0x0);
                    /* catch() { ... } // from try @ 00a657f0 with catch @ 00a6586c */
                    /* try { // try from 00a65880 to 00b65967 has its CatchHandler @ 00a65880
                       catch() { ... } // from try @ 00a65880 with catch @ 00a65880
                       catch() { ... } // from try @ 00a659e8 with catch @ 00a65880 */
        FUN_00a241ac(lVar21,0x4001,"%04d%02d%02d %02d:%02d:%02d GMT",(ulong)local_178 & 0xffffffff,
                     local_180,local_184,uStack_188,local_18c,local_190);
        uVar8 = FUN_00a4c2a0(lVar21,&local_170);
        *(undefined8 *)(lVar23 + 0x8d78) = uVar8;
      }
      if ((((*(char *)(lVar23 + 0x620) == '\0') || (param_1[0xd4] == 0)) ||
          (*(char *)(lVar23 + 0x611) == '\0')) || (*(long *)(lVar23 + 0x8d78) < 0)) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_00a4ca74(*(long *)(lVar23 + 0x8d78),&local_170);
        if (iVar6 != 0) break;
        lVar18 = 6;
        if (iStack_158 != 0) {
          lVar18 = (long)iStack_158 + -1;
        }
        FUN_00a241ac(lVar21,0x3fff,"Last-Modified: %s, %02d %s %4d %02d:%02d:%02d GMT\r\n",
                     (&PTR_DAT_016a3f40)[lVar18],uStack_168._4_4_,
                     (&PTR_DAT_016a3f78)[(int)local_160],local_160._4_4_ + 0x76c,
                     uStack_168 & 0xffffffff,local_170._4_4_,(uint)local_170);
        iVar6 = FUN_00a391f0(param_1,3,lVar21,0);
        if (iVar6 != 0) break;
      }
      iVar7 = *(int *)(lVar23 + 0x420);
    }
    else {
      FUN_00a38740(lVar23,"unsupported MDTM reply format\n");
      iVar6 = 0;
      iVar7 = *(int *)(lVar23 + 0x420);
    }
    if (iVar7 != 0) {
      lVar21 = *(long *)(lVar23 + 0x8d78);
      if ((lVar21 < 1) || (lVar18 = *(long *)(lVar23 + 0x428), lVar18 < 1)) {
        FUN_00a38740(lVar23,"Skipping time comparison\n");
      }
      else if (iVar7 == 2) {
                    /* try { // try from 00a65fcc to 00b66017 has its CatchHandler @ 00a65fcc
                       catch() { ... } // from try @ 00a65fcc with catch @ 00a65fcc
                       catch() { ... } // from try @ 00a6601c with catch @ 00a65fcc */
        if (lVar18 < lVar21) {
          pcVar9 = "The requested document is not old enough\n";
LAB_00a66200:
          FUN_00a38740(lVar23,pcVar9);
          iVar6 = 0;
          *(undefined4 *)(lVar26 + 0x18) = 2;
          *(undefined1 *)(lVar23 + 0x8d80) = 1;
          *(undefined4 *)(param_1 + 0xd9) = 0;
          break;
        }
      }
      else if (lVar21 <= lVar18) {
        pcVar9 = "The requested document is not new enough\n";
        goto LAB_00a66200;
      }
    }
    if (iVar6 != 0) break;
    lVar23 = *param_1;
    if ((*(char *)(lVar23 + 0x620) != '\0') && (param_1[0xd4] != 0)) {
      lVar26 = param_1[0xd7];
                    /* try { // try from 00a66018 to 00b6601b has its CatchHandler @ 00a66050 */
      cVar20 = 'A';
      cVar17 = cVar20;
                    /* try { // try from 00a6601c to 00b66063 has its CatchHandler @ 00a65fcc */
      if (*(char *)(lVar23 + 0x613) == '\0') {
        cVar17 = 'I';
      }
      if (cVar17 == (char)lVar26) goto LAB_00a66028;
      if (*(char *)(lVar23 + 0x613) == '\0') {
        cVar20 = 'I';
      }
      *(undefined4 *)(*(long *)(lVar23 + 0x218) + 0x18) = 1;
      if ((char)lVar26 != cVar20) {
LAB_00a664b4:
        iVar6 = FUN_00a54d8c(plVar1,"TYPE %c",cVar20);
        if (iVar6 == 0) {
          *(undefined4 *)(param_1 + 0xd9) = 0x13;
          *(char *)(param_1 + 0xd7) = cVar20;
        }
        break;
      }
LAB_00a66404:
      *(undefined4 *)(param_1 + 0xd9) = 0x13;
      goto LAB_00a6640c;
    }
LAB_00a66028:
    iVar6 = *(int *)(*(long *)(lVar23 + 0x218) + 0x18);
    if (iVar6 != 0) goto LAB_00a661a0;
    goto LAB_00a661e4;
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
                    /* try { // try from 00a65330 to 00b65333 has its CatchHandler @ 00a6536c */
    iVar6 = FUN_00a66bfc(param_1,local_170 & 0xffffffff,iVar3);
                    /* try { // try from 00a65334 to 00b6538f has its CatchHandler @ 00a652cc */
    break;
  case 0x17:
  case 0x18:
  case 0x19:
    lVar23 = *param_1;
    if ((uint)local_170 == 0xd5) {
      lVar26 = strtol((char *)(lVar23 + 0xb0c),(char **)0x0,0);
    }
    else {
      lVar26 = -1;
    }
    if (iVar3 == 0x19) {
                    /* catch() { ... } // from try @ 00a65330 with catch @ 00a6536c */
      *(long *)(lVar23 + 0x8cd8) = lVar26;
      iVar6 = FUN_00a67080(param_1,1);
      break;
    }
    if (iVar3 == 0x18) {
      FUN_00a30eac(lVar23,lVar26);
      iVar6 = FUN_00a66efc(param_1,lVar26);
      break;
    }
    if (iVar3 != 0x17) goto LAB_00a65f30;
    if (lVar26 != -1) {
      FUN_00a241ac(lVar23 + 0xb08,0x4001,"Content-Length: %ld\r\n",lVar26);
      iVar6 = FUN_00a391f0(param_1,3,lVar23 + 0xb08,0);
      if (iVar6 != 0) break;
    }
    FUN_00a30eac(lVar23,lVar26);
                    /* try { // try from 00a654a8 to 00b654db has its CatchHandler @ 00a655a8 */
    if (*(int *)(*(long *)(*param_1 + 0x218) + 0x18) == 0) goto LAB_00a661e4;
LAB_00a661b4:
    if (param_1[0xd4] != 0) {
      iVar6 = FUN_00a54d8c(plVar1,"REST %d",0);
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0xd9) = 0x1a;
      }
      break;
    }
    goto LAB_00a661e4;
  case 0x1a:
  case 0x1b:
    if (iVar3 == 0x1b) {
                    /* try { // try from 00a65390 to 00b654a7 has its CatchHandler @ 00a65390
                       catch() { ... } // from try @ 00a65390 with catch @ 00a65390
                       catch() { ... } // from try @ 00a65528 with catch @ 00a65390 */
      if ((uint)local_170 == 0x15e) {
        iVar6 = FUN_00a54d8c(plVar1,"RETR %s",param_1[0xd4]);
        if (iVar6 == 0) {
          *(undefined4 *)(param_1 + 0xd9) = 0x20;
        }
      }
      else {
        FUN_00a38a08(*param_1,"Couldn\'t use REST");
        iVar6 = 0x1f;
                    /* try { // try from 00a65bbc to 00b65bf3 has its CatchHandler @ 00a65c78 */
      }
      break;
    }
    if ((uint)local_170 == 0x15e) {
      local_160 = 0xa0d73657479;
      uStack_168._0_1_ = 'a';
      uStack_168._1_1_ = 'n';
      uStack_168._2_1_ = 'g';
      uStack_168._3_1_ = 'e';
      uStack_168._4_1_ = 's';
      uStack_168._5_1_ = ':';
      uStack_168._6_1_ = ' ';
      uStack_168._7_1_ = 'b';
      local_170._0_1_ = 'A';
      local_170._1_1_ = 'c';
      local_170._2_1_ = 'c';
      local_170._3_1_ = 'e';
      local_170._4_1_ = 'p';
      local_170._5_1_ = 't';
      local_170._6_1_ = '-';
      local_170._7_1_ = 'r';
      iVar6 = FUN_00a391f0(param_1,3,&local_170,0);
      if (iVar6 != 0) break;
    }
LAB_00a661e4:
    iVar6 = FUN_00a67274(param_1);
    break;
  case 0x1c:
    lVar23 = *param_1;
                    /* try { // try from 00a65968 to 00b6599b has its CatchHandler @ 00a65a68 */
    if ((uint)local_170 - 200 < 100) {
      FUN_00a38740(lVar23,"Connect data stream actively\n");
      *(undefined4 *)(param_1 + 0xd9) = 0;
      if (*(int *)(*(long *)(*param_1 + 0x218) + 0x18) == 0) {
        *(undefined1 *)((long)param_1 + 0x3c4) = 1;
      }
      else {
        FUN_00a49fc0(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
      }
      iVar6 = 0;
                    /* catch() { ... } // from try @ 00a660bc with catch @ 00a660e0 */
      *(undefined1 *)((long)param_1 + 0x6a9) = 1;
    }
    else {
      if (*(int *)((long)param_1 + 0x6bc) == 0) {
        FUN_00a38740(lVar23,"disabling EPRT usage\n");
                    /* try { // try from 00a660bc to 00b660c7 has its CatchHandler @ 00a660e0 */
        iVar6 = 1;
        *(undefined1 *)((long)param_1 + 0x3cd) = 0;
      }
      else {
        iVar6 = *(int *)((long)param_1 + 0x6bc) + 1;
        if (iVar6 == 2) {
          FUN_00a38a08(lVar23,"Failed to do PORT");
          iVar6 = 0x1e;
          break;
        }
      }
                    /* try { // try from 00a660c8 to 00b6610f has its CatchHandler @ 00a66064 */
      iVar6 = FUN_00a673c8(param_1,iVar6);
    }
    break;
  case 0x1d:
                    /* try { // try from 00a6599c to 00b659af has its CatchHandler @ 00a65a34 */
    if ((uint)local_170 != 200) {
      FUN_00a38a08(lVar23,"PRET command not accepted: %03d",local_170 & 0xffffffff);
      iVar6 = 0x54;
      break;
    }
    if (*(char *)((long)param_1 + 0x3cc) == '\0') {
      uVar22 = 1;
      if (*(char *)((long)param_1 + 0x3c3) != '\0') {
                    /* try { // try from 00a659b4 to 00b659e7 has its CatchHandler @ 00a65a38 */
        *(undefined1 *)((long)param_1 + 0x3cc) = 1;
        goto LAB_00a659b8;
      }
    }
    else {
LAB_00a659b8:
      uVar22 = 0;
    }
    iVar6 = FUN_00a54d8c(plVar1,"%s",&DAT_013cbe2a + (uVar22 | uVar22 << 2));
    if (iVar6 == 0) {
                    /* try { // try from 00a659e8 to 00b65a83 has its CatchHandler @ 00a65880 */
      *(int *)((long)param_1 + 0x6bc) = (int)uVar22;
      *(undefined4 *)(param_1 + 0xd9) = 0x1e;
      FUN_00a38740(*param_1,"Connect data stream passively\n");
    }
    break;
  case 0x1e:
    lVar23 = *param_1;
    local_178 = (undefined8 *)0x0;
    pcVar9 = (char *)(lVar23 + 0xb0c);
    (*(code *)PTR_free_01769a00)(param_1[0xdd]);
    iVar6 = *(int *)((long)param_1 + 0x6bc);
    param_1[0xdd] = 0;
                    /* catch() { ... } // from try @ 00a6599c with catch @ 00a65a34 */
                    /* catch() { ... } // from try @ 00a659b4 with catch @ 00a65a38 */
    if ((iVar7 != 0xe5) || (iVar6 != 0)) {
      if ((iVar7 == 0xe3) && (iVar6 == 1)) {
        if (*pcVar9 != '\0') {
          do {
            iVar6 = sscanf(pcVar9,"%d,%d,%d,%d,%d,%d",&local_170,(long)&local_170 + 4,&uStack_168,
                           (long)&uStack_168 + 4,&local_180,asStack_17c);
            if (iVar6 == 6) {
              if (*pcVar9 != '\0') {
                    /* try { // try from 00a662a4 to 00b662d7 has its CatchHandler @ 00a66328 */
                if (*(char *)(lVar23 + 0x640) == '\0') {
                  lVar26 = FUN_00a24258("%d.%d.%d.%d",local_170 & 0xffffffff,local_170._4_4_,
                                        uStack_168 & 0xffffffff,uStack_168._4_4_);
                }
                else {
                  FUN_00a38740(lVar23,"Skip %d.%d.%d.%d for data connection, re-use %s instead\n");
                    /* try { // try from 00a662d8 to 00b66373 has its CatchHandler @ 00a66110 */
                  if ((*(char *)((long)param_1 + 0x3c9) == '\0') &&
                     (*(char *)((long)param_1 + 0x3bf) == '\0')) {
                    lVar26 = (*(code *)PTR_strdup_01769a10)(param_1 + 0xf);
                  }
                  else {
                    lVar26 = (*(code *)PTR_strdup_01769a10)(param_1[0x18]);
                  }
                }
                param_1[0xdd] = lVar26;
                if (lVar26 == 0) goto LAB_00a6656c;
                *(short *)(param_1 + 0xde) = asStack_17c[0] + (short)(local_180 << 8);
                goto LAB_00a66514;
              }
              break;
            }
            pcVar9 = pcVar9 + 1;
          } while (*pcVar9 != '\0');
        }
        FUN_00a38a08(lVar23,"Couldn\'t interpret the 227-response");
        iVar6 = 0xe;
        break;
      }
      if (iVar6 != 0) {
        FUN_00a38a08(lVar23,"Bad PASV/EPSV response: %03d",uVar22 & 0xffffffff);
                    /* try { // try from 00a6608c to 00b6608f has its CatchHandler @ 00a660fc */
        iVar6 = 0xd;
        break;
      }
LAB_00a665c4:
      if (*(char *)((long)param_1 + 0x3c3) == '\0') {
        FUN_00a38740(*param_1,"Failed EPSV attempt. Disabling EPSV\n");
        *(undefined1 *)((long)param_1 + 0x3cc) = 0;
        *(undefined1 *)(*param_1 + 0x8b60) = 0;
        iVar6 = FUN_00a54d8c(plVar1,"%s",&DAT_013cb928);
        if (iVar6 == 0) {
          *(undefined4 *)(param_1 + 0xd9) = 0x1e;
          *(int *)((long)param_1 + 0x6bc) = *(int *)((long)param_1 + 0x6bc) + 1;
        }
      }
      else {
        FUN_00a38a08(*param_1,"Failed EPSV attempt, exiting\n");
        iVar6 = 8;
      }
      break;
    }
    pcVar9 = strchr(pcVar9,0x28);
    if (pcVar9 == (char *)0x0) {
LAB_00a6636c:
      pcVar9 = "Weirdly formatted EPSV reply";
    }
    else {
                    /* catch() { ... } // from try @ 00a65968 with catch @ 00a65a68 */
      iVar6 = sscanf(pcVar9 + 1,"%c%c%c%u%c",&local_180,(ulong)&local_180 | 1,(ulong)&local_180 | 2,
                     &local_170,(ulong)&local_180 | 3);
      if (iVar6 != 5) goto LAB_00a6636c;
      if ((uint)local_170 < 0x10000) {
                    /* catch() { ... } // from try @ 00a6628c with catch @ 00a66324 */
                    /* catch() { ... } // from try @ 00a662a4 with catch @ 00a66328 */
        if ((((local_180 >> 8 & 0xff) == (local_180 & 0xff)) &&
            ((local_180 >> 0x10 & 0xff) == (local_180 & 0xff))) &&
           (local_180 >> 0x18 == (local_180 & 0xff))) {
          *(short *)(param_1 + 0xde) = (short)local_170;
          if ((*(char *)((long)param_1 + 0x3c9) == '\0') &&
             (*(char *)((long)param_1 + 0x3bf) == '\0')) {
            plVar27 = param_1 + 0xf;
          }
          else {
            plVar27 = (long *)param_1[0x18];
          }
                    /* catch() { ... } // from try @ 00a66258 with catch @ 00a66358 */
          lVar26 = (*(code *)PTR_strdup_01769a10)(plVar27);
          param_1[0xdd] = lVar26;
          if (lVar26 == 0) goto LAB_00a6656c;
LAB_00a66514:
          if (*(char *)((long)param_1 + 0x3bd) == '\0') {
            FUN_00a2fe40(param_1,lVar26,(short)param_1[0xde],&local_178);
            uVar25 = (uint)*(ushort *)(param_1 + 0xde);
            uVar24 = (uint)*(ushort *)(param_1 + 0xde);
            if (local_178 != (undefined8 *)0x0) goto LAB_00a66594;
            lVar26 = param_1[0xdd];
            pcVar9 = "Can\'t resolve new host %s:%hu";
          }
          else {
            plVar27 = param_1 + 0x23;
            if (*(char *)((long)param_1 + 0x3bf) == '\0') {
              plVar27 = param_1 + 0x2b;
            }
            lVar26 = plVar27[2];
            FUN_00a2fe40(param_1,lVar26,(int)param_1[0x33],&local_178);
            uVar24 = (uint)param_1[0x33];
            if (local_178 != (undefined8 *)0x0) {
LAB_00a66594:
              *(undefined1 *)((long)param_1 + 0x3c6) = 0;
              iVar6 = FUN_00a25fb0(param_1);
              if (iVar6 == 0) {
                if (*(char *)(lVar23 + 0x628) != '\0') {
                  lVar26 = param_1[0xdd];
                  FUN_00a2fa9c(*local_178,&local_170,0x100);
                  FUN_00a38740(*param_1,"Connecting to %s (%s) port %d\n",lVar26,&local_170,
                               uVar24 & 0xffff);
                }
                (*(code *)PTR_free_01769a00)(param_1[0x1a]);
                param_1[0x1a] = 0;
                lVar26 = (*(code *)PTR_strdup_01769a10)(param_1[0xdd]);
                param_1[0x1a] = lVar26;
                *(short *)(param_1 + 0x35) = (short)param_1[0xde];
                FUN_00a301e8(lVar23,local_178);
                iVar6 = 0;
                *(undefined1 *)((long)param_1 + 0x3c4) = 1;
                *(undefined4 *)(param_1 + 0xd9) = 0;
                break;
              }
              FUN_00a301e8(lVar23,local_178);
              if ((iVar7 != 0xe5) || (*(int *)((long)param_1 + 0x6bc) != 0)) break;
              goto LAB_00a665c4;
            }
            uVar25 = uVar24 & 0xffff;
            pcVar9 = "Can\'t resolve proxy host %s:%hu";
          }
          FUN_00a38a08(lVar23,pcVar9,lVar26,uVar25);
          iVar6 = 0xf;
          break;
        }
        goto LAB_00a6636c;
      }
      pcVar9 = "Illegal port number in EPSV reply";
    }
    FUN_00a38a08(lVar23,pcVar9);
    iVar6 = 0xd;
    break;
  case 0x1f:
  case 0x20:
    lVar26 = *param_1;
    lVar23 = *(long *)(lVar26 + 0x218);
    if (((uint)local_170 != 0x96) && ((uint)local_170 != 0x7d)) {
      if (((uint)local_170 == 0x1c2) && (iVar3 == 0x1f)) {
        iVar6 = 0;
        *(undefined4 *)(lVar23 + 0x18) = 2;
        *(undefined4 *)(param_1 + 0xd9) = 0;
      }
      else {
        FUN_00a38a08(lVar26,"RETR response: %03d",local_170 & 0xffffffff);
                    /* catch() { ... } // from try @ 00a65dfc with catch @ 00a65eb8
                       catch() { ... } // from try @ 00a65e64 with catch @ 00a65eb8 */
        iVar6 = 0x4e;
        if (iVar3 != 0x20 || iVar7 != 0x226) {
          iVar6 = 0x13;
        }
      }
      break;
    }
    if (((iVar3 == 0x1f) || (*(char *)(lVar26 + 0x613) != '\0')) || (0 < *(long *)(lVar23 + 0x20)))
    {
      lVar23 = *(long *)(lVar23 + 0x20);
      if (lVar23 < 0) {
        lVar23 = -1;
      }
    }
    else {
      pcVar9 = strstr((char *)(lVar26 + 0xb08)," bytes");
      if (pcVar9 == (char *)0x0) {
LAB_00a66430:
        lVar23 = -1;
      }
      else {
        pbVar15 = (byte *)(pcVar9 + -1);
        if ((long)pbVar15 - (lVar26 + 0xb08) != 1) {
          lVar23 = (lVar26 + 0xb09) - (long)pbVar15;
          do {
                    /* try { // try from 00a66258 to 00b6628b has its CatchHandler @ 00a66358 */
            if (*pbVar15 == 0x28) break;
            if (9 < *pbVar15 - 0x30) goto LAB_00a66430;
            lVar23 = lVar23 + 1;
            pbVar15 = pbVar15 + -1;
          } while (lVar23 != 0);
        }
        lVar23 = strtol((char *)(pbVar15 + 1),(char **)0x0,0);
                    /* try { // try from 00a6628c to 00b6629f has its CatchHandler @ 00a66324 */
      }
    }
    lVar21 = *(long *)(lVar26 + 0x88);
    if ((lVar21 < lVar23) && (0 < lVar21)) {
      *(long *)(lVar26 + 0x78) = lVar21;
      FUN_00a38740(lVar26,"Maxdownload = %ld\n",lVar21);
      lVar23 = lVar21;
      if (iVar3 != 0x1f) {
LAB_00a65b90:
        FUN_00a38740(lVar26,"Getting file with size: %ld\n",lVar23);
        lVar21 = lVar23;
      }
    }
    else {
      if (iVar3 != 0x1f) {
                    /* try { // try from 00a65b6c to 00b65bbb has its CatchHandler @ 00a65b6c
                       catch() { ... } // from try @ 00a65b6c with catch @ 00a65b6c
                       catch() { ... } // from try @ 00a65bf4 with catch @ 00a65b6c
                       catch() { ... } // from try @ 00a65c38 with catch @ 00a65b6c */
        if (*(char *)(lVar26 + 0x613) != '\0') {
          lVar23 = -1;
        }
        FUN_00a38740(lVar26,"Maxdownload = %ld\n",lVar21);
        goto LAB_00a65b90;
      }
      FUN_00a38740(lVar26,"Maxdownload = %ld\n",lVar21);
      lVar21 = lVar23;
    }
    *(int *)((long)param_1 + 0x6cc) = iVar3;
    param_1[0xda] = lVar21;
    if (*(char *)(lVar26 + 0x616) != '\0') {
      iVar6 = FUN_00a67b94(param_1,&local_170);
      if (iVar6 != 0) break;
      if ((char)local_170 == '\0') {
        FUN_00a38740(lVar26,"Data conn was not available immediately\n");
        *(undefined4 *)(param_1 + 0xd9) = 0;
        *(undefined1 *)((long)param_1 + 0x6ac) = 1;
      }
      goto LAB_00a65f30;
    }
    goto LAB_00a65f38;
  case 0x21:
    lVar23 = *param_1;
    if (399 < (int)(uint)local_170) {
      FUN_00a38a08(lVar23,"Failed FTP upload: %0d",local_170 & 0xffffffff);
      *(undefined4 *)(param_1 + 0xd9) = 0;
      iVar6 = 0x19;
      break;
    }
    *(undefined4 *)((long)param_1 + 0x6cc) = 0x21;
    if (*(char *)(lVar23 + 0x616) != '\0') {
      *(undefined4 *)(param_1 + 0xd9) = 0;
      iVar6 = FUN_00a67b94(param_1,&local_170);
      if (iVar6 != 0) break;
      if ((char)local_170 == '\0') {
        FUN_00a38740(lVar23,"Data conn was not available immediately\n");
        iVar6 = 0;
        *(undefined1 *)((long)param_1 + 0x6ac) = 1;
        break;
      }
      goto LAB_00a65f30;
    }
LAB_00a65f38:
    iVar6 = FUN_00a67c9c(param_1);
  }
LAB_00a652a4:
  if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* try { // try from 00a652cc to 00b65317 has its CatchHandler @ 00a652cc
                       catch() { ... } // from try @ 00a652cc with catch @ 00a652cc
                       catch() { ... } // from try @ 00a65334 with catch @ 00a652cc */
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00a65664:
  *pcVar16 = '\0';
LAB_00a65668:
  if ((param_1[0xdb] == 0) && (*pcVar9 != '/')) {
    iVar6 = FUN_00a54d8c(plVar1,"%s",&DAT_013cb337);
    if (iVar6 == 0) {
      (*(code *)PTR_free_01769a00)(param_1[0xd1]);
      param_1[0xd1] = (long)pcVar9;
      FUN_00a38740(lVar23,"Entry path is \'%s\'\n",pcVar9);
      *(long *)(lVar23 + 0x8c98) = param_1[0xd1];
      *(undefined4 *)(param_1 + 0xd9) = 10;
      goto LAB_00a652a4;
    }
LAB_00a65758:
    (*(code *)PTR_free_01769a00)(pcVar9);
    goto LAB_00a652a4;
  }
  (*(code *)PTR_free_01769a00)(param_1[0xd1]);
  param_1[0xd1] = (long)pcVar9;
  FUN_00a38740(lVar23,"Entry path is \'%s\'\n",pcVar9);
  *(long *)(lVar23 + 0x8c98) = param_1[0xd1];
  goto switchD_00a652fc_default;
}

