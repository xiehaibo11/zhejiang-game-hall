
void ASN1_put_object(uchar **pp,int constructed,int length,int tag,int xclass)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  
  pbVar3 = *pp;
  bVar1 = (byte)xclass & 0xc0 | (constructed != 0) << 5;
  if (tag < 0x1f) {
    pbVar4 = pbVar3 + 1;
    *pbVar3 = bVar1 | (byte)tag & 0x1f;
  }
  else {
    *pbVar3 = bVar1 | 0x1f;
    uVar6 = (ulong)(uint)tag;
    lVar7 = 0;
    do {
      lVar5 = lVar7;
      uVar6 = uVar6 >> 7;
      lVar7 = lVar5 + 1;
    } while ((int)uVar6 != 0);
    if (-1 < (int)lVar7 + -1) {
      iVar8 = 0;
      do {
        bVar1 = (byte)tag & 0x7f;
        if (iVar8 != 0) {
          bVar1 = (byte)tag & 0x7f | 0x80;
        }
        pbVar3[lVar7] = bVar1;
        lVar7 = lVar7 + -1;
        tag = tag >> 7;
        iVar8 = iVar8 + 1;
      } while (0 < lVar7);
    }
    pbVar4 = pbVar3 + lVar5 + 2;
  }
  if (constructed == 2) {
    *pbVar4 = 0x80;
    *pp = pbVar4 + 1;
    return;
  }
  if (length < 0x80) {
    *pbVar4 = (byte)length;
    *pp = pbVar4 + 1;
    return;
  }
  lVar7 = 0;
  uVar6 = (ulong)(uint)length;
  do {
    lVar5 = lVar7;
    lVar7 = lVar5 + 1;
    uVar2 = uVar6 >> 8;
    uVar6 = uVar6 >> 8;
  } while ((int)uVar2 != 0);
  *pbVar4 = (byte)lVar7 | 0x80;
  if (-1 < (int)lVar7 + -1) {
    do {
      pbVar4[lVar7] = (byte)length;
      lVar7 = lVar7 + -1;
      length = length >> 8;
    } while (0 < lVar7);
  }
  *pp = pbVar4 + lVar5 + 2;
  return;
}

