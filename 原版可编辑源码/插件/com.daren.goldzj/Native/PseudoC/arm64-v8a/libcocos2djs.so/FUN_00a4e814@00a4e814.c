
/* WARNING: Removing unreachable block (ram,0x00a4ef74) */

int FUN_00a4e814(long *param_1)

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
    iVar6 = FUN_00a3e704(plVar1);
    goto LAB_00a4e8bc;
  }
  plVar27 = (long *)param_1[0xce];
  lVar26 = *plVar27;
  iVar6 = FUN_00a3e418((int)param_1[0x4c],plVar1,&local_170,&local_198);
  uVar22 = local_170;
  iVar7 = (uint)local_170;
  *(uint *)(lVar26 + 0x8d68) = (uint)local_170;
  if ((uint)local_170 == 0x1a5) {
    FUN_00a22d58(lVar26,"We got a 421 - timeout!\n");
    *(undefined4 *)(plVar27 + 0xd9) = 0;
    iVar6 = 0x1c;
    goto LAB_00a4e8bc;
  }
  if (iVar6 != 0) goto LAB_00a4e8bc;
  if ((uint)local_170 == 0) {
LAB_00a4f548:
    iVar6 = 0;
    goto LAB_00a4e8bc;
  }
  iVar3 = (int)param_1[0xd9];
  switch(iVar3) {
  case 1:
    if ((uint)local_170 != 0xdc) {
      if ((uint)local_170 == 0xe6) {
        iVar6 = FUN_00a4fda4(param_1,0xe6);
      }
      else {
        FUN_00a23020(lVar23,"Got a %03d ftp-server response when 220 was expected",
                     local_170 & 0xffffffff);
        iVar6 = 8;
      }
      break;
    }
    if ((*(int *)(lVar23 + 0x630) != 0) &&
       (((char)param_1[0x53] == '\0' ||
        ((*(char *)((long)param_1 + 0x3d9) != '\0' && ((char)param_1[0x5d] == '\0')))))) {
      *(undefined4 *)((long)param_1 + 0x6c4) = 0;
      if (*(uint *)(lVar23 + 0x634) < 3) {
        lVar23 = (long)(int)*(uint *)(lVar23 + 0x634) * 4;
        uVar25 = *(uint *)(&DAT_018994f4 + lVar23);
                    /* try { // try from 00a4f404 to 00b4f457 has its CatchHandler @ 00a4f404
                       catch() { ... } // from try @ 00a4f404 with catch @ 00a4f404
                       catch() { ... } // from try @ 00a4f5e4 with catch @ 00a4f404 */
        *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(&DAT_018994e8 + lVar23);
        *(uint *)((long)param_1 + 0x6bc) = uVar25;
        iVar6 = FUN_00a3e3a4(plVar1,"AUTH %s",&UNK_018994b4 + (ulong)uVar25 * 4);
        if (iVar6 == 0) {
          *(undefined4 *)(param_1 + 0xd9) = 2;
        }
      }
      else {
        FUN_00a23020(lVar23,"unsupported parameter to CURLOPT_FTPSSLAUTH: %d");
        iVar6 = 0x30;
      }
      break;
    }
LAB_00a4f55c:
    lVar23 = *param_1;
    goto LAB_00a4f560;
  case 2:
    if (((uint)local_170 != 0x14e) && ((uint)local_170 != 0xea)) {
                    /* try { // try from 00a4f458 to 00b4f46f has its CatchHandler @ 00a4f660 */
      if (*(int *)((long)param_1 + 0x6c4) < 1) {
        *(int *)((long)param_1 + 0x6c4) = *(int *)((long)param_1 + 0x6c4) + 1;
        iVar6 = *(int *)((long)param_1 + 0x6bc) + (int)param_1[0xd8];
                    /* try { // try from 00a4f744 to 00b4f757 has its CatchHandler @ 00a4f884 */
        *(int *)((long)param_1 + 0x6bc) = iVar6;
        puVar10 = &UNK_018994b4 + (long)iVar6 * 4;
        pcVar9 = "AUTH %s";
        goto LAB_00a4f288;
      }
      if (1 < *(uint *)(lVar23 + 0x630)) goto LAB_00a4f470;
      goto LAB_00a4f55c;
    }
    iVar6 = FUN_00a17ba8(param_1,0);
                    /* try { // try from 00a4eb08 to 00b4ebeb has its CatchHandler @ 00a4e9a8 */
    if (iVar6 != 0) break;
    lVar23 = *param_1;
    *(undefined1 *)((long)param_1 + 0x3ce) = 0;
LAB_00a4f560:
    puVar14 = *(undefined1 **)(*(long *)(lVar23 + 0x218) + 8);
    puVar2 = &DAT_0189703a;
    if (puVar14 != (undefined1 *)0x0) {
      puVar2 = puVar14;
    }
    iVar6 = FUN_00a3e3a4(plVar1,"USER %s",puVar2);
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0xd9) = 3;
      *(undefined1 *)(*param_1 + 36000) = 0;
    }
    break;
  case 3:
  case 4:
    iVar6 = FUN_00a4fda4(param_1,local_170 & 0xffffffff);
    break;
  case 5:
    if ((uint)local_170 != 0xe6) {
      FUN_00a23020(*param_1,"ACCT rejected by server: %03d",local_170 & 0xffffffff);
      iVar6 = 0xb;
      break;
    }
    if ((char)param_1[0x53] != '\0') {
      iVar6 = FUN_00a3e3a4(plVar1,"PBSZ %d",0);
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0xd9) = 6;
      }
      break;
    }
    goto LAB_00a4f230;
  case 6:
    uVar11 = 0x43;
    if (*(int *)(lVar23 + 0x630) != 2) {
      uVar11 = 0x50;
    }
    iVar6 = FUN_00a3e3a4(plVar1,"PROT %c",uVar11);
                    /* catch() { ... } // from try @ 00a4ea28 with catch @ 00a4eb7c */
    if (iVar6 == 0) {
                    /* catch() { ... } // from try @ 00a4ea1c with catch @ 00a4eb80 */
                    /* catch() { ... } // from try @ 00a4e9fc with catch @ 00a4eb84 */
      *(undefined4 *)(param_1 + 0xd9) = 7;
    }
    break;
  case 7:
                    /* catch() { ... } // from try @ 00a4ea34 with catch @ 00a4eb94 */
    if ((uint)local_170 - 200 < 100) {
      *(bool *)((long)param_1 + 0x3ce) = *(uint *)(lVar23 + 0x630) != 2;
      iVar6 = *(int *)(lVar23 + 0x638);
    }
    else {
      if (2 < *(uint *)(lVar23 + 0x630)) {
LAB_00a4f470:
        iVar6 = 0x40;
        break;
      }
      iVar6 = *(int *)(lVar23 + 0x638);
    }
    if (iVar6 != 0) {
      iVar6 = FUN_00a3e3a4(plVar1,"%s",&DAT_018989c5);
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0xd9) = 8;
      }
      break;
    }
    goto LAB_00a4f230;
  case 8:
    if (((int)(uint)local_170 < 500) && (iVar6 = FUN_00a1856c(param_1,0), iVar6 != 0)) {
      FUN_00a23020(*param_1,"Failed to clear the command channel (CCC)");
      break;
    }
