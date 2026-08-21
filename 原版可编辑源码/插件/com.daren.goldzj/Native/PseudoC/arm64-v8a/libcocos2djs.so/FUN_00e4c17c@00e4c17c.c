
undefined8 FUN_00e4c17c(undefined8 param_1,long param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  char *__s1;
  long local_50 [2];
  
  iVar2 = FUN_00e4cb60(param_1,param_2,(long)(int)param_3);
  if (iVar2 != 0) {
    FUN_00e4c344(param_2);
    lVar1 = param_2 + 0xf8;
    uVar3 = FT_Stream_OpenGzip(lVar1,param_1);
    if (((uVar3 & 0xff) == 7) ||
       ((uVar3 != 0 && (iVar2 = FT_Stream_OpenLZW(lVar1,param_1), iVar2 != 0)))) {
LAB_00e4c210:
      FUN_00e4c344(param_2);
      return 2;
    }
    *(undefined8 *)(param_2 + 0x148) = param_1;
    *(long *)(param_2 + 0xc0) = lVar1;
    iVar2 = FUN_00e4cb60(lVar1,param_2,(long)(int)param_3);
    if (iVar2 != 0) goto LAB_00e4c210;
  }
  if ((int)param_3 < 0) {
    return 0;
  }
  if ((param_3 & 0xffff) != 0) {
    FUN_00e4c344(param_2);
    return 6;
  }
  pbVar5 = *(byte **)(param_2 + 0x158);
  if ((((pbVar5 == (byte *)0x0) || (__s1 = *(char **)(param_2 + 0x150), __s1 == (char *)0x0)) ||
      ((*pbVar5 | 0x20) != 0x69)) || (((pbVar5[1] | 0x20) != 0x73 || ((pbVar5[2] | 0x20) != 0x6f))))
  {
LAB_00e4c2d8:
    local_50[1] = 0;
  }
  else {
    pbVar5 = pbVar5 + 3;
    iVar2 = strcmp((char *)pbVar5,"10646");
    if ((iVar2 != 0) &&
       ((iVar2 = strcmp((char *)pbVar5,"8859"), iVar2 != 0 || (iVar2 = strcmp(__s1,"1"), iVar2 != 0)
        ))) {
      iVar2 = strcmp((char *)pbVar5,"646.1991");
      if (iVar2 != 0) goto LAB_00e4c2d8;
      iVar2 = strcmp(__s1,"IRV");
      local_50[1] = 0;
      if (iVar2 != 0) goto LAB_00e4c2dc;
    }
    local_50[1] = 0x10003756e6963;
  }
LAB_00e4c2dc:
  local_50[0] = param_2;
  uVar4 = FUN_00e17cf8(&DAT_01c95720,0,local_50,0);
  return uVar4;
}

