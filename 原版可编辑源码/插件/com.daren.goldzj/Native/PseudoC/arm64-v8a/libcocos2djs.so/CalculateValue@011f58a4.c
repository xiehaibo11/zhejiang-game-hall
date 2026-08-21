
/* unibrow::Utf8::CalculateValue(unsigned char const*, unsigned long, unsigned long*) */

uint unibrow::Utf8::CalculateValue(uchar *param_1,ulong param_2,ulong *param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  byte bVar7;
  
  uVar6 = 0;
  pbVar3 = param_1;
  bVar7 = 0xc;
  do {
    pbVar5 = pbVar3;
    bVar2 = *pbVar5;
    uVar4 = (uint)bVar2;
    if ((bVar7 == 0xc) && (-1 < (char)bVar2)) goto LAB_011f5948;
    bVar1 = (&DAT_019ee458)[(ulong)(byte)(&DAT_019ee358)[bVar2] + (ulong)bVar7];
    uVar6 = 0x7fU >> (ulong)((byte)(&DAT_019ee358)[bVar2] >> 1 & 0x1f) & uVar4 | uVar6 << 6;
    if (bVar1 == 0xc) {
      uVar4 = uVar6;
      uVar6 = 0;
    }
    else {
      if (bVar1 == 0) {
        if (bVar7 == 0xc) {
          pbVar5 = pbVar5 + 1;
        }
        uVar4 = 0xfffd;
        goto LAB_011f594c;
      }
      uVar4 = 0xfffffffc;
    }
  } while ((pbVar5 + 1 < param_1 + param_2) &&
          (pbVar3 = pbVar5 + 1, bVar7 = bVar1, uVar4 == 0xfffffffc));
  if (bVar1 != 0xc) {
    uVar4 = 0xfffd;
  }
LAB_011f5948:
  pbVar5 = pbVar5 + 1;
LAB_011f594c:
  *param_3 = (ulong)(pbVar5 + (*param_3 - (long)param_1));
  return uVar4;
}