LAB_00a4f230:
    iVar6 = FUN_00a3e3a4(plVar1,"%s",&DAT_01898b38);
    if (iVar6 == 0) {
LAB_00a4f250:
      *(undefined4 *)(param_1 + 0xd9) = 9;
    }
    break;
  case 9:
    if ((uint)local_170 == 0x101) {
                    /* try { // try from 00a4ebec to 00b4ec3f has its CatchHandler @ 00a4ebec
                       catch() { ... } // from try @ 00a4ebec with catch @ 00a4ebec
                       catch() { ... } // from try @ 00a4edcc with catch @ 00a4ebec */
      pcVar9 = (char *)(*(code *)PTR_malloc_01d1b740)(local_198 + 1);
      if (pcVar9 == (char *)0x0) {
LAB_00a4fb84:
        iVar6 = 0x1b;
        break;
      }
      cVar17 = *(char *)(lVar23 + 0xb0c);
      pcVar12 = (char *)(lVar23 + 0xb0c);
      do {
        if ((cVar17 == '\0') || (cVar17 == '\n')) goto LAB_00a4f700;
        pcVar16 = pcVar9;
        if (cVar17 == '\"') goto LAB_00a4ec54;
        pcVar12 = pcVar12 + 1;
        cVar17 = *pcVar12;
      } while (pcVar12 < (char *)(lVar23 + 0x4b09U));
                    /* try { // try from 00a4ec40 to 00b4ec57 has its CatchHandler @ 00a4ee48 */
      if (cVar17 == '\"') {
LAB_00a4ec54:
        do {
          pcVar19 = pcVar12 + 1;
          cVar17 = *pcVar19;
                    /* try { // try from 00a4ec60 to 00b4ec6b has its CatchHandler @ 00a4ee44 */
          if (cVar17 == '\"') {
            pcVar19 = pcVar12 + 2;
            cVar17 = *pcVar19;
                    /* try { // try from 00a4ec78 to 00b4edcb has its CatchHandler @ 00a4ee58 */
            if (cVar17 != '\"') goto code_r0x00a4ec7c;
          }
          else if (cVar17 == '\0') goto LAB_00a4ec80;
          *pcVar16 = cVar17;
          pcVar12 = pcVar19;
          pcVar16 = pcVar16 + 1;
        } while( true );
      }
LAB_00a4f700:
      (*(code *)PTR_free_01d1b748)(pcVar9);
                    /* try { // try from 00a4f718 to 00b4f72f has its CatchHandler @ 00a4f888 */
      FUN_00a22d58(lVar23,"Failed to figure out path\n");
    }
  default:
