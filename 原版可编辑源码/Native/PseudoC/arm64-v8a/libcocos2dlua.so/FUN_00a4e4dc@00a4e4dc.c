
void FUN_00a4e4dc(char *param_1,char *param_2,undefined4 param_3,int param_4,undefined8 *param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  size_t sVar7;
  size_t sVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  long lVar13;
  long *local_1b8;
  long local_1b0 [8];
  undefined2 local_170;
  undefined1 local_16e;
  undefined1 local_16d;
  undefined4 local_16c;
  char local_168;
  char local_167 [255];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar11 = *param_5;
  iVar2 = *(int *)(param_5 + 0x28);
  uVar3 = *(undefined4 *)((long)param_5 + (long)param_4 * 4 + 0x260);
                    /* catch() { ... } // from try @ 00a4e404 with catch @ 00a4e520 */
                    /* catch() { ... } // from try @ 00a4e41c with catch @ 00a4e524 */
  lVar6 = FUN_00a25238(uVar11,0,1);
  if (lVar6 < 0) {
    FUN_00a38a08(uVar11,"Connection time-out");
    uVar11 = 0x1c;
    goto LAB_00a4e864;
  }
  if (*(char *)((long)param_5 + 0x3be) != '\0') {
                    /* catch() { ... } // from try @ 00a4e35c with catch @ 00a4e554 */
    puVar1 = &DAT_013ce02a;
    if (iVar2 != 6) {
      puVar1 = &DAT_013c996e;
    }
    FUN_00a38740(*param_5,"SOCKS4%s: connecting to HTTP proxy %s port %d\n",puVar1,param_2,param_3);
  }
  FUN_00a2c678(uVar3,0);
  FUN_00a38740(uVar11,"SOCKS4 communication to %s:%d\n",param_2,param_3);
  local_170 = 0x104;
  local_16e = (undefined1)((uint)param_3 >> 8);
  local_16d = (undefined1)param_3;
  if (iVar2 != 6) {
    iVar5 = FUN_00a2fe40(param_5,param_2,param_3,&local_1b8);
    if (iVar5 == -1) {
      uVar11 = 5;
      goto LAB_00a4e864;
    }
    if ((local_1b8 != (long *)0x0) && (lVar6 = *local_1b8, lVar6 != 0)) {
      FUN_00a2fa9c(lVar6,local_1b0,0x40);
      if (*(int *)(lVar6 + 4) == 2) {
        local_16c = *(undefined4 *)(*(long *)(lVar6 + 0x20) + 4);
        FUN_00a38740(uVar11,"SOCKS4 connect to IPv4 %s (locally resolved)\n",local_1b0);
      }
      else {
        FUN_00a38a08(uVar11,"SOCKS4 connection to %s not supported\n",local_1b0);
        lVar6 = 0;
      }
                    /* try { // try from 00a4e794 to 00b4e7a3 has its CatchHandler @ 00a4e89c */
      FUN_00a301e8(uVar11,local_1b8);
      if (lVar6 != 0) goto LAB_00a4e5b4;
    }
                    /* try { // try from 00a4e7a4 to 00b4e7f3 has its CatchHandler @ 00a4e6ec */
    FUN_00a38a08(uVar11,"Failed to resolve \"%s\" for SOCKS4 connect.",param_2);
    uVar11 = 6;
    goto LAB_00a4e864;
  }
LAB_00a4e5b4:
  local_168 = '\0';
  if (param_1 == (char *)0x0) {
LAB_00a4e694:
    sVar7 = strlen(&local_168);
    lVar6 = (long)(int)sVar7 + 9;
    if (iVar2 == 6) {
      local_16c = 0x1000000;
      sVar8 = strlen(param_2);
      lVar13 = sVar8 + 1;
      if (lVar13 + lVar6 < 0x107) {
        strcpy(local_167 + (int)sVar7,param_2);
      }
      else {
                    /* try { // try from 00a4e6ec to 00b4e793 has its CatchHandler @ 00a4e6ec
                       catch() { ... } // from try @ 00a4e6ec with catch @ 00a4e6ec
                       catch() { ... } // from try @ 00a4e7a4 with catch @ 00a4e6ec
                       catch() { ... } // from try @ 00a4e804 with catch @ 00a4e6ec */
        lVar13 = 0;
      }
    }
    else {
      lVar13 = 0;
      lVar6 = (long)(int)lVar6;
    }
    iVar5 = FUN_00a38e24(param_5,uVar3,&local_170,(long *)(lVar13 + lVar6),&local_1b8);
    if ((iVar5 == 0) && (local_1b8 == (long *)(lVar13 + lVar6))) {
      if ((iVar2 == 6) && (lVar13 == 0)) {
        sVar7 = strlen(param_2);
        iVar5 = FUN_00a38e24(param_5,uVar3,param_2,(long *)(sVar7 + 1),&local_1b8);
        if ((iVar5 != 0) || (local_1b8 != (long *)(sVar7 + 1))) goto LAB_00a4e76c;
      }
      lVar6 = 0;
      puVar12 = &local_170;
      lVar13 = 8;
      while( true ) {
        do {
          lVar9 = FUN_00a25238(*param_5,0,1);
                    /* try { // try from 00a4e7f4 to 00b4e803 has its CatchHandler @ 00a4e898 */
          if ((lVar9 < 0) || (iVar5 = FUN_00a2b3d0(uVar3,0xffffffff,0xffffffff,lVar9), iVar5 < 1))
          goto LAB_00a4e850;
                    /* try { // try from 00a4e804 to 00b4e8b7 has its CatchHandler @ 00a4e6ec */
          iVar5 = FUN_00a39388(uVar3,puVar12,lVar13,local_1b0);
        } while (iVar5 == 0x51);
        if (iVar5 != 0) goto LAB_00a4e850;
        if (lVar13 - local_1b0[0] == 0) break;
        if (local_1b0[0] == 0) goto LAB_00a4e850;
        puVar12 = (undefined2 *)((long)puVar12 + local_1b0[0]);
        lVar6 = local_1b0[0] + lVar6;
        lVar13 = lVar13 - local_1b0[0];
      }
      if (lVar6 + lVar13 == 8) {
        if ((char)local_170 != '\0') {
          pcVar10 = "SOCKS4 reply has wrong version, version should be 4.";
          goto LAB_00a4e858;
        }
                    /* catch() { ... } // from try @ 00a4e7f4 with catch @ 00a4e898 */
                    /* catch() { ... } // from try @ 00a4e794 with catch @ 00a4e89c */
        switch(local_170._1_1_) {
        case 0x5a:
                    /* try { // try from 00a4e8b8 to 00b4e933 has its CatchHandler @ 00a4e8b8
                       catch() { ... } // from try @ 00a4e8b8 with catch @ 00a4e8b8
                       catch() { ... } // from try @ 00a4e9d0 with catch @ 00a4e8b8
                       catch() { ... } // from try @ 00a4eabc with catch @ 00a4e8b8 */
          puVar1 = &DAT_013ce02a;
          if (iVar2 != 6) {
            puVar1 = &DAT_013c996e;
          }
          FUN_00a38740(uVar11,"SOCKS4%s request granted.\n",puVar1);
          FUN_00a2c678(uVar3,1);
          uVar11 = 0;
          goto LAB_00a4e864;
        case 0x5b:
                    /* try { // try from 00a4e934 to 00b4e97b has its CatchHandler @ 00a4eb74 */
          pcVar10 = 
          "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected or failed.";
          break;
        case 0x5c:
          pcVar10 = 
          "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because SOCKS server cannot connect to identd on the client."
          ;
          break;
        case 0x5d:
                    /* try { // try from 00a4e98c to 00b4e997 has its CatchHandler @ 00a4eb70 */
          pcVar10 = 
          "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because the client program and identd report different user-ids."
          ;
          break;
        default:
          pcVar10 = "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), Unknown.";
        }
        FUN_00a38a08(uVar11,pcVar10,(undefined1)local_16c,local_16c._1_1_,local_16c._2_1_,
                     local_16c._3_1_,CONCAT11(local_168,local_167[0]));
        goto LAB_00a4e860;
      }
LAB_00a4e850:
      pcVar10 = "Failed to receive SOCKS4 connect request ack.";
    }
    else {
LAB_00a4e76c:
      pcVar10 = "Failed to send SOCKS4 connect request.";
    }
  }
  else {
    sVar7 = strlen(param_1);
    if (sVar7 < 0xfe) {
      memcpy(&local_168,param_1,sVar7 + 1);
      goto LAB_00a4e694;
    }
    pcVar10 = "Too long SOCKS proxy name, can\'t use!\n";
  }
LAB_00a4e858:
  FUN_00a38a08(uVar11,pcVar10);
LAB_00a4e860:
  uVar11 = 7;
LAB_00a4e864:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a4e99c to 00b4e9af has its CatchHandler @ 00a4eb40 */
    __stack_chk_fail(uVar11);
  }
  return;
}

