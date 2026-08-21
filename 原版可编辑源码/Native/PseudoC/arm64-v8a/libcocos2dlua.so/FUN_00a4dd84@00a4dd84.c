
undefined8 FUN_00a4dd84(undefined4 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  short sVar2;
  ssize_t sVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = **(undefined8 **)(param_1 + 4);
                    /* try { // try from 00a4dda8 to 00b4ddb3 has its CatchHandler @ 00a4dfa4 */
  switch(param_2) {
  case 3:
    sVar2 = CONCAT11(*(undefined1 *)(*(long *)(param_1 + 0x58) + 2),
                     *(undefined1 *)(*(long *)(param_1 + 0x58) + 3));
    if ((short)(*(short *)(param_1 + 0x10) + 1) == sVar2) {
      param_1[7] = 0;
    }
    else {
      if (*(short *)(param_1 + 0x10) != sVar2) {
        FUN_00a38740(uVar6,"Received unexpected DATA packet block %d, expecting block %d\n",sVar2);
        return 0;
      }
      FUN_00a38740(uVar6,"Received last DATA packet block %d again.\n",sVar2);
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
                    /* catch() { ... } // from try @ 00a4decc with catch @ 00a4df94 */
                    /* catch() { ... } // from try @ 00a4de80 with catch @ 00a4df98 */
                    /* catch() { ... } // from try @ 00a4de38 with catch @ 00a4df9c */
      if ((long)(int)param_1[0x55] + 4 <= (long)(int)param_1[0x53]) {
        uVar5 = 1;
      }
                    /* catch() { ... } // from try @ 00a4ddf0 with catch @ 00a4dfa0 */
      *param_1 = uVar5;
code_r0x00a4de44:
                    /* catch() { ... } // from try @ 00a4dda8 with catch @ 00a4dfa4 */
      time((time_t *)(param_1 + 0xe));
      return 0;
                    /* catch() { ... } // from try @ 00a4dd24 with catch @ 00a4dfa8 */
    }
    break;
  default:
    FUN_00a38a08(uVar6,"%s","tftp_rx: internal error");
    return 0x47;
  case 5:
                    /* try { // try from 00a4de80 to 00b4de8b has its CatchHandler @ 00a4df98 */
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
                    /* try { // try from 00a4ddf0 to 00b4ddfb has its CatchHandler @ 00a4dfa0 */
    *(undefined2 *)(param_1 + 0x10) = 0;
    param_1[7] = 0;
    **(undefined1 **)(param_1 + 0x5a) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 4;
    uVar1 = *(undefined2 *)(param_1 + 0x10);
    *(char *)(*(long *)(param_1 + 0x5a) + 2) = (char)((ushort)uVar1 >> 8);
    *(char *)(*(long *)(param_1 + 0x5a) + 3) = (char)uVar1;
                    /* try { // try from 00a4de38 to 00b4de43 has its CatchHandler @ 00a4df9c */
    sVar3 = sendto(param_1[6],*(void **)(param_1 + 0x5a),4,0x4000,(sockaddr *)(param_1 + 0x32),
                   param_1[0x52]);
    if (-1 < sVar3) {
      *param_1 = 1;
      goto code_r0x00a4de44;
    }
    break;
  case 7:
                    /* try { // try from 00a4decc to 00b4ded7 has its CatchHandler @ 00a4df94 */
                    /* try { // try from 00a4ded8 to 00b4dfdf has its CatchHandler @ 00a4dc1c */
    param_1[7] = param_1[7] + 1;
    FUN_00a38740(uVar6,"Timeout waiting for block %d ACK.  Retries = %d\n",
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
  uVar7 = FUN_00a2afbc(uVar7,*puVar4);
                    /* try { // try from 00a4dfe0 to 00b4e09b has its CatchHandler @ 00a4dfe0
                       catch() { ... } // from try @ 00a4dfe0 with catch @ 00a4dfe0
                       catch() { ... } // from try @ 00a4e0ac with catch @ 00a4dfe0
                       catch() { ... } // from try @ 00a4e188 with catch @ 00a4dfe0 */
  FUN_00a38a08(uVar6,"%s",uVar7);
  return 0x37;
}