switchD_00a4e914_default:
    iVar6 = 0;
    *(undefined4 *)(param_1 + 0xd9) = 0;
    break;
  case 10:
    if ((uint)local_170 == 0xd7) {
      pcVar9 = (char *)(*(code *)PTR_malloc_01d1b740)(local_198 + 1);
      if (pcVar9 == (char *)0x0) goto LAB_00a4fb84;
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
      iVar6 = FUN_00a33710(pcVar9,"OS/400");
      if (iVar6 != 0) {
        iVar6 = FUN_00a3e3a4(plVar1,"%s","SITE NAMEFMT 1");
        if (iVar6 == 0) {
          (*(code *)PTR_free_01d1b748)(param_1[0xdb]);
          param_1[0xdb] = (long)pcVar9;
          *(undefined4 *)(param_1 + 0xd9) = 0xb;
          break;
        }
        goto LAB_00a4ed70;
      }
                    /* try { // try from 00a4f758 to 00b4f767 has its CatchHandler @ 00a4f870 */
      (*(code *)PTR_free_01d1b748)(param_1[0xdb]);
      param_1[0xdb] = (long)pcVar9;
    }
    goto switchD_00a4e914_default;
  case 0xb:
    if ((uint)local_170 != 0xfa) goto switchD_00a4e914_default;
    iVar7 = FUN_00a3e3a4(plVar1,"%s",&DAT_01898b38);
    iVar6 = 0;
    if (iVar7 != 0) break;
    goto LAB_00a4f250;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    if (((int)(uint)local_170 < 400) || ((int)param_1[0xd8] != 0)) {
      iVar6 = FUN_00a4ff08(param_1,0,iVar3);
                    /* catch() { ... } // from try @ 00a4e790 with catch @ 00a4e938 */
    }
    else {
      FUN_00a23020(*param_1,"QUOT command failed with %03d",local_170 & 0xffffffff);
      iVar6 = 0x15;
    }
    break;
  case 0x10:
    if (99 < (uint)local_170 - 200) {
                    /* try { // try from 00a4edcc to 00b4eeaf has its CatchHandler @ 00a4ebec */
      if (((*(int *)(*param_1 + 0x5fc) == 0) || (*(int *)((long)param_1 + 0x6bc) == 0)) ||
         ((int)param_1[0xd8] != 0)) {
        FUN_00a23020(lVar23,"Server denied you to change to the given directory");
        *(undefined1 *)((long)param_1 + 0x6ab) = 1;
        iVar6 = 9;
      }
      else {
                    /* catch() { ... } // from try @ 00a4f934 with catch @ 00a4f9b4 */
        *(undefined4 *)(param_1 + 0xd8) = 1;
                    /* catch() { ... } // from try @ 00a4fa20 with catch @ 00a4f9c8 */
        iVar6 = FUN_00a3e3a4(plVar1,"MKD %s",
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
      goto LAB_00a4f280;
    }
    lVar23 = *param_1;
                    /* catch() { ... } // from try @ 00a4f484 with catch @ 00a4f658 */
                    /* catch() { ... } // from try @ 00a4f478 with catch @ 00a4f65c */
                    /* catch() { ... } // from try @ 00a4f458 with catch @ 00a4f660 */
    if (((*(char *)(lVar23 + 0x611) != '\0') || (*(int *)(lVar23 + 0x420) != 0)) &&
       (param_1[0xd4] != 0)) {
                    /* catch() { ... } // from try @ 00a4f490 with catch @ 00a4f670 */
      iVar6 = FUN_00a3e3a4(plVar1,"MDTM %s");
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0xd9) = 0x12;
      }
      break;
    }
                    /* try { // try from 00a4f780 to 00b4f787 has its CatchHandler @ 00a4f854 */
                    /* try { // try from 00a4f788 to 00b4f79f has its CatchHandler @ 00a4f898 */
    if ((*(char *)(lVar23 + 0x620) != '\0') && (param_1[0xd4] != 0)) {
      lVar26 = param_1[0xd7];
                    /* try { // try from 00a4f7a0 to 00b4f7a7 has its CatchHandler @ 00a4f86c */
      cVar20 = 'A';
      cVar17 = cVar20;
      if (*(char *)(lVar23 + 0x613) == '\0') {
        cVar17 = 'I';
      }
                    /* try { // try from 00a4f7a8 to 00b4f7d7 has its CatchHandler @ 00a4f874 */
      if (cVar17 != (char)lVar26) {
        if (*(char *)(lVar23 + 0x613) == '\0') {
          cVar20 = 'I';
        }
        *(undefined4 *)(*(long *)(lVar23 + 0x218) + 0x18) = 1;
        if ((char)lVar26 == cVar20) goto LAB_00a4fa1c;
        goto LAB_00a4facc;
      }
    }
    iVar6 = *(int *)(*(long *)(lVar23 + 0x218) + 0x18);
    if (iVar6 == 0) goto LAB_00a4f7fc;
LAB_00a4f7b8:
    if (iVar6 != 1) goto LAB_00a4f7cc;
    if (param_1[0xd4] != 0) {
LAB_00a4fa24:
      iVar6 = FUN_00a3e3a4(plVar1,"SIZE %s");
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0xd9) = 0x17;
      }
      break;
    }
    goto LAB_00a4f7fc;
  case 0x11:
    if ((99 < (uint)local_170 - 200) &&
       (iVar6 = *(int *)((long)param_1 + 0x6c4), *(int *)((long)param_1 + 0x6c4) = iVar6 + -1,
       iVar6 == 0)) {
      FUN_00a23020(lVar23,"Failed to MKD dir: %03d",local_170 & 0xffffffff);
      iVar6 = 9;
      break;
    }
    *(undefined4 *)(param_1 + 0xd9) = 0x10;
    puVar10 = *(undefined **)(param_1[0xd2] + (long)*(int *)((long)param_1 + 0x6bc) * 8 + -8);
LAB_00a4f280:
    pcVar9 = "CWD %s";
