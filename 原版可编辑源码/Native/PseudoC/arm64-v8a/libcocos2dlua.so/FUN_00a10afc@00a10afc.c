
ulong FUN_00a10afc(long param_1,char *param_2,ulong param_3)

{
  uint uVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x44) & 3;
  if (uVar1 == 0) {
    return 0;
  }
  uVar4 = 1;
  if (uVar1 != 1) {
    uVar4 = 2;
  }
  if (param_3 < uVar4) {
    return 0xfffffffe;
  }
  pcVar2 = param_2;
  if (uVar1 != 1) {
                    /* try { // try from 00a10b44 to 00b10b4f has its CatchHandler @ 00a10fe4 */
    uVar1 = *(uint *)(param_1 + 0x44) & 0xfffffffc;
    if (uVar1 < 0x1a) {
      cVar3 = 'A';
    }
    else if (uVar1 < 0x34) {
      cVar3 = 'G';
    }
    else {
      if (0x3d < uVar1) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      cVar3 = -4;
    }
    pcVar2 = param_2 + 1;
    *param_2 = cVar3 + (char)uVar1;
  }
  *pcVar2 = '-';
  return (ulong)uVar4;
}

