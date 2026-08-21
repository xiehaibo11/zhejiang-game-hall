
int ASN1_PRINTABLE_type(uchar *s,int max)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  if (s == (uchar *)0x0) {
    return 0x13;
  }
  uVar5 = (uint)*s;
  if (*s == 0) {
    bVar3 = false;
  }
  else {
    bVar2 = false;
    bVar3 = false;
    if (max < 1) {
      max = -1;
    }
    do {
      s = s + 1;
      if (max == 0) break;
      max = max + -1;
      if (((9 < (uVar5 - 0x30 & 0xff)) && (0x19 < ((uVar5 & 0xffffffdf) - 0x41 & 0xff))) &&
         ((0x3f < uVar5 || ((1L << ((ulong)uVar5 & 0x3f) & 0xa400fb8100000000U) == 0)))) {
        bVar3 = true;
      }
      cVar1 = (char)uVar5;
      uVar5 = (uint)*s;
      if (cVar1 < '\0') {
        bVar2 = true;
      }
    } while (uVar5 != 0);
    if (bVar2) {
      return 0x14;
    }
  }
  iVar4 = 0x13;
  if (bVar3) {
    iVar4 = 0x16;
  }
  return iVar4;
}