LAB_00a4f288:
    iVar6 = FUN_00a3e3a4(plVar1,pcVar9,puVar10);
    break;
  case 0x12:
    lVar23 = *param_1;
    lVar26 = *(long *)(lVar23 + 0x218);
    if ((uint)local_170 == 0x226) {
                    /* try { // try from 00a4f478 to 00b4f483 has its CatchHandler @ 00a4f65c */
                    /* try { // try from 00a4f484 to 00b4f48f has its CatchHandler @ 00a4f658 */
      FUN_00a23020(lVar23,"Given file does not exist");
      iVar6 = 0x13;
      iVar7 = *(int *)(lVar23 + 0x420);
                    /* try { // try from 00a4f490 to 00b4f5e3 has its CatchHandler @ 00a4f670 */
    }
    else if ((uint)local_170 == 0xd5) {
                    /* catch() { ... } // from try @ 00a4ec6c with catch @ 00a4ee40 */
                    /* catch() { ... } // from try @ 00a4ec60 with catch @ 00a4ee44 */
                    /* catch() { ... } // from try @ 00a4ec40 with catch @ 00a4ee48 */
                    /* catch() { ... } // from try @ 00a4ec78 with catch @ 00a4ee58 */
      lVar21 = lVar23 + 0xb08;
      iVar6 = sscanf((char *)(lVar23 + 0xb0c),"%04d%02d%02d%02d%02d%02d",&local_178,&local_180,
                     &local_184,&uStack_188,&local_18c,&local_190);
      if (iVar6 == 6) {
        local_170 = time((time_t *)0x0);
        FUN_00a0e7c4(lVar21,0x4001,"%04d%02d%02d %02d:%02d:%02d GMT",(ulong)local_178 & 0xffffffff,
                     local_180,local_184,uStack_188,local_18c,local_190);
                    /* try { // try from 00a4eeb0 to 00b4ef03 has its CatchHandler @ 00a4eeb0
                       catch() { ... } // from try @ 00a4eeb0 with catch @ 00a4eeb0
                       catch() { ... } // from try @ 00a4f010 with catch @ 00a4eeb0 */
        uVar8 = FUN_00a358b8(lVar21,&local_170);
        *(undefined8 *)(lVar23 + 0x8d78) = uVar8;
      }
      if ((((*(char *)(lVar23 + 0x620) == '\0') || (param_1[0xd4] == 0)) ||
          (*(char *)(lVar23 + 0x611) == '\0')) || (*(long *)(lVar23 + 0x8d78) < 0)) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_00a3608c(*(long *)(lVar23 + 0x8d78),&local_170);
        if (iVar6 != 0) break;
                    /* try { // try from 00a4ef04 to 00b4ef1b has its CatchHandler @ 00a4f08c */
        lVar18 = 6;
        if (iStack_158 != 0) {
          lVar18 = (long)iStack_158 + -1;
        }
                    /* try { // try from 00a4ef24 to 00b4ef2f has its CatchHandler @ 00a4f088 */
                    /* try { // try from 00a4ef30 to 00b4ef3b has its CatchHandler @ 00a4f084 */
                    /* try { // try from 00a4ef3c to 00b4f00f has its CatchHandler @ 00a4f09c */
        FUN_00a0e7c4(lVar21,0x3fff,"Last-Modified: %s, %02d %s %4d %02d:%02d:%02d GMT\r\n",
                     (&PTR_DAT_01c6d770)[lVar18],uStack_168._4_4_,
                     (&PTR_DAT_01c6d7a8)[(int)local_160],local_160._4_4_ + 0x76c,
                     uStack_168 & 0xffffffff,local_170._4_4_,(uint)local_170);
        iVar6 = FUN_00a23808(param_1,3,lVar21,0);
        if (iVar6 != 0) break;
      }
      iVar7 = *(int *)(lVar23 + 0x420);
    }
    else {
      FUN_00a22d58(lVar23,"unsupported MDTM reply format\n");
      iVar6 = 0;
      iVar7 = *(int *)(lVar23 + 0x420);
    }
    if (iVar7 != 0) {
      lVar21 = *(long *)(lVar23 + 0x8d78);
      if ((lVar21 < 1) || (lVar18 = *(long *)(lVar23 + 0x428), lVar18 < 1)) {
        FUN_00a22d58(lVar23,"Skipping time comparison\n");
      }
      else if (iVar7 == 2) {
                    /* try { // try from 00a4f5e4 to 00b4f6c7 has its CatchHandler @ 00a4f404 */
        if (lVar18 < lVar21) {
          pcVar9 = "The requested document is not old enough\n";
LAB_00a4f818:
          FUN_00a22d58(lVar23,pcVar9);
          iVar6 = 0;
          *(undefined4 *)(lVar26 + 0x18) = 2;
          *(undefined1 *)(lVar23 + 0x8d80) = 1;
          *(undefined4 *)(param_1 + 0xd9) = 0;
          break;
        }
      }
      else if (lVar21 <= lVar18) {
        pcVar9 = "The requested document is not new enough\n";
        goto LAB_00a4f818;
      }
    }
    if (iVar6 != 0) break;
    lVar23 = *param_1;
    if ((*(char *)(lVar23 + 0x620) != '\0') && (param_1[0xd4] != 0)) {
      lVar26 = param_1[0xd7];
      cVar20 = 'A';
      cVar17 = cVar20;
      if (*(char *)(lVar23 + 0x613) == '\0') {
        cVar17 = 'I';
      }
      if (cVar17 == (char)lVar26) goto LAB_00a4f640;
      if (*(char *)(lVar23 + 0x613) == '\0') {
        cVar20 = 'I';
      }
                    /* try { // try from 00a4fa0c to 00b4fa1f has its CatchHandler @ 00a4fc2c */
      *(undefined4 *)(*(long *)(lVar23 + 0x218) + 0x18) = 1;
      if ((char)lVar26 != cVar20) {
LAB_00a4facc:
        iVar6 = FUN_00a3e3a4(plVar1,"TYPE %c",cVar20);
        if (iVar6 == 0) {
          *(undefined4 *)(param_1 + 0xd9) = 0x13;
          *(char *)(param_1 + 0xd7) = cVar20;
        }
        break;
      }
LAB_00a4fa1c:
                    /* try { // try from 00a4fa20 to 00b4fc47 has its CatchHandler @ 00a4f9c8 */
      *(undefined4 *)(param_1 + 0xd9) = 0x13;
      goto LAB_00a4fa24;
    }
