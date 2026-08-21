
ulong FUN_00ab598c(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  param_2[2] = param_3;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 0x15) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)((long)param_2 + 0xb6) = 0;
  *(undefined2 *)((long)param_2 + 0xb4) = 0;
  *(undefined8 *)((long)param_2 + 0xac) = 5;
  iVar1 = lws_hdr_copy(param_1,param_2 + 5,0x80,0x1e);
  if (iVar1 < 1) {
    return 0;
  }
  *(undefined4 *)((long)param_2 + 0xac) = 1;
  iVar1 = FUN_00ab57b4(param_2);
  while (iVar1 != 0) {
                    /* catch() { ... } // from try @ 00ab5924 with catch @ 00ab59ec */
    *(char *)((long)param_2 + 0xb3) = *(char *)((long)param_2 + 0xb3) + '\x01';
    param_2[3] = ((param_2[1] + 1) - *param_2) + param_2[3];
    iVar1 = FUN_00ab57b4(param_2);
  }
  param_2[0x15] = 0x100000000;
  *(undefined1 *)((long)param_2 + 0xb2) = 0;
  *(undefined2 *)(param_2 + 0x16) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if ((*(char *)((long)param_2 + 0xb4) != '\0') && (*(char *)((long)param_2 + 0xb3) == '\0')) {
    return 0xffffffff;
  }
  FUN_00ab57b4(param_2);
  return (ulong)*(byte *)((long)param_2 + 0xb3);
}

