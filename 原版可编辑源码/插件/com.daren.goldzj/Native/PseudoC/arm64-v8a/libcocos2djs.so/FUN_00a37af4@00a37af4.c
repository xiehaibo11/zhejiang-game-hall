
void FUN_00a37af4(char *param_1,char *param_2,undefined4 param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  size_t sVar6;
  size_t sVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined2 *puVar11;
  long lVar12;
  long *local_1b8;
  long local_1b0 [8];
  undefined2 local_170;
  undefined1 local_16e;
  undefined1 local_16d;
  undefined4 local_16c;
  char local_168;
  char local_167 [255];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar10 = *param_5;
  iVar1 = *(int *)(param_5 + 0x28);
  uVar2 = *(undefined4 *)((long)param_5 + (long)param_4 * 4 + 0x260);
  lVar5 = FUN_00a0f850(uVar10,0,1);
                    /* try { // try from 00a37b50 to 00b37bc7 has its CatchHandler @ 00a36fb8 */
  if (lVar5 < 0) {
    FUN_00a23020(uVar10,"Connection time-out");
    uVar10 = 0x1c;
    goto LAB_00a37e7c;
  }
                    /* catch() { ... } // from try @ 00a37044 with catch @ 00a37b58 */
  if (*(char *)((long)param_5 + 0x3be) != '\0') {
                    /* catch() { ... } // from try @ 00a37038 with catch @ 00a37b5c */
                    /* catch() { ... } // from try @ 00a37018 with catch @ 00a37b60 */
                    /* catch() { ... } // from try @ 00a37050 with catch @ 00a37b70 */
    pcVar9 = "a";
    if (iVar1 != 6) {
      pcVar9 = "";
    }
    FUN_00a22d58(*param_5,"SOCKS4%s: connecting to HTTP proxy %s port %d\n",pcVar9,param_2,param_3);
  }
  FUN_00a16c90(uVar2,0);
  FUN_00a22d58(uVar10,"SOCKS4 communication to %s:%d\n",param_2,param_3);
  local_170 = 0x104;
  local_16e = (undefined1)((uint)param_3 >> 8);
  local_16d = (undefined1)param_3;
                    /* try { // try from 00a37bc8 to 00b37c27 has its CatchHandler @ 00a37bc8
                       catch() { ... } // from try @ 00a37bc8 with catch @ 00a37bc8
                       catch() { ... } // from try @ 00a38554 with catch @ 00a37bc8 */
  if (iVar1 != 6) {
    iVar4 = FUN_00a1a458(param_5,param_2,param_3,&local_1b8);
                    /* try { // try from 00a37c28 to 00b37c3f has its CatchHandler @ 00a38564 */
    if (iVar4 == -1) {
      uVar10 = 5;
      goto LAB_00a37e7c;
    }
    if ((local_1b8 != (long *)0x0) && (lVar5 = *local_1b8, lVar5 != 0)) {
                    /* try { // try from 00a37c48 to 00b37c53 has its CatchHandler @ 00a38560 */
      FUN_00a1a0b4(lVar5,local_1b0,0x40);
                    /* try { // try from 00a37c54 to 00b37c5f has its CatchHandler @ 00a3855c */
      if (*(int *)(lVar5 + 4) == 2) {
                    /* try { // try from 00a37c60 to 00b38553 has its CatchHandler @ 00a38574 */
        local_16c = *(undefined4 *)(*(long *)(lVar5 + 0x20) + 4);
        FUN_00a22d58(uVar10,"SOCKS4 connect to IPv4 %s (locally resolved)\n",local_1b0);
      }
      else {
        FUN_00a23020(uVar10,"SOCKS4 connection to %s not supported\n",local_1b0);
        lVar5 = 0;
      }
      FUN_00a1a800(uVar10,local_1b8);
      if (lVar5 != 0) goto LAB_00a37bcc;
    }
    FUN_00a23020(uVar10,"Failed to resolve \"%s\" for SOCKS4 connect.",param_2);
    uVar10 = 6;
    goto LAB_00a37e7c;
  }
LAB_00a37bcc:
  local_168 = '\0';
  if (param_1 == (char *)0x0) {
LAB_00a37cac:
    sVar6 = strlen(&local_168);
    lVar5 = (long)(int)sVar6 + 9;
    if (iVar1 == 6) {
      local_16c = 0x1000000;
      sVar7 = strlen(param_2);
      lVar12 = sVar7 + 1;
      if (lVar12 + lVar5 < 0x107) {
        strcpy(local_167 + (int)sVar6,param_2);
      }
      else {
        lVar12 = 0;
      }
    }
    else {
      lVar12 = 0;
      lVar5 = (long)(int)lVar5;
    }
    iVar4 = FUN_00a2343c(param_5,uVar2,&local_170,(long *)(lVar12 + lVar5),&local_1b8);
    if ((iVar4 == 0) && (local_1b8 == (long *)(lVar12 + lVar5))) {
      if ((iVar1 == 6) && (lVar12 == 0)) {
        sVar6 = strlen(param_2);
        iVar4 = FUN_00a2343c(param_5,uVar2,param_2,(long *)(sVar6 + 1),&local_1b8);
        if ((iVar4 != 0) || (local_1b8 != (long *)(sVar6 + 1))) goto LAB_00a37d84;
      }
      lVar5 = 0;
      puVar11 = &local_170;
      lVar12 = 8;
      while( true ) {
        do {
          lVar8 = FUN_00a0f850(*param_5,0,1);
          if ((lVar8 < 0) || (iVar4 = FUN_00a159e8(uVar2,0xffffffff,0xffffffff,lVar8), iVar4 < 1))
          goto LAB_00a37e68;
          iVar4 = FUN_00a239a0(uVar2,puVar11,lVar12,local_1b0);
        } while (iVar4 == 0x51);
        if (iVar4 != 0) goto LAB_00a37e68;
        if (lVar12 - local_1b0[0] == 0) break;
        if (local_1b0[0] == 0) goto LAB_00a37e68;
        puVar11 = (undefined2 *)((long)puVar11 + local_1b0[0]);
        lVar5 = local_1b0[0] + lVar5;
        lVar12 = lVar12 - local_1b0[0];
      }
      if (lVar5 + lVar12 == 8) {
        if ((char)local_170 != '\0') {
          pcVar9 = "SOCKS4 reply has wrong version, version should be 4.";
          goto LAB_00a37e70;
        }
        switch(local_170._1_1_) {
        case 0x5a:
          pcVar9 = "a";
          if (iVar1 != 6) {
            pcVar9 = "";
          }
          FUN_00a22d58(uVar10,"SOCKS4%s request granted.\n",pcVar9);
          FUN_00a16c90(uVar2,1);
          uVar10 = 0;
          goto LAB_00a37e7c;
        case 0x5b:
          pcVar9 = 
          "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected or failed.";
          break;
        case 0x5c:
          pcVar9 = 
          "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because SOCKS server cannot connect to identd on the client."
          ;
          break;
        case 0x5d:
          pcVar9 = 
          "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because the client program and identd report different user-ids."
          ;
          break;
        default:
          pcVar9 = "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), Unknown.";
        }
        FUN_00a23020(uVar10,pcVar9,(undefined1)local_16c,local_16c._1_1_,local_16c._2_1_,
                     local_16c._3_1_,CONCAT11(local_168,local_167[0]));
        goto LAB_00a37e78;
      }
LAB_00a37e68:
      pcVar9 = "Failed to receive SOCKS4 connect request ack.";
    }
    else {
LAB_00a37d84:
      pcVar9 = "Failed to send SOCKS4 connect request.";
    }
  }
  else {
    sVar6 = strlen(param_1);
    if (sVar6 < 0xfe) {
      memcpy(&local_168,param_1,sVar6 + 1);
      goto LAB_00a37cac;
    }
    pcVar9 = "Too long SOCKS proxy name, can\'t use!\n";
  }
LAB_00a37e70:
  FUN_00a23020(uVar10,pcVar9);
LAB_00a37e78:
  uVar10 = 7;
LAB_00a37e7c:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}

