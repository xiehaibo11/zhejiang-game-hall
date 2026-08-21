
int UTF8_putc(uchar *str,int len,ulong value)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)value;
  bVar1 = (byte)value;
  if (str == (uchar *)0x0) {
    len = 6;
  }
  else if (len < 1) {
    return -1;
  }
  if (0x7f < value) {
    if (value < 0x800) {
      iVar4 = 2;
      if (len < 2) {
        iVar4 = -1;
      }
      else if (str != (uchar *)0x0) {
        *str = (byte)(uVar3 >> 6) & 0x1f | 0xc0;
        str[1] = bVar1 & 0x3f | 0x80;
        return 2;
      }
    }
    else if (value >> 0x10 == 0) {
      iVar4 = 3;
      if (len < 3) {
        iVar4 = -1;
      }
      else if (str != (uchar *)0x0) {
        *str = (byte)(uVar3 >> 0xc) & 0xf | 0xe0;
        str[1] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
        str[2] = bVar1 & 0x3f | 0x80;
        return 3;
      }
    }
    else if (value >> 0x15 == 0) {
      iVar4 = 4;
      if (len < 4) {
        iVar4 = -1;
      }
      else if (str != (uchar *)0x0) {
        *str = (byte)(uVar3 >> 0x12) & 7 | 0xf0;
        str[1] = (byte)(uVar3 >> 0xc) & 0x3f | 0x80;
        str[2] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
        str[3] = bVar1 & 0x3f | 0x80;
        return 4;
      }
    }
    else {
      bVar2 = (byte)(value >> 0x18);
      if (value >> 0x1a == 0) {
        iVar4 = 5;
        if (len < 5) {
          iVar4 = -1;
        }
        else if (str != (uchar *)0x0) {
          *str = bVar2 & 3 | 0xf8;
          str[1] = (byte)(uVar3 >> 0x12) & 0x3f | 0x80;
          str[2] = (byte)(uVar3 >> 0xc) & 0x3f | 0x80;
          str[3] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
          str[4] = bVar1 & 0x3f | 0x80;
          return 5;
        }
      }
      else {
        iVar4 = 6;
        if (len < 6) {
          iVar4 = -1;
        }
        else if (str != (uchar *)0x0) {
          *str = bVar2 >> 6 & 1 | 0xfc;
          iVar4 = 6;
          str[1] = bVar2 & 0x3f | 0x80;
          str[2] = (byte)(uVar3 >> 0x12) & 0x3f | 0x80;
          str[3] = (byte)(uVar3 >> 0xc) & 0x3f | 0x80;
          str[4] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
          str[5] = bVar1 & 0x3f | 0x80;
        }
      }
    }
    return iVar4;
  }
  if (str == (uchar *)0x0) {
    return 1;
  }
  *str = bVar1;
  return 1;
}

