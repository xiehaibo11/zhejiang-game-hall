
int FUN_00bfc748(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = -1;
  if ((*(char *)(param_2 + 10) == '\0') &&
     (uVar1 = FUN_00bfc240(param_1,param_2 + 0x20), uVar1 != 0xffffffff)) {
    lVar2 = *(long *)(param_2 + 0x20);
    lVar3 = *(long *)(lVar2 + -0x18);
    if ((*(uint *)(lVar2 + -0x5c) < uVar1) || (lVar3 == 0)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(lVar2 + -0x20);
      if (uVar1 == *(uint *)(lVar2 + -0x5c)) {
        return iVar4 + *(int *)(lVar2 + -0x1c);
      }
      if (uVar1 != 0) {
        uVar1 = uVar1 - 1;
        if (*(int *)(lVar2 + -0x1c) < 0x100) {
          return iVar4 + (uint)*(byte *)(lVar3 + (ulong)uVar1);
        }
        if (*(int *)(lVar2 + -0x1c) < 0x10000) {
          iVar4 = iVar4 + (uint)*(ushort *)(lVar3 + (ulong)uVar1 * 2);
        }
        else {
          iVar4 = iVar4 + *(int *)(lVar3 + (ulong)uVar1 * 4);
        }
      }
    }
  }
  return iVar4;
}

