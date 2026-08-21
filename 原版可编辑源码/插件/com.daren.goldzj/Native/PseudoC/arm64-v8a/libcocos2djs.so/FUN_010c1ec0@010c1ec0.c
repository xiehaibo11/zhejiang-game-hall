
ulong FUN_010c1ec0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  ulong param_5)

{
  if (((*(uint *)((param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0xb)) + 0x1b) >> 2 & 1)
       != 0) || (*(ulong *)(param_3 + 0x1f) <= param_5)) {
    param_5 = 0xffffffffffffffff;
  }
  return param_5;
}

