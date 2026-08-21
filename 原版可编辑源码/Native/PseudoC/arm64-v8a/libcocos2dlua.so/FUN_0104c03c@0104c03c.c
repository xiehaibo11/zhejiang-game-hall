
/* WARNING: Removing unreachable block (ram,0x0104c130) */
/* WARNING: Removing unreachable block (ram,0x0104c40c) */
/* WARNING: Removing unreachable block (ram,0x0104c2dc) */
/* WARNING: Removing unreachable block (ram,0x0104c428) */

ulong FUN_0104c03c(long param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  ssize_t sVar3;
  ulong uVar4;
  int *piVar5;
  size_t sVar6;
  byte bVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  undefined1 local_34 [4];
  
  if (6 < *(byte *)(param_2 + 0x2fe) - 0x22) {
    return 0;
  }
                    /* catch() { ... } // from try @ 0104c0b0 with catch @ 0104c074 */
  lVar10 = param_1 + (ulong)*(byte *)(param_2 + 0x304) * 0x6f8;
  pcVar8 = *(char **)(lVar10 + 0x7b8);
  switch((uint)*(byte *)(param_2 + 0x2fe)) {
  case 0x22:
    lVar10 = FUN_0104d8b8(param_2);
    return (ulong)-(uint)(lVar10 == 0);
  case 0x23:
                    /* try { // try from 0104c0a8 to 0114c0af has its CatchHandler @ 0104c100 */
    if ((*(byte *)((long)param_3 + 6) & 0x18) == 0) {
      sVar3 = recv(*(int *)(param_2 + 0x2d0),pcVar8,(ulong)*(uint *)(param_1 + 0xc84),0);
      if ((int)sVar3 < 0) {
        piVar5 = (int *)__errno();
        if (*piVar5 == 0xb) {
          return 0;
        }
        pcVar8 = "ERROR reading from proxy socket\n";
        uVar9 = 1;
        goto LAB_0104c3ec;
      }
      *(undefined1 *)(*(long *)(lVar10 + 0x7b8) + 0xd) = 0;
      iVar2 = strcmp(pcVar8,"HTTP/1.0 200 ");
      if ((iVar2 == 0) || (iVar2 = strcmp(pcVar8,"HTTP/1.1 200 "), iVar2 == 0)) {
        lws_set_timeout(param_2,0,0);
        goto switchD_0104c08c_caseD_24;
      }
      _lws_log(1,"ERROR proxy: %s\n",pcVar8);
    }
    else {
                    /* try { // try from 0104c0b0 to 0114c11b has its CatchHandler @ 0104c074 */
      _lws_log(2,"Proxy connection %p (fd=%d) dead\n",param_2,*param_3);
    }
LAB_0104c0c8:
    uVar9 = *(undefined8 *)(param_2 + 0x270);
    pcVar11 = *(code **)(*(long *)(param_2 + 0x248) + 8);
    pcVar8 = (char *)0x0;
    sVar6 = 0;
    goto LAB_0104c164;
  case 0x24:
switchD_0104c08c_caseD_24:
    iVar2 = FUN_01046364(param_2,4,0);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    bVar7 = *(byte *)(param_2 + 0x2f8);
    if (((bVar7 & 0xf) != 0) && (*(long *)(param_2 + 0x2b0) == 0)) {
      iVar2 = FUN_01050390(param_2);
      if (iVar2 < 0) {
        pcVar8 = "bio_create failed";
        uVar9 = *(undefined8 *)(param_2 + 0x270);
        pcVar11 = *(code **)(*(long *)(param_2 + 0x248) + 8);
        goto LAB_0104c0dc;
      }
      bVar7 = *(byte *)(param_2 + 0x2f8);
    }
    if ((bVar7 & 0xf) != 0) {
      uVar4 = FUN_010506a4(param_2);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      if ((int)uVar4 < 0) {
        pcVar8 = "lws_ssl_client_connect1 failed";
        uVar9 = *(undefined8 *)(param_2 + 0x270);
        pcVar11 = *(code **)(*(long *)(param_2 + 0x248) + 8);
        goto LAB_0104c0dc;
      }
      goto LAB_0104c0fc;
    }
    *(undefined8 *)(param_2 + 0x2b0) = 0;
    bVar7 = *(byte *)(param_2 + 0x2f8);
    break;
  case 0x25:
    goto switchD_0104c08c_caseD_25;
  case 0x26:
    if ((*(byte *)(param_2 + 0x2f7) >> 4 & 1) != 0) goto LAB_0104c3a8;
    goto LAB_0104c344;
  case 0x27:
LAB_0104c0fc:
    bVar7 = *(byte *)(param_2 + 0x2f8);
                    /* catch() { ... } // from try @ 0104c0a8 with catch @ 0104c100 */
    break;
  case 0x28:
    if ((*(ushort *)((long)param_3 + 6) & 0x19) != 0x18) {
      if ((*(ushort *)((long)param_3 + 6) & 1) == 0) {
        return 0;
      }
      do {
        if (*(char *)(param_2 + 0x36) == '_') {
          uVar4 = FUN_0104c950(param_2);
          return uVar4;
        }
        iVar2 = lws_ssl_capable_read(param_2,local_34,1);
        if (iVar2 + 1U < 2) {
          pcVar8 = "read failed";
          uVar9 = *(undefined8 *)(param_2 + 0x270);
          pcVar11 = *(code **)(*(long *)(param_2 + 0x248) + 8);
          goto LAB_0104c0dc;
        }
        if (iVar2 == -2) {
          return 0;
        }
        iVar2 = FUN_010489ac(param_2,local_34[0]);
      } while (iVar2 == 0);
      pcVar8 = "problems parsing header\n";
      uVar9 = 2;
LAB_0104c3ec:
      _lws_log(uVar9,pcVar8);
      goto LAB_0104c0c8;
    }
    pcVar8 = "Peer hung up";
    uVar9 = *(undefined8 *)(param_2 + 0x270);
    pcVar11 = *(code **)(*(long *)(param_2 + 0x248) + 8);
    goto LAB_0104c0dc;
  }
  if ((bVar7 & 0xf) == 0) {
    *(undefined8 *)(param_2 + 0x2b0) = 0;
  }
  else {
    uVar4 = FUN_010507ac(param_2);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if ((int)uVar4 < 0) {
      pcVar8 = "lws_ssl_client_connect2 failed";
      uVar9 = *(undefined8 *)(param_2 + 0x270);
      pcVar11 = *(code **)(*(long *)(param_2 + 0x248) + 8);
LAB_0104c0dc:
      sVar6 = strlen(pcVar8);
LAB_0104c164:
      (*pcVar11)(param_2,1,uVar9,pcVar8,sVar6);
      *(uint *)(param_2 + 0x2f4) = *(uint *)(param_2 + 0x2f4) | 0x10000;
      FUN_010417b8(param_2,0);
      return 0xffffffff;
    }
  }
  *(undefined1 *)(param_2 + 0x2fe) = 0x25;
  lws_set_timeout(param_2,0xb,*(undefined4 *)(param_1 + 0xc80));
switchD_0104c08c_caseD_25:
  lVar10 = FUN_0104c42c(param_2,pcVar8);
  if (lVar10 != 0) {
    iVar2 = lws_ssl_capable_write(param_2,pcVar8,(int)lVar10 - (int)pcVar8);
    if (iVar2 == -2) {
      lws_callback_on_writable(param_2);
      bVar7 = *(byte *)(param_2 + 0x2f7);
    }
    else {
      if (iVar2 == -1) goto LAB_0104c380;
      bVar7 = *(byte *)(param_2 + 0x2f7);
    }
    if ((bVar7 >> 4 & 1) == 0) {
LAB_0104c344:
      *(undefined2 *)(param_2 + 0x2c) = 0;
      *(undefined1 *)(param_2 + 0x36) = 0x5c;
      *(undefined1 *)(param_2 + 0x2fe) = 0x28;
      uVar1 = *(undefined4 *)(param_1 + 0xc80);
      uVar9 = 4;
    }
    else {
      *(undefined1 *)(param_2 + 0x2fe) = 0x26;
LAB_0104c3a8:
      uVar1 = *(undefined4 *)(param_1 + 0xc80);
      uVar9 = 0x12;
    }
    lws_set_timeout(param_2,uVar9,uVar1);
    return 0;
  }
  if (*(char *)(param_2 + 0x2fe) == '\f') {
    return 0;
  }
  _lws_log(1,"Failed to generate handshake for client\n");
LAB_0104c380:
  FUN_010417b8(param_2,0);
  return 0;
}