LAB_00a4f640:
    iVar6 = *(int *)(*(long *)(lVar23 + 0x218) + 0x18);
    if (iVar6 != 0) goto LAB_00a4f7b8;
    goto LAB_00a4f7fc;
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
                    /* catch() { ... } // from try @ 00a4e784 with catch @ 00a4e93c */
                    /* catch() { ... } // from try @ 00a4e764 with catch @ 00a4e940 */
    iVar6 = FUN_00a50214(param_1,local_170 & 0xffffffff,iVar3);
    break;
  case 0x17:
  case 0x18:
  case 0x19:
                    /* catch() { ... } // from try @ 00a4e79c with catch @ 00a4e950 */
    lVar23 = *param_1;
    if ((uint)local_170 == 0xd5) {
      lVar26 = strtol((char *)(lVar23 + 0xb0c),(char **)0x0,0);
    }
    else {
      lVar26 = -1;
    }
    if (iVar3 == 0x19) {
      *(long *)(lVar23 + 0x8cd8) = lVar26;
      iVar6 = FUN_00a50698(param_1,1);
      break;
    }
    if (iVar3 == 0x18) {
      FUN_00a1b4c4(lVar23,lVar26);
                    /* try { // try from 00a4f148 to 00b4f15f has its CatchHandler @ 00a4f39c */
      iVar6 = FUN_00a50514(param_1,lVar26);
      break;
    }
    if (iVar3 != 0x17) goto LAB_00a4f548;
    if (lVar26 != -1) {
      FUN_00a0e7c4(lVar23 + 0xb08,0x4001,"Content-Length: %ld\r\n",lVar26);
      iVar6 = FUN_00a23808(param_1,3,lVar23 + 0xb08,0);
      if (iVar6 != 0) break;
    }
    FUN_00a1b4c4(lVar23,lVar26);
    if (*(int *)(*(long *)(*param_1 + 0x218) + 0x18) == 0) goto LAB_00a4f7fc;
LAB_00a4f7cc:
    if (param_1[0xd4] != 0) {
                    /* try { // try from 00a4f7d8 to 00b4f8ef has its CatchHandler @ 00a4f6c8 */
      iVar6 = FUN_00a3e3a4(plVar1,"REST %d",0);
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0xd9) = 0x1a;
      }
      break;
    }
    goto LAB_00a4f7fc;
  case 0x1a:
  case 0x1b:
    if (iVar3 == 0x1b) {
                    /* try { // try from 00a4e9a8 to 00b4e9fb has its CatchHandler @ 00a4e9a8
                       catch() { ... } // from try @ 00a4e9a8 with catch @ 00a4e9a8
                       catch() { ... } // from try @ 00a4eb08 with catch @ 00a4e9a8 */
      if ((uint)local_170 == 0x15e) {
        iVar6 = FUN_00a3e3a4(plVar1,"RETR %s",param_1[0xd4]);
        if (iVar6 == 0) {
          *(undefined4 *)(param_1 + 0xd9) = 0x20;
        }
      }
      else {
        FUN_00a23020(*param_1,"Couldn\'t use REST");
        iVar6 = 0x1f;
      }
      break;
    }
    if ((uint)local_170 == 0x15e) {
                    /* try { // try from 00a4f0f4 to 00b4f147 has its CatchHandler @ 00a4f0f4
                       catch() { ... } // from try @ 00a4f0f4 with catch @ 00a4f0f4
                       catch() { ... } // from try @ 00a4f320 with catch @ 00a4f0f4 */
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
      iVar6 = FUN_00a23808(param_1,3,&local_170,0);
      if (iVar6 != 0) break;
    }
