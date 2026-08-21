
undefined8 FUN_0109153c(undefined8 param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  char *__s1;
  long local_40 [2];
  
  iVar2 = FUN_01091edc();
  if (iVar2 != 0) {
    FUN_010916b0(param_2);
    lVar1 = param_2 + 0xf8;
    uVar3 = FT_Stream_OpenGzip(lVar1,param_1);
    if (((uVar3 & 0xff) == 7) ||
       ((uVar3 != 0 && (iVar2 = FT_Stream_OpenLZW(lVar1,param_1), iVar2 != 0)))) {
LAB_010915c0:
      FUN_010916b0(param_2);
      return 2;
    }
    *(undefined8 *)(param_2 + 0x148) = param_1;
    *(long *)(param_2 + 0xc0) = lVar1;
    iVar2 = FUN_01091edc(lVar1,param_2);
    if (iVar2 != 0) goto LAB_010915c0;
  }
  if (0 < param_3) {
    FUN_010916b0(param_2);
    return 6;
  }
  pbVar5 = *(byte **)(param_2 + 0x158);
  if ((((pbVar5 != (byte *)0x0) && (__s1 = *(char **)(param_2 + 0x150), __s1 != (char *)0x0)) &&
      ((*pbVar5 | 0x20) == 0x69)) && (((pbVar5[1] | 0x20) == 0x73 && ((pbVar5[2] | 0x20) == 0x6f))))
  {
    iVar2 = strcmp((char *)(pbVar5 + 3),"10646");
                    /* try { // try from 01091648 to 01191a17 has its CatchHandler @ 01091648
                       catch() { ... } // from try @ 01091648 with catch @ 01091648
                       catch() { ... } // from try @ 01091ac4 with catch @ 01091648
                       catch() { ... } // from try @ 01091db8 with catch @ 01091648
                       catch() { ... } // from try @ 01091e60 with catch @ 01091648 */
    if ((iVar2 == 0) ||
       ((iVar2 = strcmp((char *)(pbVar5 + 3),"8859"), iVar2 == 0 &&
        (iVar2 = strcmp(__s1,"1"), iVar2 == 0)))) {
      local_40[1] = 0x10003756e6963;
      goto LAB_0109166c;
    }
  }
  local_40[1] = 0;
LAB_0109166c:
  local_40[0] = param_2;
  uVar4 = FT_CMap_New(&DAT_0172ab58,0,local_40,0);
  return uVar4;
}

