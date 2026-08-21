
void FUN_00c1bc28(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = (ulong)(*(uint *)(param_1 + 0x34) & *(uint *)(param_2 + 0xc)) * 0x18 +
          *(long *)(param_1 + 0x28);
  while (((int)((long)*(ulong *)(lVar1 + 8) >> 0x2f) != -5 ||
         (param_2 != (*(ulong *)(lVar1 + 8) & 0x7fffffffffff)))) {
    lVar1 = *(long *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      return;
    }
  }
  return;
}

