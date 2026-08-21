
/* WARNING: Removing unreachable block (ram,0x00bf0e24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf0d78(int param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_a0 [160];
  
  if (DAT_01d3bc88 != (undefined1 *)0x0) {
    puVar1 = DAT_01d3bc88;
    do {
      while (*(int *)(puVar1 + 0x68) <= param_1) {
        if (param_1 <= *(int *)(puVar1 + 0x68)) {
          if ((((*(uint *)(puVar1 + 0x58) >> 0x13 & 1) != 0) || (auStack_a0 < puVar1)) ||
             (*(long *)(puVar1 + 8) != 0)) break;
          if (auStack_a0 <= puVar1) {
            return;
          }
        }
        puVar1 = *(undefined1 **)(puVar1 + 0x78);
        if (puVar1 == (undefined1 *)0x0) {
          return;
        }
      }
      puVar1 = *(undefined1 **)(puVar1 + 0x70);
    } while (puVar1 != (undefined1 *)0x0);
  }
  return;
}

