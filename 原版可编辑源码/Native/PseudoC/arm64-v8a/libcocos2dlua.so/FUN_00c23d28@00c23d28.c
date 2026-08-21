
ulong FUN_00c23d28(ulong param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0x8000000000000000;
  }
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_1 / param_2;
  }
  return uVar1;
}

