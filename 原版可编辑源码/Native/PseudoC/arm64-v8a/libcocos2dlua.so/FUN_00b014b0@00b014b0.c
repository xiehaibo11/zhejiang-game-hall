
undefined8
FUN_00b014b0(ulong *param_1,byte *param_2,uint param_3,undefined8 param_4,undefined8 param_5,
            long param_6)

{
  int line;
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (8 < (int)param_3) {
    line = 0x71;
    goto LAB_00b01554;
  }
  if ((param_3 == 0) || (-1 < (char)*param_2)) {
    uVar1 = 0;
    if ((int)param_3 < 1) goto LAB_00b01524;
LAB_00b014f4:
    uVar3 = 0;
    uVar2 = (ulong)param_3;
    do {
      uVar2 = uVar2 - 1;
      uVar3 = (ulong)(*param_2 ^ uVar1) & 0xff | uVar3 << 8;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  else {
    uVar1 = 0xffffffff;
    if (0 < (int)param_3) goto LAB_00b014f4;
LAB_00b01524:
    uVar3 = 0;
  }
  if ((uVar3 ^ (long)(int)uVar1) != *(ulong *)(param_6 + 0x28)) {
    *param_1 = uVar3 ^ (long)(int)uVar1;
    return 1;
  }
  line = 0x87;
LAB_00b01554:
  ERR_put_error(0xd,0xa6,0x80,"crypto/asn1/x_long.c",line);
  return 0;
}

