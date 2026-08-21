
void lws_urlencode(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  bVar1 = *param_2;
  do {
    while( true ) {
      if ((bVar1 == 0) || (param_3 < 4)) {
        *param_1 = 0;
        return;
      }
      iVar2 = param_3 + -1;
      if (bVar1 != 0x20) break;
      pbVar3 = param_1 + 1;
      *param_1 = 0x2b;
      bVar1 = param_2[1];
joined_r0x01044820:
      param_2 = param_2 + 1;
      param_1 = pbVar3;
      param_3 = iVar2;
    }
    if ((0x19 < (byte)((bVar1 & 0xdf) + 0xbf)) && (9 < (byte)(bVar1 - 0x30))) {
      *param_1 = 0x25;
      iVar2 = param_3 + -3;
      param_1[1] = "0123456789ABCDEF"[*param_2 >> 4];
      param_1[2] = "0123456789ABCDEF"[(ulong)*param_2 & 0xf];
      pbVar3 = param_1 + 3;
      bVar1 = param_2[1];
      goto joined_r0x01044820;
    }
    *param_1 = bVar1;
    param_2 = param_2 + 1;
    bVar1 = *param_2;
    param_1 = param_1 + 1;
    param_3 = iVar2;
  } while( true );
}

