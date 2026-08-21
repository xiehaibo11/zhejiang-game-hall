
undefined8 FUN_00a3763c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  long *plVar3;
  ssize_t sVar4;
  undefined4 *puVar5;
  long lVar6;
  short sVar7;
  long lVar8;
  undefined8 uVar9;
  int local_24;
  
  lVar8 = **(long **)(param_1 + 4);
  switch(param_2) {
  case 4:
    sVar7 = CONCAT11(*(undefined1 *)(*(long *)(param_1 + 0x58) + 2),
                     *(undefined1 *)(*(long *)(param_1 + 0x58) + 3));
    if ((*(short *)(param_1 + 0x10) != sVar7) &&
       ((*(short *)(param_1 + 0x10) != 0 || (sVar7 != -1)))) {
      FUN_00a22d58(lVar8,"Received ACK for block %d, expecting %d\n");
      iVar1 = param_1[7];
      param_1[7] = iVar1 + 1;
      if ((int)param_1[9] <= iVar1) {
        FUN_00a23020(lVar8,"tftp_tx: giving up waiting for block %d ack",
                     *(undefined2 *)(param_1 + 0x10));
        return 0x37;
      }
      sVar4 = sendto(param_1[6],*(void **)(param_1 + 0x5a),(long)(int)param_1[0x54] + 4,0x4000,
                     (sockaddr *)(param_1 + 0x32),param_1[0x52]);
      if (-1 < sVar4) {
        return 0;
      }
      goto LAB_00a37904;
    }
    time((time_t *)(param_1 + 0xe));
    sVar7 = *(short *)(param_1 + 0x10) + 1;
    break;
  case 5:
    *param_1 = 3;
    **(undefined1 **)(param_1 + 0x5a) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 5;
    uVar2 = *(undefined2 *)(param_1 + 0x10);
    *(char *)(*(long *)(param_1 + 0x5a) + 2) = (char)((ushort)uVar2 >> 8);
    *(char *)(*(long *)(param_1 + 0x5a) + 3) = (char)uVar2;
    sendto(param_1[6],*(void **)(param_1 + 0x5a),4,0x4000,(sockaddr *)(param_1 + 0x32),param_1[0x52]
          );
    *param_1 = 3;
    return 0;
  case 6:
    sVar7 = 1;
    break;
  case 7:
    param_1[7] = param_1[7] + 1;
    FUN_00a22d58(lVar8,"Timeout waiting for block %d ACK.  Retries = %d\n",
                 *(short *)(param_1 + 0x10) + 1);
    if ((int)param_1[9] < (int)param_1[7]) {
      param_1[2] = 0xffffff9d;
      *param_1 = 3;
      return 0;
    }
    sVar4 = sendto(param_1[6],*(void **)(param_1 + 0x5a),(long)(int)param_1[0x54] + 4,0x4000,
                   (sockaddr *)(param_1 + 0x32),param_1[0x52]);
    if (sVar4 < 0) goto LAB_00a37904;
    lVar6 = *(long *)(lVar8 + 0xa0);
    goto LAB_00a378a8;
  default:
    FUN_00a23020(lVar8,"tftp_tx: internal error, event: %i",param_2);
    return 0;
  }
  *(short *)(param_1 + 0x10) = sVar7;
  param_1[7] = 0;
  **(undefined1 **)(param_1 + 0x5a) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 3;
  uVar2 = *(undefined2 *)(param_1 + 0x10);
  *(char *)(*(long *)(param_1 + 0x5a) + 2) = (char)((ushort)uVar2 >> 8);
  *(char *)(*(long *)(param_1 + 0x5a) + 3) = (char)uVar2;
  if (*(ushort *)(param_1 + 0x10) < 2) {
    iVar1 = param_1[0x55];
  }
  else {
    iVar1 = param_1[0x55];
    if ((int)param_1[0x54] < iVar1) {
      *param_1 = 3;
      return 0;
    }
  }
  plVar3 = *(long **)(param_1 + 4);
  param_1[0x54] = 0;
  lVar6 = 0;
  *(long *)(*plVar3 + 0x208) = *(long *)(param_1 + 0x5a) + 4;
  do {
    uVar9 = FUN_00a31948(plVar3,iVar1 - (int)lVar6,&local_24);
    if ((int)uVar9 != 0) {
      return uVar9;
    }
    plVar3 = *(long **)(param_1 + 4);
    lVar6 = (long)(int)param_1[0x54] + (long)local_24;
    param_1[0x54] = (int)lVar6;
    *(long *)(*plVar3 + 0x208) = *(long *)(*plVar3 + 0x208) + (long)local_24;
    iVar1 = param_1[0x55];
  } while (((int)lVar6 < iVar1) && (local_24 != 0));
  sVar4 = sendto(param_1[6],*(void **)(param_1 + 0x5a),lVar6 + 4,0x4000,(sockaddr *)(param_1 + 0x32)
                 ,param_1[0x52]);
  if (sVar4 < 0) {
LAB_00a37904:
    uVar9 = *(undefined8 *)(param_1 + 4);
    puVar5 = (undefined4 *)__errno();
    uVar9 = FUN_00a155d4(uVar9,*puVar5);
    FUN_00a23020(lVar8,"%s",uVar9);
    return 0x37;
  }
  lVar6 = *(long *)(lVar8 + 0xa0) + (long)(int)param_1[0x54];
  *(long *)(lVar8 + 0xa0) = lVar6;
LAB_00a378a8:
  FUN_00a1b744(lVar8,lVar6);
  return 0;
}

