
undefined4 lws_urldecode(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  
  if ((param_3 != 0) && (bVar1 = *param_2, bVar1 != 0)) {
    iVar5 = 0;
    iVar3 = 0;
    pbVar6 = param_1;
    do {
      while (pbVar4 = param_2 + 1, param_1 = pbVar6, iVar3 != 0) {
        if (iVar3 == 1) {
          cVar2 = FUN_00aa59fc(bVar1);
          if (cVar2 < 0) {
            return 0xffffffff;
          }
          iVar5 = (int)cVar2 << 4;
          iVar3 = 2;
          param_2 = pbVar4;
        }
        else if (iVar3 == 2) {
          bVar1 = FUN_00aa59fc(bVar1);
          if ((char)bVar1 < '\0') {
            return 0xffffffff;
          }
          iVar3 = 0;
          *pbVar6 = bVar1 | (byte)iVar5;
          param_3 = param_3 + -1;
          param_2 = pbVar4;
          param_1 = pbVar6 + 1;
        }
joined_r0x00aa21bc:
        if ((param_3 == 0) || (bVar1 = *param_2, pbVar6 = param_1, bVar1 == 0)) goto LAB_00aa21dc;
      }
      if (bVar1 == 0x25) {
        bVar1 = *pbVar4;
        iVar3 = 1;
      }
      else {
        param_1 = pbVar6 + 1;
        if (bVar1 != 0x2b) {
          iVar3 = 0;
          *pbVar6 = bVar1;
          param_3 = param_3 + -1;
          param_2 = pbVar4;
          goto joined_r0x00aa21bc;
        }
        param_3 = param_3 + -1;
        *pbVar6 = 0x20;
        if (param_3 == 0) break;
        bVar1 = *pbVar4;
        iVar3 = 0;
      }
      param_2 = pbVar4;
      pbVar6 = param_1;
    } while (bVar1 != 0);
  }
LAB_00aa21dc:
  *param_1 = 0;
  return 0;
}

