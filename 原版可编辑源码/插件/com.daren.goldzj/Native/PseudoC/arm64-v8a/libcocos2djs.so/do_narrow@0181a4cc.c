
/* std::__ndk1::ctype<wchar_t>::do_narrow(wchar_t const*, wchar_t const*, char, char*) const */

wchar_t * __thiscall
std::__ndk1::ctype<wchar_t>::do_narrow
          (ctype<wchar_t> *this,wchar_t *param_1,wchar_t *param_2,char param_3,char *param_4)

{
  ulong uVar1;
  ushort uVar2;
  wchar_t wVar3;
  wchar_t *pwVar4;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  wchar_t *pwVar5;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar1 = ((ulong)((long)param_2 + (-4 - (long)param_1)) >> 2) + 1;
  pwVar4 = param_1;
  if ((7 < uVar1) && ((param_1 + uVar1 <= param_4 || (param_4 + uVar1 <= param_1)))) {
    uVar6 = uVar1 & 0x7ffffffffffffff8;
    uVar2 = (ushort)(byte)param_3;
    pwVar4 = param_1 + 4;
    pcVar7 = param_4 + 4;
    param_4 = param_4 + uVar6;
    uVar8 = uVar6;
    do {
      uVar10 = *(undefined8 *)(pwVar4 + -2);
      uVar9 = *(undefined8 *)(pwVar4 + -4);
      uVar12 = *(undefined8 *)(pwVar4 + 2);
      uVar11 = *(undefined8 *)pwVar4;
      pwVar4 = pwVar4 + 8;
      uVar8 = uVar8 - 8;
      uVar13 = (ulong)CONCAT16(param_3,(uint6)CONCAT14(param_3,(uint)CONCAT12(param_3,uVar2))) ^
               ((ulong)CONCAT16(param_3,(uint6)CONCAT14(param_3,(uint)CONCAT12(param_3,uVar2))) ^
               CONCAT26((short)((ulong)uVar10 >> 0x20),
                        CONCAT24((short)uVar10,CONCAT22((short)((ulong)uVar9 >> 0x20),(short)uVar9))
                       )) &
               CONCAT26(-(ushort)((uint)((ulong)uVar10 >> 0x20) < 0x80),
                        CONCAT24(-(ushort)((uint)uVar10 < 0x80),
                                 CONCAT22(-(ushort)((uint)((ulong)uVar9 >> 0x20) < 0x80),
                                          -(ushort)((uint)uVar9 < 0x80))));
      uVar14 = (ulong)CONCAT16(param_3,(uint6)CONCAT14(param_3,(uint)CONCAT12(param_3,uVar2))) ^
               ((ulong)CONCAT16(param_3,(uint6)CONCAT14(param_3,(uint)CONCAT12(param_3,uVar2))) ^
               CONCAT26((short)((ulong)uVar12 >> 0x20),
                        CONCAT24((short)uVar12,
                                 CONCAT22((short)((ulong)uVar11 >> 0x20),(short)uVar11)))) &
               CONCAT26(-(ushort)((uint)((ulong)uVar12 >> 0x20) < 0x80),
                        CONCAT24(-(ushort)((uint)uVar12 < 0x80),
                                 CONCAT22(-(ushort)((uint)((ulong)uVar11 >> 0x20) < 0x80),
                                          -(ushort)((uint)uVar11 < 0x80))));
      *(ulong *)(pcVar7 + -4) =
           CONCAT44(CONCAT13((char)(uVar14 >> 0x30),
                             CONCAT12((char)(uVar14 >> 0x20),
                                      CONCAT11((char)(uVar14 >> 0x10),(char)uVar14))),
                    CONCAT13((char)(uVar13 >> 0x30),
                             CONCAT12((char)(uVar13 >> 0x20),
                                      CONCAT11((char)(uVar13 >> 0x10),(char)uVar13))));
      pcVar7 = pcVar7 + 8;
    } while (uVar8 != 0);
    pwVar4 = param_1 + uVar6;
    if (uVar1 == uVar6) goto LAB_0181a59c;
  }
  do {
    pwVar5 = pwVar4 + 1;
    wVar3 = *pwVar4;
    if (0x7f < (uint)wVar3) {
      wVar3 = (wchar_t)(byte)param_3;
    }
    *param_4 = (char)wVar3;
    param_4 = param_4 + 1;
    pwVar4 = pwVar5;
  } while (param_2 != pwVar5);
LAB_0181a59c:
  return param_1 + uVar1;
}

