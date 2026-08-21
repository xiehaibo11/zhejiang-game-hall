
uint FUN_010a1a28(long param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  char *local_38;
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  if (-1 < (long)uVar3) {
    uVar2 = (uint)uVar3;
    if (0xfffffffe < uVar3) {
      uVar2 = 0xffffffff;
    }
    if (uVar2 != 0) {
      uVar4 = 0;
      do {
        iVar1 = FUN_0109ef40(param_1,uVar4,&local_38);
        if ((iVar1 == 0) && (iVar1 = strcmp(param_2,local_38), iVar1 == 0)) {
          return uVar4;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
    }
  }
  return 0;
}

