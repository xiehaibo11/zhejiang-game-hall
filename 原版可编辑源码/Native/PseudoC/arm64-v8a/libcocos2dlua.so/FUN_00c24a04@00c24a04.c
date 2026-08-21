
long FUN_00c24a04(undefined8 param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  
  iVar2 = strncmp(param_2,"GROUP",5);
  if (((iVar2 == 0) || (iVar2 = strncmp(param_2,"INPUT",5), iVar2 == 0)) &&
     (pbVar3 = (byte *)strchr(param_2,0x28), pbVar3 != (byte *)0x0)) {
    do {
      pbVar3 = pbVar3 + 1;
      bVar1 = *pbVar3;
    } while (bVar1 == 0x20);
    if (((bVar1 & 0xdf) == 0) || (pbVar4 = pbVar3, bVar1 == 0x29)) {
      lVar5 = 0;
    }
    else {
      do {
        pbVar4 = pbVar4 + 1;
        if ((*pbVar4 & 0xdf) == 0) break;
      } while (*pbVar4 != 0x29);
      lVar5 = (long)pbVar4 - (long)pbVar3;
    }
    lVar5 = FUN_00bfba1c(param_1,pbVar3,lVar5);
    lVar5 = lVar5 + 0x18;
  }
  else {
    lVar5 = 0;
  }
  return lVar5;
}