LAB_00a4f7fc:
    iVar6 = FUN_00a5088c(param_1);
    break;
  case 0x1c:
    lVar23 = *param_1;
    if ((uint)local_170 - 200 < 100) {
      FUN_00a22d58(lVar23,"Connect data stream actively\n");
      *(undefined4 *)(param_1 + 0xd9) = 0;
      if (*(int *)(*(long *)(*param_1 + 0x218) + 0x18) == 0) {
        *(undefined1 *)((long)param_1 + 0x3c4) = 1;
      }
      else {
        FUN_00a335d8(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
      }
      iVar6 = 0;
      *(undefined1 *)((long)param_1 + 0x6a9) = 1;
    }
    else {
      if (*(int *)((long)param_1 + 0x6bc) == 0) {
                    /* try { // try from 00a4f6c8 to 00b4f717 has its CatchHandler @ 00a4f6c8
                       catch() { ... } // from try @ 00a4f6c8 with catch @ 00a4f6c8
                       catch() { ... } // from try @ 00a4f7d8 with catch @ 00a4f6c8 */
        FUN_00a22d58(lVar23,"disabling EPRT usage\n");
        iVar6 = 1;
        *(undefined1 *)((long)param_1 + 0x3cd) = 0;
      }
      else {
        iVar6 = *(int *)((long)param_1 + 0x6bc) + 1;
        if (iVar6 == 2) {
          FUN_00a23020(lVar23,"Failed to do PORT");
          iVar6 = 0x1e;
          break;
        }
      }
      iVar6 = FUN_00a509e0(param_1,iVar6);
    }
    break;
  case 0x1d:
    if ((uint)local_170 != 200) {
      FUN_00a23020(lVar23,"PRET command not accepted: %03d",local_170 & 0xffffffff);
      iVar6 = 0x54;
      break;
    }
    if (*(char *)((long)param_1 + 0x3cc) == '\0') {
      uVar22 = 1;
      if (*(char *)((long)param_1 + 0x3c3) != '\0') {
        *(undefined1 *)((long)param_1 + 0x3cc) = 1;
        goto LAB_00a4efd0;
      }
    }
    else {
LAB_00a4efd0:
      uVar22 = 0;
    }
    iVar6 = FUN_00a3e3a4(plVar1,"%s",&DAT_018994de + (uVar22 | uVar22 << 2));
    if (iVar6 == 0) {
                    /* try { // try from 00a4f010 to 00b4f0f3 has its CatchHandler @ 00a4eeb0 */
      *(int *)((long)param_1 + 0x6bc) = (int)uVar22;
      *(undefined4 *)(param_1 + 0xd9) = 0x1e;
      FUN_00a22d58(*param_1,"Connect data stream passively\n");
    }
    break;
  case 0x1e:
    lVar23 = *param_1;
    local_178 = (undefined8 *)0x0;
    pcVar9 = (char *)(lVar23 + 0xb0c);
    (*(code *)PTR_free_01d1b748)(param_1[0xdd]);
    iVar6 = *(int *)((long)param_1 + 0x6bc);
    param_1[0xdd] = 0;
    if ((iVar7 != 0xe5) || (iVar6 != 0)) {
      if ((iVar7 == 0xe3) && (iVar6 == 1)) {
        if (*pcVar9 != '\0') {
                    /* try { // try from 00a4f320 to 00b4f403 has its CatchHandler @ 00a4f0f4 */
          do {
            iVar6 = sscanf(pcVar9,"%d,%d,%d,%d,%d,%d",&local_170,(long)&local_170 + 4,&uStack_168,
                           (long)&uStack_168 + 4,&local_180,asStack_17c);
            if (iVar6 == 6) {
              if (*pcVar9 != '\0') {
                if (*(char *)(lVar23 + 0x640) == '\0') {
                  lVar26 = FUN_00a0e870("%d.%d.%d.%d",local_170 & 0xffffffff,local_170._4_4_,
                                        uStack_168 & 0xffffffff,uStack_168._4_4_);
                }
                else {
                  FUN_00a22d58(lVar23,"Skip %d.%d.%d.%d for data connection, re-use %s instead\n");
                    /* try { // try from 00a4f8f0 to 00b4f933 has its CatchHandler @ 00a4f8f0
                       catch() { ... } // from try @ 00a4f8f0 with catch @ 00a4f8f0
                       catch() { ... } // from try @ 00a4f984 with catch @ 00a4f8f0 */
                  if ((*(char *)((long)param_1 + 0x3c9) == '\0') &&
                     (*(char *)((long)param_1 + 0x3bf) == '\0')) {
                    lVar26 = (*(code *)PTR_strdup_01d1b758)(param_1 + 0xf);
                  }
                  else {
                    lVar26 = (*(code *)PTR_strdup_01d1b758)(param_1[0x18]);
                  }
                }
                param_1[0xdd] = lVar26;
                if (lVar26 == 0) goto LAB_00a4fb84;
                *(short *)(param_1 + 0xde) = asStack_17c[0] + (short)(local_180 << 8);
                goto LAB_00a4fb2c;
              }
              break;
            }
            pcVar9 = pcVar9 + 1;
          } while (*pcVar9 != '\0');
        }
        FUN_00a23020(lVar23,"Couldn\'t interpret the 227-response");
        iVar6 = 0xe;
        break;
      }
      if (iVar6 != 0) {
        FUN_00a23020(lVar23,"Bad PASV/EPSV response: %03d",uVar22 & 0xffffffff);
        iVar6 = 0xd;
        break;
      }
LAB_00a4fbdc:
      if (*(char *)((long)param_1 + 0x3c3) == '\0') {
        FUN_00a22d58(*param_1,"Failed EPSV attempt. Disabling EPSV\n");
        *(undefined1 *)((long)param_1 + 0x3cc) = 0;
        *(undefined1 *)(*param_1 + 0x8b60) = 0;
                    /* catch() { ... } // from try @ 00a4fa0c with catch @ 00a4fc2c */
        iVar6 = FUN_00a3e3a4(plVar1,"%s",&DAT_01898fe4);
        if (iVar6 == 0) {
          *(undefined4 *)(param_1 + 0xd9) = 0x1e;
                    /* try { // try from 00a4fc48 to 00b4fc9b has its CatchHandler @ 00a4fc48
                       catch() { ... } // from try @ 00a4fc48 with catch @ 00a4fc48
                       catch() { ... } // from try @ 00a4fe10 with catch @ 00a4fc48 */
          *(int *)((long)param_1 + 0x6bc) = *(int *)((long)param_1 + 0x6bc) + 1;
        }
      }
      else {
        FUN_00a23020(*param_1,"Failed EPSV attempt, exiting\n");
        iVar6 = 8;
      }
      break;
    }
    pcVar9 = strchr(pcVar9,0x28);
    if (pcVar9 == (char *)0x0) {
LAB_00a4f984:
                    /* try { // try from 00a4f984 to 00b4f9c7 has its CatchHandler @ 00a4f8f0 */
      pcVar9 = "Weirdly formatted EPSV reply";
    }
    else {
                    /* catch() { ... } // from try @ 00a4ef30 with catch @ 00a4f084 */
                    /* catch() { ... } // from try @ 00a4ef24 with catch @ 00a4f088 */
      iVar6 = sscanf(pcVar9 + 1,"%c%c%c%u%c",&local_180,(ulong)&local_180 | 1,(ulong)&local_180 | 2,
                     &local_170,(ulong)&local_180 | 3);
                    /* catch() { ... } // from try @ 00a4ef04 with catch @ 00a4f08c */
      if (iVar6 != 5) goto LAB_00a4f984;
                    /* catch() { ... } // from try @ 00a4ef3c with catch @ 00a4f09c */
      if ((uint)local_170 < 0x10000) {
                    /* try { // try from 00a4f934 to 00b4f983 has its CatchHandler @ 00a4f9b4 */
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
          lVar26 = (*(code *)PTR_strdup_01d1b758)(plVar27);
          param_1[0xdd] = lVar26;
          if (lVar26 == 0) goto LAB_00a4fb84;
LAB_00a4fb2c:
          if (*(char *)((long)param_1 + 0x3bd) == '\0') {
            FUN_00a1a458(param_1,lVar26,(short)param_1[0xde],&local_178);
            uVar25 = (uint)*(ushort *)(param_1 + 0xde);
            uVar24 = (uint)*(ushort *)(param_1 + 0xde);
            if (local_178 != (undefined8 *)0x0) goto LAB_00a4fbac;
            lVar26 = param_1[0xdd];
            pcVar9 = "Can\'t resolve new host %s:%hu";
          }
          else {
            plVar27 = param_1 + 0x23;
            if (*(char *)((long)param_1 + 0x3bf) == '\0') {
              plVar27 = param_1 + 0x2b;
            }
            lVar26 = plVar27[2];
            FUN_00a1a458(param_1,lVar26,(int)param_1[0x33],&local_178);
            uVar24 = (uint)param_1[0x33];
            if (local_178 != (undefined8 *)0x0) {
LAB_00a4fbac:
              *(undefined1 *)((long)param_1 + 0x3c6) = 0;
              iVar6 = FUN_00a105c8(param_1);
              if (iVar6 == 0) {
                if (*(char *)(lVar23 + 0x628) != '\0') {
                  lVar26 = param_1[0xdd];
                  FUN_00a1a0b4(*local_178,&local_170,0x100);
                  FUN_00a22d58(*param_1,"Connecting to %s (%s) port %d\n",lVar26,&local_170,
                               uVar24 & 0xffff);
                }
                    /* try { // try from 00a4fc9c to 00b4fcb3 has its CatchHandler @ 00a4fe8c */
                (*(code *)PTR_free_01d1b748)(param_1[0x1a]);
                param_1[0x1a] = 0;
                lVar26 = (*(code *)PTR_strdup_01d1b758)(param_1[0xdd]);
                    /* try { // try from 00a4fcbc to 00b4fcc7 has its CatchHandler @ 00a4fe88 */
                param_1[0x1a] = lVar26;
                    /* try { // try from 00a4fcc8 to 00b4fcd3 has its CatchHandler @ 00a4fe84 */
                *(short *)(param_1 + 0x35) = (short)param_1[0xde];
                FUN_00a1a800(lVar23,local_178);
                    /* try { // try from 00a4fcd4 to 00b4fe0f has its CatchHandler @ 00a4fe9c */
                iVar6 = 0;
                *(undefined1 *)((long)param_1 + 0x3c4) = 1;
                *(undefined4 *)(param_1 + 0xd9) = 0;
                break;
              }
              FUN_00a1a800(lVar23,local_178);
              if ((iVar7 != 0xe5) || (*(int *)((long)param_1 + 0x6bc) != 0)) break;
              goto LAB_00a4fbdc;
            }
            uVar25 = uVar24 & 0xffff;
            pcVar9 = "Can\'t resolve proxy host %s:%hu";
          }
          FUN_00a23020(lVar23,pcVar9,lVar26,uVar25);
          iVar6 = 0xf;
          break;
        }
        goto LAB_00a4f984;
      }
      pcVar9 = "Illegal port number in EPSV reply";
    }
    FUN_00a23020(lVar23,pcVar9);
    iVar6 = 0xd;
    break;
  case 0x1f:
  case 0x20:
    lVar26 = *param_1;
    lVar23 = *(long *)(lVar26 + 0x218);
    if (((uint)local_170 != 0x96) && ((uint)local_170 != 0x7d)) {
      if (((uint)local_170 == 0x1c2) && (iVar3 == 0x1f)) {
                    /* try { // try from 00a4f168 to 00b4f173 has its CatchHandler @ 00a4f398 */
        iVar6 = 0;
        *(undefined4 *)(lVar23 + 0x18) = 2;
                    /* try { // try from 00a4f174 to 00b4f17f has its CatchHandler @ 00a4f394 */
        *(undefined4 *)(param_1 + 0xd9) = 0;
      }
      else {
        FUN_00a23020(lVar26,"RETR response: %03d",local_170 & 0xffffffff);
        iVar6 = 0x4e;
        if (iVar3 != 0x20 || iVar7 != 0x226) {
          iVar6 = 0x13;
        }
      }
      break;
    }
                    /* try { // try from 00a4e9fc to 00b4ea13 has its CatchHandler @ 00a4eb84 */
    if (((iVar3 == 0x1f) || (*(char *)(lVar26 + 0x613) != '\0')) || (0 < *(long *)(lVar23 + 0x20)))
    {
      lVar23 = *(long *)(lVar23 + 0x20);
      if (lVar23 < 0) {
        lVar23 = -1;
      }
    }
    else {
      pcVar9 = strstr((char *)(lVar26 + 0xb08)," bytes");
                    /* catch() { ... } // from try @ 00a4f780 with catch @ 00a4f854 */
      if (pcVar9 == (char *)0x0) {
LAB_00a4fa48:
        lVar23 = -1;
      }
      else {
        pbVar15 = (byte *)(pcVar9 + -1);
        if ((long)pbVar15 - (lVar26 + 0xb08) != 1) {
                    /* catch() { ... } // from try @ 00a4f7a0 with catch @ 00a4f86c */
          lVar23 = (lVar26 + 0xb09) - (long)pbVar15;
          do {
                    /* catch() { ... } // from try @ 00a4f758 with catch @ 00a4f870 */
                    /* catch() { ... } // from try @ 00a4f7a8 with catch @ 00a4f874 */
            if (*pbVar15 == 0x28) break;
                    /* catch() { ... } // from try @ 00a4f744 with catch @ 00a4f884 */
            if (9 < *pbVar15 - 0x30) goto LAB_00a4fa48;
                    /* catch() { ... } // from try @ 00a4f718 with catch @ 00a4f888 */
            lVar23 = lVar23 + 1;
            pbVar15 = pbVar15 + -1;
          } while (lVar23 != 0);
        }
                    /* catch() { ... } // from try @ 00a4f788 with catch @ 00a4f898 */
        lVar23 = strtol((char *)(pbVar15 + 1),(char **)0x0,0);
      }
    }
    lVar21 = *(long *)(lVar26 + 0x88);
                    /* try { // try from 00a4ea1c to 00b4ea27 has its CatchHandler @ 00a4eb80 */
                    /* try { // try from 00a4ea28 to 00b4ea33 has its CatchHandler @ 00a4eb7c */
    if ((lVar21 < lVar23) && (0 < lVar21)) {
                    /* try { // try from 00a4ea34 to 00b4eb07 has its CatchHandler @ 00a4eb94 */
      *(long *)(lVar26 + 0x78) = lVar21;
      FUN_00a22d58(lVar26,"Maxdownload = %ld\n",lVar21);
      lVar23 = lVar21;
      if (iVar3 != 0x1f) {
LAB_00a4f1a8:
        FUN_00a22d58(lVar26,"Getting file with size: %ld\n",lVar23);
        lVar21 = lVar23;
      }
    }
    else {
                    /* try { // try from 00a4f180 to 00b4f31f has its CatchHandler @ 00a4f3ac */
      if (iVar3 != 0x1f) {
        if (*(char *)(lVar26 + 0x613) != '\0') {
          lVar23 = -1;
        }
        FUN_00a22d58(lVar26,"Maxdownload = %ld\n",lVar21);
        goto LAB_00a4f1a8;
      }
      FUN_00a22d58(lVar26,"Maxdownload = %ld\n",lVar21);
      lVar21 = lVar23;
    }
    *(int *)((long)param_1 + 0x6cc) = iVar3;
    param_1[0xda] = lVar21;
    if (*(char *)(lVar26 + 0x616) != '\0') {
      iVar6 = FUN_00a511ac(param_1,&local_170);
      if (iVar6 != 0) break;
      if ((char)local_170 == '\0') {
        FUN_00a22d58(lVar26,"Data conn was not available immediately\n");
        *(undefined4 *)(param_1 + 0xd9) = 0;
        *(undefined1 *)((long)param_1 + 0x6ac) = 1;
      }
      goto LAB_00a4f548;
    }
    goto LAB_00a4f550;
  case 0x21:
    lVar23 = *param_1;
    if (399 < (int)(uint)local_170) {
      FUN_00a23020(lVar23,"Failed FTP upload: %0d",local_170 & 0xffffffff);
      *(undefined4 *)(param_1 + 0xd9) = 0;
      iVar6 = 0x19;
      break;
    }
    *(undefined4 *)((long)param_1 + 0x6cc) = 0x21;
    if (*(char *)(lVar23 + 0x616) != '\0') {
      *(undefined4 *)(param_1 + 0xd9) = 0;
      iVar6 = FUN_00a511ac(param_1,&local_170);
      if (iVar6 != 0) break;
                    /* catch() { ... } // from try @ 00a4f174 with catch @ 00a4f394 */
      if ((char)local_170 == '\0') {
                    /* catch() { ... } // from try @ 00a4f168 with catch @ 00a4f398 */
                    /* catch() { ... } // from try @ 00a4f148 with catch @ 00a4f39c */
        FUN_00a22d58(lVar23,"Data conn was not available immediately\n");
                    /* catch() { ... } // from try @ 00a4f180 with catch @ 00a4f3ac */
        iVar6 = 0;
        *(undefined1 *)((long)param_1 + 0x6ac) = 1;
        break;
      }
      goto LAB_00a4f548;
    }
