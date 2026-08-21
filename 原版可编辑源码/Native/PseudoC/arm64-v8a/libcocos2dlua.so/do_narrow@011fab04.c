
/* std::__ndk1::ctype<wchar_t>::do_narrow(wchar_t const*, wchar_t const*, char, char*) const */

wchar_t * __thiscall
std::__ndk1::ctype<wchar_t>::do_narrow
          (ctype<wchar_t> *this,wchar_t *param_1,wchar_t *param_2,char param_3,char *param_4)

{
  ulong uVar1;
  wchar_t *pwVar2;
  wchar_t wVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  wchar_t *pwVar3;
  
  if (param_1 != param_2) {
    uVar1 = ((ulong)((long)param_2 + (-4 - (long)param_1)) >> 2) + 1;
    pwVar2 = param_1;
    if ((7 < uVar1) && ((param_1 + uVar1 <= param_4 || (param_4 + uVar1 <= param_1)))) {
      uVar5 = uVar1 & 0x7ffffffffffffff8;
      pwVar2 = param_1 + 4;
      pcVar6 = param_4 + 4;
      uVar7 = uVar5;
      do {
        uVar9 = *(undefined8 *)(pwVar2 + -2);
        uVar8 = *(undefined8 *)(pwVar2 + -4);
        uVar11 = *(undefined8 *)(pwVar2 + 2);
        uVar10 = *(undefined8 *)pwVar2;
        pwVar2 = pwVar2 + 8;
        uVar7 = uVar7 - 8;
        bVar12 = -((uint)uVar8 < 0x80);
        bVar13 = -((uint)((ulong)uVar8 >> 0x20) < 0x80);
        bVar14 = -((uint)uVar9 < 0x80);
        bVar15 = -((uint)((ulong)uVar9 >> 0x20) < 0x80);
        bVar16 = -((uint)uVar10 < 0x80);
        bVar17 = -((uint)((ulong)uVar10 >> 0x20) < 0x80);
        bVar18 = -((uint)uVar11 < 0x80);
        bVar19 = -((uint)((ulong)uVar11 >> 0x20) < 0x80);
        *(ulong *)(pcVar6 + -4) =
             CONCAT44(CONCAT13((byte)((ulong)uVar11 >> 0x20) & bVar19 | param_3 & ~bVar19,
                               CONCAT12((byte)uVar11 & bVar18 | param_3 & ~bVar18,
                                        CONCAT11((byte)((ulong)uVar10 >> 0x20) & bVar17 |
                                                 param_3 & ~bVar17,
                                                 (byte)uVar10 & bVar16 | param_3 & ~bVar16))),
                      CONCAT13((byte)((ulong)uVar9 >> 0x20) & bVar15 | param_3 & ~bVar15,
                               CONCAT12((byte)uVar9 & bVar14 | param_3 & ~bVar14,
                                        CONCAT11((byte)((ulong)uVar8 >> 0x20) & bVar13 |
                                                 param_3 & ~bVar13,
                                                 (byte)uVar8 & bVar12 | param_3 & ~bVar12))));
        pcVar6 = pcVar6 + 8;
      } while (uVar7 != 0);
      pwVar2 = param_1 + uVar5;
      param_4 = param_4 + uVar5;
      if (uVar1 == uVar5) {
        return param_2;
      }
    }
    do {
      pwVar3 = pwVar2 + 1;
      wVar4 = *pwVar2;
      if (0x7f < (uint)wVar4) {
        wVar4 = (wchar_t)(byte)param_3;
      }
      *param_4 = (char)wVar4;
      pwVar2 = pwVar3;
      param_1 = param_2;
      param_4 = param_4 + 1;
    } while (param_2 != pwVar3);
  }
  return param_1;
}

