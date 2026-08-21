
/* unibrow::Utf8::ValidateEncoding(unsigned char const*, unsigned long) */

bool unibrow::Utf8::ValidateEncoding(uchar *param_1,ulong param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  
  if (param_2 != 0) {
    uVar2 = 0;
    bVar3 = 0xc;
    do {
      pbVar1 = param_1 + uVar2;
      uVar2 = uVar2 + 1;
      bVar3 = (&DAT_019ee458)[(ulong)(byte)(&DAT_019ee358)[*pbVar1] + (ulong)bVar3];
    } while (bVar3 != 0 && uVar2 < param_2);
    return bVar3 == 0xc;
  }
  return true;
}

