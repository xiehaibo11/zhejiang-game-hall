
int UTF8_getc(uchar *str,int len,ulong *val)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  
  if (len < 1) {
    return 0;
  }
  bVar1 = *str;
  uVar2 = (uint)bVar1;
  if (-1 < (char)bVar1) {
    *val = (ulong)(uVar2 & 0x7f);
    return 1;
  }
  if ((bVar1 & 0xe0) == 0xc0) {
    if (len < 2) {
      return -1;
    }
    if ((str[1] & 0xc0) == 0x80) {
      uVar3 = (ulong)((uVar2 & 0x1f) << 6) | (ulong)str[1] & 0x3f;
      if (uVar3 < 0x80) {
        return -4;
      }
      *val = uVar3;
      return 2;
    }
    return -3;
  }
  if ((bVar1 & 0xf0) == 0xe0) {
    if (len < 3) {
      return -1;
    }
    if ((str[1] & 0xc0) != 0x80) {
      return -3;
    }
    if ((str[2] & 0xc0) != 0x80) {
      return -3;
    }
    uVar3 = (ulong)((uVar2 & 0xf) << 0xc) | ((ulong)str[1] & 0x3f) << 6 | (ulong)str[2] & 0x3f;
    if (uVar3 < 0x800) {
      return -4;
    }
    *val = uVar3;
    return 3;
  }
  if ((bVar1 & 0xf8) == 0xf0) {
    if (len < 4) {
      return -1;
    }
    if ((str[1] & 0xc0) != 0x80) {
      return -3;
    }
    if ((str[2] & 0xc0) != 0x80) {
      return -3;
    }
    if ((str[3] & 0xc0) == 0x80) {
      uVar3 = (ulong)((uVar2 & 7) << 0x12) | ((ulong)str[1] & 0x3f) << 0xc |
              ((ulong)str[2] & 0x3f) << 6 | (ulong)str[3] & 0x3f;
      if (uVar3 < 0x10000) {
        return -4;
      }
      *val = uVar3;
      return 4;
    }
    return -3;
  }
  if ((bVar1 & 0xfc) == 0xf8) {
    if (len < 5) {
      return -1;
    }
    if ((str[1] & 0xc0) != 0x80) {
      return -3;
    }
    if ((str[2] & 0xc0) != 0x80) {
      return -3;
    }
    if ((str[3] & 0xc0) == 0x80) {
      if ((str[4] & 0xc0) != 0x80) {
        return -3;
      }
      uVar3 = (ulong)((uVar2 & 3) << 0x18) | ((ulong)str[1] & 0x3f) << 0x12 |
              ((ulong)str[2] & 0x3f) << 0xc | ((ulong)str[3] & 0x3f) << 6 | (ulong)str[4] & 0x3f;
      if (uVar3 < 0x200000) {
        return -4;
      }
      *val = uVar3;
      return 5;
    }
    return -3;
  }
  if ((bVar1 & 0xfe) != 0xfc) {
    return -2;
  }
  if (len < 6) {
    return -1;
  }
  if ((str[1] & 0xc0) != 0x80) {
    return -3;
  }
  if ((str[2] & 0xc0) != 0x80) {
    return -3;
  }
  if ((str[3] & 0xc0) != 0x80) {
    return -3;
  }
  if ((str[4] & 0xc0) != 0x80) {
    return -3;
  }
  if ((str[5] & 0xc0) != 0x80) {
    return -3;
  }
  uVar3 = (ulong)((uVar2 & 1) << 0x1e) | ((ulong)str[1] & 0x3f) << 0x18;
  if (uVar3 >> 0x1a == 0) {
    return -4;
  }
  *val = uVar3 | ((ulong)str[2] & 0x3f) << 0x12 | ((ulong)str[3] & 0x3f) << 0xc |
         ((ulong)str[4] & 0x3f) << 6 | (ulong)str[5] & 0x3f;
  return 6;
}

