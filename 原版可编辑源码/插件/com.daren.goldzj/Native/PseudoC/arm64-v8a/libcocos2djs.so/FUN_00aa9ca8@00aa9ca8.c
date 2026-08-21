
void FUN_00aa9ca8(long *param_1,char *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  size_t sVar9;
  long *plVar10;
  long lVar11;
  char *pcVar12;
  long *plVar13;
  char *local_130;
  char acStack_124 [39];
  undefined1 local_fd;
  undefined1 auStack_fc [20];
  char acStack_e8 [128];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar11 = param_1[0x44];
  local_130 = param_2;
  pcVar5 = (char *)FUN_00aa581c(param_1,0x54);
  pcVar6 = (char *)FUN_00aa581c(param_1,0x59);
  uVar1 = *(uint *)((long)param_1 + 0x2f4) | 0x2000000;
  pcVar12 = "GET";
  if (pcVar6 != (char *)0x0) {
    uVar1 = *(uint *)((long)param_1 + 0x2f4) & 0xfdffffff;
    pcVar12 = pcVar6;
  }
  *(uint *)((long)param_1 + 0x2f4) = uVar1;
  iVar3 = strcmp(pcVar12,"RAW");
  if (iVar3 == 0) {
    lws_set_timeout(param_1,0,0);
    _lws_log(4,"client transition to raw\n");
    if (pcVar5 != (char *)0x0) {
      lVar11 = lws_vhost_name_to_protocol(param_1[0x45],pcVar5);
      if (lVar11 == 0) {
        pcVar12 = "protocol %s not enabled on vhost\n";
                    /* catch() { ... } // from try @ 00aa9f74 with catch @ 00aaa084 */
        goto LAB_00aaa08c;
      }
      FUN_00a9fa04(param_1,lVar11);
    }
    iVar3 = (**(code **)(param_1[0x49] + 8))(param_1,0x3e,param_1[0x4e],0,0);
    if (iVar3 == 0) {
      FUN_00aa5308(param_1);
      lws_union_transition(param_1,0xc);
      FUN_00aa5364(param_1,1);
LAB_00aaa090:
      pcVar5 = (char *)0x0;
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return;
      }
      goto LAB_00aaa1c8;
    }
  }
  else {
    pcVar5 = param_2;
    if ((uVar1 >> 0x19 & 1) != 0) {
      iVar3 = lws_get_random(lVar11,auStack_fc,0x10);
      if (iVar3 != 0x10) {
        pcVar12 = "Unable to read from random dev %s\n";
        pcVar5 = "/dev/urandom";
LAB_00aaa08c:
        _lws_log(1,pcVar12,pcVar5);
        goto LAB_00aaa090;
      }
      lws_b64_encode_string(auStack_fc,0x10,acStack_124,0x28);
      pcVar5 = local_130;
    }
    uVar7 = FUN_00aa581c(param_1,0x56);
    iVar3 = sprintf(pcVar5,"%s %s HTTP/1.1\r\n",pcVar12,uVar7);
    pcVar5 = local_130 + iVar3;
    builtin_strncpy(local_130 + iVar3,"Pragma: no-cache\r\nCache-Control: no-cache\r\n",0x2c);
    local_130 = pcVar5 + 0x2b;
    uVar7 = FUN_00aa581c(param_1,0x57);
    iVar3 = sprintf(pcVar5 + 0x2b,"Host: %s\r\n",uVar7);
    local_130 = local_130 + iVar3;
    lVar8 = FUN_00aa581c(param_1,0x58);
    pcVar5 = local_130;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar11 + 0xc78);
      uVar7 = FUN_00aa581c(param_1,0x58);
      if ((uVar1 >> 0x13 & 1) == 0) {
        pcVar12 = "Origin: http://%s\r\n";
      }
      else {
        pcVar12 = "Origin: %s\r\n";
      }
      iVar3 = sprintf(pcVar5,pcVar12,uVar7);
      local_130 = local_130 + iVar3;
    }
    if ((*(byte *)((long)param_1 + 0x2f7) >> 1 & 1) != 0) {
                    /* try { // try from 00aa9ef0 to 00ba9f73 has its CatchHandler @ 00aa9ef0
                       catch() { ... } // from try @ 00aa9ef0 with catch @ 00aa9ef0
                       catch() { ... } // from try @ 00aa9f88 with catch @ 00aa9ef0 */
      pcVar5 = local_130 + 0x3c;
      builtin_strncpy(local_130,"Upgrade: websocket\r\nConnection: Upgrade\r\nSec-WebSocket-Key: ",
                      0x3d);
      local_130 = pcVar5;
      strcpy(pcVar5,acStack_124);
      sVar9 = strlen(acStack_124);
      local_130 = local_130 + sVar9;
      local_130[2] = '\0';
      local_130[0] = '\r';
      local_130[1] = '\n';
      local_130 = local_130 + 2;
      lVar8 = FUN_00aa581c(param_1,0x54);
      pcVar5 = local_130;
      if (lVar8 != 0) {
        uVar7 = FUN_00aa581c(param_1,0x54);
                    /* try { // try from 00aa9f74 to 00ba9f87 has its CatchHandler @ 00aaa084 */
        iVar3 = sprintf(pcVar5,"Sec-WebSocket-Protocol: %s\r\n",uVar7);
        local_130 = local_130 + iVar3;
                    /* try { // try from 00aa9f88 to 00baa09f has its CatchHandler @ 00aa9ef0 */
      }
      plVar10 = *(long **)(param_1[0x45] + 0x1c0);
      if (plVar10 != (long *)0x0) {
        if (plVar10[1] == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = 0;
          do {
            plVar13 = plVar10 + 4;
            while ((iVar4 = FUN_00ab4058(lVar11,param_1,7,plVar13[-4],0), iVar4 != 0 ||
                   (iVar4 = (**(code **)(*(long *)(param_1[0x45] + 0x188) + 8))
                                      (param_1,0x1a,param_1[0x4e],plVar13[-4],0), iVar4 != 0))) {
              lVar8 = *plVar13;
              plVar13 = plVar13 + 3;
              if (lVar8 == 0) goto LAB_00aaa0ac;
            }
            if (iVar3 == 0) {
              pcVar5 = local_130 + 0x1a;
              builtin_strncpy(local_130,"Sec-WebSocket-Extensions: ",0x1b);
            }
            else {
              pcVar5 = local_130 + 1;
              *local_130 = ',';
            }
            pcVar12 = (char *)plVar13[-2];
            local_130 = pcVar5;
            sVar9 = strlen(pcVar12);
            memcpy(pcVar5,pcVar12,sVar9 + 1);
            iVar3 = iVar3 + 1;
            local_130 = local_130 + (int)sVar9;
            plVar10 = plVar13 + -1;
          } while (*plVar13 != 0);
        }
LAB_00aaa0ac:
        if (iVar3 != 0) {
          local_130[2] = '\0';
          local_130[0] = '\r';
          local_130[1] = '\n';
          local_130 = local_130 + 2;
        }
      }
      if (*(char *)((long)param_1 + 0x2fd) != '\0') {
        iVar3 = sprintf(local_130,"Sec-WebSocket-Version: %d\r\n");
        local_130 = local_130 + iVar3;
      }
      local_fd = 0;
      iVar3 = sprintf(acStack_e8,"%s258EAFA5-E914-47DA-95CA-C5AB0DC85B11",acStack_124);
      lws_SHA1(acStack_e8,(long)iVar3,auStack_fc);
      lws_b64_encode_string(auStack_fc,0x14,*param_1 + 0xb6c,0x1e);
    }
    iVar3 = (**(code **)(param_1[0x49] + 8))
                      (param_1,0x18,param_1[0x4e],&local_130,
                       param_2 + (-0xc - (long)local_130) + (ulong)*(uint *)(lVar11 + 0xc84));
    if (iVar3 == 0) {
      local_130[2] = '\0';
      local_130[0] = '\r';
      local_130[1] = '\n';
      pcVar5 = local_130 + 2;
      local_130 = pcVar5;
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return;
      }
      goto LAB_00aaa1c8;
    }
  }
  pcVar5 = (char *)0x0;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00aaa1c8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pcVar5);
}

