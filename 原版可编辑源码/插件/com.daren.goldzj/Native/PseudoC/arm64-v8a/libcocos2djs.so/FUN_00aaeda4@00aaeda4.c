
void FUN_00aaeda4(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      while( true ) {
        uVar2 = (ulong)*(byte *)(param_1 + 0x60) & 0x3f;
        __n = 0x40 - uVar2;
        if (param_3 - uVar3 <= __n) {
          __n = param_3 - uVar3;
        }
        memcpy((void *)(param_1 + 0x20 + uVar2),(void *)(param_2 + uVar3),__n);
        uVar1 = (int)__n + (uint)*(byte *)(param_1 + 0x60) & 0x3f;
        *(char *)(param_1 + 0x60) = (char)uVar1;
        *(size_t *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + __n * 8;
        if (uVar1 == 0) break;
        uVar3 = __n + uVar3;
        if (param_3 <= uVar3) {
          return;
        }
      }
      FUN_00aae74c(param_1);
      uVar3 = __n + uVar3;
    } while (uVar3 < param_3);
  }
  return;
}

