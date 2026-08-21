
/* WARNING: Type propagation algorithm not settling */

int i2c_ASN1_BIT_STRING(ASN1_BIT_STRING *a,uchar **pp)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uchar *__dest;
  
  if (a == (ASN1_BIT_STRING *)0x0) {
    return 0;
  }
  uVar4 = a->length;
  uVar5 = (ulong)uVar4;
  if ((int)uVar4 < 1) {
LAB_00b7a72c:
    uVar6 = 0;
    uVar4 = (uint)uVar5;
  }
  else {
    uVar6 = (uint)a->flags;
    if ((uVar6 >> 3 & 1) != 0) {
joined_r0x00b7a744:
      uVar6 = uVar6 & 7;
joined_r0x00b7a754:
      iVar2 = (int)uVar5;
      goto joined_r0x00b7a764;
    }
    lVar7 = (long)(int)uVar4 << 0x20;
    uVar3 = (long)(int)uVar4;
    do {
      uVar5 = uVar3;
      lVar7 = lVar7 + -0x100000000;
      if ((long)uVar5 < 1) break;
      uVar3 = uVar5 - 1;
    } while (a->data[uVar5 - 1] == '\0');
    bVar1 = a->data[lVar7 >> 0x20];
    if ((bVar1 & 1) != 0) goto LAB_00b7a72c;
    uVar4 = (uint)uVar5;
    if ((bVar1 >> 1 & 1) != 0) {
      uVar6 = 1;
      goto joined_r0x00b7a754;
    }
    if ((bVar1 >> 2 & 1) == 0) {
      if ((bVar1 >> 3 & 1) != 0) {
        uVar6 = 3;
        goto joined_r0x00b7a754;
      }
      if ((bVar1 >> 4 & 1) == 0) {
        if ((bVar1 >> 5 & 1) != 0) {
          uVar6 = 5;
          goto joined_r0x00b7a754;
        }
        if ((bVar1 >> 6 & 1) == 0) {
          uVar6 = -(uint)(bVar1 >> 7);
          goto joined_r0x00b7a744;
        }
        uVar6 = 6;
      }
      else {
        uVar6 = 4;
      }
    }
    else {
      uVar6 = 2;
    }
  }
  iVar2 = (int)uVar5;
joined_r0x00b7a764:
  if (pp != (uchar **)0x0) {
    __dest = *pp + 1;
    **pp = (uchar)uVar6;
    if (0 < iVar2) {
      memcpy(__dest,a->data,(long)iVar2);
      __dest = __dest + iVar2;
      __dest[-1] = (byte)(0xff << (ulong)uVar6) & __dest[-1];
    }
    *pp = __dest;
  }
  return uVar4 + 1;
}

