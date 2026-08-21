
bool FUN_010900b4(undefined8 param_1,ulong param_2,int param_3)

{
  return *(long *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 7)) +
                  ((long)(param_3 << 3) | 7U)) != -0x8000000080001;
}