LAB_00a4f550:
    iVar6 = FUN_00a512b4(param_1);
  }
LAB_00a4e8bc:
                    /* try { // try from 00a4e8c4 to 00b4e9a7 has its CatchHandler @ 00a4e710 */
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00a4ec7c:
  *pcVar16 = '\0';
LAB_00a4ec80:
  if ((param_1[0xdb] == 0) && (*pcVar9 != '/')) {
    iVar6 = FUN_00a3e3a4(plVar1,"%s",&DAT_018989f3);
    if (iVar6 == 0) {
      (*(code *)PTR_free_01d1b748)(param_1[0xd1]);
      param_1[0xd1] = (long)pcVar9;
      FUN_00a22d58(lVar23,"Entry path is \'%s\'\n",pcVar9);
      *(long *)(lVar23 + 0x8c98) = param_1[0xd1];
      *(undefined4 *)(param_1 + 0xd9) = 10;
      goto LAB_00a4e8bc;
    }
LAB_00a4ed70:
    (*(code *)PTR_free_01d1b748)(pcVar9);
    goto LAB_00a4e8bc;
  }
  (*(code *)PTR_free_01d1b748)(param_1[0xd1]);
  param_1[0xd1] = (long)pcVar9;
  FUN_00a22d58(lVar23,"Entry path is \'%s\'\n",pcVar9);
  *(long *)(lVar23 + 0x8c98) = param_1[0xd1];
  goto switchD_00a4e914_default;
}

