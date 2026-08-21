
undefined8 FUN_00a3739c(undefined4 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  short sVar2;
  ssize_t sVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = **(undefined8 **)(param_1 + 4);
  switch(param_2) {
  case 3:
    sVar2 = CONCAT11(*(undefined1 *)(*(long *)(param_1 + 0x58) + 2),
                     *(undefined1 *)(*(long *)(param_1 + 0x58) + 3));
    if ((short)(*(short *)(param_1 + 0x10) + 1) == sVar2) {
      param_1[7] = 0;
    }
    else {
      if (*(short *)(param_1 + 0x10) != sVar2) {
        FUN_00a22d58(uVar6,"Received unexpected DATA packet block %d, expecting block %d\n",sVar2);
        return 0;
      }
      FUN_00a22d58(uVar6,"Received last DATA packet block %d again.\n",sVar2);
    }
    *(short *)(param_1 + 0x10) = sVar2;
    **(undefined1 **)(param_1 + 0x5a) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 4;
    uVar1 = *(undefined2 *)(param_1 + 0x10);
    *(char *)(*(long *)(param_1 + 0x5a) + 2) = (char)((ushort)uVar1 >> 8);
    *(char *)(*(long *)(param_1 + 0x5a) + 3) = (char)uVar1;
    sVar3 = sendto(param_1[6],*(void **)(param_1 + 0x5a),4,0x4000,(sockaddr *)(param_1 + 0x32),
                   param_1[0x52]);
    if (-1 < sVar3) {
      uVar5 = 3;
      if ((long)(int)param_1[0x55] + 4 <= (long)(int)param_1[0x53]) {
        uVar5 = 1;
      }
      *param_1 = uVar5;
code_r0x00a3745c:
      time((time_t *)(param_1 + 0xe));
      return 0;
    }
    break;
  default:
    FUN_00a23020(uVar6,"%s","tftp_rx: internal error");
    return 0x47;
  case 5:
    **(undefined1 **)(param_1 + 0x5a) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 5;
    uVar1 = *(undefined2 *)(param_1 + 0x10);
    *(char *)(*(long *)(param_1 + 0x5a) + 2) = (char)((ushort)uVar1 >> 8);
    *(char *)(*(long *)(param_1 + 0x5a) + 3) = (char)uVar1;
    sendto(param_1[6],*(void **)(param_1 + 0x5a),4,0x4000,(sockaddr *)(param_1 + 0x32),param_1[0x52]
          );
    *param_1 = 3;
    return 0;
  case 6:
    *(undefined2 *)(param_1 + 0x10) = 0;
    param_1[7] = 0;
    **(undefined1 **)(param_1 + 0x5a) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 4;
    uVar1 = *(undefined2 *)(param_1 + 0x10);
    *(char *)(*(long *)(param_1 + 0x5a) + 2) = (char)((ushort)uVar1 >> 8);
    *(char *)(*(long *)(param_1 + 0x5a) + 3) = (char)uVar1;
    sVar3 = sendto(param_1[6],*(void **)(param_1 + 0x5a),4,0x4000,(sockaddr *)(param_1 + 0x32),
                   param_1[0x52]);
    if (-1 < sVar3) {
      *param_1 = 1;
      goto code_r0x00a3745c;
    }
    break;
  case 7:
    param_1[7] = param_1[7] + 1;
    FUN_00a22d58(uVar6,"Timeout waiting for block %d ACK.  Retries = %d\n",
                 *(short *)(param_1 + 0x10) + 1);
    if ((int)param_1[9] < (int)param_1[7]) {
      param_1[2] = 0xffffff9d;
      *param_1 = 3;
      return 0;
    }
    sVar3 = sendto(param_1[6],*(void **)(param_1 + 0x5a),4,0x4000,(sockaddr *)(param_1 + 0x32),
                   param_1[0x52]);
    if (-1 < sVar3) {
      return 0;
    }
  }
  uVar7 = *(undefined8 *)(param_1 + 4);
  puVar4 = (undefined4 *)__errno();
  uVar7 = FUN_00a155d4(uVar7,*puVar4);
  FUN_00a23020(uVar6,"%s",uVar7);
  return 0x37;
}

