
/* std::__ndk1::ctype<char>::do_narrow(char const*, char const*, char, char*) const */

char * __thiscall
std::__ndk1::ctype<char>::do_narrow
          (ctype<char> *this,char *param_1,char *param_2,char param_3,char *param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte *pbVar12;
  byte *pbVar13;
  char *pcVar14;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  char *pcVar15;
  
  if (param_1 != param_2) {
    uVar16 = (long)param_2 - (long)param_1;
    pcVar15 = param_1;
    if ((0xf < uVar16) && ((param_2 <= param_4 || (param_4 + uVar16 <= param_1)))) {
      uVar17 = uVar16 & 0xfffffffffffffff0;
      pbVar12 = (byte *)param_1;
      pbVar13 = (byte *)param_4;
      uVar18 = uVar17;
      do {
        lVar3 = *(long *)(pbVar12 + 8);
        bVar19 = (byte)((ulong)lVar3 >> 8);
        bVar20 = (byte)((ulong)lVar3 >> 0x10);
        bVar21 = (byte)((ulong)lVar3 >> 0x18);
        bVar22 = (byte)((ulong)lVar3 >> 0x20);
        bVar23 = (byte)((ulong)lVar3 >> 0x28);
        bVar24 = (byte)((ulong)lVar3 >> 0x30);
        lVar2 = *(long *)pbVar12;
        bVar4 = *pbVar12;
        bVar5 = pbVar12[1];
        bVar6 = pbVar12[2];
        bVar7 = pbVar12[3];
        bVar8 = pbVar12[4];
        bVar9 = pbVar12[5];
        bVar10 = pbVar12[6];
        bVar11 = pbVar12[7];
        uVar18 = uVar18 - 0x10;
        pbVar13[8] = param_3 ^ (param_3 ^ pbVar12[8]) & -(-1 < (char)lVar3);
        pbVar13[9] = param_3 ^ (param_3 ^ bVar19) & -(-1 < (char)bVar19);
        pbVar13[10] = param_3 ^ (param_3 ^ bVar20) & -(-1 < (char)bVar20);
        pbVar13[0xb] = param_3 ^ (param_3 ^ bVar21) & -(-1 < (char)bVar21);
        pbVar13[0xc] = param_3 ^ (param_3 ^ bVar22) & -(-1 < (char)bVar22);
        pbVar13[0xd] = param_3 ^ (param_3 ^ bVar23) & -(-1 < (char)bVar23);
        pbVar13[0xe] = param_3 ^ (param_3 ^ bVar24) & -(-1 < (char)bVar24);
        pbVar13[0xf] = param_3 ^ (param_3 ^ (byte)((ulong)lVar3 >> 0x38)) & -(-1 < lVar3);
        *pbVar13 = param_3 ^ (param_3 ^ bVar4) & -(-1 < (char)lVar2);
        pbVar13[1] = param_3 ^ (param_3 ^ bVar5) & -(-1 < (char)((ulong)lVar2 >> 8));
        pbVar13[2] = param_3 ^ (param_3 ^ bVar6) & -(-1 < (char)((ulong)lVar2 >> 0x10));
        pbVar13[3] = param_3 ^ (param_3 ^ bVar7) & -(-1 < (char)((ulong)lVar2 >> 0x18));
        pbVar13[4] = param_3 ^ (param_3 ^ bVar8) & -(-1 < (char)((ulong)lVar2 >> 0x20));
        pbVar13[5] = param_3 ^ (param_3 ^ bVar9) & -(-1 < (char)((ulong)lVar2 >> 0x28));
        pbVar13[6] = param_3 ^ (param_3 ^ bVar10) & -(-1 < (char)((ulong)lVar2 >> 0x30));
        pbVar13[7] = param_3 ^ (param_3 ^ bVar11) & -(-1 < lVar2);
        pbVar12 = pbVar12 + 0x10;
        pbVar13 = pbVar13 + 0x10;
      } while (uVar18 != 0);
      param_4 = param_4 + uVar17;
      pcVar15 = param_1 + uVar17;
      if (uVar16 == uVar17) {
        return param_2;
      }
    }
    do {
      pcVar14 = pcVar15 + 1;
      cVar1 = *pcVar15;
      if (*pcVar15 < '\0') {
        cVar1 = param_3;
      }
      *param_4 = cVar1;
      param_1 = param_2;
      param_4 = param_4 + 1;
      pcVar15 = pcVar14;
    } while (param_2 != pcVar14);
  }
  return param_1;
}

