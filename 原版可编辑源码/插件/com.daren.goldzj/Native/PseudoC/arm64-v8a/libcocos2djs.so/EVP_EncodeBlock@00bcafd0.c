
int EVP_EncodeBlock(uchar *t,uchar *f,int n)

{
  byte *pbVar1;
  uchar *puVar2;
  uchar uVar3;
  uchar uVar4;
  ulong uVar5;
  byte *pbVar6;
  uchar uVar7;
  ulong uVar8;
  
  if (n < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    pbVar6 = f + 1;
    do {
      pbVar1 = pbVar6 + -1;
      puVar2 = t + uVar5;
      uVar8 = (ulong)*pbVar1 << 0x10;
      if (n < 3) {
        if (n == 2) {
          uVar8 = uVar8 | (ulong)*pbVar6 << 8;
        }
        uVar3 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [uVar8 >> 0xc & 0x3f];
        *puVar2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar8 >> 0x12];
        uVar7 = '=';
        t[uVar5 + 1] = uVar3;
        if (n != 1) {
          uVar7 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [uVar8 >> 6 & 0x3f];
        }
        t[uVar5 + 2] = uVar7;
        t[uVar5 + 3] = '=';
        t = t + uVar5 + 4;
        uVar5 = (ulong)((int)uVar5 + 4);
        goto LAB_00bcb0b4;
      }
      uVar3 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
              [(ulong)pbVar6[1] & 0x3f];
      uVar7 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
              [(ulong)(((uint)*pbVar6 << 8 | (uint)uVar8) >> 0xc) & 0x3f];
      uVar4 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
              [(ulong)(ushort)(CONCAT11(*pbVar6,pbVar6[1]) >> 6) & 0x3f];
      n = n + -3;
      uVar5 = uVar5 + 4;
      pbVar6 = pbVar6 + 3;
      *puVar2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*pbVar1 >> 2];
      puVar2[3] = uVar3;
      puVar2[1] = uVar7;
      puVar2[2] = uVar4;
    } while (n != 0);
    t = t + uVar5;
  }
LAB_00bcb0b4:
  *t = '\0';
  return (int)uVar5;
}

