
int uv__nonblock_fcntl(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  do {
    uVar2 = fcntl(param_1,3);
    if (uVar2 != 0xffffffff) {
      if ((uint)(param_2 != 0) != ((uint)(((ulong)uVar2 ^ 0x800) >> 0xb) & 1)) {
        return 0;
      }
      uVar1 = uVar2 & 0xfffff7ff;
      if ((param_2 != 0) != 0) {
        uVar1 = uVar2 | 0x800;
      }
      goto LAB_00beddac;
    }
    piVar4 = (int *)__errno();
  } while (*piVar4 == 4);
  goto LAB_00beddcc;
  while (piVar4 = (int *)__errno(), *piVar4 == 4) {
LAB_00beddac:
    iVar3 = fcntl(param_1,4,(ulong)uVar1);
    if (iVar3 != -1) {
      if (iVar3 == 0) {
        return 0;
      }
      piVar4 = (int *)__errno();
      break;
    }
  }
LAB_00beddcc:
  return -*piVar4;
}

