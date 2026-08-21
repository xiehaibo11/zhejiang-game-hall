
ulong FUN_00c23ac0(ulong param_1,uint param_2,undefined4 param_3)

{
  switch(param_3) {
  case 0:
    return param_1 << (param_2 & 0x3f);
  case 1:
    return param_1 >> (param_2 & 0x3f);
  case 2:
    param_1 = (long)param_1 >> (param_2 & 0x3f);
    break;
  case 3:
    return param_1 >> (-param_2 & 0x3f) | param_1 << (param_2 & 0x3f);
  case 4:
    return param_1 << (-param_2 & 0x3f) | param_1 >> (param_2 & 0x3f);
  }
  return param_1;
}

