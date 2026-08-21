
void lws_json_purify(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  
  if (param_2 != (byte *)0x0) {
    bVar2 = *param_2;
    pbVar1 = param_1;
    while (param_1 = pbVar1, bVar2 != 0) {
      while( true ) {
        if (param_3 < 7) {
          *pbVar1 = 0;
          return;
        }
        if (((bVar2 != 0x22) && (bVar2 != 0x5c)) && (0x1f < bVar2)) break;
        pbVar1[0] = 0x5c;
        pbVar1[1] = 0x75;
        pbVar1[2] = 0x30;
        pbVar1[3] = 0x30;
        param_1 = pbVar1 + 6;
        param_3 = param_3 + -6;
        pbVar1[4] = "0123456789ABCDEF"[*param_2 >> 4];
        pbVar1[5] = "0123456789ABCDEF"[(ulong)*param_2 & 0xf];
        param_2 = param_2 + 1;
        bVar2 = *param_2;
        pbVar1 = param_1;
        if (bVar2 == 0) goto LAB_00aa1fe4;
      }
      *pbVar1 = bVar2;
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
      pbVar1 = pbVar1 + 1;
      bVar2 = *param_2;
    }
  }
LAB_00aa1fe4:
  *param_1 = 0;
  return;
}

