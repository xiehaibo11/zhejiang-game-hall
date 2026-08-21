
/* WARNING: Removing unreachable block (ram,0x00becd48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv__count_bufs(undefined8 param_1,int param_2)

{
  uint uVar1;
  
  if ((param_2 != 0) && (1 < param_2 - 1U)) {
    uVar1 = 0;
    do {
      uVar1 = uVar1 + 1;
    } while (uVar1 < (param_2 - 3U >> 1) + 1);
  }
  return;
}

