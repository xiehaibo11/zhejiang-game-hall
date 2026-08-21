
undefined8
lws_parse_uri(byte *param_1,undefined8 *param_2,undefined8 *param_3,int *param_4,undefined8 *param_5
             )

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  char *__s1;
  
  *param_2 = param_1;
  pbVar4 = param_1;
  do {
    while (pbVar3 = pbVar4, *pbVar3 != 0x3a) {
      if (*pbVar3 == 0) {
        *param_2 = pbVar3;
        goto LAB_00aa1a14;
      }
      pbVar4 = pbVar3 + 1;
    }
    pbVar4 = pbVar3 + 1;
  } while ((*pbVar4 != 0x2f) || (pbVar3[2] != 0x2f));
  param_1 = pbVar3 + 3;
  *pbVar3 = 0;
LAB_00aa1a14:
  *param_3 = param_1;
  __s1 = (char *)*param_2;
  iVar2 = strcmp(__s1,"http");
  if ((iVar2 == 0) || (iVar2 = strcmp(__s1,"ws"), iVar2 == 0)) {
    *param_4 = 0x50;
    bVar1 = *param_1;
joined_r0x00aa1ac8:
    if (bVar1 != 0x5b) goto LAB_00aa1acc;
LAB_00aa1a78:
    *param_3 = param_1 + 1;
    pbVar4 = param_1;
    do {
      param_1 = pbVar4;
      pbVar4 = param_1 + 1;
      bVar1 = *param_1;
    } while ((bVar1 == 0) != (bVar1 != 0x5d));
    if (bVar1 == 0) goto LAB_00aa1b58;
    bVar1 = *pbVar4;
    *param_1 = 0;
    param_1 = pbVar4;
  }
  else {
    iVar2 = strcmp(__s1,"https");
    if ((iVar2 == 0) || (iVar2 = strcmp(__s1,"wss"), iVar2 == 0)) {
      *param_4 = 0x1bb;
      bVar1 = *param_1;
      goto joined_r0x00aa1ac8;
    }
    bVar1 = *param_1;
    if (bVar1 == 0x5b) goto LAB_00aa1a78;
LAB_00aa1acc:
    if (bVar1 < 0x3b) goto LAB_00aa1af4;
    do {
      do {
        param_1 = param_1 + 1;
        bVar1 = *param_1;
      } while (0x3a < bVar1);
LAB_00aa1af4:
    } while ((1L << ((ulong)bVar1 & 0x3f) & 0x400800000000001U) == 0);
  }
  if (bVar1 == 0x3a) {
    pbVar4 = param_1 + 1;
    *param_1 = 0;
    iVar2 = atoi((char *)pbVar4);
    *param_4 = iVar2;
    bVar1 = *pbVar4;
    param_1 = pbVar4;
    while ((bVar1 != 0 && (bVar1 != 0x2f))) {
      param_1 = param_1 + 1;
      bVar1 = *param_1;
    }
  }
LAB_00aa1b58:
  *param_5 = "/";
  if (*param_1 != 0) {
    *param_1 = 0;
    if (param_1[1] != 0) {
      *param_5 = param_1 + 1;
    }
  }
  return 0;
}

