
long FT_Angle_Diff(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_2 - param_1;
  if (param_2 - param_1 < -0xb3fffe) {
    lVar1 = -0xb3ffff;
  }
  uVar3 = (param_2 + ((ulong)((lVar1 + param_1 + 0x167ffff) - param_2) / 0x1680000) * 0x1680000) -
          param_1;
  uVar2 = uVar3;
  if (0xb3ffff < (long)uVar3) {
    uVar2 = 0xb40000;
  }
  return uVar3 + ((uVar3 + ~uVar2 + 0x1680000) / 0x1680000) * -0x1680000;
}

